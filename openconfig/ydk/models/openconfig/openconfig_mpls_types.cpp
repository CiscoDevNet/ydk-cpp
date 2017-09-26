
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_mpls_types {

LspOperStatus::LspOperStatus()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:lsp-oper-status")
{

}

LspOperStatus::~LspOperStatus()
{
}

LspRole::LspRole()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:lsp-role")
{

}

LspRole::~LspRole()
{
}

NullLabelType::NullLabelType()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:null-label-type")
{

}

NullLabelType::~NullLabelType()
{
}

PathSetupProtocol::PathSetupProtocol()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:path-setup-protocol")
{

}

PathSetupProtocol::~PathSetupProtocol()
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

TunnelType::TunnelType()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:tunnel-type")
{

}

TunnelType::~TunnelType()
{
}

ADMINDOWN::ADMINDOWN()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:ADMIN_DOWN")
{

}

ADMINDOWN::~ADMINDOWN()
{
}

ADMINUP::ADMINUP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:ADMIN_UP")
{

}

ADMINUP::~ADMINUP()
{
}

DOWN::DOWN()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:DOWN")
{

}

DOWN::~DOWN()
{
}

EGRESS::EGRESS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EGRESS")
{

}

EGRESS::~EGRESS()
{
}

EXPLICIT_::EXPLICIT_()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXPLICIT")
{

}

EXPLICIT_::~EXPLICIT_()
{
}

IMPLICIT::IMPLICIT()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:IMPLICIT")
{

}

IMPLICIT::~IMPLICIT()
{
}

INGRESS::INGRESS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:INGRESS")
{

}

INGRESS::~INGRESS()
{
}

LinkNodeProtectionRequested::LinkNodeProtectionRequested()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:link-node-protection-requested")
{

}

LinkNodeProtectionRequested::~LinkNodeProtectionRequested()
{
}

LinkProtectionRequested::LinkProtectionRequested()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:link-protection-requested")
{

}

LinkProtectionRequested::~LinkProtectionRequested()
{
}

P2MP::P2MP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:P2MP")
{

}

P2MP::~P2MP()
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

PathSetupRsvp::PathSetupRsvp()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:path-setup-rsvp")
{

}

PathSetupRsvp::~PathSetupRsvp()
{
}

PathSetupSr::PathSetupSr()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:path-setup-sr")
{

}

PathSetupSr::~PathSetupSr()
{
}

TRANSIT::TRANSIT()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:TRANSIT")
{

}

TRANSIT::~TRANSIT()
{
}

UP::UP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:UP")
{

}

UP::~UP()
{
}

Unprotected::Unprotected()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:unprotected")
{

}

Unprotected::~Unprotected()
{
}

const Enum::YLeaf MplsLabel::IPV4_EXPLICIT_NULL {0, "IPV4_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ROUTER_ALERT {1, "ROUTER_ALERT"};
const Enum::YLeaf MplsLabel::IPV6_EXPLICIT_NULL {2, "IPV6_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::IMPLICIT_NULL {3, "IMPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ENTROPY_LABEL_INDICATOR {7, "ENTROPY_LABEL_INDICATOR"};

const Enum::YLeaf TunnelType_::P2P {0, "P2P"};
const Enum::YLeaf TunnelType_::P2MP {1, "P2MP"};
const Enum::YLeaf TunnelType_::MP2MP {2, "MP2MP"};


}
}

