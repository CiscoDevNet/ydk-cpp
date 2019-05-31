#ifndef _OPENCONFIG_MPLS_TYPES_
#define _OPENCONFIG_MPLS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_mpls_types {

class PATHCOMPUTATIONMETHOD : public virtual ydk::Identity
{
    public:
        PATHCOMPUTATIONMETHOD();
        ~PATHCOMPUTATIONMETHOD();


}; // PATHCOMPUTATIONMETHOD

class PATHSETUPPROTOCOL : public virtual ydk::Identity
{
    public:
        PATHSETUPPROTOCOL();
        ~PATHSETUPPROTOCOL();


}; // PATHSETUPPROTOCOL

class PROTECTIONTYPE : public virtual ydk::Identity
{
    public:
        PROTECTIONTYPE();
        ~PROTECTIONTYPE();


}; // PROTECTIONTYPE

class LSPROLE : public virtual ydk::Identity
{
    public:
        LSPROLE();
        ~LSPROLE();


}; // LSPROLE

class TUNNELTYPE : public virtual ydk::Identity
{
    public:
        TUNNELTYPE();
        ~TUNNELTYPE();


}; // TUNNELTYPE

class LSPOPERSTATUS : public virtual ydk::Identity
{
    public:
        LSPOPERSTATUS();
        ~LSPOPERSTATUS();


}; // LSPOPERSTATUS

class TUNNELADMINSTATUS : public virtual ydk::Identity
{
    public:
        TUNNELADMINSTATUS();
        ~TUNNELADMINSTATUS();


}; // TUNNELADMINSTATUS

class NULLLABELTYPE : public virtual ydk::Identity
{
    public:
        NULLLABELTYPE();
        ~NULLLABELTYPE();


}; // NULLLABELTYPE

class LSPMETRICTYPE : public virtual ydk::Identity
{
    public:
        LSPMETRICTYPE();
        ~LSPMETRICTYPE();


}; // LSPMETRICTYPE

class LOCALLYCOMPUTED : public openconfig::openconfig_mpls_types::PATHCOMPUTATIONMETHOD, virtual ydk::Identity
{
    public:
        LOCALLYCOMPUTED();
        ~LOCALLYCOMPUTED();


}; // LOCALLYCOMPUTED

class EXTERNALLYQUERIED : public openconfig::openconfig_mpls_types::PATHCOMPUTATIONMETHOD, virtual ydk::Identity
{
    public:
        EXTERNALLYQUERIED();
        ~EXTERNALLYQUERIED();


}; // EXTERNALLYQUERIED

class EXPLICITLYDEFINED : public openconfig::openconfig_mpls_types::PATHCOMPUTATIONMETHOD, virtual ydk::Identity
{
    public:
        EXPLICITLYDEFINED();
        ~EXPLICITLYDEFINED();


}; // EXPLICITLYDEFINED

class PATHSETUPRSVP : public openconfig::openconfig_mpls_types::PATHSETUPPROTOCOL, virtual ydk::Identity
{
    public:
        PATHSETUPRSVP();
        ~PATHSETUPRSVP();


}; // PATHSETUPRSVP

class PATHSETUPSR : public openconfig::openconfig_mpls_types::PATHSETUPPROTOCOL, virtual ydk::Identity
{
    public:
        PATHSETUPSR();
        ~PATHSETUPSR();


}; // PATHSETUPSR

class PATHSETUPLDP : public openconfig::openconfig_mpls_types::PATHSETUPPROTOCOL, virtual ydk::Identity
{
    public:
        PATHSETUPLDP();
        ~PATHSETUPLDP();


}; // PATHSETUPLDP

class UNPROTECTED : public openconfig::openconfig_mpls_types::PROTECTIONTYPE, virtual ydk::Identity
{
    public:
        UNPROTECTED();
        ~UNPROTECTED();


}; // UNPROTECTED

class LINKPROTECTIONREQUIRED : public openconfig::openconfig_mpls_types::PROTECTIONTYPE, virtual ydk::Identity
{
    public:
        LINKPROTECTIONREQUIRED();
        ~LINKPROTECTIONREQUIRED();


}; // LINKPROTECTIONREQUIRED

class LINKNODEPROTECTIONREQUESTED : public openconfig::openconfig_mpls_types::PROTECTIONTYPE, virtual ydk::Identity
{
    public:
        LINKNODEPROTECTIONREQUESTED();
        ~LINKNODEPROTECTIONREQUESTED();


}; // LINKNODEPROTECTIONREQUESTED

class INGRESS : public openconfig::openconfig_mpls_types::LSPROLE, virtual ydk::Identity
{
    public:
        INGRESS();
        ~INGRESS();


}; // INGRESS

class EGRESS : public openconfig::openconfig_mpls_types::LSPROLE, virtual ydk::Identity
{
    public:
        EGRESS();
        ~EGRESS();


}; // EGRESS

class TRANSIT : public openconfig::openconfig_mpls_types::LSPROLE, virtual ydk::Identity
{
    public:
        TRANSIT();
        ~TRANSIT();


}; // TRANSIT

class P2P : public openconfig::openconfig_mpls_types::TUNNELTYPE, virtual ydk::Identity
{
    public:
        P2P();
        ~P2P();


}; // P2P

class P2MP : public openconfig::openconfig_mpls_types::TUNNELTYPE, virtual ydk::Identity
{
    public:
        P2MP();
        ~P2MP();


}; // P2MP

class DOWN : public openconfig::openconfig_mpls_types::LSPOPERSTATUS, virtual ydk::Identity
{
    public:
        DOWN();
        ~DOWN();


}; // DOWN

class UP : public openconfig::openconfig_mpls_types::LSPOPERSTATUS, virtual ydk::Identity
{
    public:
        UP();
        ~UP();


}; // UP

class ADMINDOWN : public openconfig::openconfig_mpls_types::TUNNELADMINSTATUS, virtual ydk::Identity
{
    public:
        ADMINDOWN();
        ~ADMINDOWN();


}; // ADMINDOWN

class ADMINUP : public openconfig::openconfig_mpls_types::TUNNELADMINSTATUS, virtual ydk::Identity
{
    public:
        ADMINUP();
        ~ADMINUP();


}; // ADMINUP

class EXPLICIT : public openconfig::openconfig_mpls_types::NULLLABELTYPE, virtual ydk::Identity
{
    public:
        EXPLICIT();
        ~EXPLICIT();


}; // EXPLICIT

class IMPLICIT : public openconfig::openconfig_mpls_types::NULLLABELTYPE, virtual ydk::Identity
{
    public:
        IMPLICIT();
        ~IMPLICIT();


}; // IMPLICIT

class LSPMETRICRELATIVE : public openconfig::openconfig_mpls_types::LSPMETRICTYPE, virtual ydk::Identity
{
    public:
        LSPMETRICRELATIVE();
        ~LSPMETRICRELATIVE();


}; // LSPMETRICRELATIVE

class LSPMETRICABSOLUTE : public openconfig::openconfig_mpls_types::LSPMETRICTYPE, virtual ydk::Identity
{
    public:
        LSPMETRICABSOLUTE();
        ~LSPMETRICABSOLUTE();


}; // LSPMETRICABSOLUTE

class LSPMETRICINHERITED : public openconfig::openconfig_mpls_types::LSPMETRICTYPE, virtual ydk::Identity
{
    public:
        LSPMETRICINHERITED();
        ~LSPMETRICINHERITED();


}; // LSPMETRICINHERITED

class MplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf ROUTER_ALERT;
        static const ydk::Enum::YLeaf IPV6_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf IMPLICIT_NULL;
        static const ydk::Enum::YLeaf ENTROPY_LABEL_INDICATOR;
        static const ydk::Enum::YLeaf NO_LABEL;

};

class TunnelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf P2P;
        static const ydk::Enum::YLeaf P2MP;
        static const ydk::Enum::YLeaf MP2MP;

};


}
}

#endif /* _OPENCONFIG_MPLS_TYPES_ */

