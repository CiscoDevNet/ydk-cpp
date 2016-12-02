#ifndef _CISCO_IOS_XR_ETHERNET_CFM_CFG_
#define _CISCO_IOS_XR_ETHERNET_CFM_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_cfm_cfg {


class CfmLmCountersCfgEnum : public Enum
{
    public:
        static const Enum::Value aggregate;
        static const Enum::Value list;
        static const Enum::Value range;

};

class CfmMdidFormatEnum : public Enum
{
    public:
        static const Enum::Value null;
        static const Enum::Value dns_like;
        static const Enum::Value mac_address;
        static const Enum::Value string;

};

class CfmShortMaNameFormatEnum : public Enum
{
    public:
        static const Enum::Value vlan_id;
        static const Enum::Value string;
        static const Enum::Value number;
        static const Enum::Value vpn_id;
        static const Enum::Value icc_based;

};

class CfmServiceEnum : public Enum
{
    public:
        static const Enum::Value bridge_domain;
        static const Enum::Value p2p_cross_connect;
        static const Enum::Value mp2mp_cross_connect;
        static const Enum::Value down_meps;

};

class CfmMipPolicyEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value lower_mep_only;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_CFG_ */

