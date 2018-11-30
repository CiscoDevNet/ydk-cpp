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

#ifndef _GNMI_PROVIDER_H_
#define _GNMI_PROVIDER_H_

#include <fstream>

#include <ydk/service_provider.hpp>

#include "gnmi_client.hpp"
#include "gnmi_path_api.hpp"

namespace ydk 
{
    class gNMIClient;

    class gNMIServiceProvider : public ServiceProvider 
    {
      public:
        gNMIServiceProvider(path::Repository & repo,
                   const std::string& address, int port,
                   const std::string& username,
                   const std::string& password,
                   const std::string & server_certificate="",
                   const std::string & private_key="");

        ~gNMIServiceProvider();

        EncodingFormat get_encoding() const;
        const path::Session& get_session() const;
        std::vector<std::string> get_capabilities() const;

        inline const std::string get_provider_type() const {
            return "gNMIServiceProvider";
        }

        std::shared_ptr<Entity> execute_operation(const std::string & operation, Entity & entity, std::map<std::string,std::string> params);
        std::vector<std::shared_ptr<Entity>> execute_operation(const std::string & operation, std::vector<Entity*> entity_list, std::map<std::string,std::string> params);

      private:
        const path::gNMISession session;
    };
}
#endif 
/*_GNMI_PROVIDER_H_*/
