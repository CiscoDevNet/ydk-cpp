//////////////////////////////////////////////////////////////////
// @file ydk_gnmi.h
//
// YANG Development Kit
// Copyright 2018 Cisco Systems. All rights reserved
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

#ifndef _YDK_GNMI_H_
#define _YDK_GNMI_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <ydk/ydk.h>

typedef void* GnmiSession;
typedef void* GnmiServiceProvider;
typedef void* GnmiPath;
typedef void* GnmiPathElem;
typedef void* GnmiPathList;

ServiceProvider GnmiServiceProviderInit(YDKStatePtr state, Repository repo, const char * address, int port,
		                                const char * username, const char * password,
										const char * server_certificate, const char * private_key);
void GnmiServiceProviderFree(ServiceProvider);
RootSchemaWrapper GnmiServiceProviderGetRootSchemaNode(YDKStatePtr, ServiceProvider);
GnmiSession GnmiServiceProviderGetSession(YDKStatePtr, ServiceProvider);

const char * GnmiServiceGetCapabilities(YDKStatePtr state, ServiceProvider);
DataNode     GnmiServiceGetFromPath(YDKStatePtr state, ServiceProvider, GnmiPathList path, const char* operation);

GnmiSession GnmiSessionInit(YDKStatePtr state, Repository repo, const char * address, int port,
                            const char * username, const char * password,
                            const char * server_certificate, const char * private_key);
void GnmiSessionFree(GnmiSession session);
RootSchemaWrapper GnmiSessionGetRootSchemaNode(YDKStatePtr, GnmiSession);
DataNode GnmiSessionExecuteRpc(YDKStatePtr state, GnmiSession session, Rpc rpc);
void GnmiSessionExecuteSubscribeRpc(YDKStatePtr state, GnmiSession session, Rpc rpc);

boolean GnmiSessionSubscribeInProgress(YDKStatePtr state, GnmiSession session);
const char * GetLastSubscribeResponse(YDKStatePtr state, GnmiSession session, const char * previous_subscribe_response);

GnmiPath GnmiPathInit();
void GnmiPathFree(GnmiPath);
void GnmiPathAddOrigin(GnmiPath path, const char* origin);
GnmiPathElem GnmiPathAddElem(GnmiPath path, const char* name);
void GnmiPathAddElemKey(GnmiPathElem elem, const char* key_name, const char* key_value);
const char* GnmiPathToString(GnmiPath path);

GnmiPathList GnmiPathListInit();
void GnmiPathListAdd(GnmiPathList list, GnmiPath path);
void GnmiPathListFree(GnmiPathList list);

#ifdef __cplusplus
}
#endif

#endif /* _YDK_GNMI_H_ */
