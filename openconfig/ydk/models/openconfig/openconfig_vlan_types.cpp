
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_vlan_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_vlan_types {

TPIDTYPES::TPIDTYPES()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_TYPES")
{

}

TPIDTYPES::~TPIDTYPES()
{
}

TPID0X9200::TPID0X9200()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0X9200")
{

}

TPID0X9200::~TPID0X9200()
{
}

TPID0x8A88::TPID0x8A88()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0x8A88")
{

}

TPID0x8A88::~TPID0x8A88()
{
}

TPID0x8100::TPID0x8100()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0x8100")
{

}

TPID0x8100::~TPID0x8100()
{
}

TPID0x9100::TPID0x9100()
     : Identity("http://openconfig.net/yang/vlan-types", "openconfig-vlan-types", "openconfig-vlan-types:TPID_0x9100")
{

}

TPID0x9100::~TPID0x9100()
{
}

const Enum::YLeaf VlanModeType::ACCESS {0, "ACCESS"};
const Enum::YLeaf VlanModeType::TRUNK {1, "TRUNK"};


}
}

