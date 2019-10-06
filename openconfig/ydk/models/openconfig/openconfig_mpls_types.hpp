#ifndef _OPENCONFIG_MPLS_TYPES_
#define _OPENCONFIG_MPLS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_mpls_types {

class PROTECTIONTYPE : public virtual ydk::Identity
{
    public:
        PROTECTIONTYPE();
        ~PROTECTIONTYPE();


}; // PROTECTIONTYPE

class PATHSETUPPROTOCOL : public virtual ydk::Identity
{
    public:
        PATHSETUPPROTOCOL();
        ~PATHSETUPPROTOCOL();


}; // PATHSETUPPROTOCOL

class PATHCOMPUTATIONMETHOD : public virtual ydk::Identity
{
    public:
        PATHCOMPUTATIONMETHOD();
        ~PATHCOMPUTATIONMETHOD();


}; // PATHCOMPUTATIONMETHOD

class TUNNELADMINSTATUS : public virtual ydk::Identity
{
    public:
        TUNNELADMINSTATUS();
        ~TUNNELADMINSTATUS();


}; // TUNNELADMINSTATUS

class TUNNELTYPE : public virtual ydk::Identity
{
    public:
        TUNNELTYPE();
        ~TUNNELTYPE();


}; // TUNNELTYPE

class NULLLABELTYPE : public virtual ydk::Identity
{
    public:
        NULLLABELTYPE();
        ~NULLLABELTYPE();


}; // NULLLABELTYPE

class LSPOPERSTATUS : public virtual ydk::Identity
{
    public:
        LSPOPERSTATUS();
        ~LSPOPERSTATUS();


}; // LSPOPERSTATUS

class LSPMETRICTYPE : public virtual ydk::Identity
{
    public:
        LSPMETRICTYPE();
        ~LSPMETRICTYPE();


}; // LSPMETRICTYPE

class LSPROLE : public virtual ydk::Identity
{
    public:
        LSPROLE();
        ~LSPROLE();


}; // LSPROLE

class LSPMETRICINHERITED : public openconfig::openconfig_mpls_types::LSPMETRICTYPE, virtual ydk::Identity
{
    public:
        LSPMETRICINHERITED();
        ~LSPMETRICINHERITED();


}; // LSPMETRICINHERITED

class DOWN : public openconfig::openconfig_mpls_types::LSPOPERSTATUS, virtual ydk::Identity
{
    public:
        DOWN();
        ~DOWN();


}; // DOWN

class LOCALLYCOMPUTED : public openconfig::openconfig_mpls_types::PATHCOMPUTATIONMETHOD, virtual ydk::Identity
{
    public:
        LOCALLYCOMPUTED();
        ~LOCALLYCOMPUTED();


}; // LOCALLYCOMPUTED

class P2P : public openconfig::openconfig_mpls_types::TUNNELTYPE, virtual ydk::Identity
{
    public:
        P2P();
        ~P2P();


}; // P2P

class PATHSETUPSR : public openconfig::openconfig_mpls_types::PATHSETUPPROTOCOL, virtual ydk::Identity
{
    public:
        PATHSETUPSR();
        ~PATHSETUPSR();


}; // PATHSETUPSR

class INGRESS : public openconfig::openconfig_mpls_types::LSPROLE, virtual ydk::Identity
{
    public:
        INGRESS();
        ~INGRESS();


}; // INGRESS

class PATHSETUPRSVP : public openconfig::openconfig_mpls_types::PATHSETUPPROTOCOL, virtual ydk::Identity
{
    public:
        PATHSETUPRSVP();
        ~PATHSETUPRSVP();


}; // PATHSETUPRSVP

class PATHSETUPLDP : public openconfig::openconfig_mpls_types::PATHSETUPPROTOCOL, virtual ydk::Identity
{
    public:
        PATHSETUPLDP();
        ~PATHSETUPLDP();


}; // PATHSETUPLDP

class EXPLICIT : public openconfig::openconfig_mpls_types::NULLLABELTYPE, virtual ydk::Identity
{
    public:
        EXPLICIT();
        ~EXPLICIT();


}; // EXPLICIT

class ADMINUP : public openconfig::openconfig_mpls_types::TUNNELADMINSTATUS, virtual ydk::Identity
{
    public:
        ADMINUP();
        ~ADMINUP();


}; // ADMINUP

class P2MP : public openconfig::openconfig_mpls_types::TUNNELTYPE, virtual ydk::Identity
{
    public:
        P2MP();
        ~P2MP();


}; // P2MP

class LINKPROTECTIONREQUIRED : public openconfig::openconfig_mpls_types::PROTECTIONTYPE, virtual ydk::Identity
{
    public:
        LINKPROTECTIONREQUIRED();
        ~LINKPROTECTIONREQUIRED();


}; // LINKPROTECTIONREQUIRED

class EGRESS : public openconfig::openconfig_mpls_types::LSPROLE, virtual ydk::Identity
{
    public:
        EGRESS();
        ~EGRESS();


}; // EGRESS

class IMPLICIT : public openconfig::openconfig_mpls_types::NULLLABELTYPE, virtual ydk::Identity
{
    public:
        IMPLICIT();
        ~IMPLICIT();


}; // IMPLICIT

class LINKNODEPROTECTIONREQUESTED : public openconfig::openconfig_mpls_types::PROTECTIONTYPE, virtual ydk::Identity
{
    public:
        LINKNODEPROTECTIONREQUESTED();
        ~LINKNODEPROTECTIONREQUESTED();


}; // LINKNODEPROTECTIONREQUESTED

class LSPMETRICABSOLUTE : public openconfig::openconfig_mpls_types::LSPMETRICTYPE, virtual ydk::Identity
{
    public:
        LSPMETRICABSOLUTE();
        ~LSPMETRICABSOLUTE();


}; // LSPMETRICABSOLUTE

class EXTERNALLYQUERIED : public openconfig::openconfig_mpls_types::PATHCOMPUTATIONMETHOD, virtual ydk::Identity
{
    public:
        EXTERNALLYQUERIED();
        ~EXTERNALLYQUERIED();


}; // EXTERNALLYQUERIED

class ADMINDOWN : public openconfig::openconfig_mpls_types::TUNNELADMINSTATUS, virtual ydk::Identity
{
    public:
        ADMINDOWN();
        ~ADMINDOWN();


}; // ADMINDOWN

class EXPLICITLYDEFINED : public openconfig::openconfig_mpls_types::PATHCOMPUTATIONMETHOD, virtual ydk::Identity
{
    public:
        EXPLICITLYDEFINED();
        ~EXPLICITLYDEFINED();


}; // EXPLICITLYDEFINED

class TRANSIT : public openconfig::openconfig_mpls_types::LSPROLE, virtual ydk::Identity
{
    public:
        TRANSIT();
        ~TRANSIT();


}; // TRANSIT

class UP : public openconfig::openconfig_mpls_types::LSPOPERSTATUS, virtual ydk::Identity
{
    public:
        UP();
        ~UP();


}; // UP

class LSPMETRICRELATIVE : public openconfig::openconfig_mpls_types::LSPMETRICTYPE, virtual ydk::Identity
{
    public:
        LSPMETRICRELATIVE();
        ~LSPMETRICRELATIVE();


}; // LSPMETRICRELATIVE

class UNPROTECTED : public openconfig::openconfig_mpls_types::PROTECTIONTYPE, virtual ydk::Identity
{
    public:
        UNPROTECTED();
        ~UNPROTECTED();


}; // UNPROTECTED

class TunnelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf P2P;
        static const ydk::Enum::YLeaf P2MP;
        static const ydk::Enum::YLeaf MP2MP;

        static int get_enum_value(const std::string & name) {
            if (name == "P2P") return 0;
            if (name == "P2MP") return 1;
            if (name == "MP2MP") return 2;
            return -1;
        }
};

class MplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf ROUTER_ALERT;
        static const ydk::Enum::YLeaf IPV6_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf IMPLICIT_NULL;
        static const ydk::Enum::YLeaf ENTROPY_LABEL_INDICATOR;
        static const ydk::Enum::YLeaf NO_LABEL;

        static int get_enum_value(const std::string & name) {
            if (name == "IPV4_EXPLICIT_NULL") return 0;
            if (name == "ROUTER_ALERT") return 1;
            if (name == "IPV6_EXPLICIT_NULL") return 2;
            if (name == "IMPLICIT_NULL") return 3;
            if (name == "ENTROPY_LABEL_INDICATOR") return 7;
            if (name == "NO_LABEL") return 8;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_MPLS_TYPES_ */

