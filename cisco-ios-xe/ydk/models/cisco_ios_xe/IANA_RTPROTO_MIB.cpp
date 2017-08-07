
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IANA_RTPROTO_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IANA_RTPROTO_MIB {

const Enum::YLeaf Ianaiprouteprotocol::other {1, "other"};
const Enum::YLeaf Ianaiprouteprotocol::local {2, "local"};
const Enum::YLeaf Ianaiprouteprotocol::netmgmt {3, "netmgmt"};
const Enum::YLeaf Ianaiprouteprotocol::icmp {4, "icmp"};
const Enum::YLeaf Ianaiprouteprotocol::egp {5, "egp"};
const Enum::YLeaf Ianaiprouteprotocol::ggp {6, "ggp"};
const Enum::YLeaf Ianaiprouteprotocol::hello {7, "hello"};
const Enum::YLeaf Ianaiprouteprotocol::rip {8, "rip"};
const Enum::YLeaf Ianaiprouteprotocol::isIs {9, "isIs"};
const Enum::YLeaf Ianaiprouteprotocol::esIs {10, "esIs"};
const Enum::YLeaf Ianaiprouteprotocol::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf Ianaiprouteprotocol::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf Ianaiprouteprotocol::ospf {13, "ospf"};
const Enum::YLeaf Ianaiprouteprotocol::bgp {14, "bgp"};
const Enum::YLeaf Ianaiprouteprotocol::idpr {15, "idpr"};
const Enum::YLeaf Ianaiprouteprotocol::ciscoEigrp {16, "ciscoEigrp"};
const Enum::YLeaf Ianaiprouteprotocol::dvmrp {17, "dvmrp"};

const Enum::YLeaf Ianaipmrouteprotocol::other {1, "other"};
const Enum::YLeaf Ianaipmrouteprotocol::local {2, "local"};
const Enum::YLeaf Ianaipmrouteprotocol::netmgmt {3, "netmgmt"};
const Enum::YLeaf Ianaipmrouteprotocol::dvmrp {4, "dvmrp"};
const Enum::YLeaf Ianaipmrouteprotocol::mospf {5, "mospf"};
const Enum::YLeaf Ianaipmrouteprotocol::pimSparseDense {6, "pimSparseDense"};
const Enum::YLeaf Ianaipmrouteprotocol::cbt {7, "cbt"};
const Enum::YLeaf Ianaipmrouteprotocol::pimSparseMode {8, "pimSparseMode"};
const Enum::YLeaf Ianaipmrouteprotocol::pimDenseMode {9, "pimDenseMode"};
const Enum::YLeaf Ianaipmrouteprotocol::igmpOnly {10, "igmpOnly"};
const Enum::YLeaf Ianaipmrouteprotocol::bgmp {11, "bgmp"};
const Enum::YLeaf Ianaipmrouteprotocol::msdp {12, "msdp"};


}
}

