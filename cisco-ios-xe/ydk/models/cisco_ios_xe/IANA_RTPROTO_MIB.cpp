
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IANA_RTPROTO_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IANA_RTPROTO_MIB {

const Enum::YLeaf IANAipMRouteProtocol::other {1, "other"};
const Enum::YLeaf IANAipMRouteProtocol::local {2, "local"};
const Enum::YLeaf IANAipMRouteProtocol::netmgmt {3, "netmgmt"};
const Enum::YLeaf IANAipMRouteProtocol::dvmrp {4, "dvmrp"};
const Enum::YLeaf IANAipMRouteProtocol::mospf {5, "mospf"};
const Enum::YLeaf IANAipMRouteProtocol::pimSparseDense {6, "pimSparseDense"};
const Enum::YLeaf IANAipMRouteProtocol::cbt {7, "cbt"};
const Enum::YLeaf IANAipMRouteProtocol::pimSparseMode {8, "pimSparseMode"};
const Enum::YLeaf IANAipMRouteProtocol::pimDenseMode {9, "pimDenseMode"};
const Enum::YLeaf IANAipMRouteProtocol::igmpOnly {10, "igmpOnly"};
const Enum::YLeaf IANAipMRouteProtocol::bgmp {11, "bgmp"};
const Enum::YLeaf IANAipMRouteProtocol::msdp {12, "msdp"};

const Enum::YLeaf IANAipRouteProtocol::other {1, "other"};
const Enum::YLeaf IANAipRouteProtocol::local {2, "local"};
const Enum::YLeaf IANAipRouteProtocol::netmgmt {3, "netmgmt"};
const Enum::YLeaf IANAipRouteProtocol::icmp {4, "icmp"};
const Enum::YLeaf IANAipRouteProtocol::egp {5, "egp"};
const Enum::YLeaf IANAipRouteProtocol::ggp {6, "ggp"};
const Enum::YLeaf IANAipRouteProtocol::hello {7, "hello"};
const Enum::YLeaf IANAipRouteProtocol::rip {8, "rip"};
const Enum::YLeaf IANAipRouteProtocol::isIs {9, "isIs"};
const Enum::YLeaf IANAipRouteProtocol::esIs {10, "esIs"};
const Enum::YLeaf IANAipRouteProtocol::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf IANAipRouteProtocol::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf IANAipRouteProtocol::ospf {13, "ospf"};
const Enum::YLeaf IANAipRouteProtocol::bgp {14, "bgp"};
const Enum::YLeaf IANAipRouteProtocol::idpr {15, "idpr"};
const Enum::YLeaf IANAipRouteProtocol::ciscoEigrp {16, "ciscoEigrp"};
const Enum::YLeaf IANAipRouteProtocol::dvmrp {17, "dvmrp"};


}
}

