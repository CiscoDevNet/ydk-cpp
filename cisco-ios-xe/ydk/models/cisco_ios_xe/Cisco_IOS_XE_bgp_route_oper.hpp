#ifndef _CISCO_IOS_XE_BGP_ROUTE_OPER_
#define _CISCO_IOS_XE_BGP_ROUTE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_route_oper {

class BgpRpkiStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpki_valid;
        static const ydk::Enum::YLeaf rpki_invalid;
        static const ydk::Enum::YLeaf rpki_not_found;
        static const ydk::Enum::YLeaf rpki_not_enabled;
        static const ydk::Enum::YLeaf rpki_illegal;

        static int get_enum_value(const std::string & name) {
            if (name == "rpki-valid") return 0;
            if (name == "rpki-invalid") return 1;
            if (name == "rpki-not-found") return 2;
            if (name == "rpki-not-enabled") return 3;
            if (name == "rpki-illegal") return 4;
            return -1;
        }
};

class BgpRouteFilters : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_rf_all;
        static const ydk::Enum::YLeaf bgp_rf_cidr_only;
        static const ydk::Enum::YLeaf bgp_rf_label;
        static const ydk::Enum::YLeaf bgp_rf_rib_failure;
        static const ydk::Enum::YLeaf bgp_rf_injected;
        static const ydk::Enum::YLeaf bgp_rf_inconsistent;
        static const ydk::Enum::YLeaf bgp_rf_community;
        static const ydk::Enum::YLeaf bgp_rf_extcommunity;
        static const ydk::Enum::YLeaf bgp_rf_oer_controlled;
        static const ydk::Enum::YLeaf bgp_rf_pending;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-rf-all") return 0;
            if (name == "bgp-rf-cidr-only") return 1;
            if (name == "bgp-rf-label") return 2;
            if (name == "bgp-rf-rib-failure") return 3;
            if (name == "bgp-rf-injected") return 4;
            if (name == "bgp-rf-inconsistent") return 5;
            if (name == "bgp-rf-community") return 6;
            if (name == "bgp-rf-extcommunity") return 7;
            if (name == "bgp-rf-oer-controlled") return 8;
            if (name == "bgp-rf-pending") return 9;
            return -1;
        }
};

class BgpNeighborRouteFilters : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_nrf_post_received;
        static const ydk::Enum::YLeaf bgp_nrf_pre_received;
        static const ydk::Enum::YLeaf bgp_nrf_pre_advertised;
        static const ydk::Enum::YLeaf bgp_nrf_post_advertised;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-nrf-post-received") return 0;
            if (name == "bgp-nrf-pre-received") return 1;
            if (name == "bgp-nrf-pre-advertised") return 2;
            if (name == "bgp-nrf-post-advertised") return 3;
            return -1;
        }
};

class BgpOriginCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf origin_igp;
        static const ydk::Enum::YLeaf origin_egp;
        static const ydk::Enum::YLeaf origin_incomplete;

        static int get_enum_value(const std::string & name) {
            if (name == "origin-igp") return 0;
            if (name == "origin-egp") return 1;
            if (name == "origin-incomplete") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_BGP_ROUTE_OPER_ */

