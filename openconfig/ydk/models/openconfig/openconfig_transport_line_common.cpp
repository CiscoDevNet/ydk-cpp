
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_transport_line_common.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_transport_line_common {

OPTICALLINEPORTTYPE::OPTICALLINEPORTTYPE()
     : Identity("http://openconfig.net/yang/transport-line-common", "openconfig-transport-line-common", "openconfig-transport-line-common:OPTICAL_LINE_PORT_TYPE")
{

}

OPTICALLINEPORTTYPE::~OPTICALLINEPORTTYPE()
{
}

INGRESS::INGRESS()
     : Identity("http://openconfig.net/yang/transport-line-common", "openconfig-transport-line-common", "openconfig-transport-line-common:INGRESS")
{

}

INGRESS::~INGRESS()
{
}

MONITOR::MONITOR()
     : Identity("http://openconfig.net/yang/transport-line-common", "openconfig-transport-line-common", "openconfig-transport-line-common:MONITOR")
{

}

MONITOR::~MONITOR()
{
}

DROP::DROP()
     : Identity("http://openconfig.net/yang/transport-line-common", "openconfig-transport-line-common", "openconfig-transport-line-common:DROP")
{

}

DROP::~DROP()
{
}

ADD::ADD()
     : Identity("http://openconfig.net/yang/transport-line-common", "openconfig-transport-line-common", "openconfig-transport-line-common:ADD")
{

}

ADD::~ADD()
{
}

EGRESS::EGRESS()
     : Identity("http://openconfig.net/yang/transport-line-common", "openconfig-transport-line-common", "openconfig-transport-line-common:EGRESS")
{

}

EGRESS::~EGRESS()
{
}


}
}

