/// YANG Development Kit
// Copyright 2016 Cisco Systems. All rights reserved
//
////////////////////////////////////////////////////////////////
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
//////////////////////////////////////////////////////////////////


#include <iostream>
#include <sstream>
#include <stdio.h>

#include <libnetconf.h>
#include <libnetconf_ssh.h>
#include <boost/log/trivial.hpp>


#include "netconf_client.hpp"

using namespace std;
using namespace ydk;
typedef vector<string> StringVec;


namespace ydk
{

map<pair<string, string>, string> NetconfClient::password_lookup;

NetconfClient::NetconfClient(string  username, string  password,
		string  hostname, int port, int verbosity) :
		username(username), hostname(hostname), port(port)
{
	nc_verbosity((NC_VERB_LEVEL) verbosity);
	nc_callback_print(clb_print);
	nc_callback_sshauth_password(clb_set_password);
	nc_callback_ssh_host_authenticity_check(clb_ssh_host_authenticity_check);

	password_lookup.insert(make_pair(make_pair(username, hostname), password));
	session=NULL;
}


int NetconfClient::connect()
{
	session = nc_session_connect(hostname.c_str(), port, username.c_str(), NULL);
	perform_session_check("Could not connect to " + hostname);
	init_capabilities();
	return EXIT_SUCCESS;
}

std::string NetconfClient::get_hostname_port()
{
	ostringstream os;
	os<<hostname<<":"<<port;
	return os.str();
}

void NetconfClient::init_capabilities()
{
	struct nc_cpblts* capabilities_list;
	const char *cap;

	capabilities_list = nc_session_get_cpblts(session);
	nc_cpblts_iter_start(capabilities_list);

	while ((cap = nc_cpblts_iter_next(capabilities_list)) != NULL)
	{
		capabilities.push_back(cap);
	}
}

string NetconfClient::execute_payload(const string & payload)
{
	perform_session_check("Could not execute payload. Not connected to " + hostname);

	nc_reply *reply;
	nc_rpc *rpc = build_rpc_request(payload);

	NC_MSG_TYPE reply_type = nc_session_send_recv(session, rpc, &reply);
	string reply_payload = process_rpc_reply(reply_type, reply);

	nc_reply_free(reply);
	nc_rpc_free(rpc);

	return reply_payload;
}

NetconfClient::~NetconfClient()
{
	nc_session_free(session);
}

nc_rpc* NetconfClient::build_rpc_request(const string & payload)
{
	nc_rpc* rpc = nc_rpc_build(payload.c_str(), session);

	if (rpc == NULL)
	{
          BOOST_LOG_TRIVIAL(error) << "Could not build rpc payload:-" << payload ;
	      BOOST_THROW_EXCEPTION(YCPPClientError{"Could not build payload"});
	}
	else if(NC_RPC_UNKNOWN==nc_rpc_get_type(rpc))
	{
		nc_rpc_free(rpc);
        BOOST_LOG_TRIVIAL(error)<< "Rpc type is unknown";
		BOOST_THROW_EXCEPTION(YCPPClientError{"Could not build payload"});
	}
	return rpc;
}

string NetconfClient::process_rpc_reply(int reply_type, const nc_reply* reply)
{
	switch (reply_type)
	{
		case NC_MSG_REPLY:
			return nc_reply_dump(reply);

		default:
		case NC_MSG_NONE:
		case NC_MSG_UNKNOWN:
            BOOST_LOG_TRIVIAL(error) << "RPC error occurred";
			BOOST_THROW_EXCEPTION(YCPPClientError{"RPC error occured"});
	}
	return {};
}

StringVec NetconfClient::get_capabilities()
{
	return capabilities;
}

void NetconfClient::clb_print(NC_VERB_LEVEL level, const char* msg)
{
	switch (level)
	{
	case NC_VERB_ERROR:
         BOOST_LOG_TRIVIAL(error) << "libnetconf ERROR: " << msg;
		break;
	case NC_VERB_WARNING:
         BOOST_LOG_TRIVIAL(warning) << "libnetconf WARNING: " << msg;
		break;
	case NC_VERB_VERBOSE:
         BOOST_LOG_TRIVIAL(trace) << "libnetconf VERBOSE: " << msg;
		break;
	case NC_VERB_DEBUG:
		BOOST_LOG_TRIVIAL(debug) << "libnetconf DEBUG: " << msg;
		break;
	}
}

char* NetconfClient::clb_set_password(const char* user_name,
		const char* host_name)
{
	string password_string = password_lookup[make_pair(user_name, host_name)];
	char* password_buffer = (char*) malloc(
			sizeof(char) * (password_string.size() + 1));
	snprintf(password_buffer, password_string.size() + 1, "%s",
			password_string.c_str());

	return password_buffer;
}

int NetconfClient::clb_ssh_host_authenticity_check(const char *hostname,
		ssh_session session)
{
	return EXIT_SUCCESS;
}

void NetconfClient::perform_session_check(string message)
{
	if (session == NULL)
	{
        BOOST_LOG_TRIVIAL(error) << message;
		BOOST_THROW_EXCEPTION(YCPPClientError{message});
	}
}


}
