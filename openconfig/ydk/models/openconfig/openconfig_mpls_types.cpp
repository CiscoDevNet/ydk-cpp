
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls_types.hpp"

namespace ydk {
namespace openconfig_mpls_types {

LspRoleIdentity::LspRoleIdentity()
     : Identity("openconfig-mpls-types:lsp-role")
{
}

LspRoleIdentity::~LspRoleIdentity()
{
}

LspOperStatusIdentity::LspOperStatusIdentity()
     : Identity("openconfig-mpls-types:lsp-oper-status")
{
}

LspOperStatusIdentity::~LspOperStatusIdentity()
{
}

ProtectionTypeIdentity::ProtectionTypeIdentity()
     : Identity("openconfig-mpls-types:protection-type")
{
}

ProtectionTypeIdentity::~ProtectionTypeIdentity()
{
}

TunnelAdminStatusIdentity::TunnelAdminStatusIdentity()
     : Identity("openconfig-mpls-types:tunnel-admin-status")
{
}

TunnelAdminStatusIdentity::~TunnelAdminStatusIdentity()
{
}

NullLabelTypeIdentity::NullLabelTypeIdentity()
     : Identity("openconfig-mpls-types:null-label-type")
{
}

NullLabelTypeIdentity::~NullLabelTypeIdentity()
{
}

TunnelTypeIdentity::TunnelTypeIdentity()
     : Identity("openconfig-mpls-types:tunnel-type")
{
}

TunnelTypeIdentity::~TunnelTypeIdentity()
{
}

PathSetupProtocolIdentity::PathSetupProtocolIdentity()
     : Identity("openconfig-mpls-types:path-setup-protocol")
{
}

PathSetupProtocolIdentity::~PathSetupProtocolIdentity()
{
}

PathSetupSrIdentity::PathSetupSrIdentity()
     : Identity("openconfig-mpls-types:path-setup-sr")
{
}

PathSetupSrIdentity::~PathSetupSrIdentity()
{
}

DownIdentity::DownIdentity()
     : Identity("openconfig-mpls-types:DOWN")
{
}

DownIdentity::~DownIdentity()
{
}

UnprotectedIdentity::UnprotectedIdentity()
     : Identity("openconfig-mpls-types:unprotected")
{
}

UnprotectedIdentity::~UnprotectedIdentity()
{
}

PathSetupLdpIdentity::PathSetupLdpIdentity()
     : Identity("openconfig-mpls-types:path-setup-ldp")
{
}

PathSetupLdpIdentity::~PathSetupLdpIdentity()
{
}

P2PIdentity::P2PIdentity()
     : Identity("openconfig-mpls-types:P2P")
{
}

P2PIdentity::~P2PIdentity()
{
}

Admin_DownIdentity::Admin_DownIdentity()
     : Identity("openconfig-mpls-types:ADMIN_DOWN")
{
}

Admin_DownIdentity::~Admin_DownIdentity()
{
}

ExplicitIdentity::ExplicitIdentity()
     : Identity("openconfig-mpls-types:EXPLICIT")
{
}

ExplicitIdentity::~ExplicitIdentity()
{
}

Admin_UpIdentity::Admin_UpIdentity()
     : Identity("openconfig-mpls-types:ADMIN_UP")
{
}

Admin_UpIdentity::~Admin_UpIdentity()
{
}

P2MpIdentity::P2MpIdentity()
     : Identity("openconfig-mpls-types:P2MP")
{
}

P2MpIdentity::~P2MpIdentity()
{
}

PathSetupRsvpIdentity::PathSetupRsvpIdentity()
     : Identity("openconfig-mpls-types:path-setup-rsvp")
{
}

PathSetupRsvpIdentity::~PathSetupRsvpIdentity()
{
}

IngressIdentity::IngressIdentity()
     : Identity("openconfig-mpls-types:INGRESS")
{
}

IngressIdentity::~IngressIdentity()
{
}

LinkProtectionRequestedIdentity::LinkProtectionRequestedIdentity()
     : Identity("openconfig-mpls-types:link-protection-requested")
{
}

LinkProtectionRequestedIdentity::~LinkProtectionRequestedIdentity()
{
}

EgressIdentity::EgressIdentity()
     : Identity("openconfig-mpls-types:EGRESS")
{
}

EgressIdentity::~EgressIdentity()
{
}

LinkNodeProtectionRequestedIdentity::LinkNodeProtectionRequestedIdentity()
     : Identity("openconfig-mpls-types:link-node-protection-requested")
{
}

LinkNodeProtectionRequestedIdentity::~LinkNodeProtectionRequestedIdentity()
{
}

ImplicitIdentity::ImplicitIdentity()
     : Identity("openconfig-mpls-types:IMPLICIT")
{
}

ImplicitIdentity::~ImplicitIdentity()
{
}

TransitIdentity::TransitIdentity()
     : Identity("openconfig-mpls-types:TRANSIT")
{
}

TransitIdentity::~TransitIdentity()
{
}

UpIdentity::UpIdentity()
     : Identity("openconfig-mpls-types:UP")
{
}

UpIdentity::~UpIdentity()
{
}

const Enum::YLeaf TunnelTypeEnum::P2P {0, "P2P"};
const Enum::YLeaf TunnelTypeEnum::P2MP {1, "P2MP"};
const Enum::YLeaf TunnelTypeEnum::MP2MP {2, "MP2MP"};

const Enum::YLeaf MplsLabelEnum::IPV4_EXPLICIT_NULL {0, "IPV4_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabelEnum::ROUTER_ALERT {1, "ROUTER_ALERT"};
const Enum::YLeaf MplsLabelEnum::IPV6_EXPLICIT_NULL {2, "IPV6_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabelEnum::IMPLICIT_NULL {3, "IMPLICIT_NULL"};
const Enum::YLeaf MplsLabelEnum::ENTROPY_LABEL_INDICATOR {7, "ENTROPY_LABEL_INDICATOR"};


}
}

