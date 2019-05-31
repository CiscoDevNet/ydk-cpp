#ifndef _CISCO_ROUTING_EXT_
#define _CISCO_ROUTING_EXT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_routing.hpp"

namespace cisco_ios_xe {
namespace cisco_routing_ext {

class Rip : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Rip();
        ~Rip();


}; // Rip

class IsIs : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        IsIs();
        ~IsIs();


}; // IsIs

class Bgp : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Bgp();
        ~Bgp();


}; // Bgp

class Eigrp : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Eigrp();
        ~Eigrp();


}; // Eigrp

class Igrp : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Igrp();
        ~Igrp();


}; // Igrp

class Nhrp : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Nhrp();
        ~Nhrp();


}; // Nhrp

class Hsrp : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Hsrp();
        ~Hsrp();


}; // Hsrp

class Lisp : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Lisp();
        ~Lisp();


}; // Lisp


}
}

#endif /* _CISCO_ROUTING_EXT_ */

