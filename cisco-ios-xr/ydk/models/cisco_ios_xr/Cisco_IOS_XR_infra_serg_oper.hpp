#ifndef _CISCO_IOS_XR_INFRA_SERG_OPER_
#define _CISCO_IOS_XR_INFRA_SERG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_serg_oper {

class SessionRedundancyManager : public ydk::Entity
{
    public:
        SessionRedundancyManager();
        ~SessionRedundancyManager();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Interfaces; //type: SessionRedundancyManager::Interfaces
        class Groups; //type: SessionRedundancyManager::Groups
        class Summary; //type: SessionRedundancyManager::Summary

        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyManager::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyManager::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyManager::Summary> summary;
        
}; // SessionRedundancyManager


class SessionRedundancyManager::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: SessionRedundancyManager::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyManager::Interfaces::Interface> > interface;
        
}; // SessionRedundancyManager::Interfaces


class SessionRedundancyManager::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_mapping_id; //type: uint32
        ydk::YLeaf forward_referenced; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf role; //type: SergShowImRole

}; // SessionRedundancyManager::Interfaces::Interface


class SessionRedundancyManager::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: SessionRedundancyManager::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyManager::Groups::Group> > group;
        
}; // SessionRedundancyManager::Groups


class SessionRedundancyManager::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf disabled; //type: boolean
        ydk::YLeaf role; //type: SergShowImRole
        ydk::YLeaf peer_ipv4_address; //type: string
        ydk::YLeaf peer_ipv6_address; //type: string
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf preferred_role; //type: SergShowRole
        ydk::YLeaf slave_mode; //type: SergShowSlaveMode
        ydk::YLeaf object_tracking_status; //type: boolean
        ydk::YLeaf node_name; //type: string

}; // SessionRedundancyManager::Groups::Group


class SessionRedundancyManager::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disabled; //type: boolean
        ydk::YLeaf active_state; //type: boolean
        ydk::YLeaf preferred_role; //type: SergShowRole
        ydk::YLeaf slave_mode; //type: SergShowSlaveMode
        ydk::YLeaf hold_timer; //type: uint32
        ydk::YLeaf source_interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_interface_ipv4_address; //type: string
        ydk::YLeaf source_interface_ipv6_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf disabled_group_count; //type: uint32
        ydk::YLeaf master_group_count; //type: uint32
        ydk::YLeaf slave_group_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf master_interface_count; //type: uint32
        ydk::YLeaf slave_interface_count; //type: uint32

}; // SessionRedundancyManager::Summary

class SessionRedundancyAgent : public ydk::Entity
{
    public:
        SessionRedundancyAgent();
        ~SessionRedundancyAgent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Nodes; //type: SessionRedundancyAgent::Nodes

        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes> nodes;
        
}; // SessionRedundancyAgent


class SessionRedundancyAgent::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: SessionRedundancyAgent::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node> > node;
        
}; // SessionRedundancyAgent::Nodes


class SessionRedundancyAgent::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class GroupIdXr; //type: SessionRedundancyAgent::Nodes::Node::GroupIdXr
        class ClientIds; //type: SessionRedundancyAgent::Nodes::Node::ClientIds
        class Memory; //type: SessionRedundancyAgent::Nodes::Node::Memory
        class GroupIds; //type: SessionRedundancyAgent::Nodes::Node::GroupIds
        class Interfaces; //type: SessionRedundancyAgent::Nodes::Node::Interfaces
        class StatsGlobal; //type: SessionRedundancyAgent::Nodes::Node::StatsGlobal
        class GroupSummaries; //type: SessionRedundancyAgent::Nodes::Node::GroupSummaries

        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::ClientIds> client_ids;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIdXr> group_id_xr;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIds> group_ids;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupSummaries> group_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Memory> memory;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::StatsGlobal> stats_global;
        
}; // SessionRedundancyAgent::Nodes::Node


class SessionRedundancyAgent::Nodes::Node::GroupIdXr : public ydk::Entity
{
    public:
        GroupIdXr();
        ~GroupIdXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupId; //type: SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId> > group_id;
        
}; // SessionRedundancyAgent::Nodes::Node::GroupIdXr


class SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId : public ydk::Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: string
        ydk::YLeaf group_id_xr; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf key_index; //type: string
        ydk::YLeaf role_master; //type: boolean
        ydk::YLeaf negative_acknowledgement_update_all; //type: boolean
        class SessionDetailedInformation; //type: SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation
        class SessionSyncErrorInformation; //type: SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation> > session_detailed_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation> > session_sync_error_information;
        
}; // SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId


class SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation : public ydk::Entity
{
    public:
        SessionDetailedInformation();
        ~SessionDetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component; //type: SergShowComp
        ydk::YLeaf operation_; //type: SergShowSessionOperation
        ydk::YLeaf tx_list_queue_fail; //type: boolean
        ydk::YLeaf marked_for_sweeping; //type: boolean
        ydk::YLeaf marked_for_cleanup; //type: boolean

}; // SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation


class SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation : public ydk::Entity
{
    public:
        SessionSyncErrorInformation();
        ~SessionSyncErrorInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_error_count; //type: uint16
        ydk::YLeaf last_error_code; //type: uint32
        ydk::YLeaf last_error_type; //type: SergShowSessionError

}; // SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation


class SessionRedundancyAgent::Nodes::Node::ClientIds : public ydk::Entity
{
    public:
        ClientIds();
        ~ClientIds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientId; //type: SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId> > client_id;
        
}; // SessionRedundancyAgent::Nodes::Node::ClientIds


class SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stats_client_id; //type: int32
        ydk::YLeaf tx_list_start_of_download_add_ok; //type: uint32
        ydk::YLeaf tx_list_start_of_download_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_end_of_download_add_ok; //type: uint32
        ydk::YLeaf tx_list_end_of_download_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_end_of_message_add_ok; //type: uint32
        ydk::YLeaf tx_list_end_of_message_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_clear_all_add_ok; //type: uint32
        ydk::YLeaf tx_list_clear_all_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_clear_selected_add_ok; //type: uint32
        ydk::YLeaf tx_list_clear_selected_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_replay_all_add_ok; //type: uint32
        ydk::YLeaf tx_list_replay_all_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_replay_selected_add_ok; //type: uint32
        ydk::YLeaf tx_list_replay_selected_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_session_session_add_ok; //type: uint32
        ydk::YLeaf tx_list_session_session_add_not_ok; //type: uint32
        ydk::YLeaf tx_list_session_session_update_ok; //type: uint32
        ydk::YLeaf tx_list_session_session_update_not_ok; //type: uint32
        ydk::YLeaf tx_list_session_session_delete; //type: uint32
        ydk::YLeaf clean_call_back; //type: uint32
        ydk::YLeaf tx_list_encode_session_session_ok; //type: uint32
        ydk::YLeaf tx_list_encode_session_session_partial_write; //type: uint32
        ydk::YLeaf last_replay_all_count; //type: uint32
        ydk::YLeaf tx_list_receive_command_replay_all; //type: uint32
        ydk::YLeaf tx_list_receive_command_replay_selected; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_delete_valid; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_delete_invalid; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_update_valid; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_update_invalid; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_sod_all; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_sod_selected; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_eod_all; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_eod_selected; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_eoms; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_clear_all; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_clear_selected; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_neg_ack; //type: uint32
        ydk::YLeaf tx_list_receive_session_session_neg_ack_not_ok; //type: uint32
        ydk::YLeaf tx_list_client_registration_ok; //type: uint32
        ydk::YLeaf tx_list_client_registration_not_ok; //type: uint32
        ydk::YLeaf tx_list_client_de_registration; //type: uint32
        ydk::YLeaf tx_list_client_connection_down; //type: uint32
        ydk::YLeaf tx_list_client_cleanup; //type: uint32
        ydk::YLeaf tx_list_active_ok; //type: uint32
        ydk::YLeaf tx_list_active_not_ok; //type: uint32
        ydk::YLeaf tx_list_de_active_ok; //type: uint32
        ydk::YLeaf tx_list_de_active_not_ok; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId


class SessionRedundancyAgent::Nodes::Node::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemoryInfo; //type: SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo
        class EdmMemoryInfo; //type: SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo
        class StringMemoryInfo; //type: SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo> > edm_memory_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo> > memory_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo> > string_memory_info;
        
}; // SessionRedundancyAgent::Nodes::Node::Memory


class SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo : public ydk::Entity
{
    public:
        MemoryInfo();
        ~MemoryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf structure_name; //type: string
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf current_count; //type: uint32
        ydk::YLeaf alloc_fails; //type: uint32
        ydk::YLeaf alloc_count; //type: uint32
        ydk::YLeaf freed_count; //type: uint32
        ydk::YLeaf memory_type; //type: SergShowMem

}; // SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo


class SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo : public ydk::Entity
{
    public:
        EdmMemoryInfo();
        ~EdmMemoryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf success; //type: uint32
        ydk::YLeaf failure; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo


class SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo : public ydk::Entity
{
    public:
        StringMemoryInfo();
        ~StringMemoryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf success; //type: uint32
        ydk::YLeaf failure; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo


class SessionRedundancyAgent::Nodes::Node::GroupIds : public ydk::Entity
{
    public:
        GroupIds();
        ~GroupIds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupId; //type: SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId> > group_id;
        
}; // SessionRedundancyAgent::Nodes::Node::GroupIds


class SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId : public ydk::Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: string
        ydk::YLeaf group_id_xr; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf disabled; //type: boolean
        ydk::YLeaf init_role; //type: SergShowRole
        ydk::YLeaf negotiating_role; //type: SergShowRole
        ydk::YLeaf current_role; //type: SergShowRole
        ydk::YLeaf slave_mode; //type: SergShowSlaveMode
        ydk::YLeaf hold_timer; //type: uint32
        ydk::YLeaf core_tracking_object_name; //type: string
        ydk::YLeaf core_tracking_object_status; //type: boolean
        ydk::YLeaf access_tracking_object_name; //type: string
        ydk::YLeaf access_tracking_object_status; //type: boolean
        ydk::YLeaf object_tracking_status; //type: boolean
        ydk::YLeaf peer_ipv4_address; //type: string
        ydk::YLeaf peer_ipv6_address; //type: string
        ydk::YLeaf peer_status; //type: SergPeerStatus
        ydk::YLeaf peer_last_negotiation_time; //type: string
        ydk::YLeaf peer_last_up_time; //type: string
        ydk::YLeaf peer_last_down_time; //type: string
        ydk::YLeaf peer_init_role; //type: SergShowRole
        ydk::YLeaf peer_negotiating_role; //type: SergShowRole
        ydk::YLeaf peer_current_role; //type: SergShowRole
        ydk::YLeaf peer_object_tracking_status; //type: boolean
        ydk::YLeaf last_switchover_time; //type: string
        ydk::YLeaf switchover_count; //type: uint32
        ydk::YLeaf last_switchover_reason; //type: SergShowSoReason
        ydk::YLeaf switchover_hold_time; //type: uint32
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf slave_update_failure_count; //type: uint32
        ydk::YLeaf pending_session_update_count; //type: uint32
        ydk::YLeaf pending_session_delete_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf revertive_timer; //type: uint32
        ydk::YLeaf switchover_revert_time; //type: uint32
        class ClientSessionCount; //type: SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount
        class Interface; //type: SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount> > client_session_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface> > interface;
        
}; // SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId


class SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount : public ydk::Entity
{
    public:
        ClientSessionCount();
        ~ClientSessionCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component; //type: SergShowComp
        ydk::YLeaf session_count; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount


class SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_synchronization_id; //type: uint32
        ydk::YLeaf forward_referenced; //type: boolean
        ydk::YLeaf session_count; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface


class SessionRedundancyAgent::Nodes::Node::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: SessionRedundancyAgent::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Interfaces::Interface> > interface;
        
}; // SessionRedundancyAgent::Nodes::Node::Interfaces


class SessionRedundancyAgent::Nodes::Node::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_synchronization_id; //type: uint32
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf role; //type: SergShowImRole
        ydk::YLeaf forward_referenced; //type: boolean
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interface_enable_error_count; //type: uint32
        ydk::YLeaf interface_disable_error_count; //type: uint32
        ydk::YLeaf interface_caps_add_error_count; //type: uint32
        ydk::YLeaf interface_caps_remove_error_count; //type: uint32
        ydk::YLeaf interface_attribute_update_error_count; //type: uint32
        class InterfaceOper; //type: SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper
        class InterfaceStatus; //type: SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus
        class ClientStatus; //type: SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus> > client_status;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper> interface_oper;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus> interface_status;
        
}; // SessionRedundancyAgent::Nodes::Node::Interfaces::Interface


class SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper : public ydk::Entity
{
    public:
        InterfaceOper();
        ~InterfaceOper();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idb_oper_reg_enable; //type: boolean
        ydk::YLeaf idb_oper_reg_disable; //type: boolean
        ydk::YLeaf idb_oper_caps_add; //type: boolean
        ydk::YLeaf idb_oper_caps_remove; //type: boolean
        ydk::YLeaf idb_oper_attr_update; //type: boolean

}; // SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper


class SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus : public ydk::Entity
{
    public:
        InterfaceStatus();
        ~InterfaceStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idb_state_fwd_ref; //type: boolean
        ydk::YLeaf idb_state_stale; //type: boolean
        ydk::YLeaf idb_state_registered; //type: boolean
        ydk::YLeaf idb_state_caps_added; //type: boolean
        ydk::YLeaf idb_state_owned_re_source; //type: boolean
        ydk::YLeaf idb_client_eoms_pending; //type: boolean
        ydk::YLeaf idb_state_p_end_caps_rem; //type: boolean
        ydk::YLeaf idb_state_p_end_reg_disable; //type: boolean

}; // SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus


class SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus : public ydk::Entity
{
    public:
        ClientStatus();
        ~ClientStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component; //type: SergShowComp
        ydk::YLeaf serg_show_idb_client_eoms_pending; //type: boolean
        ydk::YLeaf serg_show_idb_client_sync_eod_pending; //type: boolean
        ydk::YLeaf session_count; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus


class SessionRedundancyAgent::Nodes::Node::StatsGlobal : public ydk::Entity
{
    public:
        StatsGlobal();
        ~StatsGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_interface_ipv4_address; //type: string
        ydk::YLeaf source_interface_ipv6_address; //type: string
        ydk::YLeaf redundancy_role; //type: string
        ydk::YLeaf restart_client_sync_in_progress; //type: boolean
        ydk::YLeaf client_init_sync_time_stamp; //type: string
        ydk::YLeaf restart_peer_sync_in_progress; //type: boolean
        ydk::YLeaf peer_init_sync_time_stamp; //type: string
        ydk::YLeaf sync_in_progress; //type: boolean
        ydk::YLeaf peer_action_timer; //type: uint32
        ydk::YLeaf retry_timer_remaining; //type: uint32
        ydk::YLeaf tx_list_client_registration_invalid; //type: uint32
        ydk::YLeaf tx_list_client_de_registration_invalid; //type: uint32
        ydk::YLeaf tx_list_client_connection_up; //type: uint32
        ydk::YLeaf tx_list_client_connection_down; //type: uint32
        ydk::YLeaf tx_list_client_peer_done; //type: uint32
        ydk::YLeaf tx_list_client_message_call_back; //type: uint32
        ydk::YLeaf tx_list_client_receive_valid; //type: uint32
        ydk::YLeaf tx_list_client_receive_invalid; //type: uint32
        ydk::YLeaf tx_list_client_receive_command_valid; //type: uint32
        ydk::YLeaf tx_list_client_receive_command_invalid; //type: uint32
        ydk::YLeaf tx_list_client_receive_session_sessionvalid; //type: uint32
        ydk::YLeaf tx_list_client_receive_session_session_invalid; //type: uint32
        ydk::YLeaf tx_list_peer_timer_handler; //type: uint32
        ydk::YLeaf tx_list_peer_registration_invalid; //type: uint32
        ydk::YLeaf tx_list_peer_de_registration_invalid; //type: uint32
        ydk::YLeaf tx_list_peer_message_call_back_valid; //type: uint32
        ydk::YLeaf tx_list_peer_message_call_back_invalid; //type: uint32
        ydk::YLeaf tx_list_peer_done; //type: uint32
        ydk::YLeaf tx_list_peer_cmd_connection_up_not_ok; //type: uint32
        ydk::YLeaf tx_list_peer_cmd_connection_down_not_ok; //type: uint32
        ydk::YLeaf tx_list_peer_session_connection_up_not_ok; //type: uint32
        ydk::YLeaf tx_list_peer_session_connection_down_not_ok; //type: uint32
        class IntfStatusStatistics; //type: SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics
        class TxListStatistics; //type: SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics
        class ClientStatus; //type: SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus
        class OpaqueMemoryStatus; //type: SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus
        class TxListOverTcpStatus; //type: SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus> > client_status;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics> intf_status_statistics;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus> > opaque_memory_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus> > tx_list_over_tcp_status;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics> tx_list_statistics;
        
}; // SessionRedundancyAgent::Nodes::Node::StatsGlobal


class SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics : public ydk::Entity
{
    public:
        IntfStatusStatistics();
        ~IntfStatusStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pend_caps_rem_cnt; //type: uint32
        ydk::YLeaf pend_reg_disable_cnt; //type: uint32
        ydk::YLeaf pend_other_batch_oper_cnt; //type: uint32
        ydk::YLeaf non_stale_cnt; //type: uint32
        ydk::YLeaf grp_bound_cnt; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics


class SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics : public ydk::Entity
{
    public:
        TxListStatistics();
        ~TxListStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_list_encode_marker_ok; //type: uint32
        ydk::YLeaf tx_list_encode_marker_partial_write; //type: uint32
        ydk::YLeaf tx_list_clean_marker; //type: uint32
        ydk::YLeaf tx_list_encode_command_ok; //type: uint32
        ydk::YLeaf tx_list_encode_command_partial_write; //type: uint32
        ydk::YLeaf tx_list_clean_command; //type: uint32
        ydk::YLeaf tx_list_encode_negotiation_ok; //type: uint32
        ydk::YLeaf tx_list_encode_negotiation_partial_write; //type: uint32
        ydk::YLeaf tx_list_clean_negotiation; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics


class SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus : public ydk::Entity
{
    public:
        ClientStatus();
        ~ClientStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component; //type: SergShowComp
        ydk::YLeaf client_connection_status; //type: boolean
        ydk::YLeaf client_initialization_synchronization_pending; //type: boolean
        ydk::YLeaf client_synchronization_end_of_download_pending; //type: boolean
        ydk::YLeaf up_time_stamp; //type: string
        ydk::YLeaf down_time_stamp; //type: string
        ydk::YLeaf clean_up_timer_remaining; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus


class SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus : public ydk::Entity
{
    public:
        OpaqueMemoryStatus();
        ~OpaqueMemoryStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component; //type: SergShowComp
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf opaque_size; //type: uint32
        ydk::YLeaf opaque_high_size; //type: uint32
        ydk::YLeaf opaque_data_size; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus


class SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus : public ydk::Entity
{
    public:
        TxListOverTcpStatus();
        ~TxListOverTcpStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf messages_sent; //type: uint32
        ydk::YLeaf bytes_sent; //type: uint32
        ydk::YLeaf messages_received; //type: uint32
        ydk::YLeaf bytes_received; //type: uint32
        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeaf blocked_connect_count; //type: uint32
        ydk::YLeaf connect_retry_count; //type: uint32
        ydk::YLeaf remote_node_down_count; //type: uint32
        ydk::YLeaf accept_count; //type: uint32
        ydk::YLeaf maximum_sent_message_size; //type: uint32
        ydk::YLeaf maximum_received_message_size; //type: uint32
        ydk::YLeaf peer_pause_count; //type: uint32
        ydk::YLeaf buffer_full_occurence_count; //type: uint32
        ydk::YLeaf mem_move_message_count; //type: uint32
        ydk::YLeaf mem_move_bytes_count; //type: uint32
        ydk::YLeaf socket_read_count; //type: uint32
        ydk::YLeaf socket_write_count; //type: uint32
        ydk::YLeaf active_socket_count; //type: uint16
        ydk::YLeaf maximum_requested_buffer_size; //type: uint32
        ydk::YLeaf buffer_freed_count; //type: uint16
        ydk::YLeaf buffer_cache_hit; //type: uint16
        ydk::YLeaf buffer_cache_miss; //type: uint16

}; // SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus


class SessionRedundancyAgent::Nodes::Node::GroupSummaries : public ydk::Entity
{
    public:
        GroupSummaries();
        ~GroupSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupSummary; //type: SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_oper::SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary> > group_summary;
        
}; // SessionRedundancyAgent::Nodes::Node::GroupSummaries


class SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary : public ydk::Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: string
        ydk::YLeaf group_id_xr; //type: uint32
        ydk::YLeaf role; //type: SergShowImRole
        ydk::YLeaf disabled; //type: boolean
        ydk::YLeaf peer_ipv4_address; //type: string
        ydk::YLeaf peer_ipv6_address; //type: string
        ydk::YLeaf peer_status; //type: SergPeerStatus
        ydk::YLeaf preferred_role; //type: SergShowRole
        ydk::YLeaf slave_mode; //type: SergShowSlaveMode
        ydk::YLeaf object_tracking_status; //type: boolean
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf pending_add_session_count; //type: uint32

}; // SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary

class SergShowMem : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf chunk;
        static const ydk::Enum::YLeaf edm;
        static const ydk::Enum::YLeaf string;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf unknown;

};

class SergShowRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class SergShowComp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf serga;
        static const ydk::Enum::YLeaf ipv6nd;
        static const ydk::Enum::YLeaf dhcpv6;

};

class SergShowSessionOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf update;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf in_sync;

};

class SergShowSoReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf admin;
        static const ydk::Enum::YLeaf peer_up;
        static const ydk::Enum::YLeaf peer_down;
        static const ydk::Enum::YLeaf object_tracking_status_change;
        static const ydk::Enum::YLeaf serg_show_so_reason_max;

};

class SergShowSlaveMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf warm;
        static const ydk::Enum::YLeaf hot;

};

class SergShowImRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class SergPeerStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_configured;
        static const ydk::Enum::YLeaf initialize;
        static const ydk::Enum::YLeaf retry;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf registration;
        static const ydk::Enum::YLeaf cleanup;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf established;

};

class SergShowSessionError : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hard;
        static const ydk::Enum::YLeaf soft;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SERG_OPER_ */

