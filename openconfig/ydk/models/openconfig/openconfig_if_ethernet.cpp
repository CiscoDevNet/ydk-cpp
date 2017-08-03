
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_if_ethernet.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_if_ethernet {

Ethernet_Speed::Ethernet_Speed()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:ETHERNET_SPEED")
{
}

Ethernet_Speed::~Ethernet_Speed()
{
}

Speed_50Gb::Speed_50Gb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_50GB")
{
}

Speed_50Gb::~Speed_50Gb()
{
}

Speed_25Gb::Speed_25Gb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_25GB")
{
}

Speed_25Gb::~Speed_25Gb()
{
}

Speed_100Mb::Speed_100Mb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_100MB")
{
}

Speed_100Mb::~Speed_100Mb()
{
}

Speed_Unknown::Speed_Unknown()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_UNKNOWN")
{
}

Speed_Unknown::~Speed_Unknown()
{
}

Speed_10Gb::Speed_10Gb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_10GB")
{
}

Speed_10Gb::~Speed_10Gb()
{
}

Speed_1Gb::Speed_1Gb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_1GB")
{
}

Speed_1Gb::~Speed_1Gb()
{
}

Speed_40Gb::Speed_40Gb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_40GB")
{
}

Speed_40Gb::~Speed_40Gb()
{
}

Speed_10Mb::Speed_10Mb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_10MB")
{
}

Speed_10Mb::~Speed_10Mb()
{
}

Speed_100Gb::Speed_100Gb()
     : Identity("http://openconfig.net/yang/interfaces/ethernet", "openconfig-if-ethernet", "openconfig-if-ethernet:SPEED_100GB")
{
}

Speed_100Gb::~Speed_100Gb()
{
}


}
}

