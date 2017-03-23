
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_lib_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_lib_datatypes {

const Enum::YLeaf AaaAccountingUpdateEnum::none {0, "none"};
const Enum::YLeaf AaaAccountingUpdateEnum::newinfo {3, "newinfo"};
const Enum::YLeaf AaaAccountingUpdateEnum::periodic {4, "periodic"};

const Enum::YLeaf AaaAccountingEnum::not_set {0, "not-set"};
const Enum::YLeaf AaaAccountingEnum::start_stop {1, "start-stop"};
const Enum::YLeaf AaaAccountingEnum::stop_only {2, "stop-only"};

const Enum::YLeaf AaaMethodEnum::not_set {0, "not-set"};
const Enum::YLeaf AaaMethodEnum::none {1, "none"};
const Enum::YLeaf AaaMethodEnum::local {2, "local"};
const Enum::YLeaf AaaMethodEnum::radius {3, "radius"};
const Enum::YLeaf AaaMethodEnum::tacacs_plus {4, "tacacs-plus"};
const Enum::YLeaf AaaMethodEnum::dsmd {5, "dsmd"};
const Enum::YLeaf AaaMethodEnum::sgbp {6, "sgbp"};
const Enum::YLeaf AaaMethodEnum::acct_d {7, "acct-d"};
const Enum::YLeaf AaaMethodEnum::error {8, "error"};
const Enum::YLeaf AaaMethodEnum::if_authenticated {9, "if-authenticated"};
const Enum::YLeaf AaaMethodEnum::server_group {10, "server-group"};
const Enum::YLeaf AaaMethodEnum::server_group_not_defined {11, "server-group-not-defined"};
const Enum::YLeaf AaaMethodEnum::line {12, "line"};
const Enum::YLeaf AaaMethodEnum::enable {13, "enable"};
const Enum::YLeaf AaaMethodEnum::kerberos {14, "kerberos"};
const Enum::YLeaf AaaMethodEnum::diameter {15, "diameter"};
const Enum::YLeaf AaaMethodEnum::last {16, "last"};

const Enum::YLeaf AaaAccountingBroadcastEnum::disable {0, "disable"};
const Enum::YLeaf AaaAccountingBroadcastEnum::enable {1, "enable"};

const Enum::YLeaf AaaAccountingRpFailoverEnum::disable {0, "disable"};
const Enum::YLeaf AaaAccountingRpFailoverEnum::enable {1, "enable"};


}
}

