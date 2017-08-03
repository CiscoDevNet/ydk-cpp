
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "policy_types.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace policy_types {

MplsExpImp::MplsExpImp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-imp")
{
}

MplsExpImp::~MplsExpImp()
{
}

FlowDlci::FlowDlci()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-dlci")
{
}

FlowDlci::~FlowDlci()
{
}

Cos::Cos()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:cos")
{
}

Cos::~Cos()
{
}

SecurityGroupName::SecurityGroupName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:security-group-name")
{
}

SecurityGroupName::~SecurityGroupName()
{
}

Ipv4AclName::Ipv4AclName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv4-acl-name")
{
}

Ipv4AclName::~Ipv4AclName()
{
}

Dei::Dei()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dei")
{
}

Dei::~Dei()
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

FlowDe::FlowDe()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-de")
{
}

FlowDe::~FlowDe()
{
}

Vlan::Vlan()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vlan")
{
}

Vlan::~Vlan()
{
}

PacketLength::PacketLength()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:packet-length")
{
}

PacketLength::~PacketLength()
{
}

InputInterface::InputInterface()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:input-interface")
{
}

InputInterface::~InputInterface()
{
}

QosGroup::QosGroup()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos-group")
{
}

QosGroup::~QosGroup()
{
}

Ipv4Acl::Ipv4Acl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv4-acl")
{
}

Ipv4Acl::~Ipv4Acl()
{
}

Ipv6Acl::Ipv6Acl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv6-acl")
{
}

Ipv6Acl::~Ipv6Acl()
{
}

FlowRecord::FlowRecord()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-record")
{
}

FlowRecord::~FlowRecord()
{
}

AtmClp::AtmClp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:atm-clp")
{
}

AtmClp::~AtmClp()
{
}

DeiInner::DeiInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dei-inner")
{
}

DeiInner::~DeiInner()
{
}

Vpls::Vpls()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vpls")
{
}

Vpls::~Vpls()
{
}

DstMac::DstMac()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dst-mac")
{
}

DstMac::~DstMac()
{
}

Prec::Prec()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:prec")
{
}

Prec::~Prec()
{
}

ClassType::ClassType()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:class-type")
{
}

ClassType::~ClassType()
{
}

MplsExpTop::MplsExpTop()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-top")
{
}

MplsExpTop::~MplsExpTop()
{
}

DiscardClass::DiscardClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:discard-class")
{
}

DiscardClass::~DiscardClass()
{
}

FlowIp::FlowIp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-ip")
{
}

FlowIp::~FlowIp()
{
}

WlanUserPriority::WlanUserPriority()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:wlan-user-priority")
{
}

WlanUserPriority::~WlanUserPriority()
{
}

ClassMap::ClassMap()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:class-map")
{
}

ClassMap::~ClassMap()
{
}

Application::Application()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:application")
{
}

Application::~Application()
{
}

CosInner::CosInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:cos-inner")
{
}

CosInner::~CosInner()
{
}

SecurityGroupTag::SecurityGroupTag()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:security-group-tag")
{
}

SecurityGroupTag::~SecurityGroupTag()
{
}

PolicyType::PolicyType()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:policy-type")
{
}

PolicyType::~PolicyType()
{
}

IpRtp::IpRtp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ip-rtp")
{
}

IpRtp::~IpRtp()
{
}

AtmVci::AtmVci()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:atm-vci")
{
}

AtmVci::~AtmVci()
{
}

Metadata::Metadata()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:metadata")
{
}

Metadata::~Metadata()
{
}

VlanInner::VlanInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vlan-inner")
{
}

VlanInner::~VlanInner()
{
}

Pbr::Pbr()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:pbr")
{
}

Pbr::~Pbr()
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

Inspect::Inspect()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:inspect")
{
}

Inspect::~Inspect()
{
}

PerfMon::PerfMon()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:perf-mon")
{
}

PerfMon::~PerfMon()
{
}

Qos::Qos()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos")
{
}

Qos::~Qos()
{
}

AppnavClass::AppnavClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:appnav-class")
{
}

AppnavClass::~AppnavClass()
{
}

QosClass::QosClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos-class")
{
}

QosClass::~QosClass()
{
}

ControlClass::ControlClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control-class")
{
}

ControlClass::~ControlClass()
{
}

Control::Control()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control")
{
}

Control::~Control()
{
}

AccessControl::AccessControl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:access-control")
{
}

AccessControl::~AccessControl()
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

const Enum::YLeaf Direction::inbound {0, "inbound"};
const Enum::YLeaf Direction::outbound {1, "outbound"};

const Enum::YLeaf Metric::none {0, "none"};
const Enum::YLeaf Metric::peta {1, "peta"};
const Enum::YLeaf Metric::tera {2, "tera"};
const Enum::YLeaf Metric::giga {3, "giga"};
const Enum::YLeaf Metric::mega {4, "mega"};
const Enum::YLeaf Metric::kilo {5, "kilo"};
const Enum::YLeaf Metric::milli {6, "milli"};
const Enum::YLeaf Metric::nano {7, "nano"};

const Enum::YLeaf RateUnit::pps {0, "pps"};
const Enum::YLeaf RateUnit::cps {1, "cps"};
const Enum::YLeaf RateUnit::bps {2, "bps"};
const Enum::YLeaf RateUnit::perc {3, "perc"};
const Enum::YLeaf RateUnit::ratio {4, "ratio"};


}
}

