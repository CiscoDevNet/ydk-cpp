
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "pim.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace pim {

GroupToRpMappingMode::GroupToRpMappingMode()
     : Identity("urn:cisco:params:xml:ns:yang:pim", "pim", "pim:group-to-rp-mapping-mode")
{

}

GroupToRpMappingMode::~GroupToRpMappingMode()
{
}

DmMappingMode::DmMappingMode()
     : Identity("urn:cisco:params:xml:ns:yang:pim", "pim", "pim:dm-mapping-mode")
{

}

DmMappingMode::~DmMappingMode()
{
}

SmMappingMode::SmMappingMode()
     : Identity("urn:cisco:params:xml:ns:yang:pim", "pim", "pim:sm-mapping-mode")
{

}

SmMappingMode::~SmMappingMode()
{
}

PimBidirMappingMode::PimBidirMappingMode()
     : Identity("urn:cisco:params:xml:ns:yang:pim", "pim", "pim:pim-bidir-mapping-mode")
{

}

PimBidirMappingMode::~PimBidirMappingMode()
{
}

SsmMappingMode::SsmMappingMode()
     : Identity("urn:cisco:params:xml:ns:yang:pim", "pim", "pim:ssm-mapping-mode")
{

}

SsmMappingMode::~SsmMappingMode()
{
}

AsmMappingMode::AsmMappingMode()
     : Identity("urn:cisco:params:xml:ns:yang:pim", "pim", "pim:asm-mapping-mode")
{

}

AsmMappingMode::~AsmMappingMode()
{
}

OtherMappingMode::OtherMappingMode()
     : Identity("urn:cisco:params:xml:ns:yang:pim", "pim", "pim:other-mapping-mode")
{

}

OtherMappingMode::~OtherMappingMode()
{
}

const Enum::YLeaf RouteProtocolType::other {1, "other"};
const Enum::YLeaf RouteProtocolType::local {2, "local"};
const Enum::YLeaf RouteProtocolType::netmgmt {3, "netmgmt"};
const Enum::YLeaf RouteProtocolType::icmp {4, "icmp"};
const Enum::YLeaf RouteProtocolType::egp {5, "egp"};
const Enum::YLeaf RouteProtocolType::ggp {6, "ggp"};
const Enum::YLeaf RouteProtocolType::hello {7, "hello"};
const Enum::YLeaf RouteProtocolType::rip {8, "rip"};
const Enum::YLeaf RouteProtocolType::isIs {9, "isIs"};
const Enum::YLeaf RouteProtocolType::esIs {10, "esIs"};
const Enum::YLeaf RouteProtocolType::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf RouteProtocolType::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf RouteProtocolType::ospf {13, "ospf"};
const Enum::YLeaf RouteProtocolType::bgp {14, "bgp"};
const Enum::YLeaf RouteProtocolType::idpr {15, "idpr"};
const Enum::YLeaf RouteProtocolType::ciscoEigrp {16, "ciscoEigrp"};
const Enum::YLeaf RouteProtocolType::dvmrp {17, "dvmrp"};

const Enum::YLeaf MrouteProtocolType::other {1, "other"};
const Enum::YLeaf MrouteProtocolType::local {2, "local"};
const Enum::YLeaf MrouteProtocolType::netmgmt {3, "netmgmt"};
const Enum::YLeaf MrouteProtocolType::dvmrp {4, "dvmrp"};
const Enum::YLeaf MrouteProtocolType::mospf {5, "mospf"};
const Enum::YLeaf MrouteProtocolType::pimSparseDense {6, "pimSparseDense"};
const Enum::YLeaf MrouteProtocolType::cbt {7, "cbt"};
const Enum::YLeaf MrouteProtocolType::pimSparseMode {8, "pimSparseMode"};
const Enum::YLeaf MrouteProtocolType::pimDenseMode {9, "pimDenseMode"};
const Enum::YLeaf MrouteProtocolType::igmpOnly {10, "igmpOnly"};
const Enum::YLeaf MrouteProtocolType::bgmp {11, "bgmp"};
const Enum::YLeaf MrouteProtocolType::msdp {12, "msdp"};

const Enum::YLeaf PimMode::sparse {1, "sparse"};
const Enum::YLeaf PimMode::dense {2, "dense"};
const Enum::YLeaf PimMode::sparse_dense {3, "sparse-dense"};
const Enum::YLeaf PimMode::dm_proxy {4, "dm-proxy"};
const Enum::YLeaf PimMode::none {5, "none"};

const Enum::YLeaf Origin::other_origin {1, "other-origin"};
const Enum::YLeaf Origin::pim_request {2, "pim-request"};
const Enum::YLeaf Origin::ssm_request {3, "ssm-request"};
const Enum::YLeaf Origin::fixed {4, "fixed"};
const Enum::YLeaf Origin::embedded {5, "embedded"};
const Enum::YLeaf Origin::static_ {6, "static"};
const Enum::YLeaf Origin::config_ssm {7, "config-ssm"};
const Enum::YLeaf Origin::auto_rp {8, "auto-rp"};
const Enum::YLeaf Origin::bsr {9, "bsr"};
const Enum::YLeaf Origin::msdp {10, "msdp"};


}
}

