
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_bridge_common.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_bridge_common {

MacLimitNotificationType::MacLimitNotificationType()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-bridge-common", "cisco-bridge-common", "cisco-bridge-common:mac-limit-notification-type")
{

}

MacLimitNotificationType::~MacLimitNotificationType()
{
}

NotifNone::NotifNone()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-bridge-common", "cisco-bridge-common", "cisco-bridge-common:notif-none")
{

}

NotifNone::~NotifNone()
{
}

NotifSnmpTrap::NotifSnmpTrap()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-bridge-common", "cisco-bridge-common", "cisco-bridge-common:notif-snmp-trap")
{

}

NotifSnmpTrap::~NotifSnmpTrap()
{
}

NotifSyslog::NotifSyslog()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-bridge-common", "cisco-bridge-common", "cisco-bridge-common:notif-syslog")
{

}

NotifSyslog::~NotifSyslog()
{
}

NotifSyslogAndSnmpTrap::NotifSyslogAndSnmpTrap()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-bridge-common", "cisco-bridge-common", "cisco-bridge-common:notif-syslog-and-snmp-trap")
{

}

NotifSyslogAndSnmpTrap::~NotifSyslogAndSnmpTrap()
{
}

const Enum::YLeaf MacLimitAction::none {0, "none"};
const Enum::YLeaf MacLimitAction::flood {1, "flood"};
const Enum::YLeaf MacLimitAction::drop {2, "drop"};
const Enum::YLeaf MacLimitAction::shutdown {3, "shutdown"};

const Enum::YLeaf MacAgingType::inactivity {0, "inactivity"};
const Enum::YLeaf MacAgingType::absolute {1, "absolute"};

const Enum::YLeaf MacSecureAction::none {0, "none"};
const Enum::YLeaf MacSecureAction::restrict {1, "restrict"};
const Enum::YLeaf MacSecureAction::shutdown {2, "shutdown"};

const Enum::YLeaf EthTrafficClass::broadcast {0, "broadcast"};
const Enum::YLeaf EthTrafficClass::multicast {1, "multicast"};
const Enum::YLeaf EthTrafficClass::unknown_unicast {2, "unknown-unicast"};


}
}

