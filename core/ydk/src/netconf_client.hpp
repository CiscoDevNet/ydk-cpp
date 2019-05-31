/// YANG Development Kit
// Copyright 2017 Cisco Systems. All rights reserved
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

#ifndef _YDK_NETCONF_CLIENT_H_
#define _YDK_NETCONF_CLIENT_H_

#include <string>
#include <vector>

namespace ydk
{

class NetconfClient
{
public:
    NetconfClient();
    virtual ~NetconfClient();

    virtual int connect() = 0;
    virtual std::string execute_payload(const std::string & payload) = 0;
    virtual std::vector<std::string> get_capabilities() = 0;
    virtual std::string get_hostname_port() = 0;
    virtual void perform_session_check(const std::string & message) = 0;
};


}

#endif /* _YDK_NETCONF_CLIENT_H_ */
