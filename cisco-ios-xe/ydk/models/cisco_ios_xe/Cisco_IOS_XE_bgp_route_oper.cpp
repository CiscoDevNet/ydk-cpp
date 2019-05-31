
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_bgp_route_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_route_oper {

const Enum::YLeaf BgpOriginCode::origin_igp {0, "origin-igp"};
const Enum::YLeaf BgpOriginCode::origin_egp {1, "origin-egp"};
const Enum::YLeaf BgpOriginCode::origin_incomplete {2, "origin-incomplete"};

const Enum::YLeaf BgpRpkiStatus::rpki_valid {0, "rpki-valid"};
const Enum::YLeaf BgpRpkiStatus::rpki_invalid {1, "rpki-invalid"};
const Enum::YLeaf BgpRpkiStatus::rpki_not_found {2, "rpki-not-found"};
const Enum::YLeaf BgpRpkiStatus::rpki_not_enabled {3, "rpki-not-enabled"};
const Enum::YLeaf BgpRpkiStatus::rpki_illegal {4, "rpki-illegal"};

const Enum::YLeaf BgpRouteFilters::bgp_rf_all {0, "bgp-rf-all"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_cidr_only {1, "bgp-rf-cidr-only"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_label {2, "bgp-rf-label"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_rib_failure {3, "bgp-rf-rib-failure"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_injected {4, "bgp-rf-injected"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_inconsistent {5, "bgp-rf-inconsistent"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_community {6, "bgp-rf-community"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_extcommunity {7, "bgp-rf-extcommunity"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_oer_controlled {8, "bgp-rf-oer-controlled"};
const Enum::YLeaf BgpRouteFilters::bgp_rf_pending {9, "bgp-rf-pending"};

const Enum::YLeaf BgpNeighborRouteFilters::bgp_nrf_post_received {0, "bgp-nrf-post-received"};
const Enum::YLeaf BgpNeighborRouteFilters::bgp_nrf_pre_received {1, "bgp-nrf-pre-received"};
const Enum::YLeaf BgpNeighborRouteFilters::bgp_nrf_pre_advertised {2, "bgp-nrf-pre-advertised"};
const Enum::YLeaf BgpNeighborRouteFilters::bgp_nrf_post_advertised {3, "bgp-nrf-post-advertised"};


}
}

