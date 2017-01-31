#ifndef _OPENCONFIG_MPLS_TYPES_
#define _OPENCONFIG_MPLS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_mpls_types {

class LspRoleIdentity : public virtual Identity
{
    public:
        LspRoleIdentity();
        ~LspRoleIdentity();





}; // LspRoleIdentity

class LspOperStatusIdentity : public virtual Identity
{
    public:
        LspOperStatusIdentity();
        ~LspOperStatusIdentity();





}; // LspOperStatusIdentity

class ProtectionTypeIdentity : public virtual Identity
{
    public:
        ProtectionTypeIdentity();
        ~ProtectionTypeIdentity();





}; // ProtectionTypeIdentity

class TunnelAdminStatusIdentity : public virtual Identity
{
    public:
        TunnelAdminStatusIdentity();
        ~TunnelAdminStatusIdentity();





}; // TunnelAdminStatusIdentity

class NullLabelTypeIdentity : public virtual Identity
{
    public:
        NullLabelTypeIdentity();
        ~NullLabelTypeIdentity();





}; // NullLabelTypeIdentity

class TunnelTypeIdentity : public virtual Identity
{
    public:
        TunnelTypeIdentity();
        ~TunnelTypeIdentity();





}; // TunnelTypeIdentity

class PathSetupProtocolIdentity : public virtual Identity
{
    public:
        PathSetupProtocolIdentity();
        ~PathSetupProtocolIdentity();





}; // PathSetupProtocolIdentity

class PathSetupSrIdentity : public openconfig_mpls_types::PathSetupProtocolIdentity, virtual Identity
{
    public:
        PathSetupSrIdentity();
        ~PathSetupSrIdentity();




}; // PathSetupSrIdentity

class DownIdentity : public openconfig_mpls_types::LspOperStatusIdentity, virtual Identity
{
    public:
        DownIdentity();
        ~DownIdentity();




}; // DownIdentity

class UnprotectedIdentity : public openconfig_mpls_types::ProtectionTypeIdentity, virtual Identity
{
    public:
        UnprotectedIdentity();
        ~UnprotectedIdentity();




}; // UnprotectedIdentity

class PathSetupLdpIdentity : public openconfig_mpls_types::PathSetupProtocolIdentity, virtual Identity
{
    public:
        PathSetupLdpIdentity();
        ~PathSetupLdpIdentity();




}; // PathSetupLdpIdentity

class P2PIdentity : public openconfig_mpls_types::TunnelTypeIdentity, virtual Identity
{
    public:
        P2PIdentity();
        ~P2PIdentity();




}; // P2PIdentity

class Admin_DownIdentity : public openconfig_mpls_types::TunnelAdminStatusIdentity, virtual Identity
{
    public:
        Admin_DownIdentity();
        ~Admin_DownIdentity();




}; // Admin_DownIdentity

class ExplicitIdentity : public openconfig_mpls_types::NullLabelTypeIdentity, virtual Identity
{
    public:
        ExplicitIdentity();
        ~ExplicitIdentity();




}; // ExplicitIdentity

class Admin_UpIdentity : public openconfig_mpls_types::TunnelAdminStatusIdentity, virtual Identity
{
    public:
        Admin_UpIdentity();
        ~Admin_UpIdentity();




}; // Admin_UpIdentity

class P2MpIdentity : public openconfig_mpls_types::TunnelTypeIdentity, virtual Identity
{
    public:
        P2MpIdentity();
        ~P2MpIdentity();




}; // P2MpIdentity

class PathSetupRsvpIdentity : public openconfig_mpls_types::PathSetupProtocolIdentity, virtual Identity
{
    public:
        PathSetupRsvpIdentity();
        ~PathSetupRsvpIdentity();




}; // PathSetupRsvpIdentity

class IngressIdentity : public openconfig_mpls_types::LspRoleIdentity, virtual Identity
{
    public:
        IngressIdentity();
        ~IngressIdentity();




}; // IngressIdentity

class LinkProtectionRequestedIdentity : public openconfig_mpls_types::ProtectionTypeIdentity, virtual Identity
{
    public:
        LinkProtectionRequestedIdentity();
        ~LinkProtectionRequestedIdentity();




}; // LinkProtectionRequestedIdentity

class EgressIdentity : public openconfig_mpls_types::LspRoleIdentity, virtual Identity
{
    public:
        EgressIdentity();
        ~EgressIdentity();




}; // EgressIdentity

class LinkNodeProtectionRequestedIdentity : public openconfig_mpls_types::ProtectionTypeIdentity, virtual Identity
{
    public:
        LinkNodeProtectionRequestedIdentity();
        ~LinkNodeProtectionRequestedIdentity();




}; // LinkNodeProtectionRequestedIdentity

class ImplicitIdentity : public openconfig_mpls_types::NullLabelTypeIdentity, virtual Identity
{
    public:
        ImplicitIdentity();
        ~ImplicitIdentity();




}; // ImplicitIdentity

class TransitIdentity : public openconfig_mpls_types::LspRoleIdentity, virtual Identity
{
    public:
        TransitIdentity();
        ~TransitIdentity();




}; // TransitIdentity

class UpIdentity : public openconfig_mpls_types::LspOperStatusIdentity, virtual Identity
{
    public:
        UpIdentity();
        ~UpIdentity();




}; // UpIdentity


class TunnelTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf P2P;
        static const Enum::YLeaf P2MP;
        static const Enum::YLeaf MP2MP;

};

class MplsLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf IPV4_EXPLICIT_NULL;
        static const Enum::YLeaf ROUTER_ALERT;
        static const Enum::YLeaf IPV6_EXPLICIT_NULL;
        static const Enum::YLeaf IMPLICIT_NULL;
        static const Enum::YLeaf ENTROPY_LABEL_INDICATOR;

};


}
}

#endif /* _OPENCONFIG_MPLS_TYPES_ */

