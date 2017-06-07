#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_OPER_
#define _CISCO_IOS_XR_ETHERNET_SPAN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_Ethernet_SPAN_oper {

class SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Global; //type: SpanMonitorSession::Global
        class Nodes; //type: SpanMonitorSession::Nodes

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global> global;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes> nodes;
        
}; // SpanMonitorSession


class SpanMonitorSession::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statistics; //type: SpanMonitorSession::Global::Statistics
        class GlobalSessions; //type: SpanMonitorSession::Global::GlobalSessions

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions> global_sessions;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::Statistics> statistics;
        
}; // SpanMonitorSession::Global


class SpanMonitorSession::Global::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statistic; //type: SpanMonitorSession::Global::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::Statistics::Statistic> > statistic;
        
}; // SpanMonitorSession::Global::Statistics


class SpanMonitorSession::Global::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session; //type: string
        YLeaf interface; //type: string
        YLeaf rx_packets_mirrored; //type: uint64
        YLeaf rx_octets_mirrored; //type: uint64
        YLeaf tx_packets_mirrored; //type: uint64
        YLeaf tx_octets_mirrored; //type: uint64
        YLeaf packets_not_mirrored; //type: uint64
        YLeaf octets_not_mirrored; //type: uint64

}; // SpanMonitorSession::Global::Statistics::Statistic


class SpanMonitorSession::Global::GlobalSessions : public Entity
{
    public:
        GlobalSessions();
        ~GlobalSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GlobalSession; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession> > global_session;
        
}; // SpanMonitorSession::Global::GlobalSessions


class SpanMonitorSession::Global::GlobalSessions::GlobalSession : public Entity
{
    public:
        GlobalSession();
        ~GlobalSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session; //type: string
        YLeaf name; //type: string
        YLeaf session_class; //type: SessionClassEnum
        YLeaf id; //type: uint32
        YLeaf destination_error; //type: uint32
        YLeaf destination_interface_name; //type: string
        YLeaf destination_interface_handle; //type: string
        YLeaf interface_error; //type: uint32
        class DestinationData; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData
        class DestinationId; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData> destination_data;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId> destination_id;
        
}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData : public Entity
{
    public:
        DestinationData();
        ~DestinationData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_class; //type: DestinationClassEnum
        YLeaf invalid_value; //type: uint32
        class InterfaceData; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData
        class PseudowireData; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData
        class NextHopIpv4Data; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data
        class NextHopIpv6Data; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData> interface_data;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data> next_hop_ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data> next_hop_ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData> pseudowire_data;
        
}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData : public Entity
{
    public:
        InterfaceData();
        ~InterfaceData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_state; //type: ImStateEnumEnum

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pseudowire_name; //type: string
        YLeaf pseudowire_is_up; //type: boolean

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data : public Entity
{
    public:
        NextHopIpv4Data();
        ~NextHopIpv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf vrf_name; //type: string
        YLeaf address_is_reachable; //type: boolean

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data : public Entity
{
    public:
        NextHopIpv6Data();
        ~NextHopIpv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        YLeaf vrf_name; //type: string
        YLeaf address_is_reachable; //type: boolean

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId : public Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_class; //type: DestinationClassEnum
        YLeaf interface; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf : public Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf : public Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: SpanMonitorSession::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node> > node;
        
}; // SpanMonitorSession::Nodes


class SpanMonitorSession::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class Attachments; //type: SpanMonitorSession::Nodes::Node::Attachments
        class HardwareSessions; //type: SpanMonitorSession::Nodes::Node::HardwareSessions
        class Interfaces; //type: SpanMonitorSession::Nodes::Node::Interfaces

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments> attachments;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions> hardware_sessions;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces> interfaces;
        
}; // SpanMonitorSession::Nodes::Node


class SpanMonitorSession::Nodes::Node::Attachments : public Entity
{
    public:
        Attachments();
        ~Attachments();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attachment; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment

        std::vector<std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment> > attachment;
        
}; // SpanMonitorSession::Nodes::Node::Attachments


class SpanMonitorSession::Nodes::Node::Attachments::Attachment : public Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session; //type: string
        YLeaf interface; //type: string
        YLeaf name; //type: string
        YLeaf local_class; //type: SessionClassEnum
        YLeaf id; //type: uint32
        YLeaf global_class; //type: SessionClassEnum
        YLeaf session_is_configured; //type: boolean
        YLeaf source_interface; //type: string
        YLeaf source_interface_state; //type: ImStateEnumEnum
        YLeaf pfi_error; //type: uint32
        YLeaf dest_pw_type_not_supported; //type: boolean
        YLeaf source_interface_is_a_destination; //type: boolean
        YLeaf destination_interface; //type: string
        YLeaf traffic_direction; //type: TrafficDirectionEnum
        class TrafficParameters; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId> destination_id;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters> traffic_parameters;
        
}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters : public Entity
{
    public:
        TrafficParameters();
        ~TrafficParameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_direction; //type: TrafficDirectionEnum
        YLeaf port_level; //type: boolean
        YLeaf is_acl_enabled; //type: boolean
        YLeaf mirror_bytes; //type: uint32
        YLeaf mirror_interval; //type: MirrorIntervalEnum

}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId : public Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_class; //type: DestinationClassEnum
        YLeaf interface; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf : public Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf : public Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::HardwareSessions : public Entity
{
    public:
        HardwareSessions();
        ~HardwareSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HardwareSession; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession> > hardware_session;
        
}; // SpanMonitorSession::Nodes::Node::HardwareSessions


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession : public Entity
{
    public:
        HardwareSession();
        ~HardwareSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_class; //type: SpanSessionClassEnum
        YLeaf session_id; //type: int32
        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf session_class_xr; //type: SessionClassEnum
        YLeaf destination_interface; //type: string
        YLeaf platform_error; //type: uint32
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId> destination_id;
        
}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId : public Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_class; //type: DestinationClassEnum
        YLeaf interface; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf : public Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf : public Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface> > interface;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces


class SpanMonitorSession::Nodes::Node::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf source_interface; //type: string
        YLeaf platform_error; //type: uint32
        YLeaf destination_interface; //type: string
        YLeaf traffic_direction; //type: TrafficDirectionEnum
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId
        class TrafficMirroringParameters; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters
        class Attachment; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment

        std::vector<std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment> > attachment;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId> destination_id;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters> traffic_mirroring_parameters;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId : public Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_class; //type: DestinationClassEnum
        YLeaf interface; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf : public Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf : public Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters : public Entity
{
    public:
        TrafficMirroringParameters();
        ~TrafficMirroringParameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_direction; //type: TrafficDirectionEnum
        YLeaf port_level; //type: boolean
        YLeaf is_acl_enabled; //type: boolean
        YLeaf mirror_bytes; //type: uint32
        YLeaf mirror_interval; //type: MirrorIntervalEnum

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment : public Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_; //type: SessionClassEnum
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId
        class TrafficMirroringParameters; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId> destination_id;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters> traffic_mirroring_parameters;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId : public Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_class; //type: DestinationClassEnum
        YLeaf interface; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf : public Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf : public Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters : public Entity
{
    public:
        TrafficMirroringParameters();
        ~TrafficMirroringParameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_direction; //type: TrafficDirectionEnum
        YLeaf port_level; //type: boolean
        YLeaf is_acl_enabled; //type: boolean
        YLeaf mirror_bytes; //type: uint32
        YLeaf mirror_interval; //type: MirrorIntervalEnum

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters

class ImStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf im_state_not_ready;
        static const Enum::YLeaf im_state_admin_down;
        static const Enum::YLeaf im_state_down;
        static const Enum::YLeaf im_state_up;
        static const Enum::YLeaf im_state_shutdown;
        static const Enum::YLeaf im_state_err_disable;
        static const Enum::YLeaf im_state_down_immediate;
        static const Enum::YLeaf im_state_down_immediate_admin;
        static const Enum::YLeaf im_state_down_graceful;
        static const Enum::YLeaf im_state_begin_shutdown;
        static const Enum::YLeaf im_state_end_shutdown;
        static const Enum::YLeaf im_state_begin_error_disable;
        static const Enum::YLeaf im_state_end_error_disable;
        static const Enum::YLeaf im_state_begin_down_graceful;
        static const Enum::YLeaf im_state_reset;
        static const Enum::YLeaf im_state_operational;
        static const Enum::YLeaf im_state_not_operational;
        static const Enum::YLeaf im_state_unknown;
        static const Enum::YLeaf im_state_last;

};

class DestinationClassEnum : public Enum
{
    public:
        static const Enum::YLeaf interface_class;
        static const Enum::YLeaf pseudowire_class;
        static const Enum::YLeaf next_hop_ipv4_class;
        static const Enum::YLeaf next_hop_ipv6_class;
        static const Enum::YLeaf invalid_class;

};

class TrafficDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf rx_only;
        static const Enum::YLeaf tx_only;
        static const Enum::YLeaf both;

};

class SessionClassEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet_class;
        static const Enum::YLeaf ipv4_class;
        static const Enum::YLeaf ipv6_class;
        static const Enum::YLeaf invalid_class;

};

class MirrorIntervalEnum : public Enum
{
    public:
        static const Enum::YLeaf mirror_interval_all;
        static const Enum::YLeaf mirror_interval512;
        static const Enum::YLeaf mirror_interval1k;
        static const Enum::YLeaf mirror_interval2k;
        static const Enum::YLeaf mirror_interval4k;
        static const Enum::YLeaf mirror_interval8k;
        static const Enum::YLeaf mirror_interval16k;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_OPER_ */

