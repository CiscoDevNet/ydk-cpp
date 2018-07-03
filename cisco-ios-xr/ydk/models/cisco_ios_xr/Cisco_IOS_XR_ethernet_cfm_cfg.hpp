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

};

class CfmMdidFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf dns_like;
        static const ydk::Enum::YLeaf mac_address;
        static const ydk::Enum::YLeaf string;

};

class CfmShortMaNameFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_id;
        static const ydk::Enum::YLeaf string;
        static const ydk::Enum::YLeaf number;
        static const ydk::Enum::YLeaf vpn_id;
        static const ydk::Enum::YLeaf icc_based;

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

};

class CfmMipPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lower_mep_only;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_CFG_ */

