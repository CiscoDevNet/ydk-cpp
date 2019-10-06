#ifndef _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_oper {

class Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

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

        class AccessInterfaceStatistics; //type: Pppoe::AccessInterfaceStatistics
        class Nodes; //type: Pppoe::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics> access_interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes> nodes;
        
}; // Pppoe


class Pppoe::AccessInterfaceStatistics : public ydk::Entity
{
    public:
        AccessInterfaceStatistics();
        ~AccessInterfaceStatistics();

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

        class AccessInterfaceStatistic; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic

        ydk::YList access_interface_statistic;
        
}; // Pppoe::AccessInterfaceStatistics


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic : public ydk::Entity
{
    public:
        AccessInterfaceStatistic();
        ~AccessInterfaceStatistic();

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

        ydk::YLeaf interface_name; //type: string
        class PacketCounts; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts> packet_counts;
        
}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts : public ydk::Entity
{
    public:
        PacketCounts();
        ~PacketCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padi; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi
        class Pado; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado
        class Padr; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr
        class PadsSuccess; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess
        class PadsError; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError
        class Padt; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt
        class SessionState; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState
        class Other; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi> padi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado> pado;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr> padr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess> pads_success;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError> pads_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt> padt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState> session_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other> other;
        
}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi : public ydk::Entity
{
    public:
        Padi();
        ~Padi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado : public ydk::Entity
{
    public:
        Pado();
        ~Pado();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr : public ydk::Entity
{
    public:
        Padr();
        ~Padr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess : public ydk::Entity
{
    public:
        PadsSuccess();
        ~PadsSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError : public ydk::Entity
{
    public:
        PadsError();
        ~PadsError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt : public ydk::Entity
{
    public:
        Padt();
        ~Padt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other : public ydk::Entity
{
    public:
        Other();
        ~Other();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other


class Pppoe::Nodes : public ydk::Entity
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

        class Node; //type: Pppoe::Nodes::Node

        ydk::YList node;
        
}; // Pppoe::Nodes


class Pppoe::Nodes::Node : public ydk::Entity
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
        class DisconnectHistory; //type: Pppoe::Nodes::Node::DisconnectHistory
        class DisconnectHistoryUnique; //type: Pppoe::Nodes::Node::DisconnectHistoryUnique
        class Statistics; //type: Pppoe::Nodes::Node::Statistics
        class AccessInterface; //type: Pppoe::Nodes::Node::AccessInterface
        class Interfaces; //type: Pppoe::Nodes::Node::Interfaces
        class BbaGroups; //type: Pppoe::Nodes::Node::BbaGroups
        class SummaryTotal; //type: Pppoe::Nodes::Node::SummaryTotal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistory> disconnect_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistoryUnique> disconnect_history_unique;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::AccessInterface> access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups> bba_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::SummaryTotal> summary_total;
        
}; // Pppoe::Nodes::Node


class Pppoe::Nodes::Node::DisconnectHistory : public ydk::Entity
{
    public:
        DisconnectHistory();
        ~DisconnectHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_idx; //type: uint32
        class Entry; //type: Pppoe::Nodes::Node::DisconnectHistory::Entry

        ydk::YList entry;
        
}; // Pppoe::Nodes::Node::DisconnectHistory


class Pppoe::Nodes::Node::DisconnectHistory::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf trigger; //type: PppoeMaSessionTrig
        class SessionIdb; //type: Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb> session_idb;
        
}; // Pppoe::Nodes::Node::DisconnectHistory::Entry


class Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb : public ydk::Entity
{
    public:
        SessionIdb();
        ~SessionIdb();

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
        ydk::YLeaf access_interface; //type: string
        ydk::YLeaf session_id; //type: uint16
        ydk::YLeaf sub_label; //type: uint32
        ydk::YLeaf peer_mac_address; //type: string
        ydk::YLeaf state; //type: PppoeMaSessionState
        ydk::YLeaf cdm_object_handle; //type: uint32
        ydk::YLeaf chkpt_id; //type: uint32
        ydk::YLeaf punted_count; //type: uint32
        ydk::YLeaf port_limit; //type: uint32
        ydk::YLeaf is_counted; //type: int32
        ydk::YLeaf is_vlan_outer_tag; //type: int32
        ydk::YLeaf is_vlan_inner_tag; //type: int32
        ydk::YLeaf is_cleanup_pending; //type: int32
        ydk::YLeaf is_disconnect_done_pending; //type: int32
        ydk::YLeaf is_delete_done_pending; //type: int32
        ydk::YLeaf is_intf_create_callback_pending; //type: int32
        ydk::YLeaf is_publish_encaps_attr_pending; //type: int32
        ydk::YLeaf is_publish_encaps_attr_cb_pending; //type: int32
        ydk::YLeaf is_intf_delete_callback_pending; //type: int32
        ydk::YLeaf is_intf_delete_pending; //type: int32
        ydk::YLeaf is_im_owned_resource; //type: int32
        ydk::YLeaf is_im_final_received; //type: int32
        ydk::YLeaf is_im_owned_resource_missing; //type: int32
        ydk::YLeaf is_aaa_start_request_callback_pending; //type: int32
        ydk::YLeaf is_aaa_owned_resource; //type: int32
        ydk::YLeaf is_aaa_disconnect_requested; //type: int32
        ydk::YLeaf is_aaa_disconnect_received; //type: int32
        ydk::YLeaf is_sub_db_activate_callback_pending; //type: int32
        ydk::YLeaf is_pads_sent; //type: int32
        ydk::YLeaf is_padt_received; //type: int32
        ydk::YLeaf is_in_flight; //type: int32
        ydk::YLeaf is_radius_override; //type: int32
        ydk::YLeaf expected_notifications; //type: uint8
        ydk::YLeaf received_notifications; //type: uint8
        ydk::YLeaf srg_state; //type: PppoeMaSessionIdbSrgState
        ydk::YLeaf is_srg_data_received; //type: int32
        ydk::YLeaf is_iedge_data_received; //type: int32
        class Tags; //type: Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags
        class VlanOuterTag; //type: Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag
        class VlanInnerTag; //type: Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags> tags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag> vlan_outer_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag> vlan_inner_tag;
        
}; // Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb


class Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_service_name; //type: int32
        ydk::YLeaf is_max_payload; //type: int32
        ydk::YLeaf is_host_uniq; //type: int32
        ydk::YLeaf is_relay_session_id; //type: int32
        ydk::YLeaf is_vendor_specific; //type: int32
        ydk::YLeaf is_iwf; //type: int32
        ydk::YLeaf is_remote_id; //type: int32
        ydk::YLeaf is_circuit_id; //type: int32
        ydk::YLeaf is_dsl_tag; //type: int32
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf max_payload; //type: uint32
        ydk::YLeaf host_uniq; //type: string
        ydk::YLeaf relay_session_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf is_dsl_actual_up; //type: int32
        ydk::YLeaf is_dsl_actual_down; //type: int32
        ydk::YLeaf is_dsl_min_up; //type: int32
        ydk::YLeaf is_dsl_min_down; //type: int32
        ydk::YLeaf is_dsl_attain_up; //type: int32
        ydk::YLeaf is_dsl_attain_down; //type: int32
        ydk::YLeaf is_dsl_max_up; //type: int32
        ydk::YLeaf is_dsl_max_down; //type: int32
        ydk::YLeaf is_dsl_min_up_low; //type: int32
        ydk::YLeaf is_dsl_min_down_low; //type: int32
        ydk::YLeaf is_dsl_max_delay_up; //type: int32
        ydk::YLeaf is_dsl_actual_delay_up; //type: int32
        ydk::YLeaf is_dsl_max_delay_down; //type: int32
        ydk::YLeaf is_dsl_actual_delay_down; //type: int32
        ydk::YLeaf is_access_loop_encapsulation; //type: int32
        ydk::YLeaf dsl_actual_up; //type: uint32
        ydk::YLeaf dsl_actual_down; //type: uint32
        ydk::YLeaf dsl_min_up; //type: uint32
        ydk::YLeaf dsl_min_down; //type: uint32
        ydk::YLeaf dsl_attain_up; //type: uint32
        ydk::YLeaf dsl_attain_down; //type: uint32
        ydk::YLeaf dsl_max_up; //type: uint32
        ydk::YLeaf dsl_max_down; //type: uint32
        ydk::YLeaf dsl_min_up_low; //type: uint32
        ydk::YLeaf dsl_min_down_low; //type: uint32
        ydk::YLeaf dsl_max_delay_up; //type: uint32
        ydk::YLeaf dsl_actual_delay_up; //type: uint32
        ydk::YLeaf dsl_max_delay_down; //type: uint32
        ydk::YLeaf dsl_actual_delay_down; //type: uint32
        class AccessLoopEncapsulation; //type: Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation> access_loop_encapsulation;
        
}; // Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags


class Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation : public ydk::Entity
{
    public:
        AccessLoopEncapsulation();
        ~AccessLoopEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_link; //type: uint8
        ydk::YLeaf encaps1; //type: uint8
        ydk::YLeaf encaps2; //type: uint8

}; // Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation


class Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag : public ydk::Entity
{
    public:
        VlanOuterTag();
        ~VlanOuterTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_type; //type: uint16
        ydk::YLeaf user_priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag


class Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag : public ydk::Entity
{
    public:
        VlanInnerTag();
        ~VlanInnerTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_type; //type: uint16
        ydk::YLeaf user_priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag


class Pppoe::Nodes::Node::DisconnectHistoryUnique : public ydk::Entity
{
    public:
        DisconnectHistoryUnique();
        ~DisconnectHistoryUnique();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList disconnect_count; //type: list of  uint32
        class Entry; //type: Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry

        ydk::YList entry;
        
}; // Pppoe::Nodes::Node::DisconnectHistoryUnique


class Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf trigger; //type: PppoeMaSessionTrig
        class SessionIdb; //type: Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb> session_idb;
        
}; // Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry


class Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb : public ydk::Entity
{
    public:
        SessionIdb();
        ~SessionIdb();

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
        ydk::YLeaf access_interface; //type: string
        ydk::YLeaf session_id; //type: uint16
        ydk::YLeaf sub_label; //type: uint32
        ydk::YLeaf peer_mac_address; //type: string
        ydk::YLeaf state; //type: PppoeMaSessionState
        ydk::YLeaf cdm_object_handle; //type: uint32
        ydk::YLeaf chkpt_id; //type: uint32
        ydk::YLeaf punted_count; //type: uint32
        ydk::YLeaf port_limit; //type: uint32
        ydk::YLeaf is_counted; //type: int32
        ydk::YLeaf is_vlan_outer_tag; //type: int32
        ydk::YLeaf is_vlan_inner_tag; //type: int32
        ydk::YLeaf is_cleanup_pending; //type: int32
        ydk::YLeaf is_disconnect_done_pending; //type: int32
        ydk::YLeaf is_delete_done_pending; //type: int32
        ydk::YLeaf is_intf_create_callback_pending; //type: int32
        ydk::YLeaf is_publish_encaps_attr_pending; //type: int32
        ydk::YLeaf is_publish_encaps_attr_cb_pending; //type: int32
        ydk::YLeaf is_intf_delete_callback_pending; //type: int32
        ydk::YLeaf is_intf_delete_pending; //type: int32
        ydk::YLeaf is_im_owned_resource; //type: int32
        ydk::YLeaf is_im_final_received; //type: int32
        ydk::YLeaf is_im_owned_resource_missing; //type: int32
        ydk::YLeaf is_aaa_start_request_callback_pending; //type: int32
        ydk::YLeaf is_aaa_owned_resource; //type: int32
        ydk::YLeaf is_aaa_disconnect_requested; //type: int32
        ydk::YLeaf is_aaa_disconnect_received; //type: int32
        ydk::YLeaf is_sub_db_activate_callback_pending; //type: int32
        ydk::YLeaf is_pads_sent; //type: int32
        ydk::YLeaf is_padt_received; //type: int32
        ydk::YLeaf is_in_flight; //type: int32
        ydk::YLeaf is_radius_override; //type: int32
        ydk::YLeaf expected_notifications; //type: uint8
        ydk::YLeaf received_notifications; //type: uint8
        ydk::YLeaf srg_state; //type: PppoeMaSessionIdbSrgState
        ydk::YLeaf is_srg_data_received; //type: int32
        ydk::YLeaf is_iedge_data_received; //type: int32
        class Tags; //type: Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags
        class VlanOuterTag; //type: Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag
        class VlanInnerTag; //type: Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags> tags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag> vlan_outer_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag> vlan_inner_tag;
        
}; // Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb


class Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_service_name; //type: int32
        ydk::YLeaf is_max_payload; //type: int32
        ydk::YLeaf is_host_uniq; //type: int32
        ydk::YLeaf is_relay_session_id; //type: int32
        ydk::YLeaf is_vendor_specific; //type: int32
        ydk::YLeaf is_iwf; //type: int32
        ydk::YLeaf is_remote_id; //type: int32
        ydk::YLeaf is_circuit_id; //type: int32
        ydk::YLeaf is_dsl_tag; //type: int32
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf max_payload; //type: uint32
        ydk::YLeaf host_uniq; //type: string
        ydk::YLeaf relay_session_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf is_dsl_actual_up; //type: int32
        ydk::YLeaf is_dsl_actual_down; //type: int32
        ydk::YLeaf is_dsl_min_up; //type: int32
        ydk::YLeaf is_dsl_min_down; //type: int32
        ydk::YLeaf is_dsl_attain_up; //type: int32
        ydk::YLeaf is_dsl_attain_down; //type: int32
        ydk::YLeaf is_dsl_max_up; //type: int32
        ydk::YLeaf is_dsl_max_down; //type: int32
        ydk::YLeaf is_dsl_min_up_low; //type: int32
        ydk::YLeaf is_dsl_min_down_low; //type: int32
        ydk::YLeaf is_dsl_max_delay_up; //type: int32
        ydk::YLeaf is_dsl_actual_delay_up; //type: int32
        ydk::YLeaf is_dsl_max_delay_down; //type: int32
        ydk::YLeaf is_dsl_actual_delay_down; //type: int32
        ydk::YLeaf is_access_loop_encapsulation; //type: int32
        ydk::YLeaf dsl_actual_up; //type: uint32
        ydk::YLeaf dsl_actual_down; //type: uint32
        ydk::YLeaf dsl_min_up; //type: uint32
        ydk::YLeaf dsl_min_down; //type: uint32
        ydk::YLeaf dsl_attain_up; //type: uint32
        ydk::YLeaf dsl_attain_down; //type: uint32
        ydk::YLeaf dsl_max_up; //type: uint32
        ydk::YLeaf dsl_max_down; //type: uint32
        ydk::YLeaf dsl_min_up_low; //type: uint32
        ydk::YLeaf dsl_min_down_low; //type: uint32
        ydk::YLeaf dsl_max_delay_up; //type: uint32
        ydk::YLeaf dsl_actual_delay_up; //type: uint32
        ydk::YLeaf dsl_max_delay_down; //type: uint32
        ydk::YLeaf dsl_actual_delay_down; //type: uint32
        class AccessLoopEncapsulation; //type: Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation> access_loop_encapsulation;
        
}; // Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags


class Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation : public ydk::Entity
{
    public:
        AccessLoopEncapsulation();
        ~AccessLoopEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_link; //type: uint8
        ydk::YLeaf encaps1; //type: uint8
        ydk::YLeaf encaps2; //type: uint8

}; // Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation


class Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag : public ydk::Entity
{
    public:
        VlanOuterTag();
        ~VlanOuterTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_type; //type: uint16
        ydk::YLeaf user_priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag


class Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag : public ydk::Entity
{
    public:
        VlanInnerTag();
        ~VlanInnerTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_type; //type: uint16
        ydk::YLeaf user_priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag


class Pppoe::Nodes::Node::Statistics : public ydk::Entity
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

        class PacketCounts; //type: Pppoe::Nodes::Node::Statistics::PacketCounts
        class PacketErrorCounts; //type: Pppoe::Nodes::Node::Statistics::PacketErrorCounts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts> packet_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketErrorCounts> packet_error_counts;
        
}; // Pppoe::Nodes::Node::Statistics


class Pppoe::Nodes::Node::Statistics::PacketCounts : public ydk::Entity
{
    public:
        PacketCounts();
        ~PacketCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padi; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Padi
        class Pado; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Pado
        class Padr; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Padr
        class PadsSuccess; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess
        class PadsError; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError
        class Padt; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Padt
        class SessionState; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState
        class Other; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Other

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Padi> padi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Pado> pado;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Padr> padr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess> pads_success;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError> pads_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Padt> padt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState> session_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Other> other;
        
}; // Pppoe::Nodes::Node::Statistics::PacketCounts


class Pppoe::Nodes::Node::Statistics::PacketCounts::Padi : public ydk::Entity
{
    public:
        Padi();
        ~Padi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Padi


class Pppoe::Nodes::Node::Statistics::PacketCounts::Pado : public ydk::Entity
{
    public:
        Pado();
        ~Pado();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Pado


class Pppoe::Nodes::Node::Statistics::PacketCounts::Padr : public ydk::Entity
{
    public:
        Padr();
        ~Padr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Padr


class Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess : public ydk::Entity
{
    public:
        PadsSuccess();
        ~PadsSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess


class Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError : public ydk::Entity
{
    public:
        PadsError();
        ~PadsError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError


class Pppoe::Nodes::Node::Statistics::PacketCounts::Padt : public ydk::Entity
{
    public:
        Padt();
        ~Padt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Padt


class Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState


class Pppoe::Nodes::Node::Statistics::PacketCounts::Other : public ydk::Entity
{
    public:
        Other();
        ~Other();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Other


class Pppoe::Nodes::Node::Statistics::PacketErrorCounts : public ydk::Entity
{
    public:
        PacketErrorCounts();
        ~PacketErrorCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_interface_handle; //type: uint32
        ydk::YLeaf no_packet_payload; //type: uint32
        ydk::YLeaf no_packet_mac_address; //type: uint32
        ydk::YLeaf invalid_version_type_value; //type: uint32
        ydk::YLeaf bad_packet_length; //type: uint32
        ydk::YLeaf unknown_interface; //type: uint32
        ydk::YLeaf pado_received; //type: uint32
        ydk::YLeaf pads_received; //type: uint32
        ydk::YLeaf unknown_packet_type_received; //type: uint32
        ydk::YLeaf unexpected_session_id_in_packet; //type: uint32
        ydk::YLeaf no_service_name_tag; //type: uint32
        ydk::YLeaf padt_for_unknown_session; //type: uint32
        ydk::YLeaf padt_with_wrong_peer_mac; //type: uint32
        ydk::YLeaf padt_with_wrong_vlan_tags; //type: uint32
        ydk::YLeaf zero_length_host_uniq; //type: uint32
        ydk::YLeaf padt_before_pads_sent; //type: uint32
        ydk::YLeaf session_stage_packet_for_unknown_session; //type: uint32
        ydk::YLeaf session_stage_packet_with_wrong_mac; //type: uint32
        ydk::YLeaf session_stage_packet_with_wrong_vlan_tags; //type: uint32
        ydk::YLeaf session_stage_packet_with_no_error; //type: uint32
        ydk::YLeaf tag_too_short; //type: uint32
        ydk::YLeaf bad_tag_length_field; //type: uint32
        ydk::YLeaf multiple_service_name_tags; //type: uint32
        ydk::YLeaf multiple_max_payload_tags; //type: uint32
        ydk::YLeaf invalid_max_payload_tag; //type: uint32
        ydk::YLeaf multiple_vendor_specific_tags; //type: uint32
        ydk::YLeaf unexpected_ac_name_tag; //type: uint32
        ydk::YLeaf unexpected_error_tags; //type: uint32
        ydk::YLeaf unknown_tag_received; //type: uint32
        ydk::YLeaf no_iana_code_invendor_tag; //type: uint32
        ydk::YLeaf invalid_iana_code_invendor_tag; //type: uint32
        ydk::YLeaf vendor_tag_too_short; //type: uint32
        ydk::YLeaf bad_vendor_tag_length_field; //type: uint32
        ydk::YLeaf multiple_host_uniq_tags; //type: uint32
        ydk::YLeaf multiple_relay_session_id_tags; //type: uint32
        ydk::YLeaf multiple_circuit_id_tags; //type: uint32
        ydk::YLeaf multiple_remote_id_tags; //type: uint32
        ydk::YLeaf invalid_dsl_tag; //type: uint32
        ydk::YLeaf multiple_of_the_same_dsl_tag; //type: uint32
        ydk::YLeaf invalid_iwf_tag; //type: uint32
        ydk::YLeaf multiple_iwf_tags; //type: uint32
        ydk::YLeaf unknownvendor_tag; //type: uint32
        ydk::YLeaf no_space_left_in_packet; //type: uint32
        ydk::YLeaf duplicate_host_uniq_tag_received; //type: uint32
        ydk::YLeaf duplicate_relay_session_id_tag_received; //type: uint32
        ydk::YLeaf packet_too_long; //type: uint32
        ydk::YLeaf invalid_ale_tag; //type: uint32
        ydk::YLeaf multiple_ale_tags; //type: uint32
        ydk::YLeaf invalid_service_name; //type: uint32
        ydk::YLeaf invalid_peer_mac; //type: uint32
        ydk::YLeaf invalid_vlan_tags; //type: uint32
        ydk::YLeaf packet_on_srg_slave; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketErrorCounts


class Pppoe::Nodes::Node::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summaries; //type: Pppoe::Nodes::Node::AccessInterface::Summaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::AccessInterface::Summaries> summaries;
        
}; // Pppoe::Nodes::Node::AccessInterface


class Pppoe::Nodes::Node::AccessInterface::Summaries : public ydk::Entity
{
    public:
        Summaries();
        ~Summaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary; //type: Pppoe::Nodes::Node::AccessInterface::Summaries::Summary

        ydk::YList summary;
        
}; // Pppoe::Nodes::Node::AccessInterface::Summaries


class Pppoe::Nodes::Node::AccessInterface::Summaries::Summary : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_state; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf bba_group_name; //type: string
        ydk::YLeaf is_ready; //type: int32
        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf incomplete_sessions; //type: uint32

}; // Pppoe::Nodes::Node::AccessInterface::Summaries::Summary


class Pppoe::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: Pppoe::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // Pppoe::Nodes::Node::Interfaces


class Pppoe::Nodes::Node::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf access_interface_name; //type: string
        ydk::YLeaf bba_group_name; //type: string
        ydk::YLeaf session_id; //type: uint16
        ydk::YLeaf local_mac_address; //type: string
        ydk::YLeaf peer_mac_address; //type: string
        ydk::YLeaf is_complete; //type: int32
        ydk::YLeaf vlan_outer_id; //type: uint16
        ydk::YLeaf vlan_inner_id; //type: uint16
        ydk::YLeaf srg_state; //type: PppoeMaSessionIdbSrgState
        class Tags; //type: Pppoe::Nodes::Node::Interfaces::Interface::Tags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Interfaces::Interface::Tags> tags;
        
}; // Pppoe::Nodes::Node::Interfaces::Interface


class Pppoe::Nodes::Node::Interfaces::Interface::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_name; //type: string
        ydk::YLeaf max_payload; //type: uint16
        ydk::YLeaf host_uniq; //type: string
        ydk::YLeaf relay_session_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf is_iwf; //type: int32
        ydk::YLeaf dsl_actual_up; //type: uint32
        ydk::YLeaf dsl_actual_down; //type: uint32
        ydk::YLeaf dsl_min_up; //type: uint32
        ydk::YLeaf dsl_min_down; //type: uint32
        ydk::YLeaf dsl_attain_up; //type: uint32
        ydk::YLeaf dsl_attain_down; //type: uint32
        ydk::YLeaf dsl_max_up; //type: uint32
        ydk::YLeaf dsl_max_down; //type: uint32
        ydk::YLeaf dsl_min_up_low; //type: uint32
        ydk::YLeaf dsl_min_down_low; //type: uint32
        ydk::YLeaf dsl_max_delay_up; //type: uint32
        ydk::YLeaf dsl_actual_delay_up; //type: uint32
        ydk::YLeaf dsl_max_delay_down; //type: uint32
        ydk::YLeaf dsl_actual_delay_down; //type: uint32
        class AccessLoopEncapsulation; //type: Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation> access_loop_encapsulation;
        
}; // Pppoe::Nodes::Node::Interfaces::Interface::Tags


class Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation : public ydk::Entity
{
    public:
        AccessLoopEncapsulation();
        ~AccessLoopEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_link; //type: uint8
        ydk::YLeaf encaps1; //type: uint8
        ydk::YLeaf encaps2; //type: uint8

}; // Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation


class Pppoe::Nodes::Node::BbaGroups : public ydk::Entity
{
    public:
        BbaGroups();
        ~BbaGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BbaGroup; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup

        ydk::YList bba_group;
        
}; // Pppoe::Nodes::Node::BbaGroups


class Pppoe::Nodes::Node::BbaGroups::BbaGroup : public ydk::Entity
{
    public:
        BbaGroup();
        ~BbaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bba_group_name; //type: string
        class LimitConfig; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig
        class Limits; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits
        class Throttles; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles
        class ThrottleConfig; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig> limit_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits> limits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles> throttles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig> throttle_config;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig : public ydk::Entity
{
    public:
        LimitConfig();
        ~LimitConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Card; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card
        class AccessIntf; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf
        class Mac; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac
        class MacIwf; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf
        class MacAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface
        class MacIwfAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface
        class CircuitId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId
        class RemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId
        class CircuitIdAndRemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId
        class OuterVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId
        class InnerVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId
        class VlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card> card;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf> access_intf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf> mac_iwf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface> mac_access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface> mac_iwf_access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId> circuit_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId> remote_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId> circuit_id_and_remote_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId> outer_vlan_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId> inner_vlan_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId> vlan_id;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf : public ydk::Entity
{
    public:
        AccessIntf();
        ~AccessIntf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf : public ydk::Entity
{
    public:
        MacIwf();
        ~MacIwf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface : public ydk::Entity
{
    public:
        MacAccessInterface();
        ~MacAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface : public ydk::Entity
{
    public:
        MacIwfAccessInterface();
        ~MacIwfAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId : public ydk::Entity
{
    public:
        CircuitIdAndRemoteId();
        ~CircuitIdAndRemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId : public ydk::Entity
{
    public:
        OuterVlanId();
        ~OuterVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId : public ydk::Entity
{
    public:
        InnerVlanId();
        ~InnerVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits : public ydk::Entity
{
    public:
        Limits();
        ~Limits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit

        ydk::YList limit;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

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
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf iwf; //type: boolean
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf outer_vlan_id; //type: uint32
        ydk::YLeaf inner_vlan_id; //type: uint32
        ydk::YLeaf state; //type: PppoeMaLimitState
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf radius_override_set; //type: int32
        ydk::YLeaf override_limit; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles : public ydk::Entity
{
    public:
        Throttles();
        ~Throttles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Throttle; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle

        ydk::YList throttle;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle : public ydk::Entity
{
    public:
        Throttle();
        ~Throttle();

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
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf iwf; //type: boolean
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf outer_vlan_id; //type: uint32
        ydk::YLeaf inner_vlan_id; //type: uint32
        ydk::YLeaf state; //type: PppoeMaThrottleState
        ydk::YLeaf time_left; //type: uint32
        ydk::YLeaf since_reset; //type: uint32
        ydk::YLeaf padi_count; //type: uint32
        ydk::YLeaf padr_count; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig : public ydk::Entity
{
    public:
        ThrottleConfig();
        ~ThrottleConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac
        class MacAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface
        class MacIwfAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface
        class CircuitId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId
        class RemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId
        class CircuitIdAndRemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId
        class OuterVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId
        class InnerVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId
        class VlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface> mac_access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface> mac_iwf_access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId> circuit_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId> remote_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId> circuit_id_and_remote_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId> outer_vlan_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId> inner_vlan_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId> vlan_id;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface : public ydk::Entity
{
    public:
        MacAccessInterface();
        ~MacAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface : public ydk::Entity
{
    public:
        MacIwfAccessInterface();
        ~MacIwfAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId : public ydk::Entity
{
    public:
        CircuitIdAndRemoteId();
        ~CircuitIdAndRemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId : public ydk::Entity
{
    public:
        OuterVlanId();
        ~OuterVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId : public ydk::Entity
{
    public:
        InnerVlanId();
        ~InnerVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId


class Pppoe::Nodes::Node::SummaryTotal : public ydk::Entity
{
    public:
        SummaryTotal();
        ~SummaryTotal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ready_access_interfaces; //type: uint32
        ydk::YLeaf not_ready_access_interfaces; //type: uint32
        ydk::YLeaf complete_sessions; //type: uint32
        ydk::YLeaf incomplete_sessions; //type: uint32
        ydk::YLeaf flow_control_limit; //type: uint32
        ydk::YLeaf flow_control_in_flight_sessions; //type: uint32
        ydk::YLeaf flow_control_dropped_sessions; //type: uint64
        ydk::YLeaf flow_control_disconnected_sessions; //type: uint64
        ydk::YLeaf flow_control_successful_sessions; //type: uint64
        ydk::YLeaf pppoema_subscriber_infra_flow_control; //type: uint32

}; // Pppoe::Nodes::Node::SummaryTotal

class PppoeMaSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf destroying;
        static const ydk::Enum::YLeaf deleting;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf stopping;
        static const ydk::Enum::YLeaf started;
        static const ydk::Enum::YLeaf activated;
        static const ydk::Enum::YLeaf complete;

        static int get_enum_value(const std::string & name) {
            if (name == "destroying") return 0;
            if (name == "deleting") return 1;
            if (name == "initializing") return 2;
            if (name == "created") return 3;
            if (name == "stopping") return 4;
            if (name == "started") return 5;
            if (name == "activated") return 6;
            if (name == "complete") return 7;
            return -1;
        }
};

class PppoeMaSessionIdbSrgState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "active") return 1;
            if (name == "standby") return 2;
            return -1;
        }
};

class PppoeMaSessionTrig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_error;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_publish_encaps_attr_fail;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_if_create_fail;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_iedge_session_start_fail;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_iedge_session_update_fail;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_sub_db_activate_fail;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_in_flight_timeout;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_down;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_parent;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_padt;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_session_pak;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_final;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_no_im_or;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_restart;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_admissions_config_change;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_iedge_disconnect;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_invalid_vlan_tags;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_port_limit_disconnect;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_srg_disconnect;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_srg_sweep;
        static const ydk::Enum::YLeaf pppoe_ma_session_trig_count;

        static int get_enum_value(const std::string & name) {
            if (name == "pppoe-ma-session-trig-error") return 0;
            if (name == "pppoe-ma-session-trig-publish-encaps-attr-fail") return 1;
            if (name == "pppoe-ma-session-trig-if-create-fail") return 2;
            if (name == "pppoe-ma-session-trig-iedge-session-start-fail") return 3;
            if (name == "pppoe-ma-session-trig-iedge-session-update-fail") return 4;
            if (name == "pppoe-ma-session-trig-sub-db-activate-fail") return 5;
            if (name == "pppoe-ma-session-trig-in-flight-timeout") return 6;
            if (name == "pppoe-ma-session-trig-down") return 7;
            if (name == "pppoe-ma-session-trig-parent") return 8;
            if (name == "pppoe-ma-session-trig-padt") return 9;
            if (name == "pppoe-ma-session-trig-session-pak") return 10;
            if (name == "pppoe-ma-session-trig-final") return 11;
            if (name == "pppoe-ma-session-trig-no-im-or") return 12;
            if (name == "pppoe-ma-session-trig-restart") return 13;
            if (name == "pppoe-ma-session-trig-admissions-config-change") return 14;
            if (name == "pppoe-ma-session-trig-iedge-disconnect") return 15;
            if (name == "pppoe-ma-session-trig-invalid-vlan-tags") return 16;
            if (name == "pppoe-ma-session-trig-port-limit-disconnect") return 17;
            if (name == "pppoe-ma-session-trig-srg-disconnect") return 18;
            if (name == "pppoe-ma-session-trig-srg-sweep") return 19;
            if (name == "pppoe-ma-session-trig-count") return 20;
            return -1;
        }
};

class PppoeMaLimitState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf block;

        static int get_enum_value(const std::string & name) {
            if (name == "ok") return 0;
            if (name == "warning") return 1;
            if (name == "block") return 2;
            return -1;
        }
};

class PppoeMaThrottleState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf monitor;
        static const ydk::Enum::YLeaf block;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 0;
            if (name == "monitor") return 1;
            if (name == "block") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_OPER_ */

