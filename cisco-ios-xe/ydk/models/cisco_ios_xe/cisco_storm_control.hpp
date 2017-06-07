#ifndef _CISCO_STORM_CONTROL_
#define _CISCO_STORM_CONTROL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_storm_control {

class StormControlActionIdentity : public virtual Identity
{
    public:
        StormControlActionIdentity();
        ~StormControlActionIdentity();


}; // StormControlActionIdentity

class ActionShutdownIdentity : public cisco_storm_control::StormControlActionIdentity, virtual Identity
{
    public:
        ActionShutdownIdentity();
        ~ActionShutdownIdentity();


}; // ActionShutdownIdentity

class ActionSnmpTrapIdentity : public cisco_storm_control::StormControlActionIdentity, virtual Identity
{
    public:
        ActionSnmpTrapIdentity();
        ~ActionSnmpTrapIdentity();


}; // ActionSnmpTrapIdentity

class ActionDropIdentity : public cisco_storm_control::StormControlActionIdentity, virtual Identity
{
    public:
        ActionDropIdentity();
        ~ActionDropIdentity();


}; // ActionDropIdentity


}
}

#endif /* _CISCO_STORM_CONTROL_ */

