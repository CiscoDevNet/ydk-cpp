
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_mpls_types {

PathSetupProtocol::PathSetupProtocol()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:path-setup-protocol")
{
}

PathSetupProtocol::~PathSetupProtocol()
{
}

LspOperStatus::LspOperStatus()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:lsp-oper-status")
{
}

LspOperStatus::~LspOperStatus()
{
}

TunnelType_::TunnelType_()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:tunnel-type")
{
}

TunnelType_::~TunnelType_()
{
}

LspRole::LspRole()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:lsp-role")
{
}

LspRole::~LspRole()
{
}

ProtectionType::ProtectionType()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:protection-type")
{
}

ProtectionType::~ProtectionType()
{
}

TunnelAdminStatus::TunnelAdminStatus()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:tunnel-admin-status")
{
}

TunnelAdminStatus::~TunnelAdminStatus()
{
}

NullLabelType::NullLabelType()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:null-label-type")
{
}

NullLabelType::~NullLabelType()
{
}

Admin_Down::Admin_Down()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:ADMIN_DOWN")
{
}

Admin_Down::~Admin_Down()
{
}

Admin_Up::Admin_Up()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:ADMIN_UP")
{
}

Admin_Up::~Admin_Up()
{
}

LinkNodeProtectionRequested::LinkNodeProtectionRequested()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:link-node-protection-requested")
{
}

LinkNodeProtectionRequested::~LinkNodeProtectionRequested()
{
}

Ingress::Ingress()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:INGRESS")
{
}

Ingress::~Ingress()
{
}

LinkProtectionRequested::LinkProtectionRequested()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:link-protection-requested")
{
}

LinkProtectionRequested::~LinkProtectionRequested()
{
}

Implicit::Implicit()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:IMPLICIT")
{
}

Implicit::~Implicit()
{
}

Explicit_::Explicit_()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXPLICIT")
{
}

Explicit_::~Explicit_()
{
}

Transit::Transit()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:TRANSIT")
{
}

Transit::~Transit()
{
}

Egress::Egress()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EGRESS")
{
}

Egress::~Egress()
{
}

PathSetupSr::PathSetupSr()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:path-setup-sr")
{
}

PathSetupSr::~PathSetupSr()
{
}

Up::Up()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:UP")
{
}

Up::~Up()
{
}

P2Mp::P2Mp()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:P2MP")
{
}

P2Mp::~P2Mp()
{
}

PathSetupRsvp::PathSetupRsvp()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:path-setup-rsvp")
{
}

PathSetupRsvp::~PathSetupRsvp()
{
}

Unprotected::Unprotected()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:unprotected")
{
}

Unprotected::~Unprotected()
{
}

P2P::P2P()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:P2P")
{
}

P2P::~P2P()
{
}

PathSetupLdp::PathSetupLdp()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:path-setup-ldp")
{
}

PathSetupLdp::~PathSetupLdp()
{
}

Down::Down()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:DOWN")
{
}

Down::~Down()
{
}

const Enum::YLeaf TunnelType::P2P {0, "P2P"};
const Enum::YLeaf TunnelType::P2MP {1, "P2MP"};
const Enum::YLeaf TunnelType::MP2MP {2, "MP2MP"};

const Enum::YLeaf MplsLabel::IPV4_EXPLICIT_NULL {0, "IPV4_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ROUTER_ALERT {1, "ROUTER_ALERT"};
const Enum::YLeaf MplsLabel::IPV6_EXPLICIT_NULL {2, "IPV6_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::IMPLICIT_NULL {3, "IMPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ENTROPY_LABEL_INDICATOR {7, "ENTROPY_LABEL_INDICATOR"};


}
}

