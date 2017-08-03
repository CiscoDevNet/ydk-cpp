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

class LspOperStatus : public virtual ydk::Identity
{
    public:
        LspOperStatus();
        ~LspOperStatus();


}; // LspOperStatus

class TunnelType : public virtual ydk::Identity
{
    public:
        TunnelType();
        ~TunnelType();


}; // TunnelType

class LspRole : public virtual ydk::Identity
{
    public:
        LspRole();
        ~LspRole();


}; // LspRole

class ProtectionType : public virtual ydk::Identity
{
    public:
        ProtectionType();
        ~ProtectionType();


}; // ProtectionType

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

class Admin_Down : public openconfig_mpls_types::TunnelAdminStatus, virtual ydk::Identity
{
    public:
        Admin_Down();
        ~Admin_Down();


}; // Admin_Down

class Admin_Up : public openconfig_mpls_types::TunnelAdminStatus, virtual ydk::Identity
{
    public:
        Admin_Up();
        ~Admin_Up();


}; // Admin_Up

class LinkNodeProtectionRequested : public openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        LinkNodeProtectionRequested();
        ~LinkNodeProtectionRequested();


}; // LinkNodeProtectionRequested

class Ingress : public openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        Ingress();
        ~Ingress();


}; // Ingress

class LinkProtectionRequested : public openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        LinkProtectionRequested();
        ~LinkProtectionRequested();


}; // LinkProtectionRequested

class Implicit : public openconfig_mpls_types::NullLabelType, virtual ydk::Identity
{
    public:
        Implicit();
        ~Implicit();


}; // Implicit

class Explicit_ : public openconfig_mpls_types::NullLabelType, virtual ydk::Identity
{
    public:
        Explicit_();
        ~Explicit_();


}; // Explicit_

class Transit : public openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        Transit();
        ~Transit();


}; // Transit

class Egress : public openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        Egress();
        ~Egress();


}; // Egress

class PathSetupSr : public openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupSr();
        ~PathSetupSr();


}; // PathSetupSr

class Up : public openconfig_mpls_types::LspOperStatus, virtual ydk::Identity
{
    public:
        Up();
        ~Up();


}; // Up

class P2Mp : public openconfig_mpls_types::TunnelType, virtual ydk::Identity
{
    public:
        P2Mp();
        ~P2Mp();


}; // P2Mp

class PathSetupRsvp : public openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupRsvp();
        ~PathSetupRsvp();


}; // PathSetupRsvp

class Unprotected : public openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        Unprotected();
        ~Unprotected();


}; // Unprotected

class P2P : public openconfig_mpls_types::TunnelType, virtual ydk::Identity
{
    public:
        P2P();
        ~P2P();


}; // P2P

class PathSetupLdp : public openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupLdp();
        ~PathSetupLdp();


}; // PathSetupLdp

class Down : public openconfig_mpls_types::LspOperStatus, virtual ydk::Identity
{
    public:
        Down();
        ~Down();


}; // Down

class TunnelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf P2P;
        static const ydk::Enum::YLeaf P2MP;
        static const ydk::Enum::YLeaf MP2MP;

};

class MplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf ROUTER_ALERT;
        static const ydk::Enum::YLeaf IPV6_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf IMPLICIT_NULL;
        static const ydk::Enum::YLeaf ENTROPY_LABEL_INDICATOR;

};


}
}

#endif /* _OPENCONFIG_MPLS_TYPES_ */

