
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_storm_control.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_storm_control {

StormControlAction::StormControlAction()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-storm-control", "cisco-storm-control", "cisco-storm-control:storm-control-action")
{

}

StormControlAction::~StormControlAction()
{
}

ActionDrop::ActionDrop()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-storm-control", "cisco-storm-control", "cisco-storm-control:action-drop")
{

}

ActionDrop::~ActionDrop()
{
}

ActionShutdown::ActionShutdown()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-storm-control", "cisco-storm-control", "cisco-storm-control:action-shutdown")
{

}

ActionShutdown::~ActionShutdown()
{
}

ActionSnmpTrap::ActionSnmpTrap()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-storm-control", "cisco-storm-control", "cisco-storm-control:action-snmp-trap")
{

}

ActionSnmpTrap::~ActionSnmpTrap()
{
}


}
}

