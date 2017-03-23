
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_management_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_management_datatypes {

const Enum::YLeaf TtySessionTimeoutDirectionEnum::in {1, "in"};
const Enum::YLeaf TtySessionTimeoutDirectionEnum::in_out {3, "in-out"};

const Enum::YLeaf TtyPagerEnum::more {1, "more"};
const Enum::YLeaf TtyPagerEnum::less {2, "less"};
const Enum::YLeaf TtyPagerEnum::none {3, "none"};

const Enum::YLeaf TtyEscapeCharEnum::break_ {257, "break"};
const Enum::YLeaf TtyEscapeCharEnum::default_ {30, "default"};
const Enum::YLeaf TtyEscapeCharEnum::none {256, "none"};

const Enum::YLeaf TtyTransportProtocolEnum::none {0, "none"};
const Enum::YLeaf TtyTransportProtocolEnum::telnet {1, "telnet"};
const Enum::YLeaf TtyTransportProtocolEnum::ssh {3, "ssh"};

const Enum::YLeaf TtyTransportProtocolSelectEnum::none {0, "none"};
const Enum::YLeaf TtyTransportProtocolSelectEnum::all {1, "all"};
const Enum::YLeaf TtyTransportProtocolSelectEnum::some {2, "some"};


}
}

