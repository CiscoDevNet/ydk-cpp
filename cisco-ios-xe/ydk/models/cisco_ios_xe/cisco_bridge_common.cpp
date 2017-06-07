
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_bridge_common.hpp"

namespace ydk {
namespace cisco_bridge_common {

MacLimitNotificationTypeIdentity::MacLimitNotificationTypeIdentity()
     : Identity("cisco-bridge-common:mac-limit-notification-type")
{
}

MacLimitNotificationTypeIdentity::~MacLimitNotificationTypeIdentity()
{
}

NotifSyslogIdentity::NotifSyslogIdentity()
     : Identity("cisco-bridge-common:notif-syslog")
{
}

NotifSyslogIdentity::~NotifSyslogIdentity()
{
}

NotifSnmpTrapIdentity::NotifSnmpTrapIdentity()
     : Identity("cisco-bridge-common:notif-snmp-trap")
{
}

NotifSnmpTrapIdentity::~NotifSnmpTrapIdentity()
{
}

NotifNoneIdentity::NotifNoneIdentity()
     : Identity("cisco-bridge-common:notif-none")
{
}

NotifNoneIdentity::~NotifNoneIdentity()
{
}

NotifSyslogAndSnmpTrapIdentity::NotifSyslogAndSnmpTrapIdentity()
     : Identity("cisco-bridge-common:notif-syslog-and-snmp-trap")
{
}

NotifSyslogAndSnmpTrapIdentity::~NotifSyslogAndSnmpTrapIdentity()
{
}

const Enum::YLeaf MacLimitActionEnum::none {0, "none"};
const Enum::YLeaf MacLimitActionEnum::flood {1, "flood"};
const Enum::YLeaf MacLimitActionEnum::drop {2, "drop"};
const Enum::YLeaf MacLimitActionEnum::shutdown {3, "shutdown"};

const Enum::YLeaf EthTrafficClassEnum::broadcast {0, "broadcast"};
const Enum::YLeaf EthTrafficClassEnum::multicast {1, "multicast"};
const Enum::YLeaf EthTrafficClassEnum::unknown_unicast {2, "unknown-unicast"};

const Enum::YLeaf MacAgingTypeEnum::inactivity {0, "inactivity"};
const Enum::YLeaf MacAgingTypeEnum::absolute {1, "absolute"};

const Enum::YLeaf MacSecureActionEnum::none {0, "none"};
const Enum::YLeaf MacSecureActionEnum::restrict {1, "restrict"};
const Enum::YLeaf MacSecureActionEnum::shutdown {2, "shutdown"};


}
}

