#ifndef _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_
#define _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_cfg_datatypes {


class MplsLdpNbrPasswordEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value specified;

};

class MplsLdpDownstreamOnDemandEnum : public Enum
{
    public:
        static const Enum::Value peer_acl;

};

class MplsLdpRouterIdEnum : public Enum
{
    public:
        static const Enum::Value address;

};

class MplsLdpafNameEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class MplsLdpSessionProtectionEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value for_;
        static const Enum::Value all_with_duration;
        static const Enum::Value for_with_duration;
        static const Enum::Value all_with_forever;
        static const Enum::Value for_with_forever;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_CFG_DATATYPES_ */

