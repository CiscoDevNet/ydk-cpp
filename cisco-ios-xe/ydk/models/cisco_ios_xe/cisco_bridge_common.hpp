#ifndef _CISCO_BRIDGE_COMMON_
#define _CISCO_BRIDGE_COMMON_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_bridge_common {

class MacLimitNotificationTypeIdentity : public virtual Identity
{
    public:
        MacLimitNotificationTypeIdentity();
        ~MacLimitNotificationTypeIdentity();


}; // MacLimitNotificationTypeIdentity

class NotifSyslogIdentity : public cisco_bridge_common::MacLimitNotificationTypeIdentity, virtual Identity
{
    public:
        NotifSyslogIdentity();
        ~NotifSyslogIdentity();


}; // NotifSyslogIdentity

class NotifSnmpTrapIdentity : public cisco_bridge_common::MacLimitNotificationTypeIdentity, virtual Identity
{
    public:
        NotifSnmpTrapIdentity();
        ~NotifSnmpTrapIdentity();


}; // NotifSnmpTrapIdentity

class NotifNoneIdentity : public cisco_bridge_common::MacLimitNotificationTypeIdentity, virtual Identity
{
    public:
        NotifNoneIdentity();
        ~NotifNoneIdentity();


}; // NotifNoneIdentity

class NotifSyslogAndSnmpTrapIdentity : public cisco_bridge_common::MacLimitNotificationTypeIdentity, virtual Identity
{
    public:
        NotifSyslogAndSnmpTrapIdentity();
        ~NotifSyslogAndSnmpTrapIdentity();


}; // NotifSyslogAndSnmpTrapIdentity

class MacLimitActionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf flood;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf shutdown;

};

class EthTrafficClassEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf unknown_unicast;

};

class MacAgingTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf inactivity;
        static const Enum::YLeaf absolute;

};

class MacSecureActionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};


}
}

#endif /* _CISCO_BRIDGE_COMMON_ */

