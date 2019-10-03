#ifndef _POLICY_TYPES_
#define _POLICY_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_diffserv_classifier.hpp"

namespace ietf {
namespace policy_types {

class InputInterface : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        InputInterface();
        ~InputInterface();


}; // InputInterface

class SrcMac : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SrcMac();
        ~SrcMac();


}; // SrcMac

class Application : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Application();
        ~Application();


}; // Application

class SecurityGroupName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupName();
        ~SecurityGroupName();


}; // SecurityGroupName

class Ipv4AclName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4AclName();
        ~Ipv4AclName();


}; // Ipv4AclName

class FlowDlci : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDlci();
        ~FlowDlci();


}; // FlowDlci

class Dei : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Dei();
        ~Dei();


}; // Dei

class Prec : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Prec();
        ~Prec();


}; // Prec

class PacketLength : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        PacketLength();
        ~PacketLength();


}; // PacketLength

class Ipv4Acl : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();


}; // Ipv4Acl

class FlowDe : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        FlowDe();
        ~FlowDe();


}; // FlowDe

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

class VlanInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        VlanInner();
        ~VlanInner();


}; // VlanInner

class Metadata : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Metadata();
        ~Metadata();


}; // Metadata

class Vlan : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vlan();
        ~Vlan();


}; // Vlan

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

class QosGroup : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        QosGroup();
        ~QosGroup();


}; // QosGroup

class WlanUserPriority : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        WlanUserPriority();
        ~WlanUserPriority();


}; // WlanUserPriority

class IpRtp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        IpRtp();
        ~IpRtp();


}; // IpRtp

class Ipv6Acl : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();


}; // Ipv6Acl

class AtmClp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        AtmClp();
        ~AtmClp();


}; // AtmClp

class DstMac : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DstMac();
        ~DstMac();


}; // DstMac

class Cos : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Cos();
        ~Cos();


}; // Cos

class DeiInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DeiInner();
        ~DeiInner();


}; // DeiInner

class MplsExpTop : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpTop();
        ~MplsExpTop();


}; // MplsExpTop

class CosInner : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        CosInner();
        ~CosInner();


}; // CosInner

class Ipv6AclName : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Ipv6AclName();
        ~Ipv6AclName();


}; // Ipv6AclName

class MplsExpImp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        MplsExpImp();
        ~MplsExpImp();


}; // MplsExpImp

class SecurityGroupTag : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SecurityGroupTag();
        ~SecurityGroupTag();


}; // SecurityGroupTag

class ClassType : public virtual ydk::Identity
{
    public:
        ClassType();
        ~ClassType();


}; // ClassType

class DiscardClass : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DiscardClass();
        ~DiscardClass();


}; // DiscardClass

class Vpls : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Vpls();
        ~Vpls();


}; // Vpls

class PolicyType : public virtual ydk::Identity
{
    public:
        PolicyType();
        ~PolicyType();


}; // PolicyType

class Control : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Control();
        ~Control();


}; // Control

class Qos : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Qos();
        ~Qos();


}; // Qos

class PerfMon : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PerfMon();
        ~PerfMon();


}; // PerfMon

class PacketService : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        PacketService();
        ~PacketService();


}; // PacketService

class QosClass : public ietf::policy_types::ClassType, virtual ydk::Identity
{
    public:
        QosClass();
        ~QosClass();


}; // QosClass

class ControlClass : public ietf::policy_types::ClassType, virtual ydk::Identity
{
    public:
        ControlClass();
        ~ControlClass();


}; // ControlClass

class InspectClass : public ietf::policy_types::ClassType, virtual ydk::Identity
{
    public:
        InspectClass();
        ~InspectClass();


}; // InspectClass

class AppnavClass : public ietf::policy_types::ClassType, virtual ydk::Identity
{
    public:
        AppnavClass();
        ~AppnavClass();


}; // AppnavClass

class Service : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Service();
        ~Service();


}; // Service

class AccessControlClass : public ietf::policy_types::ClassType, virtual ydk::Identity
{
    public:
        AccessControlClass();
        ~AccessControlClass();


}; // AccessControlClass

class AccessControl : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        AccessControl();
        ~AccessControl();


}; // AccessControl

class Appnav : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Appnav();
        ~Appnav();


}; // Appnav

class Inspect : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Inspect();
        ~Inspect();


}; // Inspect

class Pbr : public ietf::policy_types::PolicyType, virtual ydk::Identity
{
    public:
        Pbr();
        ~Pbr();


}; // Pbr

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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "peta") return 1;
            if (name == "tera") return 2;
            if (name == "giga") return 3;
            if (name == "mega") return 4;
            if (name == "kilo") return 5;
            if (name == "milli") return 6;
            if (name == "nano") return 7;
            return -1;
        }
};

class Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 0;
            if (name == "outbound") return 1;
            return -1;
        }
};

class RateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf cps;
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf perc;
        static const ydk::Enum::YLeaf ratio;

        static int get_enum_value(const std::string & name) {
            if (name == "pps") return 0;
            if (name == "cps") return 1;
            if (name == "bps") return 2;
            if (name == "perc") return 3;
            if (name == "ratio") return 4;
            return -1;
        }
};


}
}

#endif /* _POLICY_TYPES_ */

