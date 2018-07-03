#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_OPER_
#define _CISCO_IOS_XR_ETHERNET_SPAN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Ethernet_SPAN_oper {

class SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Global; //type: SpanMonitorSession::Global
        class Nodes; //type: SpanMonitorSession::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes> nodes;
        
}; // SpanMonitorSession


class SpanMonitorSession::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Statistics; //type: SpanMonitorSession::Global::Statistics
        class GlobalSessions; //type: SpanMonitorSession::Global::GlobalSessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions> global_sessions;
        
}; // SpanMonitorSession::Global


class SpanMonitorSession::Global::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Statistic; //type: SpanMonitorSession::Global::Statistics::Statistic

        ydk::YList statistic;
        
}; // SpanMonitorSession::Global::Statistics


class SpanMonitorSession::Global::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf rx_packets_mirrored; //type: uint64
        ydk::YLeaf rx_octets_mirrored; //type: uint64
        ydk::YLeaf tx_packets_mirrored; //type: uint64
        ydk::YLeaf tx_octets_mirrored; //type: uint64
        ydk::YLeaf packets_not_mirrored; //type: uint64
        ydk::YLeaf octets_not_mirrored; //type: uint64

}; // SpanMonitorSession::Global::Statistics::Statistic


class SpanMonitorSession::Global::GlobalSessions : public ydk::Entity
{
    public:
        GlobalSessions();
        ~GlobalSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class GlobalSession; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession

        ydk::YList global_session;
        
}; // SpanMonitorSession::Global::GlobalSessions


class SpanMonitorSession::Global::GlobalSessions::GlobalSession : public ydk::Entity
{
    public:
        GlobalSession();
        ~GlobalSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf session_class; //type: SessionClass
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf destination_error; //type: uint32
        ydk::YLeaf destination_interface_name; //type: string
        ydk::YLeaf destination_interface_handle; //type: string
        ydk::YLeaf interface_error; //type: uint32
        class DestinationData; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData
        class DestinationId; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId
        class InjectInterface; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData> destination_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId> destination_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface> inject_interface;
        
}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData : public ydk::Entity
{
    public:
        DestinationData();
        ~DestinationData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_class; //type: DestinationClass
        ydk::YLeaf invalid_value; //type: uint32
        class InterfaceData; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData
        class PseudowireData; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData
        class NextHopIpv4Data; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data
        class NextHopIpv6Data; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData> interface_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data> next_hop_ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data> next_hop_ipv6_data;
        
}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData : public ydk::Entity
{
    public:
        InterfaceData();
        ~InterfaceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_state; //type: ImStateEnum

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_name; //type: string
        ydk::YLeaf pseudowire_is_up; //type: boolean

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data : public ydk::Entity
{
    public:
        NextHopIpv4Data();
        ~NextHopIpv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf address_is_reachable; //type: boolean

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data : public ydk::Entity
{
    public:
        NextHopIpv6Data();
        ~NextHopIpv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf address_is_reachable; //type: boolean

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId : public ydk::Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_class; //type: DestinationClass
        ydk::YLeaf interface; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf : public ydk::Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf : public ydk::Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface : public ydk::Entity
{
    public:
        InjectInterface();
        ~InjectInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface


class SpanMonitorSession::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: SpanMonitorSession::Nodes::Node

        ydk::YList node;
        
}; // SpanMonitorSession::Nodes


class SpanMonitorSession::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        class Attachments; //type: SpanMonitorSession::Nodes::Node::Attachments
        class HardwareSessions; //type: SpanMonitorSession::Nodes::Node::HardwareSessions
        class Interfaces; //type: SpanMonitorSession::Nodes::Node::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments> attachments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions> hardware_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces> interfaces;
        
}; // SpanMonitorSession::Nodes::Node


class SpanMonitorSession::Nodes::Node::Attachments : public ydk::Entity
{
    public:
        Attachments();
        ~Attachments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attachment; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment

        ydk::YList attachment;
        
}; // SpanMonitorSession::Nodes::Node::Attachments


class SpanMonitorSession::Nodes::Node::Attachments::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf local_class; //type: SessionClass
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf global_class; //type: SessionClass
        ydk::YLeaf session_is_configured; //type: boolean
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf source_interface_state; //type: ImStateEnum
        ydk::YLeaf pfi_error; //type: uint32
        ydk::YLeaf dest_pw_type_not_supported; //type: boolean
        ydk::YLeaf source_interface_is_a_destination; //type: boolean
        ydk::YLeaf destination_interface; //type: string
        ydk::YLeaf traffic_direction; //type: TrafficDirection
        class TrafficParameters; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters> traffic_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId> destination_id;
        
}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters : public ydk::Entity
{
    public:
        TrafficParameters();
        ~TrafficParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_direction; //type: TrafficDirection
        ydk::YLeaf port_level; //type: boolean
        ydk::YLeaf is_acl_enabled; //type: boolean
        ydk::YLeaf mirror_bytes; //type: uint32
        ydk::YLeaf mirror_interval; //type: MirrorInterval
        ydk::YLeaf acl_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId : public ydk::Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_class; //type: DestinationClass
        ydk::YLeaf interface; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf : public ydk::Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf : public ydk::Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::HardwareSessions : public ydk::Entity
{
    public:
        HardwareSessions();
        ~HardwareSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareSession; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession

        ydk::YList hardware_session;
        
}; // SpanMonitorSession::Nodes::Node::HardwareSessions


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession : public ydk::Entity
{
    public:
        HardwareSession();
        ~HardwareSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_class; //type: SpanSessionClass
        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf session_class_xr; //type: SessionClass
        ydk::YLeaf destination_interface; //type: string
        ydk::YLeaf platform_error; //type: uint32
        ydk::YLeaf inject_interface_ifh; //type: string
        ydk::YLeaf inject_interface_mac; //type: string
        ydk::YLeaf inject_interface_invalid; //type: boolean
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId> destination_id;
        
}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId : public ydk::Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_class; //type: DestinationClass
        ydk::YLeaf interface; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf : public ydk::Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf : public ydk::Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces


class SpanMonitorSession::Nodes::Node::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf platform_error; //type: uint32
        ydk::YLeaf destination_interface; //type: string
        ydk::YLeaf traffic_direction; //type: TrafficDirection
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId
        class TrafficMirroringParameters; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters
        class Attachment; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId> destination_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters> traffic_mirroring_parameters;
        ydk::YList attachment;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId : public ydk::Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_class; //type: DestinationClass
        ydk::YLeaf interface; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf : public ydk::Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf : public ydk::Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters : public ydk::Entity
{
    public:
        TrafficMirroringParameters();
        ~TrafficMirroringParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_direction; //type: TrafficDirection
        ydk::YLeaf port_level; //type: boolean
        ydk::YLeaf is_acl_enabled; //type: boolean
        ydk::YLeaf mirror_bytes; //type: uint32
        ydk::YLeaf mirror_interval; //type: MirrorInterval
        ydk::YLeaf acl_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_; //type: SessionClass
        class DestinationId; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId
        class TrafficMirroringParameters; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId> destination_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters> traffic_mirroring_parameters;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId : public ydk::Entity
{
    public:
        DestinationId();
        ~DestinationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_class; //type: DestinationClass
        ydk::YLeaf interface; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf invalid_value; //type: uint32
        class Ipv4AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf
        class Ipv6AddressAndVrf; //type: SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
        
}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf : public ydk::Entity
{
    public:
        Ipv4AddressAndVrf();
        ~Ipv4AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf : public ydk::Entity
{
    public:
        Ipv6AddressAndVrf();
        ~Ipv6AddressAndVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf


class SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters : public ydk::Entity
{
    public:
        TrafficMirroringParameters();
        ~TrafficMirroringParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_direction; //type: TrafficDirection
        ydk::YLeaf port_level; //type: boolean
        ydk::YLeaf is_acl_enabled; //type: boolean
        ydk::YLeaf mirror_bytes; //type: uint32
        ydk::YLeaf mirror_interval; //type: MirrorInterval
        ydk::YLeaf acl_name; //type: string

}; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

};

class DestinationClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_class;
        static const ydk::Enum::YLeaf pseudowire_class;
        static const ydk::Enum::YLeaf next_hop_ipv4_class;
        static const ydk::Enum::YLeaf next_hop_ipv6_class;
        static const ydk::Enum::YLeaf invalid_class;

};

class SessionClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet_class;
        static const ydk::Enum::YLeaf ipv4_class;
        static const ydk::Enum::YLeaf ipv6_class;
        static const ydk::Enum::YLeaf mplsipv4_class;
        static const ydk::Enum::YLeaf mplsipv6_class;
        static const ydk::Enum::YLeaf invalid_class;

};

class MirrorInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mirror_interval_all;
        static const ydk::Enum::YLeaf mirror_interval512;
        static const ydk::Enum::YLeaf mirror_interval1k;
        static const ydk::Enum::YLeaf mirror_interval2k;
        static const ydk::Enum::YLeaf mirror_interval4k;
        static const ydk::Enum::YLeaf mirror_interval8k;
        static const ydk::Enum::YLeaf mirror_interval16k;

};

class TrafficDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf rx_only;
        static const ydk::Enum::YLeaf tx_only;
        static const ydk::Enum::YLeaf both;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_OPER_ */

