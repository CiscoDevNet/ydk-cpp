
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "policy_types.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace policy_types {

Application::Application()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:application")
{

}

Application::~Application()
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

ClassMap::ClassMap()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:class-map")
{

}

ClassMap::~ClassMap()
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

DiscardClass::DiscardClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:discard-class")
{

}

DiscardClass::~DiscardClass()
{
}

DstMac::DstMac()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:dst-mac")
{

}

DstMac::~DstMac()
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

InputInterface::InputInterface()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:input-interface")
{

}

InputInterface::~InputInterface()
{
}

IpRtp::IpRtp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ip-rtp")
{

}

IpRtp::~IpRtp()
{
}

Ipv4Acl::Ipv4Acl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv4-acl")
{

}

Ipv4Acl::~Ipv4Acl()
{
}

Ipv4AclName::Ipv4AclName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv4-acl-name")
{

}

Ipv4AclName::~Ipv4AclName()
{
}

Ipv6Acl::Ipv6Acl()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv6-acl")
{

}

Ipv6Acl::~Ipv6Acl()
{
}

Ipv6AclName::Ipv6AclName()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:ipv6-acl-name")
{

}

Ipv6AclName::~Ipv6AclName()
{
}

Metadata::Metadata()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:metadata")
{

}

Metadata::~Metadata()
{
}

MplsExpImp::MplsExpImp()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-imp")
{

}

MplsExpImp::~MplsExpImp()
{
}

MplsExpTop::MplsExpTop()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:mpls-exp-top")
{

}

MplsExpTop::~MplsExpTop()
{
}

PacketLength::PacketLength()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:packet-length")
{

}

PacketLength::~PacketLength()
{
}

PolicyType::PolicyType()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:policy-type")
{

}

PolicyType::~PolicyType()
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

SrcMac::SrcMac()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:src-mac")
{

}

SrcMac::~SrcMac()
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

Vpls::Vpls()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:vpls")
{

}

Vpls::~Vpls()
{
}

WlanUserPriority::WlanUserPriority()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:wlan-user-priority")
{

}

WlanUserPriority::~WlanUserPriority()
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

Appnav::Appnav()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:appnav")
{

}

Appnav::~Appnav()
{
}

AppnavClass::AppnavClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:appnav-class")
{

}

AppnavClass::~AppnavClass()
{
}

Control::Control()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control")
{

}

Control::~Control()
{
}

ControlClass::ControlClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:control-class")
{

}

ControlClass::~ControlClass()
{
}

Inspect::Inspect()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:inspect")
{

}

Inspect::~Inspect()
{
}

InspectClass::InspectClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:inspect-class")
{

}

InspectClass::~InspectClass()
{
}

PacketService::PacketService()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:packet-service")
{

}

PacketService::~PacketService()
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

Qos::Qos()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos")
{

}

Qos::~Qos()
{
}

QosClass::QosClass()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:qos-class")
{

}

QosClass::~QosClass()
{
}

Service::Service()
     : Identity("urn:ietf:params:xml:ns:yang:c3pl-types", "policy-types", "policy-types:service")
{

}

Service::~Service()
{
}

const Enum::YLeaf RateUnit::pps {0, "pps"};
const Enum::YLeaf RateUnit::cps {1, "cps"};
const Enum::YLeaf RateUnit::bps {2, "bps"};
const Enum::YLeaf RateUnit::perc {3, "perc"};
const Enum::YLeaf RateUnit::ratio {4, "ratio"};

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


}
}

