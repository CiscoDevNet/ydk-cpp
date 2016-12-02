
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_mpls_te_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_datatypes {


const Enum::Value SrPrependEnum::none_type {0, "none-type"};
const Enum::Value SrPrependEnum::next_label {1, "next-label"};
const Enum::Value SrPrependEnum::bgp_n_hop {2, "bgp-n-hop"};

const Enum::Value MplsTeBandwidthLimitEnum::unlimited {64, "unlimited"};
const Enum::Value MplsTeBandwidthLimitEnum::limited {128, "limited"};

const Enum::Value MplsTeBandwidthPoolEnum::any_pool {0, "any-pool"};
const Enum::Value MplsTeBandwidthPoolEnum::sub_pool {1, "sub-pool"};

const Enum::Value MplsTeAttrSetEnum::not_used {0, "not-used"};
const Enum::Value MplsTeAttrSetEnum::static_ {1, "static"};
const Enum::Value MplsTeAttrSetEnum::lsp {2, "lsp"};
const Enum::Value MplsTeAttrSetEnum::unassigned {3, "unassigned"};
const Enum::Value MplsTeAttrSetEnum::auto_backup {4, "auto-backup"};
const Enum::Value MplsTeAttrSetEnum::auto_mesh {5, "auto-mesh"};
const Enum::Value MplsTeAttrSetEnum::xro {6, "xro"};
const Enum::Value MplsTeAttrSetEnum::p2mp_te {7, "p2mp-te"};
const Enum::Value MplsTeAttrSetEnum::otn_pp {8, "otn-pp"};
const Enum::Value MplsTeAttrSetEnum::p2p_te {9, "p2p-te"};

const Enum::Value MplsTeSwitchingCapEnum::psc1 {1, "psc1"};
const Enum::Value MplsTeSwitchingCapEnum::lsc {150, "lsc"};
const Enum::Value MplsTeSwitchingCapEnum::fsc {200, "fsc"};

const Enum::Value MplsTeBfdSessionDownActionEnum::re_setup {1, "re-setup"};

const Enum::Value MplsTeBackupBandwidthClassEnum::class0 {0, "class0"};
const Enum::Value MplsTeBackupBandwidthClassEnum::class1 {1, "class1"};
const Enum::Value MplsTeBackupBandwidthClassEnum::any_class {9, "any-class"};

const Enum::Value MplsTeLogFrrProtectionEnum::frr_active_primary {1, "frr-active-primary"};
const Enum::Value MplsTeLogFrrProtectionEnum::backup {256, "backup"};
const Enum::Value MplsTeLogFrrProtectionEnum::frr_ready_primary {512, "frr-ready-primary"};
const Enum::Value MplsTeLogFrrProtectionEnum::primary {513, "primary"};
const Enum::Value MplsTeLogFrrProtectionEnum::all {769, "all"};

const Enum::Value MplsTeTunnelAffinityEnum::include {1, "include"};
const Enum::Value MplsTeTunnelAffinityEnum::include_strict {2, "include-strict"};
const Enum::Value MplsTeTunnelAffinityEnum::exclude {3, "exclude"};
const Enum::Value MplsTeTunnelAffinityEnum::exclude_all {4, "exclude-all"};
const Enum::Value MplsTeTunnelAffinityEnum::ignore {5, "ignore"};

const Enum::Value MplsTePathOptionPropertyEnum::none {0, "none"};
const Enum::Value MplsTePathOptionPropertyEnum::lockdown {1, "lockdown"};
const Enum::Value MplsTePathOptionPropertyEnum::verbatim {4, "verbatim"};
const Enum::Value MplsTePathOptionPropertyEnum::pce {8, "pce"};
const Enum::Value MplsTePathOptionPropertyEnum::segment_routing {16, "segment-routing"};

const Enum::Value MplsTePathSelectionInvalidationTimerExpireEnum::tunnel_action_tear {1, "tunnel-action-tear"};
const Enum::Value MplsTePathSelectionInvalidationTimerExpireEnum::tunnel_action_drop {2, "tunnel-action-drop"};

const Enum::Value MplsTeOtnApsProtectionEnum::Y_1plus1_unidir_no_aps {4, "1plus1-unidir-no-aps"};
const Enum::Value MplsTeOtnApsProtectionEnum::Y_1plus1_unidir_aps {8, "1plus1-unidir-aps"};
const Enum::Value MplsTeOtnApsProtectionEnum::Y_1plus1_bdir_aps {16, "1plus1-bdir-aps"};

const Enum::Value CtypeEnum::ctype_null {0, "ctype-null"};
const Enum::Value CtypeEnum::ctype_ipv4 {1, "ctype-ipv4"};
const Enum::Value CtypeEnum::ctype_ipv4_p2p_tunnel {7, "ctype-ipv4-p2p-tunnel"};
const Enum::Value CtypeEnum::ctype_ipv6_p2p_tunnel {8, "ctype-ipv6-p2p-tunnel"};
const Enum::Value CtypeEnum::ctype_ipv4_uni {9, "ctype-ipv4-uni"};
const Enum::Value CtypeEnum::ctype_ipv4_p2mp_tunnel {13, "ctype-ipv4-p2mp-tunnel"};
const Enum::Value CtypeEnum::ctype_ipv6_p2mp_tunnel {14, "ctype-ipv6-p2mp-tunnel"};

const Enum::Value MplsTeAffinityValueEnum::hex_value {1, "hex-value"};
const Enum::Value MplsTeAffinityValueEnum::bit_position {2, "bit-position"};

const Enum::Value MplsTeBandwidthDsteEnum::standard_dste {0, "standard-dste"};
const Enum::Value MplsTeBandwidthDsteEnum::pre_standard_dste {1, "pre-standard-dste"};

const Enum::Value MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::not_set {0, "not-set"};
const Enum::Value MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::adj_unprotected {1, "adj-unprotected"};
const Enum::Value MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::adj_protected {2, "adj-protected"};

const Enum::Value MplsTeIgpProtocolEnum::none {0, "none"};
const Enum::Value MplsTeIgpProtocolEnum::isis {1, "isis"};
const Enum::Value MplsTeIgpProtocolEnum::ospf {2, "ospf"};

const Enum::Value MplsTePathSelectionTiebreakerEnum::min_fill {1, "min-fill"};
const Enum::Value MplsTePathSelectionTiebreakerEnum::max_fill {2, "max-fill"};
const Enum::Value MplsTePathSelectionTiebreakerEnum::random {3, "random"};

const Enum::Value MplsTeSigNameOptionEnum::none {0, "none"};
const Enum::Value MplsTeSigNameOptionEnum::address {1, "address"};
const Enum::Value MplsTeSigNameOptionEnum::name {2, "name"};

const Enum::Value PathInvalidationActionEnum::tear {1, "tear"};
const Enum::Value PathInvalidationActionEnum::drop {2, "drop"};

const Enum::Value MplsTeAutorouteMetricEnum::relative {1, "relative"};
const Enum::Value MplsTeAutorouteMetricEnum::absolute {2, "absolute"};
const Enum::Value MplsTeAutorouteMetricEnum::constant {3, "constant"};

const Enum::Value MplsTesrlgExcludeEnum::mandatory {1, "mandatory"};
const Enum::Value MplsTesrlgExcludeEnum::preferred {2, "preferred"};
const Enum::Value MplsTesrlgExcludeEnum::weighted {3, "weighted"};

const Enum::Value MplsTeBackupBandwidthPoolEnum::any_pool {1, "any-pool"};
const Enum::Value MplsTeBackupBandwidthPoolEnum::global_pool {2, "global-pool"};
const Enum::Value MplsTeBackupBandwidthPoolEnum::sub_pool {4, "sub-pool"};

const Enum::Value MplsTePathSelectionMetricEnum::igp {1, "igp"};
const Enum::Value MplsTePathSelectionMetricEnum::te {2, "te"};
const Enum::Value MplsTePathSelectionMetricEnum::delay {4, "delay"};

const Enum::Value MplsTePathOptionProtectionEnum::active {0, "active"};
const Enum::Value MplsTePathOptionProtectionEnum::protecting {1, "protecting"};

const Enum::Value MplsTePathOptionEnum::not_set {0, "not-set"};
const Enum::Value MplsTePathOptionEnum::dynamic {1, "dynamic"};
const Enum::Value MplsTePathOptionEnum::explicit_name {3, "explicit-name"};
const Enum::Value MplsTePathOptionEnum::explicit_number {4, "explicit-number"};
const Enum::Value MplsTePathOptionEnum::no_ero {5, "no-ero"};
const Enum::Value MplsTePathOptionEnum::sr {6, "sr"};

const Enum::Value BfdReversePathEnum::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::Value MplsTeOtnApsRestorationStyleEnum::keep_failed_lsp {1, "keep-failed-lsp"};
const Enum::Value MplsTeOtnApsRestorationStyleEnum::delete_failed_lsp {2, "delete-failed-lsp"};

const Enum::Value MplsTeOtnSncModeEnum::snc_n {1, "snc-n"};
const Enum::Value MplsTeOtnSncModeEnum::snc_i {2, "snc-i"};
const Enum::Value MplsTeOtnSncModeEnum::snc_s {3, "snc-s"};

const Enum::Value MplsTePathDiversityConformanceEnum::strict {0, "strict"};
const Enum::Value MplsTePathDiversityConformanceEnum::best_effort {1, "best-effort"};

const Enum::Value MplsTeOtnApsProtectionModeEnum::revertive {1, "revertive"};
const Enum::Value MplsTeOtnApsProtectionModeEnum::non_revertive {2, "non-revertive"};


}
}

