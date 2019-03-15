#ifndef _CISCO_IOS_XR_IP_TCP_OPER_
#define _CISCO_IOS_XR_IP_TCP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_tcp_oper {

class TcpConnection : public ydk::Entity
{
    public:
        TcpConnection();
        ~TcpConnection();

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

        class Nodes; //type: TcpConnection::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes> nodes;
        
}; // TcpConnection


class TcpConnection::Nodes : public ydk::Entity
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

        class Node; //type: TcpConnection::Nodes::Node

        ydk::YList node;
        
}; // TcpConnection::Nodes


class TcpConnection::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        class Statistics; //type: TcpConnection::Nodes::Node::Statistics
        class ExtendedInformation; //type: TcpConnection::Nodes::Node::ExtendedInformation
        class DetailInformations; //type: TcpConnection::Nodes::Node::DetailInformations
        class Keychains; //type: TcpConnection::Nodes::Node::Keychains
        class BriefInformations; //type: TcpConnection::Nodes::Node::BriefInformations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation> extended_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations> detail_informations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Keychains> keychains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations> brief_informations;
        
}; // TcpConnection::Nodes::Node


class TcpConnection::Nodes::Node::Statistics : public ydk::Entity
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

        class Clients; //type: TcpConnection::Nodes::Node::Statistics::Clients
        class Pcbs; //type: TcpConnection::Nodes::Node::Statistics::Pcbs
        class Summary; //type: TcpConnection::Nodes::Node::Statistics::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs> pcbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Summary> summary;
        
}; // TcpConnection::Nodes::Node::Statistics


class TcpConnection::Nodes::Node::Statistics::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: TcpConnection::Nodes::Node::Statistics::Clients::Client

        ydk::YList client;
        
}; // TcpConnection::Nodes::Node::Statistics::Clients


class TcpConnection::Nodes::Node::Statistics::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf client_jid; //type: int32
        ydk::YLeaf client_name; //type: string
        ydk::YLeaf ipv4_received_packets; //type: uint32
        ydk::YLeaf ipv4_sent_packets; //type: uint32
        ydk::YLeaf ipv6_received_packets; //type: uint32
        ydk::YLeaf ipv6_sent_packets; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Clients::Client


class TcpConnection::Nodes::Node::Statistics::Pcbs : public ydk::Entity
{
    public:
        Pcbs();
        ~Pcbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pcb; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb

        ydk::YList pcb;
        
}; // TcpConnection::Nodes::Node::Statistics::Pcbs


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb : public ydk::Entity
{
    public:
        Pcb();
        ~Pcb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf pcb; //type: uint64
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf xipc_pulse_received; //type: uint64
        ydk::YLeaf segment_instruction_received; //type: uint32
        ydk::YLeaf send_packets_queued; //type: uint64
        ydk::YLeaf send_packets_queued_net_io; //type: uint64
        ydk::YLeaf send_queue_failed; //type: uint32
        ydk::YLeaf send_queue_net_io_failed; //type: uint32
        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf receive_queue_failed; //type: uint32
        ydk::YLeaf received_packets_queued; //type: uint64
        ydk::YLeaf send_window_shrink_ignored; //type: uint32
        ydk::YLeaf is_paw_socket; //type: boolean
        ydk::YLeaf read_io_time; //type: uint32
        ydk::YLeaf write_io_time; //type: uint32
        class ReadIoCounts; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts
        class WriteIoCounts; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts
        class AsyncSessionStats; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts> read_io_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts> write_io_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats> async_session_stats;
        
}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts : public ydk::Entity
{
    public:
        ReadIoCounts();
        ~ReadIoCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf io_count; //type: uint32
        ydk::YLeaf arm_count; //type: uint32
        ydk::YLeaf unarm_count; //type: uint32
        ydk::YLeaf autoarm_count; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts : public ydk::Entity
{
    public:
        WriteIoCounts();
        ~WriteIoCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf io_count; //type: uint32
        ydk::YLeaf arm_count; //type: uint32
        ydk::YLeaf unarm_count; //type: uint32
        ydk::YLeaf autoarm_count; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats : public ydk::Entity
{
    public:
        AsyncSessionStats();
        ~AsyncSessionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf async_session; //type: boolean
        class DataWriteSuccessNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteSuccessNum
        class DataReadSuccessNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadSuccessNum
        class DataWriteErrorNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteErrorNum
        class DataReadErrorNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadErrorNum
        class ControlWriteSuccessNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlWriteSuccessNum
        class ControlReadSuccessNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlReadSuccessNum
        class ControlWriteErrorNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlWriteErrorNum
        class ControlReadErrorNum; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlReadErrorNum
        class DataWriteByte; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteByte
        class DataReadByte; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadByte

        ydk::YList data_write_success_num;
        ydk::YList data_read_success_num;
        ydk::YList data_write_error_num;
        ydk::YList data_read_error_num;
        ydk::YList control_write_success_num;
        ydk::YList control_read_success_num;
        ydk::YList control_write_error_num;
        ydk::YList control_read_error_num;
        ydk::YList data_write_byte;
        ydk::YList data_read_byte;
        
}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteSuccessNum : public ydk::Entity
{
    public:
        DataWriteSuccessNum();
        ~DataWriteSuccessNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteSuccessNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadSuccessNum : public ydk::Entity
{
    public:
        DataReadSuccessNum();
        ~DataReadSuccessNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadSuccessNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteErrorNum : public ydk::Entity
{
    public:
        DataWriteErrorNum();
        ~DataWriteErrorNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteErrorNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadErrorNum : public ydk::Entity
{
    public:
        DataReadErrorNum();
        ~DataReadErrorNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadErrorNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlWriteSuccessNum : public ydk::Entity
{
    public:
        ControlWriteSuccessNum();
        ~ControlWriteSuccessNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlWriteSuccessNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlReadSuccessNum : public ydk::Entity
{
    public:
        ControlReadSuccessNum();
        ~ControlReadSuccessNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlReadSuccessNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlWriteErrorNum : public ydk::Entity
{
    public:
        ControlWriteErrorNum();
        ~ControlWriteErrorNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlWriteErrorNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlReadErrorNum : public ydk::Entity
{
    public:
        ControlReadErrorNum();
        ~ControlReadErrorNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::ControlReadErrorNum


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteByte : public ydk::Entity
{
    public:
        DataWriteByte();
        ~DataWriteByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataWriteByte


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadByte : public ydk::Entity
{
    public:
        DataReadByte();
        ~DataReadByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::DataReadByte


class TcpConnection::Nodes::Node::Statistics::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf syn_cache_count; //type: uint32
        ydk::YLeaf num_open_sockets; //type: uint32
        ydk::YLeaf total_pakets_sent; //type: uint32
        ydk::YLeaf send_packets_dropped; //type: uint32
        ydk::YLeaf send_auth_packets_dropped; //type: uint32
        ydk::YLeaf data_pakets_sent; //type: uint32
        ydk::YLeaf data_bytes_sent; //type: uint32
        ydk::YLeaf packets_retransmitted; //type: uint32
        ydk::YLeaf bytes_retransmitted; //type: uint32
        ydk::YLeaf ack_only_packets_sent; //type: uint32
        ydk::YLeaf delay_ack_packets_sent; //type: uint32
        ydk::YLeaf urgent_only_packets_sent; //type: uint32
        ydk::YLeaf window_probe_packets_sent; //type: uint32
        ydk::YLeaf window_update_packets_sent; //type: uint32
        ydk::YLeaf control_packets_sent; //type: uint32
        ydk::YLeaf rst_packets_sent; //type: uint32
        ydk::YLeaf total_packets_received; //type: uint32
        ydk::YLeaf received_packets_dropped; //type: uint32
        ydk::YLeaf synacl_match_pkts_dropped; //type: uint32
        ydk::YLeaf received_packets_dropped_stale_c_hdr; //type: uint32
        ydk::YLeaf received_auth_packets_dropped; //type: uint32
        ydk::YLeaf ack_packets_received; //type: uint32
        ydk::YLeaf ackbytes_received; //type: uint32
        ydk::YLeaf duplicated_ack_packets_received; //type: uint32
        ydk::YLeaf ack_packets_for_unsent_received; //type: uint32
        ydk::YLeaf data_packets_received_in_sequence; //type: uint32
        ydk::YLeaf data_bytes_received_in_sequence; //type: uint32
        ydk::YLeaf duplicate_packets_received; //type: uint32
        ydk::YLeaf duplicate_bytes_received; //type: uint32
        ydk::YLeaf partial_duplicate_ack_received; //type: uint32
        ydk::YLeaf partial_duplicate_bytes_received; //type: uint32
        ydk::YLeaf out_of_order_packets_received; //type: uint32
        ydk::YLeaf out_of_order_bytes_received; //type: uint32
        ydk::YLeaf after_window_packets_received; //type: uint32
        ydk::YLeaf after_window_bytes_received; //type: uint32
        ydk::YLeaf window_probe_packets_received; //type: uint32
        ydk::YLeaf window_update_packets_received; //type: uint32
        ydk::YLeaf packets_received_after_close_packet; //type: uint32
        ydk::YLeaf bad_checksum_packets_received; //type: uint32
        ydk::YLeaf too_short_packets_received; //type: uint32
        ydk::YLeaf malformed_packets_received; //type: uint32
        ydk::YLeaf no_port_packets_received; //type: uint32
        ydk::YLeaf connections_requested; //type: uint32
        ydk::YLeaf connections_accepted; //type: uint32
        ydk::YLeaf connections_established; //type: uint32
        ydk::YLeaf connections_forcibly_closed; //type: uint32
        ydk::YLeaf connections_closed; //type: uint32
        ydk::YLeaf connections_dropped; //type: uint32
        ydk::YLeaf embryonic_connection_dropped; //type: uint32
        ydk::YLeaf connections_failed; //type: uint32
        ydk::YLeaf established_connections_reset; //type: uint32
        ydk::YLeaf retransmit_timeouts; //type: uint32
        ydk::YLeaf retransmit_dropped; //type: uint32
        ydk::YLeaf keep_alive_timeouts; //type: uint32
        ydk::YLeaf keep_alive_dropped; //type: uint32
        ydk::YLeaf keep_alive_probes; //type: uint32
        ydk::YLeaf paws_dropped; //type: uint32
        ydk::YLeaf persist_dropped; //type: uint32
        ydk::YLeaf try_lock_dropped; //type: uint32
        ydk::YLeaf connection_rate_limited; //type: uint32
        ydk::YLeaf syn_cache_added; //type: uint32
        ydk::YLeaf syn_cache_completed; //type: uint32
        ydk::YLeaf syn_cache_timed_out; //type: uint32
        ydk::YLeaf syn_cache_overflow; //type: uint32
        ydk::YLeaf syn_cache_reset; //type: uint32
        ydk::YLeaf syn_cache_unreach; //type: uint32
        ydk::YLeaf syn_cache_bucket_oflow; //type: uint32
        ydk::YLeaf syn_cache_aborted; //type: uint32
        ydk::YLeaf syn_cache_duplicate_sy_ns; //type: uint32
        ydk::YLeaf syn_cache_dropped; //type: uint32
        ydk::YLeaf pulse_errors; //type: uint32
        ydk::YLeaf socket_layer_packets; //type: uint32
        ydk::YLeaf reassembly_packets; //type: uint32
        ydk::YLeaf recovered_packets; //type: uint32
        ydk::YLeaf packet_failures; //type: uint32
        ydk::YLeaf mss_up; //type: uint32
        ydk::YLeaf mss_down; //type: uint32
        ydk::YLeaf truncated_write_iov; //type: uint32
        ydk::YLeaf no_throttle; //type: uint32
        ydk::YLeaf low_water_mark_throttle; //type: uint32
        ydk::YLeaf high_water_mark_throttle; //type: uint32
        ydk::YLeaf stalled_timer_tickle_count; //type: uint32
        ydk::YLeaf stalled_timer_tickle_time; //type: uint32
        ydk::YLeaf iq_sock_writes; //type: uint32
        ydk::YLeaf iq_sock_retries; //type: uint32
        ydk::YLeaf iq_sock_aborts; //type: uint32
        ydk::YLeaf iq_ingress_drops; //type: uint32
        ydk::YLeaf total_i_qs; //type: uint32
        ydk::YLeaf sockbuf_pak_res_cur; //type: uint32
        ydk::YLeaf sockbuf_pak_res_max; //type: uint32
        class IqsTotalIngpacket; //type: TcpConnection::Nodes::Node::Statistics::Summary::IqsTotalIngpacket
        class IqsTotalEgpacket; //type: TcpConnection::Nodes::Node::Statistics::Summary::IqsTotalEgpacket

        ydk::YList iqs_total_ingpacket;
        ydk::YList iqs_total_egpacket;
        
}; // TcpConnection::Nodes::Node::Statistics::Summary


class TcpConnection::Nodes::Node::Statistics::Summary::IqsTotalIngpacket : public ydk::Entity
{
    public:
        IqsTotalIngpacket();
        ~IqsTotalIngpacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Summary::IqsTotalIngpacket


class TcpConnection::Nodes::Node::Statistics::Summary::IqsTotalEgpacket : public ydk::Entity
{
    public:
        IqsTotalEgpacket();
        ~IqsTotalEgpacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::Statistics::Summary::IqsTotalEgpacket


class TcpConnection::Nodes::Node::ExtendedInformation : public ydk::Entity
{
    public:
        ExtendedInformation();
        ~ExtendedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DisplayTypes; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes> display_types;
        
}; // TcpConnection::Nodes::Node::ExtendedInformation


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes : public ydk::Entity
{
    public:
        DisplayTypes();
        ~DisplayTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DisplayType; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType

        ydk::YList display_type;
        
}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType : public ydk::Entity
{
    public:
        DisplayType();
        ~DisplayType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disp_type; //type: Show
        class ConnectionId; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId

        ydk::YList connection_id;
        
}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId : public ydk::Entity
{
    public:
        ConnectionId();
        ~ConnectionId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcb_id; //type: string
        ydk::YLeaf l4_protocol; //type: uint32
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        class LocalAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress
        class ForeignAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress
        class Common; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress> foreign_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common> common;
        
}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        class LptsPcb; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb> lpts_pcb;
        
}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb : public ydk::Entity
{
    public:
        LptsPcb();
        ~LptsPcb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf flow_types_info; //type: uint32
        class Options; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options
        class LptsFlags; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags
        class AcceptMask; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask
        class Filter; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options> options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags> lpts_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask> accept_mask;
        ydk::YList filter;
        
}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options : public ydk::Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_receive_filter; //type: boolean
        ydk::YLeaf is_ip_sla; //type: boolean

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags : public ydk::Entity
{
    public:
        LptsFlags();
        ~LptsFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_pcb_bound; //type: boolean
        ydk::YLeaf is_local_address_ignore; //type: boolean
        ydk::YLeaf is_ignore_vrf_filter; //type: boolean

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask : public ydk::Entity
{
    public:
        AcceptMask();
        ~AcceptMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf is_packet_type; //type: boolean
        ydk::YLeaf is_remote_address; //type: boolean
        ydk::YLeaf is_remote_port; //type: boolean
        ydk::YLeaf is_local_address; //type: boolean
        ydk::YLeaf is_local_port; //type: boolean

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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
        ydk::YLeaf remote_length; //type: uint16
        ydk::YLeaf local_length; //type: uint16
        ydk::YLeaf receive_remote_port; //type: uint16
        ydk::YLeaf receive_local_port; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf flow_types_info; //type: uint32
        class PacketType; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType
        class RemoteAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress
        class LocalAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType> packet_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress> remote_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress> local_address;
        
}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType : public ydk::Entity
{
    public:
        PacketType();
        ~PacketType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Packet
        ydk::YLeaf icmp_message_type; //type: MessageTypeIcmp_
        ydk::YLeaf icm_pv6_message_type; //type: MessageTypeIcmpv6_
        ydk::YLeaf igmp_message_type; //type: MessageTypeIgmp_
        ydk::YLeaf message_id; //type: uint32

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress : public ydk::Entity
{
    public:
        RemoteAddress();
        ~RemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress


class TcpConnection::Nodes::Node::DetailInformations : public ydk::Entity
{
    public:
        DetailInformations();
        ~DetailInformations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailInformation; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation

        ydk::YList detail_information;
        
}; // TcpConnection::Nodes::Node::DetailInformations


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation : public ydk::Entity
{
    public:
        DetailInformation();
        ~DetailInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcb_id; //type: string
        ydk::YLeaf address_family; //type: TcpAddressFamily
        ydk::YLeaf pcb; //type: uint64
        ydk::YLeaf so; //type: uint64
        ydk::YLeaf tcpcb; //type: uint64
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf connection_state; //type: TcpConnState
        ydk::YLeaf established_time; //type: uint32
        ydk::YLeaf local_pid; //type: uint32
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf packet_priority; //type: PakPrio
        ydk::YLeaf packet_tos; //type: uint16
        ydk::YLeaf packet_ttl; //type: uint16
        ydk::YLeaf hash_index; //type: uint32
        ydk::YLeaf current_receive_queue_size; //type: uint32
        ydk::YLeaf max_receive_queue_size; //type: uint32
        ydk::YLeaf current_send_queue_size; //type: uint32
        ydk::YLeaf max_send_queue_size; //type: uint32
        ydk::YLeaf current_receive_queue_packet_size; //type: uint32
        ydk::YLeaf max_receive_queue_packet_size; //type: uint32
        ydk::YLeaf save_queue_size; //type: uint32
        ydk::YLeaf send_initial_sequence_num; //type: uint32
        ydk::YLeaf send_unack_sequence_num; //type: uint32
        ydk::YLeaf send_next_sequence_num; //type: uint32
        ydk::YLeaf send_max_sequence_num; //type: uint32
        ydk::YLeaf send_window_size; //type: uint32
        ydk::YLeaf send_congestion_window_size; //type: uint32
        ydk::YLeaf receive_initial_sequence_num; //type: uint32
        ydk::YLeaf receive_next_sequence_num; //type: uint32
        ydk::YLeaf receive_adv_window_size; //type: uint32
        ydk::YLeaf receive_window_size; //type: uint32
        ydk::YLeaf mss; //type: uint32
        ydk::YLeaf peer_mss; //type: uint32
        ydk::YLeaf srtt; //type: uint32
        ydk::YLeaf rtto; //type: uint32
        ydk::YLeaf krtt; //type: uint32
        ydk::YLeaf srtv; //type: uint32
        ydk::YLeaf min_rtt; //type: uint32
        ydk::YLeaf max_rtt; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf ack_hold_time; //type: uint32
        ydk::YLeaf giveup_time; //type: uint32
        ydk::YLeaf keep_alive_time; //type: uint32
        ydk::YLeaf syn_wait_time; //type: uint32
        ydk::YLeaf rxsy_naclname; //type: string
        ydk::YLeaf soft_error; //type: int32
        ydk::YLeaf sock_error; //type: int32
        ydk::YLeaf is_retrans_forever; //type: boolean
        ydk::YLeaf min_mss; //type: uint32
        ydk::YLeaf max_mss; //type: uint32
        ydk::YLeaf connect_retries; //type: uint16
        ydk::YLeaf connect_retry_interval; //type: uint16
        ydk::YLeaf receive_window_scale; //type: uint32
        ydk::YLeaf send_window_scale; //type: uint32
        ydk::YLeaf request_receive_window_scale; //type: uint32
        ydk::YLeaf rqst_send_wnd_scale; //type: uint32
        ydk::YLeaf time_stamp_recent; //type: uint32
        ydk::YLeaf time_stamp_recent_age; //type: uint32
        ydk::YLeaf last_ack_sent; //type: uint32
        ydk::YLeaf sendbuf_lowwat; //type: uint32
        ydk::YLeaf recvbuf_lowwat; //type: uint32
        ydk::YLeaf sendbuf_hiwat; //type: uint32
        ydk::YLeaf recvbuf_hiwat; //type: uint32
        ydk::YLeaf sendbuf_notify_thresh; //type: uint32
        ydk::YLeaf recvbuf_datasize; //type: uint32
        ydk::YLeaf queue_length; //type: uint32
        ydk::YLeaf queue_zero_length; //type: uint32
        ydk::YLeaf queue_limit; //type: uint32
        ydk::YLeaf socket_error; //type: uint32
        ydk::YLeaf auto_rearm; //type: uint32
        ydk::YLeaf send_pdu_count; //type: uint32
        ydk::YLeaf output_ifhandle; //type: uint32
        ydk::YLeaf fib_pd_ctx_size; //type: uint32
        ydk::YLeaf num_labels; //type: uint32
        ydk::YLeaf local_app_instance; //type: uint32
        class LocalAddress; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress
        class ForeignAddress; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress
        class SocketOptionFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags
        class SocketStateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags
        class FeatureFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags
        class StateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags
        class RequestFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags
        class ReceiveBufStateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags
        class SendBufStateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags
        class FibPdCtx; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FibPdCtx
        class FibLabelOutput; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FibLabelOutput
        class Timer; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer
        class SackBlk; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk
        class SendSackHole; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress> foreign_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags> socket_option_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags> socket_state_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags> feature_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags> state_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags> request_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags> receive_buf_state_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags> send_buf_state_flags;
        ydk::YList fib_pd_ctx;
        ydk::YList fib_label_output;
        ydk::YList timer;
        ydk::YList sack_blk;
        ydk::YList send_sack_hole;
        
}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: TcpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: TcpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags : public ydk::Entity
{
    public:
        SocketOptionFlags();
        ~SocketOptionFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf debug; //type: boolean
        ydk::YLeaf accept_connection; //type: boolean
        ydk::YLeaf reuse_address; //type: boolean
        ydk::YLeaf keep_alive; //type: boolean
        ydk::YLeaf dont_route; //type: boolean
        ydk::YLeaf broadcast; //type: boolean
        ydk::YLeaf use_loopback; //type: boolean
        ydk::YLeaf linger; //type: boolean
        ydk::YLeaf out_of_band_inline; //type: boolean
        ydk::YLeaf reuse_port; //type: boolean
        ydk::YLeaf nonblocking_io; //type: boolean
        ydk::YLeaf snd_buf_scaled; //type: boolean
        ydk::YLeaf rcv_buf_scaled; //type: boolean

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags : public ydk::Entity
{
    public:
        SocketStateFlags();
        ~SocketStateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_file_descriptor_reference; //type: boolean
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf is_connecting; //type: boolean
        ydk::YLeaf is_disconnecting; //type: boolean
        ydk::YLeaf cant_send_more; //type: boolean
        ydk::YLeaf cant_receive_more; //type: boolean
        ydk::YLeaf received_at_mark; //type: boolean
        ydk::YLeaf privileged; //type: boolean
        ydk::YLeaf block_close; //type: boolean
        ydk::YLeaf async_io_notify; //type: boolean
        ydk::YLeaf is_confirming; //type: boolean
        ydk::YLeaf is_solock; //type: boolean
        ydk::YLeaf is_detached; //type: boolean
        ydk::YLeaf block_receive; //type: boolean
        ydk::YLeaf block_send; //type: boolean

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags : public ydk::Entity
{
    public:
        FeatureFlags();
        ~FeatureFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selective_ack; //type: boolean
        ydk::YLeaf md5; //type: boolean
        ydk::YLeaf timestamps; //type: boolean
        ydk::YLeaf window_scaling; //type: boolean
        ydk::YLeaf nagle; //type: boolean
        ydk::YLeaf giveup_timer; //type: boolean
        ydk::YLeaf connection_keep_alive_timer; //type: boolean
        ydk::YLeaf path_mtu_discovery; //type: boolean
        ydk::YLeaf mss_cisco; //type: boolean

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags : public ydk::Entity
{
    public:
        StateFlags();
        ~StateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nagle_wait; //type: boolean
        ydk::YLeaf ack_needed; //type: boolean
        ydk::YLeaf fin_sent; //type: boolean
        ydk::YLeaf probing; //type: boolean
        ydk::YLeaf need_push; //type: boolean
        ydk::YLeaf pushed; //type: boolean
        ydk::YLeaf in_syn_cache; //type: boolean
        ydk::YLeaf path_mtu_ager; //type: boolean

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags : public ydk::Entity
{
    public:
        RequestFlags();
        ~RequestFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selective_ack; //type: boolean
        ydk::YLeaf md5; //type: boolean
        ydk::YLeaf timestamps; //type: boolean
        ydk::YLeaf window_scaling; //type: boolean
        ydk::YLeaf nagle; //type: boolean
        ydk::YLeaf giveup_timer; //type: boolean
        ydk::YLeaf connection_keep_alive_timer; //type: boolean
        ydk::YLeaf path_mtu_discovery; //type: boolean
        ydk::YLeaf mss_cisco; //type: boolean

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags : public ydk::Entity
{
    public:
        ReceiveBufStateFlags();
        ~ReceiveBufStateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locked; //type: boolean
        ydk::YLeaf waiting_for_lock; //type: boolean
        ydk::YLeaf waiting_for_data; //type: boolean
        ydk::YLeaf input_select; //type: boolean
        ydk::YLeaf async_io; //type: boolean
        ydk::YLeaf not_interruptible; //type: boolean
        ydk::YLeaf io_timer_set; //type: boolean
        ydk::YLeaf delayed_wakeup; //type: boolean
        ydk::YLeaf wakeup; //type: boolean
        ydk::YLeaf connect_wakeup; //type: boolean
        ydk::YLeaf output_select; //type: boolean
        ydk::YLeaf out_of_band_select; //type: boolean
        ydk::YLeaf packet_extended; //type: boolean

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags : public ydk::Entity
{
    public:
        SendBufStateFlags();
        ~SendBufStateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locked; //type: boolean
        ydk::YLeaf waiting_for_lock; //type: boolean
        ydk::YLeaf waiting_for_data; //type: boolean
        ydk::YLeaf input_select; //type: boolean
        ydk::YLeaf async_io; //type: boolean
        ydk::YLeaf not_interruptible; //type: boolean
        ydk::YLeaf io_timer_set; //type: boolean
        ydk::YLeaf delayed_wakeup; //type: boolean
        ydk::YLeaf wakeup; //type: boolean
        ydk::YLeaf connect_wakeup; //type: boolean
        ydk::YLeaf output_select; //type: boolean
        ydk::YLeaf out_of_band_select; //type: boolean
        ydk::YLeaf packet_extended; //type: boolean

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FibPdCtx : public ydk::Entity
{
    public:
        FibPdCtx();
        ~FibPdCtx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FibPdCtx


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FibLabelOutput : public ydk::Entity
{
    public:
        FibLabelOutput();
        ~FibLabelOutput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FibLabelOutput


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_type; //type: TcpTimer
        ydk::YLeaf timer_activations; //type: uint32
        ydk::YLeaf timer_expirations; //type: uint32
        ydk::YLeaf timer_next_activation; //type: uint32

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk : public ydk::Entity
{
    public:
        SackBlk();
        ~SackBlk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf end; //type: uint32

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole : public ydk::Entity
{
    public:
        SendSackHole();
        ~SendSackHole();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf end; //type: uint32
        ydk::YLeaf duplicated_ack; //type: uint32
        ydk::YLeaf retransmitted; //type: uint32

}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole


class TcpConnection::Nodes::Node::Keychains : public ydk::Entity
{
    public:
        Keychains();
        ~Keychains();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keychain; //type: TcpConnection::Nodes::Node::Keychains::Keychain

        ydk::YList keychain;
        
}; // TcpConnection::Nodes::Node::Keychains


class TcpConnection::Nodes::Node::Keychains::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keychain_name; //type: string
        ydk::YLeaf chain_name; //type: string
        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf desired_key_available; //type: boolean
        ydk::YLeaf desired_key_id; //type: uint64
        class Keys; //type: TcpConnection::Nodes::Node::Keychains::Keychain::Keys
        class ActiveKey; //type: TcpConnection::Nodes::Node::Keychains::Keychain::ActiveKey
        class SendId; //type: TcpConnection::Nodes::Node::Keychains::Keychain::SendId
        class ReceiveId; //type: TcpConnection::Nodes::Node::Keychains::Keychain::ReceiveId

        ydk::YList keys;
        ydk::YList active_key;
        ydk::YList send_id;
        ydk::YList receive_id;
        
}; // TcpConnection::Nodes::Node::Keychains::Keychain


class TcpConnection::Nodes::Node::Keychains::Keychain::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint64
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf is_expired; //type: boolean
        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf reason; //type: TcpKeyInvalidReason
        ydk::YLeaf send_id; //type: uint8
        ydk::YLeaf recv_id; //type: uint8
        ydk::YLeaf crypt_algo; //type: TcpMacAlgo
        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf overlapping_key_available; //type: boolean
        ydk::YLeaf overlapping_key; //type: uint64
        class InvalidatedKey; //type: TcpConnection::Nodes::Node::Keychains::Keychain::Keys::InvalidatedKey

        ydk::YList invalidated_key;
        
}; // TcpConnection::Nodes::Node::Keychains::Keychain::Keys


class TcpConnection::Nodes::Node::Keychains::Keychain::Keys::InvalidatedKey : public ydk::Entity
{
    public:
        InvalidatedKey();
        ~InvalidatedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint64

}; // TcpConnection::Nodes::Node::Keychains::Keychain::Keys::InvalidatedKey


class TcpConnection::Nodes::Node::Keychains::Keychain::ActiveKey : public ydk::Entity
{
    public:
        ActiveKey();
        ~ActiveKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint64

}; // TcpConnection::Nodes::Node::Keychains::Keychain::ActiveKey


class TcpConnection::Nodes::Node::Keychains::Keychain::SendId : public ydk::Entity
{
    public:
        SendId();
        ~SendId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class Keys; //type: TcpConnection::Nodes::Node::Keychains::Keychain::SendId::Keys

        ydk::YList keys;
        
}; // TcpConnection::Nodes::Node::Keychains::Keychain::SendId


class TcpConnection::Nodes::Node::Keychains::Keychain::SendId::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint64

}; // TcpConnection::Nodes::Node::Keychains::Keychain::SendId::Keys


class TcpConnection::Nodes::Node::Keychains::Keychain::ReceiveId : public ydk::Entity
{
    public:
        ReceiveId();
        ~ReceiveId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class Keys; //type: TcpConnection::Nodes::Node::Keychains::Keychain::ReceiveId::Keys

        ydk::YList keys;
        
}; // TcpConnection::Nodes::Node::Keychains::Keychain::ReceiveId


class TcpConnection::Nodes::Node::Keychains::Keychain::ReceiveId::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint64

}; // TcpConnection::Nodes::Node::Keychains::Keychain::ReceiveId::Keys


class TcpConnection::Nodes::Node::BriefInformations : public ydk::Entity
{
    public:
        BriefInformations();
        ~BriefInformations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BriefInformation; //type: TcpConnection::Nodes::Node::BriefInformations::BriefInformation

        ydk::YList brief_information;
        
}; // TcpConnection::Nodes::Node::BriefInformations


class TcpConnection::Nodes::Node::BriefInformations::BriefInformation : public ydk::Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcb_id; //type: string
        ydk::YLeaf af_name; //type: TcpAddressFamily
        ydk::YLeaf pcb; //type: uint64
        ydk::YLeaf connection_state; //type: TcpConnState
        ydk::YLeaf local_pid; //type: uint32
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf current_receive_queue_size; //type: uint32
        ydk::YLeaf current_send_queue_size; //type: uint32
        ydk::YLeaf vrf_id; //type: uint32
        class LocalAddress; //type: TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress
        class ForeignAddress; //type: TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress> foreign_address;
        
}; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation


class TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: TcpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress


class TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: TcpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress

class Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class Nodes; //type: Tcp::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes> nodes;
        
}; // Tcp


class Tcp::Nodes : public ydk::Entity
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

        class Node; //type: Tcp::Nodes::Node

        ydk::YList node;
        
}; // Tcp::Nodes


class Tcp::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        class Statistics; //type: Tcp::Nodes::Node::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics> statistics;
        
}; // Tcp::Nodes::Node


class Tcp::Nodes::Node::Statistics : public ydk::Entity
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

        class Ipv4Traffic; //type: Tcp::Nodes::Node::Statistics::Ipv4Traffic
        class Ipv6Traffic; //type: Tcp::Nodes::Node::Statistics::Ipv6Traffic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics::Ipv4Traffic> ipv4_traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics::Ipv6Traffic> ipv6_traffic;
        
}; // Tcp::Nodes::Node::Statistics


class Tcp::Nodes::Node::Statistics::Ipv4Traffic : public ydk::Entity
{
    public:
        Ipv4Traffic();
        ~Ipv4Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_input_packets; //type: uint32
        ydk::YLeaf tcp_checksum_error_packets; //type: uint32
        ydk::YLeaf tcp_dropped_packets; //type: uint32
        ydk::YLeaf tcp_output_packets; //type: uint32
        ydk::YLeaf tcp_retransmitted_packets; //type: uint32

}; // Tcp::Nodes::Node::Statistics::Ipv4Traffic


class Tcp::Nodes::Node::Statistics::Ipv6Traffic : public ydk::Entity
{
    public:
        Ipv6Traffic();
        ~Ipv6Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_input_packets; //type: uint32
        ydk::YLeaf tcp_checksum_error_packets; //type: uint32
        ydk::YLeaf tcp_dropped_packets; //type: uint32
        ydk::YLeaf tcp_output_packets; //type: uint32
        ydk::YLeaf tcp_retransmitted_packets; //type: uint32

}; // Tcp::Nodes::Node::Statistics::Ipv6Traffic

class TcpNsr : public ydk::Entity
{
    public:
        TcpNsr();
        ~TcpNsr();

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

        class Nodes; //type: TcpNsr::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes> nodes;
        
}; // TcpNsr


class TcpNsr::Nodes : public ydk::Entity
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

        class Node; //type: TcpNsr::Nodes::Node

        ydk::YList node;
        
}; // TcpNsr::Nodes


class TcpNsr::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        class Session; //type: TcpNsr::Nodes::Node::Session
        class Client; //type: TcpNsr::Nodes::Node::Client
        class SessionSet; //type: TcpNsr::Nodes::Node::SessionSet
        class Statistics; //type: TcpNsr::Nodes::Node::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet> session_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics> statistics;
        
}; // TcpNsr::Nodes::Node


class TcpNsr::Nodes::Node::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BriefSessions; //type: TcpNsr::Nodes::Node::Session::BriefSessions
        class DetailSessions; //type: TcpNsr::Nodes::Node::Session::DetailSessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::BriefSessions> brief_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions> detail_sessions;
        
}; // TcpNsr::Nodes::Node::Session


class TcpNsr::Nodes::Node::Session::BriefSessions : public ydk::Entity
{
    public:
        BriefSessions();
        ~BriefSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BriefSession; //type: TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession

        ydk::YList brief_session;
        
}; // TcpNsr::Nodes::Node::Session::BriefSessions


class TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession : public ydk::Entity
{
    public:
        BriefSession();
        ~BriefSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf address_family; //type: AddrFamily
        ydk::YLeaf pcb; //type: uint64
        ydk::YLeaf sscb; //type: uint64
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf is_admin_configured_up; //type: boolean
        ydk::YLeaf is_us_operational_up; //type: NsrStatus
        ydk::YLeaf is_ds_operational_up; //type: NsrStatus
        ydk::YLeaf is_only_receive_path_replication; //type: boolean
        class LocalAddress; //type: TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::LocalAddress
        class ForeignAddress; //type: TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::ForeignAddress

        ydk::YList local_address;
        ydk::YList foreign_address;
        
}; // TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession


class TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::LocalAddress


class TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::ForeignAddress


class TcpNsr::Nodes::Node::Session::DetailSessions : public ydk::Entity
{
    public:
        DetailSessions();
        ~DetailSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailSession; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession

        ydk::YList detail_session;
        
}; // TcpNsr::Nodes::Node::Session::DetailSessions


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession : public ydk::Entity
{
    public:
        DetailSession();
        ~DetailSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf address_family; //type: AddrFamily
        ydk::YLeaf pcb; //type: uint64
        ydk::YLeaf sscb; //type: uint64
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf is_admin_configured_up; //type: boolean
        ydk::YLeaf is_us_operational_up; //type: NsrStatus
        ydk::YLeaf is_ds_operational_up; //type: NsrStatus
        ydk::YLeaf is_only_receive_path_replication; //type: boolean
        ydk::YLeaf cookie; //type: uint64
        ydk::YLeaf is_session_replicated; //type: boolean
        ydk::YLeaf is_session_synced; //type: boolean
        ydk::YLeaf fist_standby_sequence_number; //type: uint32
        ydk::YLeaf fssn_offset; //type: uint32
        ydk::YLeaf nsr_down_reason; //type: NsrDownReason
        ydk::YLeaf nsr_down_time; //type: uint32
        ydk::YLeaf sequence_number_of_init_sync; //type: uint32
        ydk::YLeaf is_init_sync_in_progress; //type: boolean
        ydk::YLeaf is_init_sync_second_phase; //type: boolean
        ydk::YLeaf init_sync_error; //type: string
        ydk::YLeaf is_init_sync_error_local; //type: boolean
        ydk::YLeaf init_sync_start_time; //type: uint32
        ydk::YLeaf init_sync_end_time; //type: uint32
        ydk::YLeaf init_sync_flags; //type: uint32
        ydk::YLeaf sequence_number_of_init_sync_up_stream; //type: uint32
        ydk::YLeaf peer_endp_hdl_up_stream; //type: uint64
        ydk::YLeaf init_sync_start_time_up_stream; //type: uint32
        ydk::YLeaf init_sync_end_time_up_stream; //type: uint32
        ydk::YLeaf fist_standby_sequence_number_up_stream; //type: uint32
        ydk::YLeaf nsr_down_reason_up_stream; //type: NsrDownReason
        ydk::YLeaf nsr_down_time_up_stream; //type: uint32
        ydk::YLeaf sequence_number_of_init_sync_down_stream; //type: uint32
        ydk::YLeaf peer_endp_hdl_down_stream; //type: uint64
        ydk::YLeaf init_sync_start_time_down_stream; //type: uint32
        ydk::YLeaf init_sync_end_time_down_stream; //type: uint32
        ydk::YLeaf fist_standby_sequence_number_down_stream; //type: uint32
        ydk::YLeaf nsr_down_reason_down_stream; //type: NsrDownReason
        ydk::YLeaf nsr_down_time_down_stream; //type: uint32
        ydk::YLeaf max_number_of_held_packet; //type: int32
        ydk::YLeaf max_number_of_held_packet_reach_time; //type: uint32
        ydk::YLeaf max_number_of_held_internal_ack; //type: int32
        ydk::YLeaf max_number_of_held_internal_ack_reach_time; //type: uint32
        class SetInformation; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation
        class LocalAddress; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::LocalAddress
        class ForeignAddress; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::ForeignAddress
        class PacketHoldQueue; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue
        class InternalAckHoldQueue; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation> set_information;
        ydk::YList local_address;
        ydk::YList foreign_address;
        ydk::YList packet_hold_queue;
        ydk::YList internal_ack_hold_queue;
        
}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation : public ydk::Entity
{
    public:
        SetInformation();
        ~SetInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sscb; //type: uint64
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf client_name; //type: string
        ydk::YLeaf client_instance; //type: uint32
        ydk::YLeaf set_id; //type: uint32
        ydk::YLeaf sso_role; //type: uint32
        ydk::YLeaf mode; //type: uint32
        ydk::YLeaf address_family; //type: AddrFamily
        ydk::YLeaf well_known_port; //type: uint16
        ydk::YLeaf local_node; //type: string
        ydk::YLeaf local_instance; //type: uint32
        ydk::YLeaf protect_node; //type: string
        ydk::YLeaf protect_instance; //type: uint32
        ydk::YLeaf number_of_sessions; //type: uint32
        ydk::YLeaf number_of_synced_sessions_up_stream; //type: uint32
        ydk::YLeaf number_of_synced_sessions_down_stream; //type: uint32
        ydk::YLeaf is_init_sync_in_progress; //type: boolean
        ydk::YLeaf is_sscb_init_sync_ready; //type: boolean

}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::LocalAddress


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::ForeignAddress


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue : public ydk::Entity
{
    public:
        PacketHoldQueue();
        ~PacketHoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf data_length; //type: uint32
        ydk::YLeaf acknoledgement_number; //type: uint32

}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue : public ydk::Entity
{
    public:
        InternalAckHoldQueue();
        ~InternalAckHoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf data_length; //type: uint32
        ydk::YLeaf acknoledgement_number; //type: uint32

}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue


class TcpNsr::Nodes::Node::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailClients; //type: TcpNsr::Nodes::Node::Client::DetailClients
        class BriefClients; //type: TcpNsr::Nodes::Node::Client::BriefClients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::DetailClients> detail_clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::BriefClients> brief_clients;
        
}; // TcpNsr::Nodes::Node::Client


class TcpNsr::Nodes::Node::Client::DetailClients : public ydk::Entity
{
    public:
        DetailClients();
        ~DetailClients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailClient; //type: TcpNsr::Nodes::Node::Client::DetailClients::DetailClient

        ydk::YList detail_client;
        
}; // TcpNsr::Nodes::Node::Client::DetailClients


class TcpNsr::Nodes::Node::Client::DetailClients::DetailClient : public ydk::Entity
{
    public:
        DetailClient();
        ~DetailClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf ccb; //type: uint64
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf job_id; //type: int32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf numberof_sets; //type: uint32
        ydk::YLeaf number_of_sessions; //type: uint32
        ydk::YLeaf number_of_up_sessions; //type: uint32
        ydk::YLeaf connected_at; //type: uint32
        ydk::YLeaf is_notification_registered; //type: boolean

}; // TcpNsr::Nodes::Node::Client::DetailClients::DetailClient


class TcpNsr::Nodes::Node::Client::BriefClients : public ydk::Entity
{
    public:
        BriefClients();
        ~BriefClients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BriefClient; //type: TcpNsr::Nodes::Node::Client::BriefClients::BriefClient

        ydk::YList brief_client;
        
}; // TcpNsr::Nodes::Node::Client::BriefClients


class TcpNsr::Nodes::Node::Client::BriefClients::BriefClient : public ydk::Entity
{
    public:
        BriefClient();
        ~BriefClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf ccb; //type: uint64
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf job_id; //type: int32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf numberof_sets; //type: uint32
        ydk::YLeaf number_of_sessions; //type: uint32
        ydk::YLeaf number_of_up_sessions; //type: uint32

}; // TcpNsr::Nodes::Node::Client::BriefClients::BriefClient


class TcpNsr::Nodes::Node::SessionSet : public ydk::Entity
{
    public:
        SessionSet();
        ~SessionSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailSets; //type: TcpNsr::Nodes::Node::SessionSet::DetailSets
        class BriefSets; //type: TcpNsr::Nodes::Node::SessionSet::BriefSets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::DetailSets> detail_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::BriefSets> brief_sets;
        
}; // TcpNsr::Nodes::Node::SessionSet


class TcpNsr::Nodes::Node::SessionSet::DetailSets : public ydk::Entity
{
    public:
        DetailSets();
        ~DetailSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailSet; //type: TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet

        ydk::YList detail_set;
        
}; // TcpNsr::Nodes::Node::SessionSet::DetailSets


class TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet : public ydk::Entity
{
    public:
        DetailSet();
        ~DetailSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf sscb; //type: uint64
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf set_id; //type: uint32
        ydk::YLeaf sso_role; //type: uint32
        ydk::YLeaf mode; //type: uint32
        ydk::YLeaf address_family; //type: AddrFamily
        ydk::YLeaf well_known_port; //type: uint16
        ydk::YLeaf local_node; //type: string
        ydk::YLeaf local_instance; //type: uint32
        ydk::YLeaf protect_node; //type: string
        ydk::YLeaf protect_instance; //type: uint32
        ydk::YLeaf number_of_sessions; //type: uint32
        ydk::YLeaf number_of_synced_sessions_up_stream; //type: uint32
        ydk::YLeaf number_of_synced_sessions_down_stream; //type: uint32
        ydk::YLeaf is_init_sync_in_progress; //type: boolean
        ydk::YLeaf is_init_sync_second_phase; //type: boolean
        ydk::YLeaf sequence_number_of_init_sync; //type: uint32
        ydk::YLeaf init_sync_timer; //type: uint32
        ydk::YLeaf total_number_of_init_sync_sessions; //type: uint32
        ydk::YLeaf number_of_init_synced_sessions; //type: uint32
        ydk::YLeaf number_of_sessions_init_sync_failed; //type: uint32
        ydk::YLeaf init_sync_error; //type: string
        ydk::YLeaf is_init_sync_error_local; //type: boolean
        ydk::YLeaf init_sync_start_time; //type: uint32
        ydk::YLeaf init_sync_end_time; //type: uint32
        ydk::YLeaf is_sscb_init_sync_ready; //type: boolean
        ydk::YLeaf init_sync_ready_start_time; //type: uint32
        ydk::YLeaf init_sync_ready_end_time; //type: uint32
        ydk::YLeaf nsr_reset_time; //type: uint32
        ydk::YLeaf is_audit_in_progress; //type: boolean
        ydk::YLeaf audit_seq_number; //type: uint32
        ydk::YLeaf audit_start_time; //type: uint32
        ydk::YLeaf audit_end_time; //type: uint32

}; // TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet


class TcpNsr::Nodes::Node::SessionSet::BriefSets : public ydk::Entity
{
    public:
        BriefSets();
        ~BriefSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BriefSet; //type: TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet

        ydk::YList brief_set;
        
}; // TcpNsr::Nodes::Node::SessionSet::BriefSets


class TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet : public ydk::Entity
{
    public:
        BriefSet();
        ~BriefSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf sscb; //type: uint64
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf client_name; //type: string
        ydk::YLeaf client_instance; //type: uint32
        ydk::YLeaf set_id; //type: uint32
        ydk::YLeaf sso_role; //type: uint32
        ydk::YLeaf mode; //type: uint32
        ydk::YLeaf address_family; //type: AddrFamily
        ydk::YLeaf well_known_port; //type: uint16
        ydk::YLeaf local_node; //type: string
        ydk::YLeaf local_instance; //type: uint32
        ydk::YLeaf protect_node; //type: string
        ydk::YLeaf protect_instance; //type: uint32
        ydk::YLeaf number_of_sessions; //type: uint32
        ydk::YLeaf number_of_synced_sessions_up_stream; //type: uint32
        ydk::YLeaf number_of_synced_sessions_down_stream; //type: uint32
        ydk::YLeaf is_init_sync_in_progress; //type: boolean
        ydk::YLeaf is_sscb_init_sync_ready; //type: boolean

}; // TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet


class TcpNsr::Nodes::Node::Statistics : public ydk::Entity
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

        class Summary; //type: TcpNsr::Nodes::Node::Statistics::Summary
        class StatisticClients; //type: TcpNsr::Nodes::Node::Statistics::StatisticClients
        class StatisticSets; //type: TcpNsr::Nodes::Node::Statistics::StatisticSets
        class StatisticSessions; //type: TcpNsr::Nodes::Node::Statistics::StatisticSessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticClients> statistic_clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSets> statistic_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions> statistic_sessions;
        
}; // TcpNsr::Nodes::Node::Statistics


class TcpNsr::Nodes::Node::Statistics::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_cleared_time; //type: uint32
        ydk::YLeaf number_of_connected_clients; //type: uint32
        ydk::YLeaf number_of_disconnected_clients; //type: uint32
        ydk::YLeaf number_of_current_clients; //type: uint32
        ydk::YLeaf number_of_created_session_sets; //type: uint32
        ydk::YLeaf number_of_destroyed_session_sets; //type: uint32
        ydk::YLeaf number_of_current_session_sets; //type: uint32
        ydk::YLeaf number_of_added_sessions; //type: uint32
        ydk::YLeaf number_of_deleted_sessions; //type: uint32
        ydk::YLeaf number_of_current_sessions; //type: uint32
        ydk::YLeaf number_of_partner_node; //type: uint32
        ydk::YLeaf number_of_attempted_init_sync; //type: uint32
        ydk::YLeaf number_of_succeeded_init_sync; //type: uint32
        ydk::YLeaf number_of_failed_init_sync; //type: uint32
        ydk::YLeaf number_of_held_packets; //type: uint32
        ydk::YLeaf number_of_held_but_dropped_packets; //type: uint32
        ydk::YLeaf number_of_held_internal_acks; //type: uint32
        ydk::YLeaf number_of_held_but_dropped_internal_acks; //type: uint32
        ydk::YLeaf number_of_sent_internal_acks; //type: uint32
        ydk::YLeaf number_of_received_internal_acks; //type: uint32
        ydk::YLeaf number_of_qad_receive_messages_drops; //type: uint32
        ydk::YLeaf number_of_qad_receive_messages_unknowns; //type: uint32
        ydk::YLeaf number_of_qad_receive_messages_accepts; //type: uint32
        ydk::YLeaf number_of_qad_stale_receive_messages_drops; //type: uint32
        ydk::YLeaf number_of_qad_transfer_message_sent; //type: uint32
        ydk::YLeaf number_of_qad_transfer_message_drops; //type: uint32
        ydk::YLeaf number_of_internal_ack_drops_no_pcb; //type: uint32
        ydk::YLeaf number_of_internal_ack_drops_no_scbdp; //type: uint32
        ydk::YLeaf internal_ack_drops_not_replicated; //type: uint32
        ydk::YLeaf internal_ack_drops_initsync_first_phase; //type: uint32
        ydk::YLeaf internal_ack_drops_stale; //type: uint32
        ydk::YLeaf internal_ack_drops_immediate_match; //type: uint32
        ydk::YLeaf held_packet_drops; //type: uint32
        class SndCounters; //type: TcpNsr::Nodes::Node::Statistics::Summary::SndCounters
        class AuditCounters; //type: TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters
        class NotificationStatistic; //type: TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters> snd_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters> audit_counters;
        ydk::YList notification_statistic;
        
}; // TcpNsr::Nodes::Node::Statistics::Summary


class TcpNsr::Nodes::Node::Statistics::Summary::SndCounters : public ydk::Entity
{
    public:
        SndCounters();
        ~SndCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Common; //type: TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common
        class AggrOnly; //type: TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly> aggr_only;
        
}; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters


class TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_xfer_send; //type: uint32
        ydk::YLeaf data_xfer_send_total; //type: uint64
        ydk::YLeaf data_xfer_send_drop; //type: uint32
        ydk::YLeaf data_xfer_send_iov_alloc; //type: uint32
        ydk::YLeaf data_xfer_rcv; //type: uint32
        ydk::YLeaf data_xfer_rcv_success; //type: uint32
        ydk::YLeaf data_xfer_rcv_fail_buffer_trim; //type: uint32
        ydk::YLeaf data_xfer_rcv_fail_snd_una_out_of_sync; //type: uint32
        ydk::YLeaf seg_instr_send; //type: uint32
        ydk::YLeaf seg_instr_send_units; //type: uint32
        ydk::YLeaf seg_instr_send_drop; //type: uint32
        ydk::YLeaf seg_instr_rcv; //type: uint32
        ydk::YLeaf seg_instr_rcv_success; //type: uint32
        ydk::YLeaf seg_instr_rcv_fail_buffer_trim; //type: uint32
        ydk::YLeaf seg_instr_rcv_fail_tcp_process; //type: uint32
        ydk::YLeaf nack_send; //type: uint32
        ydk::YLeaf nack_send_drop; //type: uint32
        ydk::YLeaf nack_rcv; //type: uint32
        ydk::YLeaf nack_rcv_success; //type: uint32
        ydk::YLeaf nack_rcv_fail_data_send; //type: uint32
        ydk::YLeaf cleanup_send; //type: uint32
        ydk::YLeaf cleanup_send_drop; //type: uint32
        ydk::YLeaf cleanup_rcv; //type: uint32
        ydk::YLeaf cleanup_rcv_success; //type: uint32
        ydk::YLeaf cleanup_rcv_fail_buffer_trim; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common


class TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly : public ydk::Entity
{
    public:
        AggrOnly();
        ~AggrOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_xfer_rcv_drop_no_pcb; //type: uint32
        ydk::YLeaf data_xfer_rcv_drop_no_scb_dp; //type: uint32
        ydk::YLeaf seg_instr_rcv_drop_no_pcb; //type: uint32
        ydk::YLeaf seg_instr_rcv_drop_no_scb_dp; //type: uint32
        ydk::YLeaf nack_rcv_drop_no_pcb; //type: uint32
        ydk::YLeaf nack_rcv_drop_no_scb_dp; //type: uint32
        ydk::YLeaf cleanup_rcv_drop_no_pcb; //type: uint32
        ydk::YLeaf cleanup_rcv_drop_no_scb_dp; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly


class TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters : public ydk::Entity
{
    public:
        AuditCounters();
        ~AuditCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Common; //type: TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common
        class AggrOnly; //type: TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly> aggr_only;
        
}; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters


class TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_session_set_send; //type: uint32
        ydk::YLeaf mark_session_set_send_drop; //type: uint32
        ydk::YLeaf mark_session_set_rcv; //type: uint32
        ydk::YLeaf mark_session_set_rcv_drop; //type: uint32
        ydk::YLeaf session_send; //type: uint32
        ydk::YLeaf session_send_drop; //type: uint32
        ydk::YLeaf session_rcv; //type: uint32
        ydk::YLeaf session_rcv_drop; //type: uint32
        ydk::YLeaf sweep_session_set_send; //type: uint32
        ydk::YLeaf sweep_session_set_send_drop; //type: uint32
        ydk::YLeaf sweep_session_set_rcv; //type: uint32
        ydk::YLeaf sweep_session_set_rcv_drop; //type: uint32
        ydk::YLeaf session_set_response_send; //type: uint32
        ydk::YLeaf session_set_response_send_drop; //type: uint32
        ydk::YLeaf session_set_response_rcv; //type: uint32
        ydk::YLeaf session_set_response_rcv_drop; //type: uint32
        ydk::YLeaf mark_session_set_ack_send; //type: uint32
        ydk::YLeaf mark_session_set_ack_send_drop; //type: uint32
        ydk::YLeaf mark_session_set_ack_rcv; //type: uint32
        ydk::YLeaf mark_session_set_ack_rcv_drop; //type: uint32
        ydk::YLeaf mark_session_set_nack_send; //type: uint32
        ydk::YLeaf mark_session_set_nack_send_drop; //type: uint32
        ydk::YLeaf mark_session_set_nack_rcv; //type: uint32
        ydk::YLeaf mark_session_set_nack_rcv_drop; //type: uint32
        ydk::YLeaf abort; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common


class TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly : public ydk::Entity
{
    public:
        AggrOnly();
        ~AggrOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_session_set_rcv_drop_aggr; //type: uint32
        ydk::YLeaf session_rcv_drop_aggr; //type: uint32
        ydk::YLeaf sweep_session_set_rcv_drop_aggr; //type: uint32
        ydk::YLeaf session_set_response_rcv_drop_aggr; //type: uint32
        ydk::YLeaf mark_session_set_ack_rcv_drop_aggr; //type: uint32
        ydk::YLeaf mark_session_set_nack_rcv_drop_aggr; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly


class TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic : public ydk::Entity
{
    public:
        NotificationStatistic();
        ~NotificationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queued_count; //type: uint32
        ydk::YLeaf failed_count; //type: uint32
        ydk::YLeaf delivered_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic


class TcpNsr::Nodes::Node::Statistics::StatisticClients : public ydk::Entity
{
    public:
        StatisticClients();
        ~StatisticClients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticClient; //type: TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient

        ydk::YList statistic_client;
        
}; // TcpNsr::Nodes::Node::Statistics::StatisticClients


class TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient : public ydk::Entity
{
    public:
        StatisticClient();
        ~StatisticClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf ccb; //type: uint64
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf job_id; //type: int32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf connected_at; //type: uint32
        ydk::YLeaf number_of_created_sscb; //type: uint32
        ydk::YLeaf number_of_deleted_sscb; //type: uint32
        ydk::YLeaf last_cleared_time; //type: uint32
        class NotificationStatistic; //type: TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic

        ydk::YList notification_statistic;
        
}; // TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient


class TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic : public ydk::Entity
{
    public:
        NotificationStatistic();
        ~NotificationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queued_count; //type: uint32
        ydk::YLeaf failed_count; //type: uint32
        ydk::YLeaf delivered_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic


class TcpNsr::Nodes::Node::Statistics::StatisticSets : public ydk::Entity
{
    public:
        StatisticSets();
        ~StatisticSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticSet; //type: TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet

        ydk::YList statistic_set;
        
}; // TcpNsr::Nodes::Node::Statistics::StatisticSets


class TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet : public ydk::Entity
{
    public:
        StatisticSet();
        ~StatisticSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf sscb; //type: uint64
        ydk::YLeaf set_id; //type: uint32
        ydk::YLeaf number_of_attempted_init_sync; //type: uint32
        ydk::YLeaf number_of_succeeded_init_sync; //type: uint32
        ydk::YLeaf number_of_failed_init_sync; //type: uint32
        ydk::YLeaf number_of_failover; //type: uint32
        ydk::YLeaf number_of_nsr_resets; //type: uint32
        ydk::YLeaf last_cleared_time; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet


class TcpNsr::Nodes::Node::Statistics::StatisticSessions : public ydk::Entity
{
    public:
        StatisticSessions();
        ~StatisticSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticSession; //type: TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession

        ydk::YList statistic_session;
        
}; // TcpNsr::Nodes::Node::Statistics::StatisticSessions


class TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession : public ydk::Entity
{
    public:
        StatisticSession();
        ~StatisticSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf pcb; //type: uint64
        ydk::YLeaf number_of_times_nsr_up; //type: uint32
        ydk::YLeaf number_of_timers_nsr_down; //type: uint32
        ydk::YLeaf number_of_times_nsr_disabled; //type: uint32
        ydk::YLeaf number_of_times_nsr_fail_over; //type: uint32
        ydk::YLeaf internal_ack_drops_not_replicated; //type: uint64
        ydk::YLeaf internal_ack_drops_initsync_first_phase; //type: uint64
        ydk::YLeaf internal_ack_drops_stale; //type: uint64
        ydk::YLeaf internal_ack_drops_immediate_match; //type: uint64
        ydk::YLeaf last_cleared_time; //type: uint32
        class SndCounters; //type: TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters> snd_counters;
        
}; // TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession


class TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters : public ydk::Entity
{
    public:
        SndCounters();
        ~SndCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_xfer_send; //type: uint32
        ydk::YLeaf data_xfer_send_total; //type: uint64
        ydk::YLeaf data_xfer_send_drop; //type: uint32
        ydk::YLeaf data_xfer_send_iov_alloc; //type: uint32
        ydk::YLeaf data_xfer_rcv; //type: uint32
        ydk::YLeaf data_xfer_rcv_success; //type: uint32
        ydk::YLeaf data_xfer_rcv_fail_buffer_trim; //type: uint32
        ydk::YLeaf data_xfer_rcv_fail_snd_una_out_of_sync; //type: uint32
        ydk::YLeaf seg_instr_send; //type: uint32
        ydk::YLeaf seg_instr_send_units; //type: uint32
        ydk::YLeaf seg_instr_send_drop; //type: uint32
        ydk::YLeaf seg_instr_rcv; //type: uint32
        ydk::YLeaf seg_instr_rcv_success; //type: uint32
        ydk::YLeaf seg_instr_rcv_fail_buffer_trim; //type: uint32
        ydk::YLeaf seg_instr_rcv_fail_tcp_process; //type: uint32
        ydk::YLeaf nack_send; //type: uint32
        ydk::YLeaf nack_send_drop; //type: uint32
        ydk::YLeaf nack_rcv; //type: uint32
        ydk::YLeaf nack_rcv_success; //type: uint32
        ydk::YLeaf nack_rcv_fail_data_send; //type: uint32
        ydk::YLeaf cleanup_send; //type: uint32
        ydk::YLeaf cleanup_send_drop; //type: uint32
        ydk::YLeaf cleanup_rcv; //type: uint32
        ydk::YLeaf cleanup_rcv_success; //type: uint32
        ydk::YLeaf cleanup_rcv_fail_buffer_trim; //type: uint32

}; // TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters

class MessageTypeIcmpv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf multicast_listener_query;
        static const ydk::Enum::YLeaf multicast_listener_report;
        static const ydk::Enum::YLeaf multicast_listener_done;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf neighbor_solicitation;
        static const ydk::Enum::YLeaf neighbor_advertisement;
        static const ydk::Enum::YLeaf redirect_message;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf node_information_query;
        static const ydk::Enum::YLeaf node_information_reply;
        static const ydk::Enum::YLeaf inverse_neighbor_discovery_solicitaion;
        static const ydk::Enum::YLeaf inverse_neighbor_discover_advertisement;
        static const ydk::Enum::YLeaf v2_multicast_listener_report;
        static const ydk::Enum::YLeaf home_agent_address_discovery_request;
        static const ydk::Enum::YLeaf home_agent_address_discovery_reply;
        static const ydk::Enum::YLeaf mobile_prefix_solicitation;
        static const ydk::Enum::YLeaf mobile_prefix_advertisement;
        static const ydk::Enum::YLeaf certification_path_solicitation_message;
        static const ydk::Enum::YLeaf certification_path_advertisement_message;
        static const ydk::Enum::YLeaf experimental_mobility_protocols;
        static const ydk::Enum::YLeaf multicast_router_advertisement;
        static const ydk::Enum::YLeaf multicast_router_solicitation;
        static const ydk::Enum::YLeaf multicast_router_termination;
        static const ydk::Enum::YLeaf fmipv6_messages;

};

class Show : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf static_policy;
        static const ydk::Enum::YLeaf interface_filter;
        static const ydk::Enum::YLeaf packet_filter;

};

class MessageTypeIgmp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf membership_query;
        static const ydk::Enum::YLeaf v1_membership_report;
        static const ydk::Enum::YLeaf dvmrp;
        static const ydk::Enum::YLeaf pi_mv1;
        static const ydk::Enum::YLeaf cisco_trace_messages;
        static const ydk::Enum::YLeaf v2_membership_report;
        static const ydk::Enum::YLeaf v2_leave_group;
        static const ydk::Enum::YLeaf multicast_traceroute_response;
        static const ydk::Enum::YLeaf multicast_traceroute;
        static const ydk::Enum::YLeaf v3_membership_report;
        static const ydk::Enum::YLeaf multicast_router_advertisement;
        static const ydk::Enum::YLeaf multicast_router_solicitation;
        static const ydk::Enum::YLeaf multicast_router_termination;

};

class TcpConnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf syn_sent;
        static const ydk::Enum::YLeaf syn_received;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf close_wait;
        static const ydk::Enum::YLeaf fin_wait1;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf last_ack;
        static const ydk::Enum::YLeaf fin_wait2;
        static const ydk::Enum::YLeaf time_wait;

};

class PakPrio : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified_packet;
        static const ydk::Enum::YLeaf normal_packet;
        static const ydk::Enum::YLeaf medium_packet;
        static const ydk::Enum::YLeaf high_packet;
        static const ydk::Enum::YLeaf crucial_packet;

};

class MessageTypeIcmp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf alternate_host_address;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_selection;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf time_stamp;
        static const ydk::Enum::YLeaf time_stamp_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf address_mask_request;
        static const ydk::Enum::YLeaf address_mask_reply;
        static const ydk::Enum::YLeaf trace_route;
        static const ydk::Enum::YLeaf datagram_conversion_error;
        static const ydk::Enum::YLeaf mobile_host_redirect;
        static const ydk::Enum::YLeaf where_are_you;
        static const ydk::Enum::YLeaf iam_here;
        static const ydk::Enum::YLeaf mobile_registration_request;
        static const ydk::Enum::YLeaf mobile_registration_reply;
        static const ydk::Enum::YLeaf domain_name_request;

};

class MessageTypeIgmp_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf membership_query;
        static const ydk::Enum::YLeaf v1_membership_report;
        static const ydk::Enum::YLeaf dvmrp;
        static const ydk::Enum::YLeaf pi_mv1;
        static const ydk::Enum::YLeaf cisco_trace_messages;
        static const ydk::Enum::YLeaf v2_membership_report;
        static const ydk::Enum::YLeaf v2_leave_group;
        static const ydk::Enum::YLeaf multicast_traceroute_response;
        static const ydk::Enum::YLeaf multicast_traceroute;
        static const ydk::Enum::YLeaf v3_membership_report;
        static const ydk::Enum::YLeaf multicast_router_advertisement;
        static const ydk::Enum::YLeaf multicast_router_solicitation;
        static const ydk::Enum::YLeaf multicast_router_termination;

};

class Packet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf icm_pv6;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf unknown;

};

class MessageTypeIcmp_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf alternate_host_address;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_selection;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf time_stamp;
        static const ydk::Enum::YLeaf time_stamp_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf address_mask_request;
        static const ydk::Enum::YLeaf address_mask_reply;
        static const ydk::Enum::YLeaf trace_route;
        static const ydk::Enum::YLeaf datagram_conversion_error;
        static const ydk::Enum::YLeaf mobile_host_redirect;
        static const ydk::Enum::YLeaf where_are_you;
        static const ydk::Enum::YLeaf iam_here;
        static const ydk::Enum::YLeaf mobile_registration_request;
        static const ydk::Enum::YLeaf mobile_registration_reply;
        static const ydk::Enum::YLeaf domain_name_request;

};

class TcpKeyInvalidReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf lifetime_not_same;
        static const ydk::Enum::YLeaf send_id_invalid;
        static const ydk::Enum::YLeaf recv_id_invalid;

};

class AddrFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internetwork;
        static const ydk::Enum::YLeaf ip_version6;

};

class NsrStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf na;

};

class TcpMacAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_configured;
        static const ydk::Enum::YLeaf aes_128_cmac_96;
        static const ydk::Enum::YLeaf hmac_sha1_12;
        static const ydk::Enum::YLeaf md5_16;
        static const ydk::Enum::YLeaf sha1_20;
        static const ydk::Enum::YLeaf hmac_md5_16;
        static const ydk::Enum::YLeaf hmac_sha1_20;
        static const ydk::Enum::YLeaf aes_128_cmac;
        static const ydk::Enum::YLeaf aes_256_cmac;
        static const ydk::Enum::YLeaf hmac_sha1_96;
        static const ydk::Enum::YLeaf hmac_sha_256;

};

class TcpAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class MessageTypeIcmpv6_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf multicast_listener_query;
        static const ydk::Enum::YLeaf multicast_listener_report;
        static const ydk::Enum::YLeaf multicast_listener_done;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf neighbor_solicitation;
        static const ydk::Enum::YLeaf neighbor_advertisement;
        static const ydk::Enum::YLeaf redirect_message;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf node_information_query;
        static const ydk::Enum::YLeaf node_information_reply;
        static const ydk::Enum::YLeaf inverse_neighbor_discovery_solicitaion;
        static const ydk::Enum::YLeaf inverse_neighbor_discover_advertisement;
        static const ydk::Enum::YLeaf v2_multicast_listener_report;
        static const ydk::Enum::YLeaf home_agent_address_discovery_request;
        static const ydk::Enum::YLeaf home_agent_address_discovery_reply;
        static const ydk::Enum::YLeaf mobile_prefix_solicitation;
        static const ydk::Enum::YLeaf mobile_prefix_advertisement;
        static const ydk::Enum::YLeaf certification_path_solicitation_message;
        static const ydk::Enum::YLeaf certification_path_advertisement_message;
        static const ydk::Enum::YLeaf experimental_mobility_protocols;
        static const ydk::Enum::YLeaf multicast_router_advertisement;
        static const ydk::Enum::YLeaf multicast_router_solicitation;
        static const ydk::Enum::YLeaf multicast_router_termination;
        static const ydk::Enum::YLeaf fmipv6_messages;

};

class NsrDownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf init_sync_aborted;
        static const ydk::Enum::YLeaf client_disabled;
        static const ydk::Enum::YLeaf client_disconnect;
        static const ydk::Enum::YLeaf tcp_disconnect;
        static const ydk::Enum::YLeaf failover;
        static const ydk::Enum::YLeaf nsr_clear;
        static const ydk::Enum::YLeaf internal_error;
        static const ydk::Enum::YLeaf retransmit_threshold_exceed;
        static const ydk::Enum::YLeaf init_sync_failure_thresh_exceeded;
        static const ydk::Enum::YLeaf audit_timeout;
        static const ydk::Enum::YLeaf audit_failed;
        static const ydk::Enum::YLeaf standby_sscb_deleted;
        static const ydk::Enum::YLeaf standby_session_close;
        static const ydk::Enum::YLeaf standby_rxpath_frozen;
        static const ydk::Enum::YLeaf partner_deleted;

};

class TcpTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf retransmission_timer;
        static const ydk::Enum::YLeaf window_probe_timer;
        static const ydk::Enum::YLeaf timewait_state_timer;
        static const ydk::Enum::YLeaf ack_hold_timer;
        static const ydk::Enum::YLeaf keep_alive_timer;
        static const ydk::Enum::YLeaf pmtu_ager_timer;
        static const ydk::Enum::YLeaf retransmission_giveup_timer;
        static const ydk::Enum::YLeaf throttle_timer;

};


}
}

#endif /* _CISCO_IOS_XR_IP_TCP_OPER_ */

