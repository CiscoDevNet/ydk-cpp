#ifndef _IETF_DIFFSERV_TARGET_
#define _IETF_DIFFSERV_TARGET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_diffserv_target {

class Direction : public virtual ydk::Identity
{
    public:
        Direction();
        ~Direction();


}; // Direction

class Inbound : public ietf::ietf_diffserv_target::Direction, virtual ydk::Identity
{
    public:
        Inbound();
        ~Inbound();


}; // Inbound

class Outbound : public ietf::ietf_diffserv_target::Direction, virtual ydk::Identity
{
    public:
        Outbound();
        ~Outbound();


}; // Outbound


}
}

#endif /* _IETF_DIFFSERV_TARGET_ */

