#ifndef _POLICY_TYPES_
#define _POLICY_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_diffserv_classifier.hpp"

namespace cisco_ios_xr {
namespace policy_types {

class FlowDlci : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDlci();
        ~FlowDlci();


}; // FlowDlci

class SecurityGroupName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupName();
        ~SecurityGroupName();


}; // SecurityGroupName

class FlowRecord : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowRecord();
        ~FlowRecord();


}; // FlowRecord

class Ipv6Acl : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();


}; // Ipv6Acl

class Vlan : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vlan();
        ~Vlan();


}; // Vlan

class Ipv6AclName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6AclName();
        ~Ipv6AclName();


}; // Ipv6AclName

class Application : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Application();
        ~Application();


}; // Application

class MplsExpTop : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpTop();
        ~MplsExpTop();


}; // MplsExpTop

class SecurityGroupTag : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupTag();
        ~SecurityGroupTag();


}; // SecurityGroupTag

class MplsExpImp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpImp();
        ~MplsExpImp();


}; // MplsExpImp

class VlanInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        VlanInner();
        ~VlanInner();


}; // VlanInner

class InputInterface : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        InputInterface();
        ~InputInterface();


}; // InputInterface

class Metadata : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Metadata();
        ~Metadata();


}; // Metadata

class DeiInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DeiInner();
        ~DeiInner();


}; // DeiInner

class FlowIp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowIp();
        ~FlowIp();


}; // FlowIp

class AtmVci : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        AtmVci();
        ~AtmVci();


}; // AtmVci

class DstMac : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DstMac();
        ~DstMac();


}; // DstMac

class AtmClp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        AtmClp();
        ~AtmClp();


}; // AtmClp

class QosGroup : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        QosGroup();
        ~QosGroup();


}; // QosGroup

class CosInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        CosInner();
        ~CosInner();


}; // CosInner

class Vpls : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vpls();
        ~Vpls();


}; // Vpls

class Prec : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Prec();
        ~Prec();


}; // Prec

class Cos : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Cos();
        ~Cos();


}; // Cos

class PolicyType : public virtual ydk::Identity
{
    public:
        PolicyType();
        ~PolicyType();


}; // PolicyType

class Ipv4AclName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4AclName();
        ~Ipv4AclName();


}; // Ipv4AclName

class FlowDe : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDe();
        ~FlowDe();


}; // FlowDe

class Ipv4Acl : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();


}; // Ipv4Acl

class ClassType : public virtual ydk::Identity
{
    public:
        ClassType();
        ~ClassType();


}; // ClassType

class IpRtp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        IpRtp();
        ~IpRtp();


}; // IpRtp

class WlanUserPriority : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        WlanUserPriority();
        ~WlanUserPriority();


}; // WlanUserPriority

class PacketLength : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        PacketLength();
        ~PacketLength();


}; // PacketLength

class DiscardClass : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DiscardClass();
        ~DiscardClass();


}; // DiscardClass

class SrcMac : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SrcMac();
        ~SrcMac();


}; // SrcMac

class Dei : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Dei();
        ~Dei();


}; // Dei

class ClassMap : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        ClassMap();
        ~ClassMap();


}; // ClassMap

class AccessControl : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        AccessControl();
        ~AccessControl();


}; // AccessControl

class PacketService : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PacketService();
        ~PacketService();


}; // PacketService

class Appnav : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Appnav();
        ~Appnav();


}; // Appnav

class InspectClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        InspectClass();
        ~InspectClass();


}; // InspectClass

class Service : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Service();
        ~Service();


}; // Service

class Pbr : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Pbr();
        ~Pbr();


}; // Pbr

class AppnavClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        AppnavClass();
        ~AppnavClass();


}; // AppnavClass

class Control : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Control();
        ~Control();


}; // Control

class QosClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        QosClass();
        ~QosClass();


}; // QosClass

class PerfMon : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PerfMon();
        ~PerfMon();


}; // PerfMon

class AccessControlClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        AccessControlClass();
        ~AccessControlClass();


}; // AccessControlClass

class ControlClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        ControlClass();
        ~ControlClass();


}; // ControlClass

class Qos : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Qos();
        ~Qos();


}; // Qos

class Inspect : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Inspect();
        ~Inspect();


}; // Inspect

class Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf peta;
        static const ydk::Enum::YLeaf tera;
        static const ydk::Enum::YLeaf giga;
        static const ydk::Enum::YLeaf mega;
        static const ydk::Enum::YLeaf kilo;
        static const ydk::Enum::YLeaf milli;
        static const ydk::Enum::YLeaf nano;

};

class RateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf cps;
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf perc;
        static const ydk::Enum::YLeaf ratio;

};

class Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

};


}
}

#endif /* _POLICY_TYPES_ */

