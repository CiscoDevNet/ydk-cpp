#ifndef _OPENCONFIG_MPLS_TYPES_
#define _OPENCONFIG_MPLS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_mpls_types {

class PathSetupProtocol : public virtual ydk::Identity
{
    public:
        PathSetupProtocol();
        ~PathSetupProtocol();


}; // PathSetupProtocol

class ProtectionType : public virtual ydk::Identity
{
    public:
        ProtectionType();
        ~ProtectionType();


}; // ProtectionType

class LspRole : public virtual ydk::Identity
{
    public:
        LspRole();
        ~LspRole();


}; // LspRole

class TunnelType : public virtual ydk::Identity
{
    public:
        TunnelType();
        ~TunnelType();


}; // TunnelType

class LspOperStatus : public virtual ydk::Identity
{
    public:
        LspOperStatus();
        ~LspOperStatus();


}; // LspOperStatus

class TunnelAdminStatus : public virtual ydk::Identity
{
    public:
        TunnelAdminStatus();
        ~TunnelAdminStatus();


}; // TunnelAdminStatus

class NullLabelType : public virtual ydk::Identity
{
    public:
        NullLabelType();
        ~NullLabelType();


}; // NullLabelType

class PATHSETUPPROTOCOL : public virtual ydk::Identity
{
    public:
        PATHSETUPPROTOCOL();
        ~PATHSETUPPROTOCOL();


}; // PATHSETUPPROTOCOL

class PathSetupRsvp : public openconfig::openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupRsvp();
        ~PathSetupRsvp();


}; // PathSetupRsvp

class PathSetupSr : public openconfig::openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupSr();
        ~PathSetupSr();


}; // PathSetupSr

class PathSetupLdp : public openconfig::openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupLdp();
        ~PathSetupLdp();


}; // PathSetupLdp

class Unprotected : public openconfig::openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        Unprotected();
        ~Unprotected();


}; // Unprotected

class LinkProtectionRequested : public openconfig::openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        LinkProtectionRequested();
        ~LinkProtectionRequested();


}; // LinkProtectionRequested

class LinkNodeProtectionRequested : public openconfig::openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        LinkNodeProtectionRequested();
        ~LinkNodeProtectionRequested();


}; // LinkNodeProtectionRequested

class INGRESS : public openconfig::openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        INGRESS();
        ~INGRESS();


}; // INGRESS

class EGRESS : public openconfig::openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        EGRESS();
        ~EGRESS();


}; // EGRESS

class TRANSIT : public openconfig::openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        TRANSIT();
        ~TRANSIT();


}; // TRANSIT

class P2P : public openconfig::openconfig_mpls_types::TunnelType, virtual ydk::Identity
{
    public:
        P2P();
        ~P2P();


}; // P2P

class P2MP : public openconfig::openconfig_mpls_types::TunnelType, virtual ydk::Identity
{
    public:
        P2MP();
        ~P2MP();


}; // P2MP

class DOWN : public openconfig::openconfig_mpls_types::LspOperStatus, virtual ydk::Identity
{
    public:
        DOWN();
        ~DOWN();


}; // DOWN

class UP : public openconfig::openconfig_mpls_types::LspOperStatus, virtual ydk::Identity
{
    public:
        UP();
        ~UP();


}; // UP

class ADMINDOWN : public openconfig::openconfig_mpls_types::TunnelAdminStatus, virtual ydk::Identity
{
    public:
        ADMINDOWN();
        ~ADMINDOWN();


}; // ADMINDOWN

class ADMINUP : public openconfig::openconfig_mpls_types::TunnelAdminStatus, virtual ydk::Identity
{
    public:
        ADMINUP();
        ~ADMINUP();


}; // ADMINUP

class EXPLICIT : public openconfig::openconfig_mpls_types::NullLabelType, virtual ydk::Identity
{
    public:
        EXPLICIT();
        ~EXPLICIT();


}; // EXPLICIT

class IMPLICIT : public openconfig::openconfig_mpls_types::NullLabelType, virtual ydk::Identity
{
    public:
        IMPLICIT();
        ~IMPLICIT();


}; // IMPLICIT

class MplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf ROUTER_ALERT;
        static const ydk::Enum::YLeaf IPV6_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf IMPLICIT_NULL;
        static const ydk::Enum::YLeaf ENTROPY_LABEL_INDICATOR;

};

class TunnelType_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf P2P;
        static const ydk::Enum::YLeaf P2MP;
        static const ydk::Enum::YLeaf MP2MP;

};


}
}

#endif /* _OPENCONFIG_MPLS_TYPES_ */

