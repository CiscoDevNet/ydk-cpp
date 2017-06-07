#ifndef _CISCO_ROUTING_EXT_
#define _CISCO_ROUTING_EXT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_routing.hpp"

namespace ydk {
namespace cisco_routing_ext {

class BgpIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        BgpIdentity();
        ~BgpIdentity();


}; // BgpIdentity

class MobileIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        MobileIdentity();
        ~MobileIdentity();


}; // MobileIdentity

class EigrpIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        EigrpIdentity();
        ~EigrpIdentity();


}; // EigrpIdentity

class IsIsIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        IsIsIdentity();
        ~IsIsIdentity();


}; // IsIsIdentity

class RipIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        RipIdentity();
        ~RipIdentity();


}; // RipIdentity


}
}

#endif /* _CISCO_ROUTING_EXT_ */

