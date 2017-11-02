#ifndef _CISCO_BRIDGE_COMMON_
#define _CISCO_BRIDGE_COMMON_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_bridge_common {

class MacLimitNotificationType : public virtual ydk::Identity
{
    public:
        MacLimitNotificationType();
        ~MacLimitNotificationType();


}; // MacLimitNotificationType

class NotifNone : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifNone();
        ~NotifNone();


}; // NotifNone

class NotifSnmpTrap : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifSnmpTrap();
        ~NotifSnmpTrap();


}; // NotifSnmpTrap

class NotifSyslog : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifSyslog();
        ~NotifSyslog();


}; // NotifSyslog

class NotifSyslogAndSnmpTrap : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifSyslogAndSnmpTrap();
        ~NotifSyslogAndSnmpTrap();


}; // NotifSyslogAndSnmpTrap

class EthTrafficClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unknown_unicast;

};

class MacAgingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactivity;
        static const ydk::Enum::YLeaf absolute;

};

class MacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf flood;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf shutdown;

};

class MacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

};


}
}

#endif /* _CISCO_BRIDGE_COMMON_ */

