
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_aft_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_aft_types {

AFTADDRESSFAMILY::AFTADDRESSFAMILY()
     : Identity("http://openconfig.net/yang/fib-types", "openconfig-aft-types", "openconfig-aft-types:AFT_ADDRESS_FAMILY")
{

}

AFTADDRESSFAMILY::~AFTADDRESSFAMILY()
{
}

IPV4UNICAST::IPV4UNICAST()
     : Identity("http://openconfig.net/yang/fib-types", "openconfig-aft-types", "openconfig-aft-types:IPV4_UNICAST")
{

}

IPV4UNICAST::~IPV4UNICAST()
{
}

IPV6UNICAST::IPV6UNICAST()
     : Identity("http://openconfig.net/yang/fib-types", "openconfig-aft-types", "openconfig-aft-types:IPV6_UNICAST")
{

}

IPV6UNICAST::~IPV6UNICAST()
{
}

MPLS::MPLS()
     : Identity("http://openconfig.net/yang/fib-types", "openconfig-aft-types", "openconfig-aft-types:MPLS")
{

}

MPLS::~MPLS()
{
}

L2ETHERNET::L2ETHERNET()
     : Identity("http://openconfig.net/yang/fib-types", "openconfig-aft-types", "openconfig-aft-types:L2_ETHERNET")
{

}

L2ETHERNET::~L2ETHERNET()
{
}

const Enum::YLeaf EncapsulationHeaderType::GRE {0, "GRE"};
const Enum::YLeaf EncapsulationHeaderType::IPV4 {1, "IPV4"};
const Enum::YLeaf EncapsulationHeaderType::IPV6 {2, "IPV6"};
const Enum::YLeaf EncapsulationHeaderType::MPLS {3, "MPLS"};


}
}

