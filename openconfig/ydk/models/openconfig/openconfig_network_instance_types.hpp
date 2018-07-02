#ifndef _OPENCONFIG_NETWORK_INSTANCE_TYPES_
#define _OPENCONFIG_NETWORK_INSTANCE_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_network_instance_types {

class SIGNALLINGPROTOCOL : public virtual ydk::Identity
{
    public:
        SIGNALLINGPROTOCOL();
        ~SIGNALLINGPROTOCOL();


}; // SIGNALLINGPROTOCOL

class LABELALLOCATIONMODE : public virtual ydk::Identity
{
    public:
        LABELALLOCATIONMODE();
        ~LABELALLOCATIONMODE();


}; // LABELALLOCATIONMODE

class ENDPOINTTYPE : public virtual ydk::Identity
{
    public:
        ENDPOINTTYPE();
        ~ENDPOINTTYPE();


}; // ENDPOINTTYPE

class ENCAPSULATION : public virtual ydk::Identity
{
    public:
        ENCAPSULATION();
        ~ENCAPSULATION();


}; // ENCAPSULATION

class NETWORKINSTANCETYPE : public virtual ydk::Identity
{
    public:
        NETWORKINSTANCETYPE();
        ~NETWORKINSTANCETYPE();


}; // NETWORKINSTANCETYPE

class INSTANCELABEL : public openconfig::openconfig_network_instance_types::LABELALLOCATIONMODE, virtual ydk::Identity
{
    public:
        INSTANCELABEL();
        ~INSTANCELABEL();


}; // INSTANCELABEL

class L2VSI : public openconfig::openconfig_network_instance_types::NETWORKINSTANCETYPE, virtual ydk::Identity
{
    public:
        L2VSI();
        ~L2VSI();


}; // L2VSI

class L3VRF : public openconfig::openconfig_network_instance_types::NETWORKINSTANCETYPE, virtual ydk::Identity
{
    public:
        L3VRF();
        ~L3VRF();


}; // L3VRF

class REMOTE : public openconfig::openconfig_network_instance_types::ENDPOINTTYPE, virtual ydk::Identity
{
    public:
        REMOTE();
        ~REMOTE();


}; // REMOTE

class LDP : public openconfig::openconfig_network_instance_types::SIGNALLINGPROTOCOL, virtual ydk::Identity
{
    public:
        LDP();
        ~LDP();


}; // LDP

class PERPREFIX : public openconfig::openconfig_network_instance_types::LABELALLOCATIONMODE, virtual ydk::Identity
{
    public:
        PERPREFIX();
        ~PERPREFIX();


}; // PERPREFIX

class MPLS : public openconfig::openconfig_network_instance_types::ENCAPSULATION, virtual ydk::Identity
{
    public:
        MPLS();
        ~MPLS();


}; // MPLS

class BGPVPLS : public openconfig::openconfig_network_instance_types::SIGNALLINGPROTOCOL, virtual ydk::Identity
{
    public:
        BGPVPLS();
        ~BGPVPLS();


}; // BGPVPLS

class BGPEVPN : public openconfig::openconfig_network_instance_types::SIGNALLINGPROTOCOL, virtual ydk::Identity
{
    public:
        BGPEVPN();
        ~BGPEVPN();


}; // BGPEVPN

class L2P2P : public openconfig::openconfig_network_instance_types::NETWORKINSTANCETYPE, virtual ydk::Identity
{
    public:
        L2P2P();
        ~L2P2P();


}; // L2P2P

class DEFAULTINSTANCE : public openconfig::openconfig_network_instance_types::NETWORKINSTANCETYPE, virtual ydk::Identity
{
    public:
        DEFAULTINSTANCE();
        ~DEFAULTINSTANCE();


}; // DEFAULTINSTANCE

class LOCAL : public openconfig::openconfig_network_instance_types::ENDPOINTTYPE, virtual ydk::Identity
{
    public:
        LOCAL();
        ~LOCAL();


}; // LOCAL

class L2L3 : public openconfig::openconfig_network_instance_types::NETWORKINSTANCETYPE, virtual ydk::Identity
{
    public:
        L2L3();
        ~L2L3();


}; // L2L3

class VXLAN : public openconfig::openconfig_network_instance_types::ENCAPSULATION, virtual ydk::Identity
{
    public:
        VXLAN();
        ~VXLAN();


}; // VXLAN

class PERNEXTHOP : public openconfig::openconfig_network_instance_types::LABELALLOCATIONMODE, virtual ydk::Identity
{
    public:
        PERNEXTHOP();
        ~PERNEXTHOP();


}; // PERNEXTHOP


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_TYPES_ */

