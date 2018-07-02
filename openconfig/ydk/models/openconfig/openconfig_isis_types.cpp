
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_isis_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_isis_types {

OVERLOADRESETTRIGGERTYPE::OVERLOADRESETTRIGGERTYPE()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:OVERLOAD_RESET_TRIGGER_TYPE")
{

}

OVERLOADRESETTRIGGERTYPE::~OVERLOADRESETTRIGGERTYPE()
{
}

SAFITYPE::SAFITYPE()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:SAFI_TYPE")
{

}

SAFITYPE::~SAFITYPE()
{
}

MTTYPE::MTTYPE()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:MT_TYPE")
{

}

MTTYPE::~MTTYPE()
{
}

AFISAFITYPE::AFISAFITYPE()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:AFI_SAFI_TYPE")
{

}

AFISAFITYPE::~AFISAFITYPE()
{
}

AFITYPE::AFITYPE()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:AFI_TYPE")
{

}

AFITYPE::~AFITYPE()
{
}

WAITFORSYSTEM::WAITFORSYSTEM()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:WAIT_FOR_SYSTEM")
{

}

WAITFORSYSTEM::~WAITFORSYSTEM()
{
}

IPV6UNICAST::IPV6UNICAST()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:IPV6_UNICAST")
{

}

IPV6UNICAST::~IPV6UNICAST()
{
}

UNICAST::UNICAST()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:UNICAST")
{

}

UNICAST::~UNICAST()
{
}

MULTICAST::MULTICAST()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:MULTICAST")
{

}

MULTICAST::~MULTICAST()
{
}

IPV4::IPV4()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:IPV4")
{

}

IPV4::~IPV4()
{
}

IPV6::IPV6()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:IPV6")
{

}

IPV6::~IPV6()
{
}

IPV4MULTICAST::IPV4MULTICAST()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:IPV4_MULTICAST")
{

}

IPV4MULTICAST::~IPV4MULTICAST()
{
}

WAITFORBGP::WAITFORBGP()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:WAIT_FOR_BGP")
{

}

WAITFORBGP::~WAITFORBGP()
{
}

IPV6MULTICAST::IPV6MULTICAST()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:IPV6_MULTICAST")
{

}

IPV6MULTICAST::~IPV6MULTICAST()
{
}

IPV4UNICAST::IPV4UNICAST()
     : Identity("http://openconfig.net/yang/isis-types", "openconfig-isis-types", "openconfig-isis-types:IPV4_UNICAST")
{

}

IPV4UNICAST::~IPV4UNICAST()
{
}

const Enum::YLeaf IsisInterfaceAdjState::UP {0, "UP"};
const Enum::YLeaf IsisInterfaceAdjState::DOWN {1, "DOWN"};
const Enum::YLeaf IsisInterfaceAdjState::INIT {2, "INIT"};
const Enum::YLeaf IsisInterfaceAdjState::FAILED {3, "FAILED"};

const Enum::YLeaf LevelType::LEVEL_1 {0, "LEVEL_1"};
const Enum::YLeaf LevelType::LEVEL_2 {1, "LEVEL_2"};
const Enum::YLeaf LevelType::LEVEL_1_2 {2, "LEVEL_1_2"};

const Enum::YLeaf MetricType::INTERNAL {0, "INTERNAL"};
const Enum::YLeaf MetricType::EXTERNAL {1, "EXTERNAL"};

const Enum::YLeaf HelloPaddingType::STRICT {0, "STRICT"};
const Enum::YLeaf HelloPaddingType::LOOSE {1, "LOOSE"};
const Enum::YLeaf HelloPaddingType::ADAPTIVE {2, "ADAPTIVE"};
const Enum::YLeaf HelloPaddingType::DISABLE {3, "DISABLE"};

const Enum::YLeaf AdaptiveTimerType::LINEAR {0, "LINEAR"};
const Enum::YLeaf AdaptiveTimerType::EXPONENTIAL {1, "EXPONENTIAL"};

const Enum::YLeaf CircuitType::POINT_TO_POINT {0, "POINT_TO_POINT"};
const Enum::YLeaf CircuitType::BROADCAST {1, "BROADCAST"};

const Enum::YLeaf MetricStyle::NARROW_METRIC {0, "NARROW_METRIC"};
const Enum::YLeaf MetricStyle::WIDE_METRIC {1, "WIDE_METRIC"};


}
}

