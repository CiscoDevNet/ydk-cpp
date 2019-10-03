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

class NotifSyslog : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifSyslog();
        ~NotifSyslog();


}; // NotifSyslog

class NotifSnmpTrap : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifSnmpTrap();
        ~NotifSnmpTrap();


}; // NotifSnmpTrap

class NotifNone : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifNone();
        ~NotifNone();


}; // NotifNone

class NotifSyslogAndSnmpTrap : public cisco_ios_xe::cisco_bridge_common::MacLimitNotificationType, virtual ydk::Identity
{
    public:
        NotifSyslogAndSnmpTrap();
        ~NotifSyslogAndSnmpTrap();


}; // NotifSyslogAndSnmpTrap

class MacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf flood;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "flood") return 1;
            if (name == "drop") return 2;
            if (name == "shutdown") return 3;
            return -1;
        }
};

class EthTrafficClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unknown_unicast;

        static int get_enum_value(const std::string & name) {
            if (name == "broadcast") return 0;
            if (name == "multicast") return 1;
            if (name == "unknown-unicast") return 2;
            return -1;
        }
};

class MacAgingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactivity;
        static const ydk::Enum::YLeaf absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "inactivity") return 0;
            if (name == "absolute") return 1;
            return -1;
        }
};

class MacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "restrict") return 1;
            if (name == "shutdown") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_BRIDGE_COMMON_ */

