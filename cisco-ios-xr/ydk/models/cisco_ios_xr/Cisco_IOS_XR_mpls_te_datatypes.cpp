
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_datatypes {

const Enum::YLeaf MplsTesrlgExclude::mandatory {1, "mandatory"};
const Enum::YLeaf MplsTesrlgExclude::preferred {2, "preferred"};
const Enum::YLeaf MplsTesrlgExclude::weighted {3, "weighted"};

const Enum::YLeaf MplsTeAffinityValue::hex_value {1, "hex-value"};
const Enum::YLeaf MplsTeAffinityValue::bit_position {2, "bit-position"};

const Enum::YLeaf SrPrepend::none_type {0, "none-type"};
const Enum::YLeaf SrPrepend::next_label {1, "next-label"};
const Enum::YLeaf SrPrepend::bgp_n_hop {2, "bgp-n-hop"};

const Enum::YLeaf MplsTePathSelectionTiebreaker::min_fill {1, "min-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreaker::max_fill {2, "max-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreaker::random {3, "random"};

const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_unidir_no_aps {4, "1plus1-unidir-no-aps"};
const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_unidir_aps {8, "1plus1-unidir-aps"};
const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_bdir_aps {16, "1plus1-bdir-aps"};

const Enum::YLeaf MplsTePathOptionProperty::none {0, "none"};
const Enum::YLeaf MplsTePathOptionProperty::lockdown {1, "lockdown"};
const Enum::YLeaf MplsTePathOptionProperty::verbatim {4, "verbatim"};
const Enum::YLeaf MplsTePathOptionProperty::pce {8, "pce"};
const Enum::YLeaf MplsTePathOptionProperty::segment_routing {16, "segment-routing"};
const Enum::YLeaf MplsTePathOptionProperty::sticky {32, "sticky"};

const Enum::YLeaf MplsTeTunnelAffinity::include {1, "include"};
const Enum::YLeaf MplsTeTunnelAffinity::include_strict {2, "include-strict"};
const Enum::YLeaf MplsTeTunnelAffinity::exclude {3, "exclude"};
const Enum::YLeaf MplsTeTunnelAffinity::exclude_all {4, "exclude-all"};
const Enum::YLeaf MplsTeTunnelAffinity::ignore {5, "ignore"};

const Enum::YLeaf MplsTeSwitchingCap::psc1 {1, "psc1"};
const Enum::YLeaf MplsTeSwitchingCap::lsc {150, "lsc"};
const Enum::YLeaf MplsTeSwitchingCap::fsc {200, "fsc"};

const Enum::YLeaf MplsTeOtnApsProtectionMode::revertive {1, "revertive"};
const Enum::YLeaf MplsTeOtnApsProtectionMode::non_revertive {2, "non-revertive"};

const Enum::YLeaf MplsTeBfdSessionDownAction::re_setup {1, "re-setup"};

const Enum::YLeaf MplsTeLogFrrProtection::frr_active_primary {1, "frr-active-primary"};
const Enum::YLeaf MplsTeLogFrrProtection::backup {256, "backup"};
const Enum::YLeaf MplsTeLogFrrProtection::frr_ready_primary {512, "frr-ready-primary"};
const Enum::YLeaf MplsTeLogFrrProtection::primary {513, "primary"};
const Enum::YLeaf MplsTeLogFrrProtection::all {769, "all"};

const Enum::YLeaf MplsTeAutorouteMetric::relative {1, "relative"};
const Enum::YLeaf MplsTeAutorouteMetric::absolute {2, "absolute"};
const Enum::YLeaf MplsTeAutorouteMetric::constant {3, "constant"};

const Enum::YLeaf MplsTeBackupBandwidthPool::any_pool {1, "any-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPool::global_pool {2, "global-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPool::sub_pool {4, "sub-pool"};

const Enum::YLeaf MplsTeOtnSncMode::snc_n {1, "snc-n"};
const Enum::YLeaf MplsTeOtnSncMode::snc_i {2, "snc-i"};
const Enum::YLeaf MplsTeOtnSncMode::snc_s {3, "snc-s"};

const Enum::YLeaf BfdReversePath::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::YLeaf MplsTePathSelectionMetric::igp {1, "igp"};
const Enum::YLeaf MplsTePathSelectionMetric::te {2, "te"};
const Enum::YLeaf MplsTePathSelectionMetric::delay {4, "delay"};

const Enum::YLeaf MplsTePathOption::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathOption::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathOption::explicit_name {3, "explicit-name"};
const Enum::YLeaf MplsTePathOption::explicit_number {4, "explicit-number"};
const Enum::YLeaf MplsTePathOption::no_ero {5, "no-ero"};
const Enum::YLeaf MplsTePathOption::sr {6, "sr"};

const Enum::YLeaf MplsTeBandwidthPool::any_pool {0, "any-pool"};
const Enum::YLeaf MplsTeBandwidthPool::sub_pool {1, "sub-pool"};

const Enum::YLeaf MplsTeBandwidthDste::standard_dste {0, "standard-dste"};
const Enum::YLeaf MplsTeBandwidthDste::pre_standard_dste {1, "pre-standard-dste"};

const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpire::tunnel_action_tear {1, "tunnel-action-tear"};
const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpire::tunnel_action_drop {2, "tunnel-action-drop"};

const Enum::YLeaf Ctype::ctype_null {0, "ctype-null"};
const Enum::YLeaf Ctype::ctype_ipv4 {1, "ctype-ipv4"};
const Enum::YLeaf Ctype::ctype_ipv4_p2p_tunnel {7, "ctype-ipv4-p2p-tunnel"};
const Enum::YLeaf Ctype::ctype_ipv6_p2p_tunnel {8, "ctype-ipv6-p2p-tunnel"};
const Enum::YLeaf Ctype::ctype_ipv4_uni {9, "ctype-ipv4-uni"};
const Enum::YLeaf Ctype::ctype_ipv4_p2mp_tunnel {13, "ctype-ipv4-p2mp-tunnel"};
const Enum::YLeaf Ctype::ctype_ipv6_p2mp_tunnel {14, "ctype-ipv6-p2mp-tunnel"};

const Enum::YLeaf MplsTePathDiversityConformance::strict {0, "strict"};
const Enum::YLeaf MplsTePathDiversityConformance::best_effort {1, "best-effort"};

const Enum::YLeaf MplsTeBackupBandwidthClass::class0 {0, "class0"};
const Enum::YLeaf MplsTeBackupBandwidthClass::class1 {1, "class1"};
const Enum::YLeaf MplsTeBackupBandwidthClass::any_class {9, "any-class"};

const Enum::YLeaf MplsTeAttrSet::not_used {0, "not-used"};
const Enum::YLeaf MplsTeAttrSet::static_ {1, "static"};
const Enum::YLeaf MplsTeAttrSet::lsp {2, "lsp"};
const Enum::YLeaf MplsTeAttrSet::unassigned {3, "unassigned"};
const Enum::YLeaf MplsTeAttrSet::auto_backup {4, "auto-backup"};
const Enum::YLeaf MplsTeAttrSet::auto_mesh {5, "auto-mesh"};
const Enum::YLeaf MplsTeAttrSet::xro {6, "xro"};
const Enum::YLeaf MplsTeAttrSet::p2mp_te {7, "p2mp-te"};
const Enum::YLeaf MplsTeAttrSet::otn_pp {8, "otn-pp"};
const Enum::YLeaf MplsTeAttrSet::p2p_te {9, "p2p-te"};

const Enum::YLeaf MplsTeOtnApsRestorationStyle::keep_failed_lsp {1, "keep-failed-lsp"};
const Enum::YLeaf MplsTeOtnApsRestorationStyle::delete_failed_lsp {2, "delete-failed-lsp"};

const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::adj_unprotected {1, "adj-unprotected"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::adj_protected {2, "adj-protected"};

const Enum::YLeaf MplsTePathOptionProtection::active {0, "active"};
const Enum::YLeaf MplsTePathOptionProtection::protecting {1, "protecting"};

const Enum::YLeaf MplsTeSigNameOption::none {0, "none"};
const Enum::YLeaf MplsTeSigNameOption::address {1, "address"};
const Enum::YLeaf MplsTeSigNameOption::name {2, "name"};

const Enum::YLeaf MplsTeBandwidthLimit::unlimited {64, "unlimited"};
const Enum::YLeaf MplsTeBandwidthLimit::limited {128, "limited"};

const Enum::YLeaf PathInvalidationAction::tear {1, "tear"};
const Enum::YLeaf PathInvalidationAction::drop {2, "drop"};

const Enum::YLeaf MplsTeIgpProtocol::none {0, "none"};
const Enum::YLeaf MplsTeIgpProtocol::isis {1, "isis"};
const Enum::YLeaf MplsTeIgpProtocol::ospf {2, "ospf"};


}
}

