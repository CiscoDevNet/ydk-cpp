
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_lldp_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_lldp_types {

LLDPTLV::LLDPTLV()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:LLDP_TLV")
{

}

LLDPTLV::~LLDPTLV()
{
}

LLDPSYSTEMCAPABILITY::LLDPSYSTEMCAPABILITY()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:LLDP_SYSTEM_CAPABILITY")
{

}

LLDPSYSTEMCAPABILITY::~LLDPSYSTEMCAPABILITY()
{
}

SYSTEMNAME::SYSTEMNAME()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:SYSTEM_NAME")
{

}

SYSTEMNAME::~SYSTEMNAME()
{
}

MACBRIDGE::MACBRIDGE()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:MAC_BRIDGE")
{

}

MACBRIDGE::~MACBRIDGE()
{
}

PORTDESCRIPTION::PORTDESCRIPTION()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:PORT_DESCRIPTION")
{

}

PORTDESCRIPTION::~PORTDESCRIPTION()
{
}

DOCSISCABLEDEVICE::DOCSISCABLEDEVICE()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:DOCSIS_CABLE_DEVICE")
{

}

DOCSISCABLEDEVICE::~DOCSISCABLEDEVICE()
{
}

REPEATER::REPEATER()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:REPEATER")
{

}

REPEATER::~REPEATER()
{
}

SYSTEMDESCRIPTION::SYSTEMDESCRIPTION()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:SYSTEM_DESCRIPTION")
{

}

SYSTEMDESCRIPTION::~SYSTEMDESCRIPTION()
{
}

CVLAN::CVLAN()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:C_VLAN")
{

}

CVLAN::~CVLAN()
{
}

TWOPORTMACRELAY::TWOPORTMACRELAY()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:TWO_PORT_MAC_RELAY")
{

}

TWOPORTMACRELAY::~TWOPORTMACRELAY()
{
}

SVLAN::SVLAN()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:S_VLAN")
{

}

SVLAN::~SVLAN()
{
}

TELEPHONE::TELEPHONE()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:TELEPHONE")
{

}

TELEPHONE::~TELEPHONE()
{
}

CHASSISID::CHASSISID()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:CHASSIS_ID")
{

}

CHASSISID::~CHASSISID()
{
}

OTHER::OTHER()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:OTHER")
{

}

OTHER::~OTHER()
{
}

SYSTEMCAPABILITIES::SYSTEMCAPABILITIES()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:SYSTEM_CAPABILITIES")
{

}

SYSTEMCAPABILITIES::~SYSTEMCAPABILITIES()
{
}

MANAGEMENTADDRESS::MANAGEMENTADDRESS()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:MANAGEMENT_ADDRESS")
{

}

MANAGEMENTADDRESS::~MANAGEMENTADDRESS()
{
}

ROUTER::ROUTER()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:ROUTER")
{

}

ROUTER::~ROUTER()
{
}

PORTID::PORTID()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:PORT_ID")
{

}

PORTID::~PORTID()
{
}

STATIONONLY::STATIONONLY()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:STATION_ONLY")
{

}

STATIONONLY::~STATIONONLY()
{
}

WLANACCESSPOINT::WLANACCESSPOINT()
     : Identity("http://openconfig.net/yang/lldp/types", "openconfig-lldp-types", "openconfig-lldp-types:WLAN_ACCESS_POINT")
{

}

WLANACCESSPOINT::~WLANACCESSPOINT()
{
}

const Enum::YLeaf ChassisIdType::CHASSIS_COMPONENT {0, "CHASSIS_COMPONENT"};
const Enum::YLeaf ChassisIdType::INTERFACE_ALIAS {1, "INTERFACE_ALIAS"};
const Enum::YLeaf ChassisIdType::PORT_COMPONENT {2, "PORT_COMPONENT"};
const Enum::YLeaf ChassisIdType::MAC_ADDRESS {3, "MAC_ADDRESS"};
const Enum::YLeaf ChassisIdType::NETWORK_ADDRESS {4, "NETWORK_ADDRESS"};
const Enum::YLeaf ChassisIdType::INTERFACE_NAME {5, "INTERFACE_NAME"};
const Enum::YLeaf ChassisIdType::LOCAL {6, "LOCAL"};

const Enum::YLeaf PortIdType::INTERFACE_ALIAS {0, "INTERFACE_ALIAS"};
const Enum::YLeaf PortIdType::PORT_COMPONENT {1, "PORT_COMPONENT"};
const Enum::YLeaf PortIdType::MAC_ADDRESS {2, "MAC_ADDRESS"};
const Enum::YLeaf PortIdType::NETWORK_ADDRESS {3, "NETWORK_ADDRESS"};
const Enum::YLeaf PortIdType::INTERFACE_NAME {4, "INTERFACE_NAME"};
const Enum::YLeaf PortIdType::AGENT_CIRCUIT_ID {5, "AGENT_CIRCUIT_ID"};
const Enum::YLeaf PortIdType::LOCAL {6, "LOCAL"};


}
}

