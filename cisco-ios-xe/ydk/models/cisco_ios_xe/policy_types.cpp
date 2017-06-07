
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "policy_types.hpp"

namespace ydk {
namespace policy_types {

InputInterfaceIdentity::InputInterfaceIdentity()
     : Identity("policy-types:input-interface")
{
}

InputInterfaceIdentity::~InputInterfaceIdentity()
{
}

SrcMacIdentity::SrcMacIdentity()
     : Identity("policy-types:src-mac")
{
}

SrcMacIdentity::~SrcMacIdentity()
{
}

ApplicationIdentity::ApplicationIdentity()
     : Identity("policy-types:application")
{
}

ApplicationIdentity::~ApplicationIdentity()
{
}

SecurityGroupNameIdentity::SecurityGroupNameIdentity()
     : Identity("policy-types:security-group-name")
{
}

SecurityGroupNameIdentity::~SecurityGroupNameIdentity()
{
}

Ipv4AclNameIdentity::Ipv4AclNameIdentity()
     : Identity("policy-types:ipv4-acl-name")
{
}

Ipv4AclNameIdentity::~Ipv4AclNameIdentity()
{
}

FlowDlciIdentity::FlowDlciIdentity()
     : Identity("policy-types:flow-dlci")
{
}

FlowDlciIdentity::~FlowDlciIdentity()
{
}

DeiIdentity::DeiIdentity()
     : Identity("policy-types:dei")
{
}

DeiIdentity::~DeiIdentity()
{
}

PrecIdentity::PrecIdentity()
     : Identity("policy-types:prec")
{
}

PrecIdentity::~PrecIdentity()
{
}

PacketLengthIdentity::PacketLengthIdentity()
     : Identity("policy-types:packet-length")
{
}

PacketLengthIdentity::~PacketLengthIdentity()
{
}

Ipv4AclIdentity::Ipv4AclIdentity()
     : Identity("policy-types:ipv4-acl")
{
}

Ipv4AclIdentity::~Ipv4AclIdentity()
{
}

FlowDeIdentity::FlowDeIdentity()
     : Identity("policy-types:flow-de")
{
}

FlowDeIdentity::~FlowDeIdentity()
{
}

FlowIpIdentity::FlowIpIdentity()
     : Identity("policy-types:flow-ip")
{
}

FlowIpIdentity::~FlowIpIdentity()
{
}

FlowRecordIdentity::FlowRecordIdentity()
     : Identity("policy-types:flow-record")
{
}

FlowRecordIdentity::~FlowRecordIdentity()
{
}

VlanInnerIdentity::VlanInnerIdentity()
     : Identity("policy-types:vlan-inner")
{
}

VlanInnerIdentity::~VlanInnerIdentity()
{
}

MetadataIdentity::MetadataIdentity()
     : Identity("policy-types:metadata")
{
}

MetadataIdentity::~MetadataIdentity()
{
}

VlanIdentity::VlanIdentity()
     : Identity("policy-types:vlan")
{
}

VlanIdentity::~VlanIdentity()
{
}

AtmVciIdentity::AtmVciIdentity()
     : Identity("policy-types:atm-vci")
{
}

AtmVciIdentity::~AtmVciIdentity()
{
}

ClassMapIdentity::ClassMapIdentity()
     : Identity("policy-types:class-map")
{
}

ClassMapIdentity::~ClassMapIdentity()
{
}

QosGroupIdentity::QosGroupIdentity()
     : Identity("policy-types:qos-group")
{
}

QosGroupIdentity::~QosGroupIdentity()
{
}

WlanUserPriorityIdentity::WlanUserPriorityIdentity()
     : Identity("policy-types:wlan-user-priority")
{
}

WlanUserPriorityIdentity::~WlanUserPriorityIdentity()
{
}

IpRtpIdentity::IpRtpIdentity()
     : Identity("policy-types:ip-rtp")
{
}

IpRtpIdentity::~IpRtpIdentity()
{
}

Ipv6AclIdentity::Ipv6AclIdentity()
     : Identity("policy-types:ipv6-acl")
{
}

Ipv6AclIdentity::~Ipv6AclIdentity()
{
}

AtmClpIdentity::AtmClpIdentity()
     : Identity("policy-types:atm-clp")
{
}

AtmClpIdentity::~AtmClpIdentity()
{
}

DstMacIdentity::DstMacIdentity()
     : Identity("policy-types:dst-mac")
{
}

DstMacIdentity::~DstMacIdentity()
{
}

CosIdentity::CosIdentity()
     : Identity("policy-types:cos")
{
}

CosIdentity::~CosIdentity()
{
}

DeiInnerIdentity::DeiInnerIdentity()
     : Identity("policy-types:dei-inner")
{
}

DeiInnerIdentity::~DeiInnerIdentity()
{
}

MplsExpTopIdentity::MplsExpTopIdentity()
     : Identity("policy-types:mpls-exp-top")
{
}

MplsExpTopIdentity::~MplsExpTopIdentity()
{
}

CosInnerIdentity::CosInnerIdentity()
     : Identity("policy-types:cos-inner")
{
}

CosInnerIdentity::~CosInnerIdentity()
{
}

Ipv6AclNameIdentity::Ipv6AclNameIdentity()
     : Identity("policy-types:ipv6-acl-name")
{
}

Ipv6AclNameIdentity::~Ipv6AclNameIdentity()
{
}

MplsExpImpIdentity::MplsExpImpIdentity()
     : Identity("policy-types:mpls-exp-imp")
{
}

MplsExpImpIdentity::~MplsExpImpIdentity()
{
}

SecurityGroupTagIdentity::SecurityGroupTagIdentity()
     : Identity("policy-types:security-group-tag")
{
}

SecurityGroupTagIdentity::~SecurityGroupTagIdentity()
{
}

ClassTypeIdentity::ClassTypeIdentity()
     : Identity("policy-types:class-type")
{
}

ClassTypeIdentity::~ClassTypeIdentity()
{
}

DiscardClassIdentity::DiscardClassIdentity()
     : Identity("policy-types:discard-class")
{
}

DiscardClassIdentity::~DiscardClassIdentity()
{
}

VplsIdentity::VplsIdentity()
     : Identity("policy-types:vpls")
{
}

VplsIdentity::~VplsIdentity()
{
}

PolicyTypeIdentity::PolicyTypeIdentity()
     : Identity("policy-types:policy-type")
{
}

PolicyTypeIdentity::~PolicyTypeIdentity()
{
}

ControlIdentity::ControlIdentity()
     : Identity("policy-types:control")
{
}

ControlIdentity::~ControlIdentity()
{
}

QosIdentity::QosIdentity()
     : Identity("policy-types:qos")
{
}

QosIdentity::~QosIdentity()
{
}

PerfMonIdentity::PerfMonIdentity()
     : Identity("policy-types:perf-mon")
{
}

PerfMonIdentity::~PerfMonIdentity()
{
}

PacketServiceIdentity::PacketServiceIdentity()
     : Identity("policy-types:packet-service")
{
}

PacketServiceIdentity::~PacketServiceIdentity()
{
}

QosClassIdentity::QosClassIdentity()
     : Identity("policy-types:qos-class")
{
}

QosClassIdentity::~QosClassIdentity()
{
}

ControlClassIdentity::ControlClassIdentity()
     : Identity("policy-types:control-class")
{
}

ControlClassIdentity::~ControlClassIdentity()
{
}

InspectClassIdentity::InspectClassIdentity()
     : Identity("policy-types:inspect-class")
{
}

InspectClassIdentity::~InspectClassIdentity()
{
}

AppnavClassIdentity::AppnavClassIdentity()
     : Identity("policy-types:appnav-class")
{
}

AppnavClassIdentity::~AppnavClassIdentity()
{
}

ServiceIdentity::ServiceIdentity()
     : Identity("policy-types:service")
{
}

ServiceIdentity::~ServiceIdentity()
{
}

AccessControlClassIdentity::AccessControlClassIdentity()
     : Identity("policy-types:access-control-class")
{
}

AccessControlClassIdentity::~AccessControlClassIdentity()
{
}

AccessControlIdentity::AccessControlIdentity()
     : Identity("policy-types:access-control")
{
}

AccessControlIdentity::~AccessControlIdentity()
{
}

AppnavIdentity::AppnavIdentity()
     : Identity("policy-types:appnav")
{
}

AppnavIdentity::~AppnavIdentity()
{
}

InspectIdentity::InspectIdentity()
     : Identity("policy-types:inspect")
{
}

InspectIdentity::~InspectIdentity()
{
}

PbrIdentity::PbrIdentity()
     : Identity("policy-types:pbr")
{
}

PbrIdentity::~PbrIdentity()
{
}

const Enum::YLeaf MetricEnum::none {0, "none"};
const Enum::YLeaf MetricEnum::peta {1, "peta"};
const Enum::YLeaf MetricEnum::tera {2, "tera"};
const Enum::YLeaf MetricEnum::giga {3, "giga"};
const Enum::YLeaf MetricEnum::mega {4, "mega"};
const Enum::YLeaf MetricEnum::kilo {5, "kilo"};
const Enum::YLeaf MetricEnum::milli {6, "milli"};
const Enum::YLeaf MetricEnum::nano {7, "nano"};

const Enum::YLeaf DirectionEnum::inbound {0, "inbound"};
const Enum::YLeaf DirectionEnum::outbound {1, "outbound"};

const Enum::YLeaf RateUnitEnum::pps {0, "pps"};
const Enum::YLeaf RateUnitEnum::cps {1, "cps"};
const Enum::YLeaf RateUnitEnum::bps {2, "bps"};
const Enum::YLeaf RateUnitEnum::perc {3, "perc"};
const Enum::YLeaf RateUnitEnum::ratio {4, "ratio"};


}
}

