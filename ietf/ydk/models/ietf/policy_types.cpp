
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "policy_types.hpp"

using namespace ydk;

namespace ietf {
namespace policy_types {

PolicyType::PolicyType()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:policy-type")
{

}

PolicyType::~PolicyType()
{
}

ClassType::ClassType()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:class-type")
{

}

ClassType::~ClassType()
{
}

Cos::Cos()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:cos")
{

}

Cos::~Cos()
{
}

CosInner::CosInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:cos-inner")
{

}

CosInner::~CosInner()
{
}

Ipv4AclName::Ipv4AclName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv4-acl-name")
{

}

Ipv4AclName::~Ipv4AclName()
{
}

Ipv6AclName::Ipv6AclName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv6-acl-name")
{

}

Ipv6AclName::~Ipv6AclName()
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

InputInterface::InputInterface()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:input-interface")
{

}

InputInterface::~InputInterface()
{
}

SrcMac::SrcMac()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:src-mac")
{

}

SrcMac::~SrcMac()
{
}

DstMac::DstMac()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dst-mac")
{

}

DstMac::~DstMac()
{
}

MplsExpTop::MplsExpTop()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-top")
{

}

MplsExpTop::~MplsExpTop()
{
}

MplsExpImp::MplsExpImp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-imp")
{

}

MplsExpImp::~MplsExpImp()
{
}

PacketLength::PacketLength()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:packet-length")
{

}

PacketLength::~PacketLength()
{
}

Prec::Prec()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:prec")
{

}

Prec::~Prec()
{
}

QosGroup::QosGroup()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos-group")
{

}

QosGroup::~QosGroup()
{
}

Vlan::Vlan()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vlan")
{

}

Vlan::~Vlan()
{
}

VlanInner::VlanInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vlan-inner")
{

}

VlanInner::~VlanInner()
{
}

AtmClp::AtmClp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:atm-clp")
{

}

AtmClp::~AtmClp()
{
}

AtmVci::AtmVci()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:atm-vci")
{

}

AtmVci::~AtmVci()
{
}

Dei::Dei()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dei")
{

}

Dei::~Dei()
{
}

DeiInner::DeiInner()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dei-inner")
{

}

DeiInner::~DeiInner()
{
}

FlowIp::FlowIp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-ip")
{

}

FlowIp::~FlowIp()
{
}

FlowRecord::FlowRecord()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-record")
{

}

FlowRecord::~FlowRecord()
{
}

FlowDe::FlowDe()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-de")
{

}

FlowDe::~FlowDe()
{
}

FlowDlci::FlowDlci()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:flow-dlci")
{

}

FlowDlci::~FlowDlci()
{
}

WlanUserPriority::WlanUserPriority()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:wlan-user-priority")
{

}

WlanUserPriority::~WlanUserPriority()
{
}

DiscardClass::DiscardClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:discard-class")
{

}

DiscardClass::~DiscardClass()
{
}

ClassMap::ClassMap()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:class-map")
{

}

ClassMap::~ClassMap()
{
}

Metadata::Metadata()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:metadata")
{

}

Metadata::~Metadata()
{
}

Application::Application()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:application")
{

}

Application::~Application()
{
}

SecurityGroupName::SecurityGroupName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:security-group-name")
{

}

SecurityGroupName::~SecurityGroupName()
{
}

SecurityGroupTag::SecurityGroupTag()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:security-group-tag")
{

}

SecurityGroupTag::~SecurityGroupTag()
{
}

IpRtp::IpRtp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ip-rtp")
{

}

IpRtp::~IpRtp()
{
}

Vpls::Vpls()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vpls")
{

}

Vpls::~Vpls()
{
}

Qos::Qos()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos")
{

}

Qos::~Qos()
{
}

Pbr::Pbr()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:pbr")
{

}

Pbr::~Pbr()
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

Appnav::Appnav()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:appnav")
{

}

Appnav::~Appnav()
{
}

Control::Control()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control")
{

}

Control::~Control()
{
}

Inspect::Inspect()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:inspect")
{

}

Inspect::~Inspect()
{
}

PacketService::PacketService()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:packet-service")
{

}

PacketService::~PacketService()
{
}

Service::Service()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:service")
{

}

Service::~Service()
{
}

QosClass::QosClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos-class")
{

}

QosClass::~QosClass()
{
}

AccessControlClass::AccessControlClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:access-control-class")
{

}

AccessControlClass::~AccessControlClass()
{
}

AppnavClass::AppnavClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:appnav-class")
{

}

AppnavClass::~AppnavClass()
{
}

ControlClass::ControlClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control-class")
{

}

ControlClass::~ControlClass()
{
}

InspectClass::InspectClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:inspect-class")
{

}

InspectClass::~InspectClass()
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

const Enum::YLeaf RateUnit::pps {0, "pps"};
const Enum::YLeaf RateUnit::cps {1, "cps"};
const Enum::YLeaf RateUnit::bps {2, "bps"};
const Enum::YLeaf RateUnit::perc {3, "perc"};
const Enum::YLeaf RateUnit::ratio {4, "ratio"};

const Enum::YLeaf Direction::inbound {0, "inbound"};
const Enum::YLeaf Direction::outbound {1, "outbound"};


}
}

