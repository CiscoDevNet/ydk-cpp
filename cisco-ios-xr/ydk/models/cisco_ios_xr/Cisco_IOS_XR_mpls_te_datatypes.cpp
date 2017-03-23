
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_datatypes {

const Enum::YLeaf SrPrependEnum::none_type {0, "none-type"};
const Enum::YLeaf SrPrependEnum::next_label {1, "next-label"};
const Enum::YLeaf SrPrependEnum::bgp_n_hop {2, "bgp-n-hop"};

const Enum::YLeaf MplsTeBandwidthLimitEnum::unlimited {64, "unlimited"};
const Enum::YLeaf MplsTeBandwidthLimitEnum::limited {128, "limited"};

const Enum::YLeaf MplsTeBandwidthPoolEnum::any_pool {0, "any-pool"};
const Enum::YLeaf MplsTeBandwidthPoolEnum::sub_pool {1, "sub-pool"};

const Enum::YLeaf MplsTeAttrSetEnum::not_used {0, "not-used"};
const Enum::YLeaf MplsTeAttrSetEnum::static_ {1, "static"};
const Enum::YLeaf MplsTeAttrSetEnum::lsp {2, "lsp"};
const Enum::YLeaf MplsTeAttrSetEnum::unassigned {3, "unassigned"};
const Enum::YLeaf MplsTeAttrSetEnum::auto_backup {4, "auto-backup"};
const Enum::YLeaf MplsTeAttrSetEnum::auto_mesh {5, "auto-mesh"};
const Enum::YLeaf MplsTeAttrSetEnum::xro {6, "xro"};
const Enum::YLeaf MplsTeAttrSetEnum::p2mp_te {7, "p2mp-te"};
const Enum::YLeaf MplsTeAttrSetEnum::otn_pp {8, "otn-pp"};
const Enum::YLeaf MplsTeAttrSetEnum::p2p_te {9, "p2p-te"};

const Enum::YLeaf MplsTeSwitchingCapEnum::psc1 {1, "psc1"};
const Enum::YLeaf MplsTeSwitchingCapEnum::lsc {150, "lsc"};
const Enum::YLeaf MplsTeSwitchingCapEnum::fsc {200, "fsc"};

const Enum::YLeaf MplsTeBfdSessionDownActionEnum::re_setup {1, "re-setup"};

const Enum::YLeaf MplsTeBackupBandwidthClassEnum::class0 {0, "class0"};
const Enum::YLeaf MplsTeBackupBandwidthClassEnum::class1 {1, "class1"};
const Enum::YLeaf MplsTeBackupBandwidthClassEnum::any_class {9, "any-class"};

const Enum::YLeaf MplsTeLogFrrProtectionEnum::frr_active_primary {1, "frr-active-primary"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::backup {256, "backup"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::frr_ready_primary {512, "frr-ready-primary"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::primary {513, "primary"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::all {769, "all"};

const Enum::YLeaf MplsTeTunnelAffinityEnum::include {1, "include"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::include_strict {2, "include-strict"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::exclude {3, "exclude"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::exclude_all {4, "exclude-all"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::ignore {5, "ignore"};

const Enum::YLeaf MplsTePathOptionPropertyEnum::none {0, "none"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::lockdown {1, "lockdown"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::verbatim {4, "verbatim"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::pce {8, "pce"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::segment_routing {16, "segment-routing"};

const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpireEnum::tunnel_action_tear {1, "tunnel-action-tear"};
const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpireEnum::tunnel_action_drop {2, "tunnel-action-drop"};

const Enum::YLeaf MplsTeOtnApsProtectionEnum::Y_1plus1_unidir_no_aps {4, "1plus1-unidir-no-aps"};
const Enum::YLeaf MplsTeOtnApsProtectionEnum::Y_1plus1_unidir_aps {8, "1plus1-unidir-aps"};
const Enum::YLeaf MplsTeOtnApsProtectionEnum::Y_1plus1_bdir_aps {16, "1plus1-bdir-aps"};

const Enum::YLeaf CtypeEnum::ctype_null {0, "ctype-null"};
const Enum::YLeaf CtypeEnum::ctype_ipv4 {1, "ctype-ipv4"};
const Enum::YLeaf CtypeEnum::ctype_ipv4_p2p_tunnel {7, "ctype-ipv4-p2p-tunnel"};
const Enum::YLeaf CtypeEnum::ctype_ipv6_p2p_tunnel {8, "ctype-ipv6-p2p-tunnel"};
const Enum::YLeaf CtypeEnum::ctype_ipv4_uni {9, "ctype-ipv4-uni"};
const Enum::YLeaf CtypeEnum::ctype_ipv4_p2mp_tunnel {13, "ctype-ipv4-p2mp-tunnel"};
const Enum::YLeaf CtypeEnum::ctype_ipv6_p2mp_tunnel {14, "ctype-ipv6-p2mp-tunnel"};

const Enum::YLeaf MplsTeAffinityValueEnum::hex_value {1, "hex-value"};
const Enum::YLeaf MplsTeAffinityValueEnum::bit_position {2, "bit-position"};

const Enum::YLeaf MplsTeOtnSncModeEnum::snc_n {1, "snc-n"};
const Enum::YLeaf MplsTeOtnSncModeEnum::snc_i {2, "snc-i"};
const Enum::YLeaf MplsTeOtnSncModeEnum::snc_s {3, "snc-s"};

const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::adj_unprotected {1, "adj-unprotected"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::adj_protected {2, "adj-protected"};

const Enum::YLeaf MplsTeIgpProtocolEnum::none {0, "none"};
const Enum::YLeaf MplsTeIgpProtocolEnum::isis {1, "isis"};
const Enum::YLeaf MplsTeIgpProtocolEnum::ospf {2, "ospf"};

const Enum::YLeaf MplsTePathSelectionTiebreakerEnum::min_fill {1, "min-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreakerEnum::max_fill {2, "max-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreakerEnum::random {3, "random"};

const Enum::YLeaf MplsTeSigNameOptionEnum::none {0, "none"};
const Enum::YLeaf MplsTeSigNameOptionEnum::address {1, "address"};
const Enum::YLeaf MplsTeSigNameOptionEnum::name {2, "name"};

const Enum::YLeaf PathInvalidationActionEnum::tear {1, "tear"};
const Enum::YLeaf PathInvalidationActionEnum::drop {2, "drop"};

const Enum::YLeaf MplsTeAutorouteMetricEnum::relative {1, "relative"};
const Enum::YLeaf MplsTeAutorouteMetricEnum::absolute {2, "absolute"};
const Enum::YLeaf MplsTeAutorouteMetricEnum::constant {3, "constant"};

const Enum::YLeaf MplsTesrlgExcludeEnum::mandatory {1, "mandatory"};
const Enum::YLeaf MplsTesrlgExcludeEnum::preferred {2, "preferred"};
const Enum::YLeaf MplsTesrlgExcludeEnum::weighted {3, "weighted"};

const Enum::YLeaf MplsTeBackupBandwidthPoolEnum::any_pool {1, "any-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPoolEnum::global_pool {2, "global-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPoolEnum::sub_pool {4, "sub-pool"};

const Enum::YLeaf MplsTePathSelectionMetricEnum::igp {1, "igp"};
const Enum::YLeaf MplsTePathSelectionMetricEnum::te {2, "te"};
const Enum::YLeaf MplsTePathSelectionMetricEnum::delay {4, "delay"};

const Enum::YLeaf MplsTePathOptionProtectionEnum::active {0, "active"};
const Enum::YLeaf MplsTePathOptionProtectionEnum::protecting {1, "protecting"};

const Enum::YLeaf MplsTePathOptionEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathOptionEnum::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathOptionEnum::explicit_name {3, "explicit-name"};
const Enum::YLeaf MplsTePathOptionEnum::explicit_number {4, "explicit-number"};
const Enum::YLeaf MplsTePathOptionEnum::no_ero {5, "no-ero"};
const Enum::YLeaf MplsTePathOptionEnum::sr {6, "sr"};

const Enum::YLeaf BfdReversePathEnum::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::YLeaf MplsTeOtnApsRestorationStyleEnum::keep_failed_lsp {1, "keep-failed-lsp"};
const Enum::YLeaf MplsTeOtnApsRestorationStyleEnum::delete_failed_lsp {2, "delete-failed-lsp"};

const Enum::YLeaf MplsTeBandwidthDsteEnum::standard_dste {0, "standard-dste"};
const Enum::YLeaf MplsTeBandwidthDsteEnum::pre_standard_dste {1, "pre-standard-dste"};

const Enum::YLeaf MplsTePathDiversityConformanceEnum::strict {0, "strict"};
const Enum::YLeaf MplsTePathDiversityConformanceEnum::best_effort {1, "best-effort"};

const Enum::YLeaf MplsTeOtnApsProtectionModeEnum::revertive {1, "revertive"};
const Enum::YLeaf MplsTeOtnApsProtectionModeEnum::non_revertive {2, "non-revertive"};


}
}

