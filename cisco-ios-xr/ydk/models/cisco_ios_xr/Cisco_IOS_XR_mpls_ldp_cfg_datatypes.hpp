#ifndef _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_
#define _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_cfg_datatypes {

class MplsLdpRouterId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address;

};

class MplsLdpafName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class MplsLdpDownstreamOnDemand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer_acl;

};

class MplsLdpNbrPassword : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf specified;

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

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_ */

