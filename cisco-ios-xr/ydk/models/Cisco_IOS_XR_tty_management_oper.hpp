#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_management_oper {

class HostAfIdBaseIdentity : public virtual Identity
{
    public:
        HostAfIdBaseIdentity();
        ~HostAfIdBaseIdentity();





}; // HostAfIdBaseIdentity

class Ipv4Identity : public Cisco_IOS_XR_tty_management_oper::HostAfIdBaseIdentity, virtual Identity
{
    public:
        Ipv4Identity();
        ~Ipv4Identity();




}; // Ipv4Identity

class Ipv6Identity : public Cisco_IOS_XR_tty_management_oper::HostAfIdBaseIdentity, virtual Identity
{
    public:
        Ipv6Identity();
        ~Ipv6Identity();




}; // Ipv6Identity


class TransportServiceEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_ */

