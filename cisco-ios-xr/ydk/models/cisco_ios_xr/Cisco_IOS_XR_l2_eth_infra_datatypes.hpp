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

        static int get_enum_value(const std::string & name) {
            if (name == "native-with-cvlan-preservation") return 65534;
            return -1;
        }
};

class Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_type_dot1ad;
        static const ydk::Enum::YLeaf vlan_type_dot1q;

        static int get_enum_value(const std::string & name) {
            if (name == "vlan-type-dot1ad") return 1;
            if (name == "vlan-type-dot1q") return 2;
            return -1;
        }
};

class VsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trunk;
        static const ydk::Enum::YLeaf access;

        static int get_enum_value(const std::string & name) {
            if (name == "trunk") return 1;
            if (name == "access") return 2;
            return -1;
        }
};

class EthertypeMatch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_over_ethernet;

        static int get_enum_value(const std::string & name) {
            if (name == "ppp-over-ethernet") return 34915;
            return -1;
        }
};

class VlanTagOrNull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "pop1") return 1;
            if (name == "pop2") return 2;
            if (name == "push1") return 3;
            if (name == "push2") return 4;
            if (name == "translate1to1") return 5;
            if (name == "translate1to2") return 6;
            if (name == "translate2to1") return 7;
            if (name == "translate2to2") return 8;
            return -1;
        }
};

class VlanTagOrAny : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 4096;
            return -1;
        }
};

class VlanTagOrNative : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf native;
        static const ydk::Enum::YLeaf native_with_cvlan_preservation;

        static int get_enum_value(const std::string & name) {
            if (name == "native") return 65535;
            if (name == "native-with-cvlan-preservation") return 65534;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "match-default") return 1;
            if (name == "match-untagged") return 2;
            if (name == "match-dot1q") return 3;
            if (name == "match-dot1ad") return 4;
            if (name == "match-dot1q-priority") return 5;
            if (name == "match-dot1ad-priority") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_DATATYPES_ */

