
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_vlan_types.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace openconfig_vlan_types {

Tpid_Types::Tpid_Types()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_TYPES")
{
}

Tpid_Types::~Tpid_Types()
{
}

Tpid_0X9200::Tpid_0X9200()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0X9200")
{
}

Tpid_0X9200::~Tpid_0X9200()
{
}

Tpid_0X8A88::Tpid_0X8A88()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0x8A88")
{
}

Tpid_0X8A88::~Tpid_0X8A88()
{
}

Tpid_0X8100::Tpid_0X8100()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0x8100")
{
}

Tpid_0X8100::~Tpid_0X8100()
{
}

Tpid_0X9100::Tpid_0X9100()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0x9100")
{
}

Tpid_0X9100::~Tpid_0X9100()
{
}

const Enum::YLeaf VlanModeType::ACCESS {0, "ACCESS"};
const Enum::YLeaf VlanModeType::TRUNK {1, "TRUNK"};


}
}

