
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_if_ethernet.hpp"

namespace ydk {
namespace openconfig_if_ethernet {

EthernetSpeedIdentity::EthernetSpeedIdentity()
     : Identity("openconfig-if-ethernet:ethernet-speed")
{
}

EthernetSpeedIdentity::~EthernetSpeedIdentity()
{
}

Speed_100GbIdentity::Speed_100GbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_100Gb")
{
}

Speed_100GbIdentity::~Speed_100GbIdentity()
{
}

Speed_25GbIdentity::Speed_25GbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_25Gb")
{
}

Speed_25GbIdentity::~Speed_25GbIdentity()
{
}

Speed_1GbIdentity::Speed_1GbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_1Gb")
{
}

Speed_1GbIdentity::~Speed_1GbIdentity()
{
}

Speed_10GbIdentity::Speed_10GbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_10Gb")
{
}

Speed_10GbIdentity::~Speed_10GbIdentity()
{
}

Speed_10MbIdentity::Speed_10MbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_10Mb")
{
}

Speed_10MbIdentity::~Speed_10MbIdentity()
{
}

Speed_40GbIdentity::Speed_40GbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_40Gb")
{
}

Speed_40GbIdentity::~Speed_40GbIdentity()
{
}

Speed_UnknownIdentity::Speed_UnknownIdentity()
     : Identity("openconfig-if-ethernet:SPEED_UNKNOWN")
{
}

Speed_UnknownIdentity::~Speed_UnknownIdentity()
{
}

Speed_50GbIdentity::Speed_50GbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_50Gb")
{
}

Speed_50GbIdentity::~Speed_50GbIdentity()
{
}

Speed_100MbIdentity::Speed_100MbIdentity()
     : Identity("openconfig-if-ethernet:SPEED_100Mb")
{
}

Speed_100MbIdentity::~Speed_100MbIdentity()
{
}


}
}

