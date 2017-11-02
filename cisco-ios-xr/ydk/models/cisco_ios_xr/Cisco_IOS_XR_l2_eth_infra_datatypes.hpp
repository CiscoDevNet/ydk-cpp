#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_DATATYPES_
#define _CISCO_IOS_XR_L2_ETH_INFRA_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2_eth_infra_datatypes {

class VlanTagOrCvp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf native_with_cvlan_preservation;

};

class Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_type_dot1ad;
        static const ydk::Enum::YLeaf vlan_type_dot1q;

};

class VlanTagOrNative : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf native;
        static const ydk::Enum::YLeaf native_with_cvlan_preservation;

};

class VlanTagOrNull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Rewrite : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pop1;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf push1;
        static const ydk::Enum::YLeaf push2;
        static const ydk::Enum::YLeaf translate1to1;
        static const ydk::Enum::YLeaf translate1to2;
        static const ydk::Enum::YLeaf translate2to1;
        static const ydk::Enum::YLeaf translate2to2;

};

class Match : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_default;
        static const ydk::Enum::YLeaf match_untagged;
        static const ydk::Enum::YLeaf match_dot1q;
        static const ydk::Enum::YLeaf match_dot1ad;
        static const ydk::Enum::YLeaf match_dot1q_priority;
        static const ydk::Enum::YLeaf match_dot1ad_priority;

};

class EthertypeMatch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_over_ethernet;

};

class VlanTagOrAny : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_DATATYPES_ */

