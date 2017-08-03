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

class MplsExpImp : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpImp();
        ~MplsExpImp();


}; // MplsExpImp

class FlowDlci : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDlci();
        ~FlowDlci();


}; // FlowDlci

class Cos : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Cos();
        ~Cos();


}; // Cos

class SecurityGroupName : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupName();
        ~SecurityGroupName();


}; // SecurityGroupName

class Ipv4AclName : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4AclName();
        ~Ipv4AclName();


}; // Ipv4AclName

class Dei : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Dei();
        ~Dei();


}; // Dei

class Ipv6AclName : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6AclName();
        ~Ipv6AclName();


}; // Ipv6AclName

class SrcMac : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SrcMac();
        ~SrcMac();


}; // SrcMac

class FlowDe : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDe();
        ~FlowDe();


}; // FlowDe

class Vlan : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vlan();
        ~Vlan();


}; // Vlan

class PacketLength : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        PacketLength();
        ~PacketLength();


}; // PacketLength

class InputInterface : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        InputInterface();
        ~InputInterface();


}; // InputInterface

class QosGroup : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        QosGroup();
        ~QosGroup();


}; // QosGroup

class Ipv4Acl : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();


}; // Ipv4Acl

class Ipv6Acl : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();


}; // Ipv6Acl

class FlowRecord : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowRecord();
        ~FlowRecord();


}; // FlowRecord

class AtmClp : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        AtmClp();
        ~AtmClp();


}; // AtmClp

class DeiInner : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DeiInner();
        ~DeiInner();


}; // DeiInner

class Vpls : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vpls();
        ~Vpls();


}; // Vpls

class DstMac : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DstMac();
        ~DstMac();


}; // DstMac

class Prec : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Prec();
        ~Prec();


}; // Prec

class ClassType : public virtual ydk::Identity
{
    public:
        ClassType();
        ~ClassType();


}; // ClassType

class MplsExpTop : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpTop();
        ~MplsExpTop();


}; // MplsExpTop

class DiscardClass : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DiscardClass();
        ~DiscardClass();


}; // DiscardClass

class FlowIp : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowIp();
        ~FlowIp();


}; // FlowIp

class WlanUserPriority : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        WlanUserPriority();
        ~WlanUserPriority();


}; // WlanUserPriority

class ClassMap : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        ClassMap();
        ~ClassMap();


}; // ClassMap

class Application : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Application();
        ~Application();


}; // Application

class CosInner : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        CosInner();
        ~CosInner();


}; // CosInner

class SecurityGroupTag : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupTag();
        ~SecurityGroupTag();


}; // SecurityGroupTag

class PolicyType : public virtual ydk::Identity
{
    public:
        PolicyType();
        ~PolicyType();


}; // PolicyType

class IpRtp : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        IpRtp();
        ~IpRtp();


}; // IpRtp

class AtmVci : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        AtmVci();
        ~AtmVci();


}; // AtmVci

class Metadata : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Metadata();
        ~Metadata();


}; // Metadata

class VlanInner : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        VlanInner();
        ~VlanInner();


}; // VlanInner

class Pbr : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Pbr();
        ~Pbr();


}; // Pbr

class AccessControlClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        AccessControlClass();
        ~AccessControlClass();


}; // AccessControlClass

class PacketService : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PacketService();
        ~PacketService();


}; // PacketService

class Inspect : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Inspect();
        ~Inspect();


}; // Inspect

class PerfMon : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PerfMon();
        ~PerfMon();


}; // PerfMon

class Qos : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Qos();
        ~Qos();


}; // Qos

class AppnavClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        AppnavClass();
        ~AppnavClass();


}; // AppnavClass

class QosClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        QosClass();
        ~QosClass();


}; // QosClass

class ControlClass : public policy_types::ClassType, virtual ydk::Identity
{
    public:
        ControlClass();
        ~ControlClass();


}; // ControlClass

class Control : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Control();
        ~Control();


}; // Control

class AccessControl : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        AccessControl();
        ~AccessControl();


}; // AccessControl

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

class Appnav : public policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Appnav();
        ~Appnav();


}; // Appnav

class Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

};

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


}
}

#endif /* _POLICY_TYPES_ */

