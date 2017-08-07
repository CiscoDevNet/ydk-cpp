
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "policy_types.hpp"

using namespace ydk;

namespace openconfig {
namespace policy_types {

MplsExpTop::MplsExpTop()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-top")
{
}

MplsExpTop::~MplsExpTop()
{
}

Ipv4Acl::Ipv4Acl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv4-acl")
{
}

Ipv4Acl::~Ipv4Acl()
{
}

Metadata::Metadata()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:metadata")
{
}

Metadata::~Metadata()
{
}

FlowIp::FlowIp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-ip")
{
}

FlowIp::~FlowIp()
{
}

Dei::Dei()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dei")
{
}

Dei::~Dei()
{
}

IpRtp::IpRtp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ip-rtp")
{
}

IpRtp::~IpRtp()
{
}

WlanUserPriority::WlanUserPriority()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:wlan-user-priority")
{
}

WlanUserPriority::~WlanUserPriority()
{
}

AtmClp::AtmClp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:atm-clp")
{
}

AtmClp::~AtmClp()
{
}

ClassType::ClassType()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:class-type")
{
}

ClassType::~ClassType()
{
}

FlowDlci::FlowDlci()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-dlci")
{
}

FlowDlci::~FlowDlci()
{
}

MplsExpImp::MplsExpImp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-imp")
{
}

MplsExpImp::~MplsExpImp()
{
}

PolicyType::PolicyType()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:policy-type")
{
}

PolicyType::~PolicyType()
{
}

DeiInner::DeiInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dei-inner")
{
}

DeiInner::~DeiInner()
{
}

FlowDe::FlowDe()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-de")
{
}

FlowDe::~FlowDe()
{
}

CosInner::CosInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:cos-inner")
{
}

CosInner::~CosInner()
{
}

DiscardClass::DiscardClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:discard-class")
{
}

DiscardClass::~DiscardClass()
{
}

FlowRecord::FlowRecord()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-record")
{
}

FlowRecord::~FlowRecord()
{
}

ClassMap::ClassMap()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:class-map")
{
}

ClassMap::~ClassMap()
{
}

PacketLength::PacketLength()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:packet-length")
{
}

PacketLength::~PacketLength()
{
}

Vpls::Vpls()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vpls")
{
}

Vpls::~Vpls()
{
}

Prec::Prec()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:prec")
{
}

Prec::~Prec()
{
}

Application::Application()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:application")
{
}

Application::~Application()
{
}

Ipv4AclName::Ipv4AclName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv4-acl-name")
{
}

Ipv4AclName::~Ipv4AclName()
{
}

Vlan::Vlan()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vlan")
{
}

Vlan::~Vlan()
{
}

DstMac::DstMac()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dst-mac")
{
}

DstMac::~DstMac()
{
}

Ipv6Acl::Ipv6Acl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv6-acl")
{
}

Ipv6Acl::~Ipv6Acl()
{
}

SecurityGroupTag::SecurityGroupTag()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:security-group-tag")
{
}

SecurityGroupTag::~SecurityGroupTag()
{
}

AtmVci::AtmVci()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:atm-vci")
{
}

AtmVci::~AtmVci()
{
}

Ipv6AclName::Ipv6AclName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv6-acl-name")
{
}

Ipv6AclName::~Ipv6AclName()
{
}

SrcMac::SrcMac()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:src-mac")
{
}

SrcMac::~SrcMac()
{
}

QosGroup::QosGroup()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos-group")
{
}

QosGroup::~QosGroup()
{
}

Cos::Cos()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:cos")
{
}

Cos::~Cos()
{
}

VlanInner::VlanInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vlan-inner")
{
}

VlanInner::~VlanInner()
{
}

SecurityGroupName::SecurityGroupName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:security-group-name")
{
}

SecurityGroupName::~SecurityGroupName()
{
}

InputInterface::InputInterface()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:input-interface")
{
}

InputInterface::~InputInterface()
{
}

Pbr::Pbr()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:pbr")
{
}

Pbr::~Pbr()
{
}

ControlClass::ControlClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control-class")
{
}

ControlClass::~ControlClass()
{
}

AppnavClass::AppnavClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:appnav-class")
{
}

AppnavClass::~AppnavClass()
{
}

Qos::Qos()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos")
{
}

Qos::~Qos()
{
}

PerfMon::PerfMon()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:perf-mon")
{
}

PerfMon::~PerfMon()
{
}

AccessControl::AccessControl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:access-control")
{
}

AccessControl::~AccessControl()
{
}

AccessControlClass::AccessControlClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:access-control-class")
{
}

AccessControlClass::~AccessControlClass()
{
}

PacketService::PacketService()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:packet-service")
{
}

PacketService::~PacketService()
{
}

InspectClass::InspectClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:inspect-class")
{
}

InspectClass::~InspectClass()
{
}

Service::Service()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:service")
{
}

Service::~Service()
{
}

Appnav::Appnav()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:appnav")
{
}

Appnav::~Appnav()
{
}

Inspect::Inspect()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:inspect")
{
}

Inspect::~Inspect()
{
}

QosClass::QosClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos-class")
{
}

QosClass::~QosClass()
{
}

Control::Control()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control")
{
}

Control::~Control()
{
}

const Enum::YLeaf Metric::none {0, "none"};
const Enum::YLeaf Metric::peta {1, "peta"};
const Enum::YLeaf Metric::tera {2, "tera"};
const Enum::YLeaf Metric::giga {3, "giga"};
const Enum::YLeaf Metric::mega {4, "mega"};
const Enum::YLeaf Metric::kilo {5, "kilo"};
const Enum::YLeaf Metric::milli {6, "milli"};
const Enum::YLeaf Metric::nano {7, "nano"};

const Enum::YLeaf Direction::inbound {0, "inbound"};
const Enum::YLeaf Direction::outbound {1, "outbound"};

const Enum::YLeaf RateUnit::pps {0, "pps"};
const Enum::YLeaf RateUnit::cps {1, "cps"};
const Enum::YLeaf RateUnit::bps {2, "bps"};
const Enum::YLeaf RateUnit::perc {3, "perc"};
const Enum::YLeaf RateUnit::ratio {4, "ratio"};


}
}

