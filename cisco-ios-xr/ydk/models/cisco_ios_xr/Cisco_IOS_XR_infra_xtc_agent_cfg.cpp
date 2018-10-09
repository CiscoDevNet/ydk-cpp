
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_agent_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_agent_cfg {

const Enum::YLeaf XtcMetricValue::relative {1, "relative"};
const Enum::YLeaf XtcMetricValue::absolute {2, "absolute"};

const Enum::YLeaf XtcPathHop::mpls {1, "mpls"};
const Enum::YLeaf XtcPathHop::srv6 {2, "srv6"};

const Enum::YLeaf XtcAffinityRule::affinity_include_all {0, "affinity-include-all"};
const Enum::YLeaf XtcAffinityRule::affinity_exclude_any {1, "affinity-exclude-any"};
const Enum::YLeaf XtcAffinityRule::affinity_include_any {2, "affinity-include-any"};

const Enum::YLeaf XtcEndPoint::end_point_type_ipv4 {1, "end-point-type-ipv4"};
const Enum::YLeaf XtcEndPoint::end_point_type_ipv6 {2, "end-point-type-ipv6"};

const Enum::YLeaf XtcDisjointness::link {1, "link"};
const Enum::YLeaf XtcDisjointness::node {2, "node"};
const Enum::YLeaf XtcDisjointness::srlg {3, "srlg"};
const Enum::YLeaf XtcDisjointness::srlg_node {4, "srlg-node"};

const Enum::YLeaf XtcAutoRouteMetric::relative {1, "relative"};
const Enum::YLeaf XtcAutoRouteMetric::constant {3, "constant"};

const Enum::YLeaf XtcSteeringApplication::bgp {1, "bgp"};
const Enum::YLeaf XtcSteeringApplication::isis {2, "isis"};
const Enum::YLeaf XtcSteeringApplication::ospf {3, "ospf"};

const Enum::YLeaf XtcBindingSid::mpls_label_specified {1, "mpls-label-specified"};
const Enum::YLeaf XtcBindingSid::mpls_label_any {2, "mpls-label-any"};

const Enum::YLeaf XtcSegment::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf XtcSegment::mpls_label {3, "mpls-label"};

const Enum::YLeaf XtcBindingSidexplicitRule::fallback_dynamic {1, "fallback-dynamic"};
const Enum::YLeaf XtcBindingSidexplicitRule::enforce_srlb {2, "enforce-srlb"};

const Enum::YLeaf XtcPath::explicit_ {1, "explicit"};
const Enum::YLeaf XtcPath::dynamic {2, "dynamic"};

const Enum::YLeaf XtcMetric::igp {1, "igp"};
const Enum::YLeaf XtcMetric::te {2, "te"};
const Enum::YLeaf XtcMetric::latency {3, "latency"};

const Enum::YLeaf XtcAddressFamily::af_type_ipv4 {1, "af-type-ipv4"};
const Enum::YLeaf XtcAddressFamily::xtc_af_type_ipv6 {2, "xtc-af-type-ipv6"};


}
}

