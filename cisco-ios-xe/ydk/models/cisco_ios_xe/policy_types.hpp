#ifndef _POLICY_TYPES_
#define _POLICY_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_diffserv_classifier.hpp"

namespace cisco_ios_xe {
namespace policy_types {

class Application : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Application();
        ~Application();


}; // Application

class AtmClp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        AtmClp();
        ~AtmClp();


}; // AtmClp

class AtmVci : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        AtmVci();
        ~AtmVci();


}; // AtmVci

class ClassMap : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        ClassMap();
        ~ClassMap();


}; // ClassMap

class ClassType : public virtual ydk::Identity
{
    public:
        ClassType();
        ~ClassType();


}; // ClassType

class Cos : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Cos();
        ~Cos();


}; // Cos

class CosInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        CosInner();
        ~CosInner();


}; // CosInner

class Dei : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Dei();
        ~Dei();


}; // Dei

class DeiInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DeiInner();
        ~DeiInner();


}; // DeiInner

class DiscardClass : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DiscardClass();
        ~DiscardClass();


}; // DiscardClass

class DstMac : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DstMac();
        ~DstMac();


}; // DstMac

class FlowDe : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDe();
        ~FlowDe();


}; // FlowDe

class FlowDlci : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDlci();
        ~FlowDlci();


}; // FlowDlci

class FlowIp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowIp();
        ~FlowIp();


}; // FlowIp

class FlowRecord : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowRecord();
        ~FlowRecord();


}; // FlowRecord

class InputInterface : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        InputInterface();
        ~InputInterface();


}; // InputInterface

class IpRtp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        IpRtp();
        ~IpRtp();


}; // IpRtp

class Ipv4Acl : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();


}; // Ipv4Acl

class Ipv4AclName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4AclName();
        ~Ipv4AclName();


}; // Ipv4AclName

class Ipv6Acl : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();


}; // Ipv6Acl

class Ipv6AclName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6AclName();
        ~Ipv6AclName();


}; // Ipv6AclName

class Metadata : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Metadata();
        ~Metadata();


}; // Metadata

class MplsExpImp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpImp();
        ~MplsExpImp();


}; // MplsExpImp

class MplsExpTop : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpTop();
        ~MplsExpTop();


}; // MplsExpTop

class PacketLength : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        PacketLength();
        ~PacketLength();


}; // PacketLength

class PolicyType : public virtual ydk::Identity
{
    public:
        PolicyType();
        ~PolicyType();


}; // PolicyType

class Prec : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Prec();
        ~Prec();


}; // Prec

class QosGroup : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        QosGroup();
        ~QosGroup();


}; // QosGroup

class SecurityGroupName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupName();
        ~SecurityGroupName();


}; // SecurityGroupName

class SecurityGroupTag : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupTag();
        ~SecurityGroupTag();


}; // SecurityGroupTag

class SrcMac : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SrcMac();
        ~SrcMac();


}; // SrcMac

class Vlan : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vlan();
        ~Vlan();


}; // Vlan

class VlanInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        VlanInner();
        ~VlanInner();


}; // VlanInner

class Vpls : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vpls();
        ~Vpls();


}; // Vpls

class WlanUserPriority : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        WlanUserPriority();
        ~WlanUserPriority();


}; // WlanUserPriority

class AccessControl : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        AccessControl();
        ~AccessControl();


}; // AccessControl

class AccessControlClass : public cisco_ios_xe::policy_types::ClassType, virtual ydk::Identity
{
    public:
        AccessControlClass();
        ~AccessControlClass();


}; // AccessControlClass

class Appnav : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Appnav();
        ~Appnav();


}; // Appnav

class AppnavClass : public cisco_ios_xe::policy_types::ClassType, virtual ydk::Identity
{
    public:
        AppnavClass();
        ~AppnavClass();


}; // AppnavClass

class Control : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Control();
        ~Control();


}; // Control

class ControlClass : public cisco_ios_xe::policy_types::ClassType, virtual ydk::Identity
{
    public:
        ControlClass();
        ~ControlClass();


}; // ControlClass

class Inspect : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Inspect();
        ~Inspect();


}; // Inspect

class InspectClass : public cisco_ios_xe::policy_types::ClassType, virtual ydk::Identity
{
    public:
        InspectClass();
        ~InspectClass();


}; // InspectClass

class PacketService : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PacketService();
        ~PacketService();


}; // PacketService

class Pbr : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Pbr();
        ~Pbr();


}; // Pbr

class PerfMon : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PerfMon();
        ~PerfMon();


}; // PerfMon

class Qos : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Qos();
        ~Qos();


}; // Qos

class QosClass : public cisco_ios_xe::policy_types::ClassType, virtual ydk::Identity
{
    public:
        QosClass();
        ~QosClass();


}; // QosClass

class Service : public cisco_ios_xe::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Service();
        ~Service();


}; // Service

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

