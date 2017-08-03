#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_management_oper {

class HostAfIdBase : public virtual ydk::Identity
{
    public:
        HostAfIdBase();
        ~HostAfIdBase();


}; // HostAfIdBase

class Ipv6 : public Cisco_IOS_XR_tty_management_oper::HostAfIdBase, virtual ydk::Identity
{
    public:
        Ipv6();
        ~Ipv6();


}; // Ipv6

class Ipv4 : public Cisco_IOS_XR_tty_management_oper::HostAfIdBase, virtual ydk::Identity
{
    public:
        Ipv4();
        ~Ipv4();


}; // Ipv4

class TransportService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_ */

