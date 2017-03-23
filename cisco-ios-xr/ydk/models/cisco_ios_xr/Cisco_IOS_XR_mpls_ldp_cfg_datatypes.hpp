#ifndef _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_
#define _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_cfg_datatypes {

class MplsLdpNbrPasswordEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf specified;

};

class MplsLdpDownstreamOnDemandEnum : public Enum
{
    public:
        static const Enum::YLeaf peer_acl;

};

class MplsLdpRouterIdEnum : public Enum
{
    public:
        static const Enum::YLeaf address;

};

class MplsLdpafNameEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class MplsLdpSessionProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf for_;
        static const Enum::YLeaf all_with_duration;
        static const Enum::YLeaf for_with_duration;
        static const Enum::YLeaf all_with_forever;
        static const Enum::YLeaf for_with_forever;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_ */

