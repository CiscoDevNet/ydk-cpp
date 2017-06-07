
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_storm_control.hpp"

namespace ydk {
namespace cisco_storm_control {

StormControlActionIdentity::StormControlActionIdentity()
     : Identity("cisco-storm-control:storm-control-action")
{
}

StormControlActionIdentity::~StormControlActionIdentity()
{
}

ActionShutdownIdentity::ActionShutdownIdentity()
     : Identity("cisco-storm-control:action-shutdown")
{
}

ActionShutdownIdentity::~ActionShutdownIdentity()
{
}

ActionSnmpTrapIdentity::ActionSnmpTrapIdentity()
     : Identity("cisco-storm-control:action-snmp-trap")
{
}

ActionSnmpTrapIdentity::~ActionSnmpTrapIdentity()
{
}

ActionDropIdentity::ActionDropIdentity()
     : Identity("cisco-storm-control:action-drop")
{
}

ActionDropIdentity::~ActionDropIdentity()
{
}


}
}

