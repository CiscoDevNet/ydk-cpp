
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_tty_management_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_management_datatypes {


const Enum::Value TtySessionTimeoutDirectionEnum::in {1, "in"};
const Enum::Value TtySessionTimeoutDirectionEnum::in_out {3, "in-out"};

const Enum::Value TtyPagerEnum::more {1, "more"};
const Enum::Value TtyPagerEnum::less {2, "less"};
const Enum::Value TtyPagerEnum::none {3, "none"};

const Enum::Value TtyEscapeCharEnum::break_ {257, "break"};
const Enum::Value TtyEscapeCharEnum::default_ {30, "default"};
const Enum::Value TtyEscapeCharEnum::none {256, "none"};

const Enum::Value TtyTransportProtocolEnum::none {0, "none"};
const Enum::Value TtyTransportProtocolEnum::telnet {1, "telnet"};
const Enum::Value TtyTransportProtocolEnum::ssh {3, "ssh"};

const Enum::Value TtyTransportProtocolSelectEnum::none {0, "none"};
const Enum::Value TtyTransportProtocolSelectEnum::all {1, "all"};
const Enum::Value TtyTransportProtocolSelectEnum::some {2, "some"};


}
}

