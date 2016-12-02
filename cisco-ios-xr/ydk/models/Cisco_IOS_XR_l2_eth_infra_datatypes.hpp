#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_DATATYPES_
#define _CISCO_IOS_XR_L2_ETH_INFRA_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_datatypes {


class VlanTagOrCvpEnum : public Enum
{
    public:
        static const Enum::Value native_with_cvlan_preservation;

};

class RewriteEnum : public Enum
{
    public:
        static const Enum::Value pop1;
        static const Enum::Value pop2;
        static const Enum::Value push1;
        static const Enum::Value push2;
        static const Enum::Value translate1to1;
        static const Enum::Value translate1to2;
        static const Enum::Value translate2to1;
        static const Enum::Value translate2to2;

};

class VlanEnum : public Enum
{
    public:
        static const Enum::Value vlan_type_dot1ad;
        static const Enum::Value vlan_type_dot1q;

};

class EthertypeMatchEnum : public Enum
{
    public:
        static const Enum::Value ppp_over_ethernet;

};

class VlanTagOrNullEnum : public Enum
{
    public:
        static const Enum::Value any;

};

class VlanTagOrAnyEnum : public Enum
{
    public:
        static const Enum::Value any;

};

class VlanTagOrNativeEnum : public Enum
{
    public:
        static const Enum::Value native;
        static const Enum::Value native_with_cvlan_preservation;

};

class MatchEnum : public Enum
{
    public:
        static const Enum::Value match_default;
        static const Enum::Value match_untagged;
        static const Enum::Value match_dot1q;
        static const Enum::Value match_dot1ad;
        static const Enum::Value match_dot1q_priority;
        static const Enum::Value match_dot1ad_priority;

};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_DATATYPES_ */

