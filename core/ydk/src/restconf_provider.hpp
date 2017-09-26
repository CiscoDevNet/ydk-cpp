/*  ----------------------------------------------------------------
 Copyright 2016 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/

#ifndef _RESTCONF_PROVIDER_H_
#define _RESTCONF_PROVIDER_H_

#include <map>
#include <memory>
#include <string>

#include "path_api.hpp"
#include "service_provider.hpp"

namespace ydk {


class RestconfServiceProvider : public ServiceProvider {
public:
        RestconfServiceProvider(path::Repository & repo,
                               const std::string & address,
                               const std::string & username,
                               const std::string & password,
                               int port = 80,
                               EncodingFormat encoding = EncodingFormat::JSON,
                               const std::string & config_url_root = "/data",
                               const std::string & state_url_root = "/data");

        RestconfServiceProvider(std::unique_ptr<RestconfClient> client,
                                const std::shared_ptr<ydk::path::RootSchemaNode>& root_schema,
                                const std::string & edit_method,
                                const std::string & config_url_root,
                                const std::string & state_url_root,
                                EncodingFormat encoding);

        ~RestconfServiceProvider();

        EncodingFormat get_encoding() const;
        const path::Session& get_session() const;

private:
        EncodingFormat encoding;
        const path::RestconfSession session;
};
}

#endif /*_RESTCONF_PROVIDER_H_*/
