#include "generated_entity_lookup.hpp"
#include <ydk/entity_lookup.hpp>
#include <ydk/path_api.hpp>

namespace cisco_nx_os
{

void cisco_nx_os_augment_lookup_tables()
{

    ydk::ydk_global_capabilities_lookup_tables.clear();
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-NX-OS-device"), ydk::path::Capability{std::string{"Cisco-NX-OS-device"}, "2018-07-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/cisco-nx-os-device"), ydk::path::Capability{std::string{"Cisco-NX-OS-device"}, "2018-07-17", {}, {}}));

}


std::map<std::pair<std::string, std::string>, std::string> cisco_nx_os_namespace_identity_lookup {
    { {"inactive", "http://cisco.com/ns/yang/cisco-nx-os-device"},  "Cisco-NX-OS-device"},
};

}

