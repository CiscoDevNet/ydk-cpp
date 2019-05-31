
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_mpls_types {

PATHCOMPUTATIONMETHOD::PATHCOMPUTATIONMETHOD()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_COMPUTATION_METHOD")
{

}

PATHCOMPUTATIONMETHOD::~PATHCOMPUTATIONMETHOD()
{
}

PATHSETUPPROTOCOL::PATHSETUPPROTOCOL()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_PROTOCOL")
{

}

PATHSETUPPROTOCOL::~PATHSETUPPROTOCOL()
{
}

PROTECTIONTYPE::PROTECTIONTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PROTECTION_TYPE")
{

}

PROTECTIONTYPE::~PROTECTIONTYPE()
{
}

LSPROLE::LSPROLE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_ROLE")
{

}

LSPROLE::~LSPROLE()
{
}

TUNNELTYPE::TUNNELTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:TUNNEL_TYPE")
{

}

TUNNELTYPE::~TUNNELTYPE()
{
}

LSPOPERSTATUS::LSPOPERSTATUS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_OPER_STATUS")
{

}

LSPOPERSTATUS::~LSPOPERSTATUS()
{
}

TUNNELADMINSTATUS::TUNNELADMINSTATUS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:TUNNEL_ADMIN_STATUS")
{

}

TUNNELADMINSTATUS::~TUNNELADMINSTATUS()
{
}

NULLLABELTYPE::NULLLABELTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:NULL_LABEL_TYPE")
{

}

NULLLABELTYPE::~NULLLABELTYPE()
{
}

LSPMETRICTYPE::LSPMETRICTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_TYPE")
{

}

LSPMETRICTYPE::~LSPMETRICTYPE()
{
}

LOCALLYCOMPUTED::LOCALLYCOMPUTED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LOCALLY_COMPUTED")
{

}

LOCALLYCOMPUTED::~LOCALLYCOMPUTED()
{
}

EXTERNALLYQUERIED::EXTERNALLYQUERIED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXTERNALLY_QUERIED")
{

}

EXTERNALLYQUERIED::~EXTERNALLYQUERIED()
{
}

EXPLICITLYDEFINED::EXPLICITLYDEFINED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXPLICITLY_DEFINED")
{

}

EXPLICITLYDEFINED::~EXPLICITLYDEFINED()
{
}

PATHSETUPRSVP::PATHSETUPRSVP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_RSVP")
{

}

PATHSETUPRSVP::~PATHSETUPRSVP()
{
}

PATHSETUPSR::PATHSETUPSR()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_SR")
{

}

PATHSETUPSR::~PATHSETUPSR()
{
}

PATHSETUPLDP::PATHSETUPLDP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_LDP")
{

}

PATHSETUPLDP::~PATHSETUPLDP()
{
}

UNPROTECTED::UNPROTECTED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:UNPROTECTED")
{

}

UNPROTECTED::~UNPROTECTED()
{
}

LINKPROTECTIONREQUIRED::LINKPROTECTIONREQUIRED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LINK_PROTECTION_REQUIRED")
{

}

LINKPROTECTIONREQUIRED::~LINKPROTECTIONREQUIRED()
{
}

LINKNODEPROTECTIONREQUESTED::LINKNODEPROTECTIONREQUESTED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LINK_NODE_PROTECTION_REQUESTED")
{

}

LINKNODEPROTECTIONREQUESTED::~LINKNODEPROTECTIONREQUESTED()
{
}

INGRESS::INGRESS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:INGRESS")
{

}

INGRESS::~INGRESS()
{
}

EGRESS::EGRESS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EGRESS")
{

}

EGRESS::~EGRESS()
{
}

TRANSIT::TRANSIT()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:TRANSIT")
{

}

TRANSIT::~TRANSIT()
{
}

P2P::P2P()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:P2P")
{

}

P2P::~P2P()
{
}

P2MP::P2MP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:P2MP")
{

}

P2MP::~P2MP()
{
}

DOWN::DOWN()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:DOWN")
{

}

DOWN::~DOWN()
{
}

UP::UP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:UP")
{

}

UP::~UP()
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

EXPLICIT::EXPLICIT()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXPLICIT")
{

}

EXPLICIT::~EXPLICIT()
{
}

IMPLICIT::IMPLICIT()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:IMPLICIT")
{

}

IMPLICIT::~IMPLICIT()
{
}

LSPMETRICRELATIVE::LSPMETRICRELATIVE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_RELATIVE")
{

}

LSPMETRICRELATIVE::~LSPMETRICRELATIVE()
{
}

LSPMETRICABSOLUTE::LSPMETRICABSOLUTE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_ABSOLUTE")
{

}

LSPMETRICABSOLUTE::~LSPMETRICABSOLUTE()
{
}

LSPMETRICINHERITED::LSPMETRICINHERITED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_INHERITED")
{

}

LSPMETRICINHERITED::~LSPMETRICINHERITED()
{
}

const Enum::YLeaf MplsLabel::IPV4_EXPLICIT_NULL {0, "IPV4_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ROUTER_ALERT {1, "ROUTER_ALERT"};
const Enum::YLeaf MplsLabel::IPV6_EXPLICIT_NULL {2, "IPV6_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::IMPLICIT_NULL {3, "IMPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ENTROPY_LABEL_INDICATOR {7, "ENTROPY_LABEL_INDICATOR"};
const Enum::YLeaf MplsLabel::NO_LABEL {8, "NO_LABEL"};

const Enum::YLeaf TunnelType::P2P {0, "P2P"};
const Enum::YLeaf TunnelType::P2MP {1, "P2MP"};
const Enum::YLeaf TunnelType::MP2MP {2, "MP2MP"};


}
}

