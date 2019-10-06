
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_mpls_types {

PROTECTIONTYPE::PROTECTIONTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PROTECTION_TYPE")
{

}

PROTECTIONTYPE::~PROTECTIONTYPE()
{
}

PATHSETUPPROTOCOL::PATHSETUPPROTOCOL()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_PROTOCOL")
{

}

PATHSETUPPROTOCOL::~PATHSETUPPROTOCOL()
{
}

PATHCOMPUTATIONMETHOD::PATHCOMPUTATIONMETHOD()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_COMPUTATION_METHOD")
{

}

PATHCOMPUTATIONMETHOD::~PATHCOMPUTATIONMETHOD()
{
}

TUNNELADMINSTATUS::TUNNELADMINSTATUS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:TUNNEL_ADMIN_STATUS")
{

}

TUNNELADMINSTATUS::~TUNNELADMINSTATUS()
{
}

TUNNELTYPE::TUNNELTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:TUNNEL_TYPE")
{

}

TUNNELTYPE::~TUNNELTYPE()
{
}

NULLLABELTYPE::NULLLABELTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:NULL_LABEL_TYPE")
{

}

NULLLABELTYPE::~NULLLABELTYPE()
{
}

LSPOPERSTATUS::LSPOPERSTATUS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_OPER_STATUS")
{

}

LSPOPERSTATUS::~LSPOPERSTATUS()
{
}

LSPMETRICTYPE::LSPMETRICTYPE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_TYPE")
{

}

LSPMETRICTYPE::~LSPMETRICTYPE()
{
}

LSPROLE::LSPROLE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_ROLE")
{

}

LSPROLE::~LSPROLE()
{
}

LSPMETRICINHERITED::LSPMETRICINHERITED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_INHERITED")
{

}

LSPMETRICINHERITED::~LSPMETRICINHERITED()
{
}

DOWN::DOWN()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:DOWN")
{

}

DOWN::~DOWN()
{
}

LOCALLYCOMPUTED::LOCALLYCOMPUTED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LOCALLY_COMPUTED")
{

}

LOCALLYCOMPUTED::~LOCALLYCOMPUTED()
{
}

P2P::P2P()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:P2P")
{

}

P2P::~P2P()
{
}

PATHSETUPSR::PATHSETUPSR()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_SR")
{

}

PATHSETUPSR::~PATHSETUPSR()
{
}

INGRESS::INGRESS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:INGRESS")
{

}

INGRESS::~INGRESS()
{
}

PATHSETUPRSVP::PATHSETUPRSVP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_RSVP")
{

}

PATHSETUPRSVP::~PATHSETUPRSVP()
{
}

PATHSETUPLDP::PATHSETUPLDP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:PATH_SETUP_LDP")
{

}

PATHSETUPLDP::~PATHSETUPLDP()
{
}

EXPLICIT::EXPLICIT()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXPLICIT")
{

}

EXPLICIT::~EXPLICIT()
{
}

ADMINUP::ADMINUP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:ADMIN_UP")
{

}

ADMINUP::~ADMINUP()
{
}

P2MP::P2MP()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:P2MP")
{

}

P2MP::~P2MP()
{
}

LINKPROTECTIONREQUIRED::LINKPROTECTIONREQUIRED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LINK_PROTECTION_REQUIRED")
{

}

LINKPROTECTIONREQUIRED::~LINKPROTECTIONREQUIRED()
{
}

EGRESS::EGRESS()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EGRESS")
{

}

EGRESS::~EGRESS()
{
}

IMPLICIT::IMPLICIT()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:IMPLICIT")
{

}

IMPLICIT::~IMPLICIT()
{
}

LINKNODEPROTECTIONREQUESTED::LINKNODEPROTECTIONREQUESTED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LINK_NODE_PROTECTION_REQUESTED")
{

}

LINKNODEPROTECTIONREQUESTED::~LINKNODEPROTECTIONREQUESTED()
{
}

LSPMETRICABSOLUTE::LSPMETRICABSOLUTE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_ABSOLUTE")
{

}

LSPMETRICABSOLUTE::~LSPMETRICABSOLUTE()
{
}

EXTERNALLYQUERIED::EXTERNALLYQUERIED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXTERNALLY_QUERIED")
{

}

EXTERNALLYQUERIED::~EXTERNALLYQUERIED()
{
}

ADMINDOWN::ADMINDOWN()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:ADMIN_DOWN")
{

}

ADMINDOWN::~ADMINDOWN()
{
}

EXPLICITLYDEFINED::EXPLICITLYDEFINED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:EXPLICITLY_DEFINED")
{

}

EXPLICITLYDEFINED::~EXPLICITLYDEFINED()
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

LSPMETRICRELATIVE::LSPMETRICRELATIVE()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:LSP_METRIC_RELATIVE")
{

}

LSPMETRICRELATIVE::~LSPMETRICRELATIVE()
{
}

UNPROTECTED::UNPROTECTED()
     : Identity("http://openconfig.net/yang/mpls-types", "openconfig-mpls-types", "openconfig-mpls-types:UNPROTECTED")
{

}

UNPROTECTED::~UNPROTECTED()
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
const Enum::YLeaf MplsLabel::NO_LABEL {8, "NO_LABEL"};


}
}

