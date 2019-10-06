#ifndef _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_
#define _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_cfg_datatypes {

class MplsLdpNbrPassword : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf specified;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            if (name == "specified") return 2;
            return -1;
        }
};

class MplsLdpDownstreamOnDemand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer_acl;

        static int get_enum_value(const std::string & name) {
            if (name == "peer-acl") return 1;
            return -1;
        }
};

class MplsLdpRouterId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address;

        static int get_enum_value(const std::string & name) {
            if (name == "address") return 1;
            return -1;
        }
};

class MplsLdpafName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 4;
            if (name == "ipv6") return 6;
            return -1;
        }
};

class MplsLdpSessionProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf for_;
        static const ydk::Enum::YLeaf all_with_duration;
        static const ydk::Enum::YLeaf for_with_duration;
        static const ydk::Enum::YLeaf all_with_forever;
        static const ydk::Enum::YLeaf for_with_forever;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 1;
            if (name == "for") return 2;
            if (name == "all-with-duration") return 3;
            if (name == "for-with-duration") return 4;
            if (name == "all-with-forever") return 5;
            if (name == "for-with-forever") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_ */

