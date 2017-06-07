
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "pim.hpp"

namespace ydk {
namespace pim {

GroupToRpMappingModeIdentity::GroupToRpMappingModeIdentity()
     : Identity("pim:group-to-rp-mapping-mode")
{
}

GroupToRpMappingModeIdentity::~GroupToRpMappingModeIdentity()
{
}

AsmMappingModeIdentity::AsmMappingModeIdentity()
     : Identity("pim:asm-mapping-mode")
{
}

AsmMappingModeIdentity::~AsmMappingModeIdentity()
{
}

OtherMappingModeIdentity::OtherMappingModeIdentity()
     : Identity("pim:other-mapping-mode")
{
}

OtherMappingModeIdentity::~OtherMappingModeIdentity()
{
}

SsmMappingModeIdentity::SsmMappingModeIdentity()
     : Identity("pim:ssm-mapping-mode")
{
}

SsmMappingModeIdentity::~SsmMappingModeIdentity()
{
}

SmMappingModeIdentity::SmMappingModeIdentity()
     : Identity("pim:sm-mapping-mode")
{
}

SmMappingModeIdentity::~SmMappingModeIdentity()
{
}

PimBidirMappingModeIdentity::PimBidirMappingModeIdentity()
     : Identity("pim:pim-bidir-mapping-mode")
{
}

PimBidirMappingModeIdentity::~PimBidirMappingModeIdentity()
{
}

DmMappingModeIdentity::DmMappingModeIdentity()
     : Identity("pim:dm-mapping-mode")
{
}

DmMappingModeIdentity::~DmMappingModeIdentity()
{
}

const Enum::YLeaf OriginEnum::other_origin {1, "other-origin"};
const Enum::YLeaf OriginEnum::pim_request {2, "pim-request"};
const Enum::YLeaf OriginEnum::ssm_request {3, "ssm-request"};
const Enum::YLeaf OriginEnum::fixed {4, "fixed"};
const Enum::YLeaf OriginEnum::embedded {5, "embedded"};
const Enum::YLeaf OriginEnum::static_ {6, "static"};
const Enum::YLeaf OriginEnum::config_ssm {7, "config-ssm"};
const Enum::YLeaf OriginEnum::auto_rp {8, "auto-rp"};
const Enum::YLeaf OriginEnum::bsr {9, "bsr"};
const Enum::YLeaf OriginEnum::msdp {10, "msdp"};

const Enum::YLeaf PimModeEnum::sparse {1, "sparse"};
const Enum::YLeaf PimModeEnum::dense {2, "dense"};
const Enum::YLeaf PimModeEnum::sparse_dense {3, "sparse-dense"};
const Enum::YLeaf PimModeEnum::dm_proxy {4, "dm-proxy"};
const Enum::YLeaf PimModeEnum::none {5, "none"};

const Enum::YLeaf RouteProtocolTypeEnum::other {1, "other"};
const Enum::YLeaf RouteProtocolTypeEnum::local {2, "local"};
const Enum::YLeaf RouteProtocolTypeEnum::netmgmt {3, "netmgmt"};
const Enum::YLeaf RouteProtocolTypeEnum::icmp {4, "icmp"};
const Enum::YLeaf RouteProtocolTypeEnum::egp {5, "egp"};
const Enum::YLeaf RouteProtocolTypeEnum::ggp {6, "ggp"};
const Enum::YLeaf RouteProtocolTypeEnum::hello {7, "hello"};
const Enum::YLeaf RouteProtocolTypeEnum::rip {8, "rip"};
const Enum::YLeaf RouteProtocolTypeEnum::isIs {9, "isIs"};
const Enum::YLeaf RouteProtocolTypeEnum::esIs {10, "esIs"};
const Enum::YLeaf RouteProtocolTypeEnum::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf RouteProtocolTypeEnum::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf RouteProtocolTypeEnum::ospf {13, "ospf"};
const Enum::YLeaf RouteProtocolTypeEnum::bgp {14, "bgp"};
const Enum::YLeaf RouteProtocolTypeEnum::idpr {15, "idpr"};
const Enum::YLeaf RouteProtocolTypeEnum::ciscoEigrp {16, "ciscoEigrp"};
const Enum::YLeaf RouteProtocolTypeEnum::dvmrp {17, "dvmrp"};

const Enum::YLeaf MrouteProtocolTypeEnum::other {1, "other"};
const Enum::YLeaf MrouteProtocolTypeEnum::local {2, "local"};
const Enum::YLeaf MrouteProtocolTypeEnum::netmgmt {3, "netmgmt"};
const Enum::YLeaf MrouteProtocolTypeEnum::dvmrp {4, "dvmrp"};
const Enum::YLeaf MrouteProtocolTypeEnum::mospf {5, "mospf"};
const Enum::YLeaf MrouteProtocolTypeEnum::pimSparseDense {6, "pimSparseDense"};
const Enum::YLeaf MrouteProtocolTypeEnum::cbt {7, "cbt"};
const Enum::YLeaf MrouteProtocolTypeEnum::pimSparseMode {8, "pimSparseMode"};
const Enum::YLeaf MrouteProtocolTypeEnum::pimDenseMode {9, "pimDenseMode"};
const Enum::YLeaf MrouteProtocolTypeEnum::igmpOnly {10, "igmpOnly"};
const Enum::YLeaf MrouteProtocolTypeEnum::bgmp {11, "bgmp"};
const Enum::YLeaf MrouteProtocolTypeEnum::msdp {12, "msdp"};


}
}

