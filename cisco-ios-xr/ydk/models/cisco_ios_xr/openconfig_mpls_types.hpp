#ifndef _OPENCONFIG_MPLS_TYPES_
#define _OPENCONFIG_MPLS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace openconfig_mpls_types {

class TunnelAdminStatus : public virtual ydk::Identity
{
    public:
        TunnelAdminStatus();
        ~TunnelAdminStatus();


}; // TunnelAdminStatus

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

class NullLabelType : public virtual ydk::Identity
{
    public:
        NullLabelType();
        ~NullLabelType();


}; // NullLabelType

class PathSetupProtocol : public virtual ydk::Identity
{
    public:
        PathSetupProtocol();
        ~PathSetupProtocol();


}; // PathSetupProtocol

class TunnelType_ : public virtual ydk::Identity
{
    public:
        TunnelType_();
        ~TunnelType_();


}; // TunnelType

class LspOperStatus : public virtual ydk::Identity
{
    public:
        LspOperStatus();
        ~LspOperStatus();


}; // LspOperStatus

class Ingress : public openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        Ingress();
        ~Ingress();


}; // Ingress

class Implicit : public openconfig_mpls_types::NullLabelType, virtual ydk::Identity
{
    public:
        Implicit();
        ~Implicit();


}; // Implicit

class P2P : public openconfig_mpls_types::TunnelType_, virtual ydk::Identity
{
    public:
        P2P();
        ~P2P();


}; // P2P

class P2Mp : public openconfig_mpls_types::TunnelType_, virtual ydk::Identity
{
    public:
        P2Mp();
        ~P2Mp();


}; // P2Mp

class Up : public openconfig_mpls_types::LspOperStatus, virtual ydk::Identity
{
    public:
        Up();
        ~Up();


}; // Up

class LinkNodeProtectionRequested : public openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        LinkNodeProtectionRequested();
        ~LinkNodeProtectionRequested();


}; // LinkNodeProtectionRequested

class Unprotected : public openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        Unprotected();
        ~Unprotected();


}; // Unprotected

class Admin_Down : public openconfig_mpls_types::TunnelAdminStatus, virtual ydk::Identity
{
    public:
        Admin_Down();
        ~Admin_Down();


}; // Admin_Down

class Transit : public openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        Transit();
        ~Transit();


}; // Transit

class Admin_Up : public openconfig_mpls_types::TunnelAdminStatus, virtual ydk::Identity
{
    public:
        Admin_Up();
        ~Admin_Up();


}; // Admin_Up

class PathSetupSr : public openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupSr();
        ~PathSetupSr();


}; // PathSetupSr

class LinkProtectionRequested : public openconfig_mpls_types::ProtectionType, virtual ydk::Identity
{
    public:
        LinkProtectionRequested();
        ~LinkProtectionRequested();


}; // LinkProtectionRequested

class Explicit_ : public openconfig_mpls_types::NullLabelType, virtual ydk::Identity
{
    public:
        Explicit_();
        ~Explicit_();


}; // Explicit_

class Down : public openconfig_mpls_types::LspOperStatus, virtual ydk::Identity
{
    public:
        Down();
        ~Down();


}; // Down

class PathSetupRsvp : public openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupRsvp();
        ~PathSetupRsvp();


}; // PathSetupRsvp

class Egress : public openconfig_mpls_types::LspRole, virtual ydk::Identity
{
    public:
        Egress();
        ~Egress();


}; // Egress

class PathSetupLdp : public openconfig_mpls_types::PathSetupProtocol, virtual ydk::Identity
{
    public:
        PathSetupLdp();
        ~PathSetupLdp();


}; // PathSetupLdp

class MplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf ROUTER_ALERT;
        static const ydk::Enum::YLeaf IPV6_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf IMPLICIT_NULL;
        static const ydk::Enum::YLeaf ENTROPY_LABEL_INDICATOR;

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

