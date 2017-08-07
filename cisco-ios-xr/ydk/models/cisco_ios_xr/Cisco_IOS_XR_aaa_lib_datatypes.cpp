
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_lib_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_datatypes {

const Enum::YLeaf AaaAccounting::not_set {0, "not-set"};
const Enum::YLeaf AaaAccounting::start_stop {1, "start-stop"};
const Enum::YLeaf AaaAccounting::stop_only {2, "stop-only"};

const Enum::YLeaf AaaAccountingBroadcast::disable {0, "disable"};
const Enum::YLeaf AaaAccountingBroadcast::enable {1, "enable"};

const Enum::YLeaf AaaMethod::not_set {0, "not-set"};
const Enum::YLeaf AaaMethod::none {1, "none"};
const Enum::YLeaf AaaMethod::local {2, "local"};
const Enum::YLeaf AaaMethod::radius {3, "radius"};
const Enum::YLeaf AaaMethod::tacacs_plus {4, "tacacs-plus"};
const Enum::YLeaf AaaMethod::dsmd {5, "dsmd"};
const Enum::YLeaf AaaMethod::sgbp {6, "sgbp"};
const Enum::YLeaf AaaMethod::acct_d {7, "acct-d"};
const Enum::YLeaf AaaMethod::error {8, "error"};
const Enum::YLeaf AaaMethod::if_authenticated {9, "if-authenticated"};
const Enum::YLeaf AaaMethod::server_group {10, "server-group"};
const Enum::YLeaf AaaMethod::server_group_not_defined {11, "server-group-not-defined"};
const Enum::YLeaf AaaMethod::line {12, "line"};
const Enum::YLeaf AaaMethod::enable {13, "enable"};
const Enum::YLeaf AaaMethod::kerberos {14, "kerberos"};
const Enum::YLeaf AaaMethod::diameter {15, "diameter"};
const Enum::YLeaf AaaMethod::last {16, "last"};

const Enum::YLeaf AaaAccountingRpFailover::disable {0, "disable"};
const Enum::YLeaf AaaAccountingRpFailover::enable {1, "enable"};

const Enum::YLeaf AaaAccountingUpdate::none {0, "none"};
const Enum::YLeaf AaaAccountingUpdate::newinfo {3, "newinfo"};
const Enum::YLeaf AaaAccountingUpdate::periodic {4, "periodic"};


}
}

