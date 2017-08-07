#ifndef _IETF_DIFFSERV_TARGET_
#define _IETF_DIFFSERV_TARGET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace ietf_diffserv_target {

class Direction : public virtual ydk::Identity
{
    public:
        Direction();
        ~Direction();


}; // Direction

class Outbound : public ietf_diffserv_target::Direction, virtual ydk::Identity
{
    public:
        Outbound();
        ~Outbound();


}; // Outbound

class Inbound : public ietf_diffserv_target::Direction, virtual ydk::Identity
{
    public:
        Inbound();
        ~Inbound();


}; // Inbound


}
}

#endif /* _IETF_DIFFSERV_TARGET_ */

