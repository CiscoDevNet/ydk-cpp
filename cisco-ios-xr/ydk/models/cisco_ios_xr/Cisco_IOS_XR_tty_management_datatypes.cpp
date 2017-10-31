
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_management_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_management_datatypes {

const Enum::YLeaf TtyPager::more {1, "more"};
const Enum::YLeaf TtyPager::less {2, "less"};
const Enum::YLeaf TtyPager::none {3, "none"};

const Enum::YLeaf TtyEscapeChar::break_ {257, "break"};
const Enum::YLeaf TtyEscapeChar::default_ {30, "default"};
const Enum::YLeaf TtyEscapeChar::none {256, "none"};

const Enum::YLeaf TtyTransportProtocolSelect::none {0, "none"};
const Enum::YLeaf TtyTransportProtocolSelect::all {1, "all"};
const Enum::YLeaf TtyTransportProtocolSelect::some {2, "some"};

const Enum::YLeaf TtySessionTimeoutDirection::in {1, "in"};
const Enum::YLeaf TtySessionTimeoutDirection::in_out {3, "in-out"};

const Enum::YLeaf TtyTransportProtocol::none {0, "none"};
const Enum::YLeaf TtyTransportProtocol::telnet {1, "telnet"};
const Enum::YLeaf TtyTransportProtocol::ssh {3, "ssh"};


}
}

