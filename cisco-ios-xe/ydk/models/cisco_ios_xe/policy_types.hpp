#ifndef _POLICY_TYPES_
#define _POLICY_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_diffserv_classifier.hpp"

namespace ydk {
namespace policy_types {

class InputInterfaceIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        InputInterfaceIdentity();
        ~InputInterfaceIdentity();


}; // InputInterfaceIdentity

class SrcMacIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        SrcMacIdentity();
        ~SrcMacIdentity();


}; // SrcMacIdentity

class ApplicationIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        ApplicationIdentity();
        ~ApplicationIdentity();


}; // ApplicationIdentity

class SecurityGroupNameIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        SecurityGroupNameIdentity();
        ~SecurityGroupNameIdentity();


}; // SecurityGroupNameIdentity

class Ipv4AclNameIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        Ipv4AclNameIdentity();
        ~Ipv4AclNameIdentity();


}; // Ipv4AclNameIdentity

class FlowDlciIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        FlowDlciIdentity();
        ~FlowDlciIdentity();


}; // FlowDlciIdentity

class DeiIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        DeiIdentity();
        ~DeiIdentity();


}; // DeiIdentity

class PrecIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        PrecIdentity();
        ~PrecIdentity();


}; // PrecIdentity

class PacketLengthIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        PacketLengthIdentity();
        ~PacketLengthIdentity();


}; // PacketLengthIdentity

class Ipv4AclIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        Ipv4AclIdentity();
        ~Ipv4AclIdentity();


}; // Ipv4AclIdentity

class FlowDeIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        FlowDeIdentity();
        ~FlowDeIdentity();


}; // FlowDeIdentity

class FlowIpIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        FlowIpIdentity();
        ~FlowIpIdentity();


}; // FlowIpIdentity

class FlowRecordIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        FlowRecordIdentity();
        ~FlowRecordIdentity();


}; // FlowRecordIdentity

class VlanInnerIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        VlanInnerIdentity();
        ~VlanInnerIdentity();


}; // VlanInnerIdentity

class MetadataIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        MetadataIdentity();
        ~MetadataIdentity();


}; // MetadataIdentity

class VlanIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        VlanIdentity();
        ~VlanIdentity();


}; // VlanIdentity

class AtmVciIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        AtmVciIdentity();
        ~AtmVciIdentity();


}; // AtmVciIdentity

class ClassMapIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        ClassMapIdentity();
        ~ClassMapIdentity();


}; // ClassMapIdentity

class QosGroupIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        QosGroupIdentity();
        ~QosGroupIdentity();


}; // QosGroupIdentity

class WlanUserPriorityIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        WlanUserPriorityIdentity();
        ~WlanUserPriorityIdentity();


}; // WlanUserPriorityIdentity

class IpRtpIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        IpRtpIdentity();
        ~IpRtpIdentity();


}; // IpRtpIdentity

class Ipv6AclIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        Ipv6AclIdentity();
        ~Ipv6AclIdentity();


}; // Ipv6AclIdentity

class AtmClpIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        AtmClpIdentity();
        ~AtmClpIdentity();


}; // AtmClpIdentity

class DstMacIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        DstMacIdentity();
        ~DstMacIdentity();


}; // DstMacIdentity

class CosIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        CosIdentity();
        ~CosIdentity();


}; // CosIdentity

class DeiInnerIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        DeiInnerIdentity();
        ~DeiInnerIdentity();


}; // DeiInnerIdentity

class MplsExpTopIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        MplsExpTopIdentity();
        ~MplsExpTopIdentity();


}; // MplsExpTopIdentity

class CosInnerIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        CosInnerIdentity();
        ~CosInnerIdentity();


}; // CosInnerIdentity

class Ipv6AclNameIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        Ipv6AclNameIdentity();
        ~Ipv6AclNameIdentity();


}; // Ipv6AclNameIdentity

class MplsExpImpIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        MplsExpImpIdentity();
        ~MplsExpImpIdentity();


}; // MplsExpImpIdentity

class SecurityGroupTagIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        SecurityGroupTagIdentity();
        ~SecurityGroupTagIdentity();


}; // SecurityGroupTagIdentity

class ClassTypeIdentity : public virtual Identity
{
    public:
        ClassTypeIdentity();
        ~ClassTypeIdentity();


}; // ClassTypeIdentity

class DiscardClassIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        DiscardClassIdentity();
        ~DiscardClassIdentity();


}; // DiscardClassIdentity

class VplsIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        VplsIdentity();
        ~VplsIdentity();


}; // VplsIdentity

class PolicyTypeIdentity : public virtual Identity
{
    public:
        PolicyTypeIdentity();
        ~PolicyTypeIdentity();


}; // PolicyTypeIdentity

class ControlIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        ControlIdentity();
        ~ControlIdentity();


}; // ControlIdentity

class QosIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        QosIdentity();
        ~QosIdentity();


}; // QosIdentity

class PerfMonIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        PerfMonIdentity();
        ~PerfMonIdentity();


}; // PerfMonIdentity

class PacketServiceIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        PacketServiceIdentity();
        ~PacketServiceIdentity();


}; // PacketServiceIdentity

class QosClassIdentity : public policy_types::ClassTypeIdentity, virtual Identity
{
    public:
        QosClassIdentity();
        ~QosClassIdentity();


}; // QosClassIdentity

class ControlClassIdentity : public policy_types::ClassTypeIdentity, virtual Identity
{
    public:
        ControlClassIdentity();
        ~ControlClassIdentity();


}; // ControlClassIdentity

class InspectClassIdentity : public policy_types::ClassTypeIdentity, virtual Identity
{
    public:
        InspectClassIdentity();
        ~InspectClassIdentity();


}; // InspectClassIdentity

class AppnavClassIdentity : public policy_types::ClassTypeIdentity, virtual Identity
{
    public:
        AppnavClassIdentity();
        ~AppnavClassIdentity();


}; // AppnavClassIdentity

class ServiceIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        ServiceIdentity();
        ~ServiceIdentity();


}; // ServiceIdentity

class AccessControlClassIdentity : public policy_types::ClassTypeIdentity, virtual Identity
{
    public:
        AccessControlClassIdentity();
        ~AccessControlClassIdentity();


}; // AccessControlClassIdentity

class AccessControlIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        AccessControlIdentity();
        ~AccessControlIdentity();


}; // AccessControlIdentity

class AppnavIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        AppnavIdentity();
        ~AppnavIdentity();


}; // AppnavIdentity

class InspectIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        InspectIdentity();
        ~InspectIdentity();


}; // InspectIdentity

class PbrIdentity : public policy_types::PolicyTypeIdentity, virtual Identity
{
    public:
        PbrIdentity();
        ~PbrIdentity();


}; // PbrIdentity

class MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf peta;
        static const Enum::YLeaf tera;
        static const Enum::YLeaf giga;
        static const Enum::YLeaf mega;
        static const Enum::YLeaf kilo;
        static const Enum::YLeaf milli;
        static const Enum::YLeaf nano;

};

class DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf inbound;
        static const Enum::YLeaf outbound;

};

class RateUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf pps;
        static const Enum::YLeaf cps;
        static const Enum::YLeaf bps;
        static const Enum::YLeaf perc;
        static const Enum::YLeaf ratio;

};


}
}

#endif /* _POLICY_TYPES_ */

