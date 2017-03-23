#ifndef _CISCO_IOS_XR_ETHERNET_CFM_CFG_
#define _CISCO_IOS_XR_ETHERNET_CFM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ethernet_cfm_cfg {

class CfmLmCountersCfgEnum : public Enum
{
    public:
        static const Enum::YLeaf aggregate;
        static const Enum::YLeaf list;
        static const Enum::YLeaf range;

};

class CfmMdidFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf null;
        static const Enum::YLeaf dns_like;
        static const Enum::YLeaf mac_address;
        static const Enum::YLeaf string;

};

class CfmShortMaNameFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf vlan_id;
        static const Enum::YLeaf string;
        static const Enum::YLeaf number;
        static const Enum::YLeaf vpn_id;
        static const Enum::YLeaf icc_based;

};

class CfmServiceEnum : public Enum
{
    public:
        static const Enum::YLeaf bridge_domain;
        static const Enum::YLeaf p2p_cross_connect;
        static const Enum::YLeaf mp2mp_cross_connect;
        static const Enum::YLeaf down_meps;

};

class CfmMipPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf lower_mep_only;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_CFG_ */

