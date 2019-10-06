#ifndef _CISCO_IOS_XR_ETHERNET_CFM_CFG_
#define _CISCO_IOS_XR_ETHERNET_CFM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_cfm_cfg {

class CfmLmCountersCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aggregate;
        static const ydk::Enum::YLeaf list;
        static const ydk::Enum::YLeaf range;

        static int get_enum_value(const std::string & name) {
            if (name == "aggregate") return 1;
            if (name == "list") return 2;
            if (name == "range") return 3;
            return -1;
        }
};

class CfmMdidFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf dns_like;
        static const ydk::Enum::YLeaf mac_address;
        static const ydk::Enum::YLeaf string;

        static int get_enum_value(const std::string & name) {
            if (name == "null") return 1;
            if (name == "dns-like") return 2;
            if (name == "mac-address") return 3;
            if (name == "string") return 4;
            return -1;
        }
};

class CfmShortMaNameFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_id;
        static const ydk::Enum::YLeaf string;
        static const ydk::Enum::YLeaf number;
        static const ydk::Enum::YLeaf vpn_id;
        static const ydk::Enum::YLeaf icc_based;

        static int get_enum_value(const std::string & name) {
            if (name == "vlan-id") return 1;
            if (name == "string") return 2;
            if (name == "number") return 3;
            if (name == "vpn-id") return 4;
            if (name == "icc-based") return 32;
            return -1;
        }
};

class CfmService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bridge_domain;
        static const ydk::Enum::YLeaf p2p_cross_connect;
        static const ydk::Enum::YLeaf mp2mp_cross_connect;
        static const ydk::Enum::YLeaf vlan_aware_flexible_cross_connect;
        static const ydk::Enum::YLeaf vlan_unaware_flexible_cross_connect;
        static const ydk::Enum::YLeaf down_meps;

        static int get_enum_value(const std::string & name) {
            if (name == "bridge-domain") return 1;
            if (name == "p2p-cross-connect") return 2;
            if (name == "mp2mp-cross-connect") return 3;
            if (name == "vlan-aware-flexible-cross-connect") return 4;
            if (name == "vlan-unaware-flexible-cross-connect") return 5;
            if (name == "down-meps") return 6;
            return -1;
        }
};

class CfmMipPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lower_mep_only;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 2;
            if (name == "lower-mep-only") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_CFG_ */

