#ifndef _CISCO_STORM_CONTROL_
#define _CISCO_STORM_CONTROL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_storm_control {

class StormControlAction : public virtual ydk::Identity
{
    public:
        StormControlAction();
        ~StormControlAction();


}; // StormControlAction

class ActionDrop : public cisco_ios_xe::cisco_storm_control::StormControlAction, virtual ydk::Identity
{
    public:
        ActionDrop();
        ~ActionDrop();


}; // ActionDrop

class ActionShutdown : public cisco_ios_xe::cisco_storm_control::StormControlAction, virtual ydk::Identity
{
    public:
        ActionShutdown();
        ~ActionShutdown();


}; // ActionShutdown

class ActionSnmpTrap : public cisco_ios_xe::cisco_storm_control::StormControlAction, virtual ydk::Identity
{
    public:
        ActionSnmpTrap();
        ~ActionSnmpTrap();


}; // ActionSnmpTrap


}
}

#endif /* _CISCO_STORM_CONTROL_ */

