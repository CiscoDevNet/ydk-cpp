#ifndef _IETF_DIFFSERV_TARGET_
#define _IETF_DIFFSERV_TARGET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ietf_diffserv_target {

class DirectionIdentity : public virtual Identity
{
    public:
        DirectionIdentity();
        ~DirectionIdentity();


}; // DirectionIdentity

class InboundIdentity : public ietf_diffserv_target::DirectionIdentity, virtual Identity
{
    public:
        InboundIdentity();
        ~InboundIdentity();


}; // InboundIdentity

class OutboundIdentity : public ietf_diffserv_target::DirectionIdentity, virtual Identity
{
    public:
        OutboundIdentity();
        ~OutboundIdentity();


}; // OutboundIdentity


}
}

#endif /* _IETF_DIFFSERV_TARGET_ */

