#ifndef _CISCO_IOS_XR_SUBSCRIBER_SRG_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_SRG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_srg_oper {

class SubscriberRedundancyManager : public ydk::Entity
{
    public:
        SubscriberRedundancyManager();
        ~SubscriberRedundancyManager();

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

        class Groups; //type: SubscriberRedundancyManager::Groups
        class Summary; //type: SubscriberRedundancyManager::Summary
        class Interfaces; //type: SubscriberRedundancyManager::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Interfaces> interfaces;
        
}; // SubscriberRedundancyManager


class SubscriberRedundancyManager::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: SubscriberRedundancyManager::Groups::Group

        ydk::YList group;
        
}; // SubscriberRedundancyManager::Groups


class SubscriberRedundancyManager::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf group; //type: string
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf disabled; //type: boolean
        ydk::YLeaf role; //type: SrgShowImRole
        ydk::YLeaf peer_ipv4_address; //type: string
        ydk::YLeaf peer_ipv6_address; //type: string
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf preferred_role; //type: SrgShowRole
        ydk::YLeaf slave_mode; //type: SrgShowSlaveMode
        ydk::YLeaf object_tracking_status; //type: boolean
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf virtual_mac_address_disable; //type: boolean
        ydk::YLeaf node_name; //type: string

}; // SubscriberRedundancyManager::Groups::Group


class SubscriberRedundancyManager::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disabled; //type: boolean
        ydk::YLeaf active_state; //type: boolean
        ydk::YLeaf preferred_role; //type: SrgShowRole
        ydk::YLeaf slave_mode; //type: SrgShowSlaveMode
        ydk::YLeaf hold_timer; //type: uint32
        ydk::YLeaf sync_time; //type: uint32
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

}; // SubscriberRedundancyManager::Summary


class SubscriberRedundancyManager::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: SubscriberRedundancyManager::Interfaces::Interface

        ydk::YList interface;
        
}; // SubscriberRedundancyManager::Interfaces


class SubscriberRedundancyManager::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_mapping_id; //type: uint32
        ydk::YLeaf forward_referenced; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf role; //type: SrgShowImRole

}; // SubscriberRedundancyManager::Interfaces::Interface

class SubscriberRedundancyAgent : public ydk::Entity
{
    public:
        SubscriberRedundancyAgent();
        ~SubscriberRedundancyAgent();

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

        class Nodes; //type: SubscriberRedundancyAgent::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes> nodes;
        
}; // SubscriberRedundancyAgent


class SubscriberRedundancyAgent::Nodes : public ydk::Entity
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

        class Node; //type: SubscriberRedundancyAgent::Nodes::Node

        ydk::YList node;
        
}; // SubscriberRedundancyAgent::Nodes


class SubscriberRedundancyAgent::Nodes::Node : public ydk::Entity
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
        class GroupIdXr; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr
        class Interfaces; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces
        class GroupSummaries; //type: SubscriberRedundancyAgent::Nodes::Node::GroupSummaries
        class GroupIds; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIdXr> group_id_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupSummaries> group_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIds> group_ids;
        
}; // SubscriberRedundancyAgent::Nodes::Node


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr : public ydk::Entity
{
    public:
        GroupIdXr();
        ~GroupIdXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupId; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId

        ydk::YList group_id;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId : public ydk::Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: string
        ydk::YLeaf group_id_xr; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf outer_vlan; //type: uint32
        ydk::YLeaf inner_vlan; //type: uint32
        ydk::YLeaf session_mac_address; //type: string
        ydk::YLeaf pppoe_session_id; //type: uint16
        ydk::YLeaf l2tp_tunnel_id; //type: uint32
        ydk::YLeaf role_master; //type: boolean
        ydk::YLeaf valid_mac_address; //type: boolean
        ydk::YLeaf negative_acknowledgement_update_all; //type: boolean
        class SessionDetailedInformation; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation
        class SessionSyncErrorInformation; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation

        ydk::YList session_detailed_information;
        ydk::YList session_sync_error_information;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation : public ydk::Entity
{
    public:
        SessionDetailedInformation();
        ~SessionDetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component; //type: SrgShowComp
        ydk::YLeaf operation_; //type: SrgShowSessionOperation
        ydk::YLeaf tx_list_queue_fail; //type: boolean
        ydk::YLeaf marked_for_sweeping; //type: boolean
        ydk::YLeaf marked_for_cleanup; //type: boolean

}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation : public ydk::Entity
{
    public:
        SessionSyncErrorInformation();
        ~SessionSyncErrorInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_error_count; //type: uint16
        ydk::YLeaf last_error_code; //type: uint32
        ydk::YLeaf last_error_type; //type: SrgShowSessionError

}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation


class SubscriberRedundancyAgent::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_synchronization_id; //type: uint32
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf role; //type: SrgShowImRole
        ydk::YLeaf forward_referenced; //type: boolean
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interface_enable_error_count; //type: uint32
        ydk::YLeaf interface_disable_error_count; //type: uint32
        ydk::YLeaf interface_caps_add_error_count; //type: uint32
        ydk::YLeaf interface_caps_remove_error_count; //type: uint32
        ydk::YLeaf interface_attribute_update_error_count; //type: uint32
        class InterfaceOper; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper
        class InterfaceStatus; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus
        class ClientStatus; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper> interface_oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus> interface_status;
        ydk::YList client_status;
        
}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper : public ydk::Entity
{
    public:
        InterfaceOper();
        ~InterfaceOper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus : public ydk::Entity
{
    public:
        InterfaceStatus();
        ~InterfaceStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus : public ydk::Entity
{
    public:
        ClientStatus();
        ~ClientStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf component; //type: SrgShowComp
        ydk::YLeaf srg_show_idb_client_eoms_pending; //type: boolean
        ydk::YLeaf srg_show_idb_client_sync_eod_pending; //type: boolean
        ydk::YLeaf session_count; //type: uint32

}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus


class SubscriberRedundancyAgent::Nodes::Node::GroupSummaries : public ydk::Entity
{
    public:
        GroupSummaries();
        ~GroupSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupSummary; //type: SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary

        ydk::YList group_summary;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupSummaries


class SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary : public ydk::Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: string
        ydk::YLeaf group_id_xr; //type: uint32
        ydk::YLeaf role; //type: SrgShowImRole
        ydk::YLeaf disabled; //type: boolean
        ydk::YLeaf peer_ipv4_address; //type: string
        ydk::YLeaf peer_ipv6_address; //type: string
        ydk::YLeaf peer_status; //type: SrgPeerStatus
        ydk::YLeaf preferred_role; //type: SrgShowRole
        ydk::YLeaf slave_mode; //type: SrgShowSlaveMode
        ydk::YLeaf object_tracking_status; //type: boolean
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf pending_add_session_count; //type: uint32

}; // SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary


class SubscriberRedundancyAgent::Nodes::Node::GroupIds : public ydk::Entity
{
    public:
        GroupIds();
        ~GroupIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupId; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId

        ydk::YList group_id;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIds


class SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId : public ydk::Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        ydk::YLeaf init_role; //type: SrgShowRole
        ydk::YLeaf negotiating_role; //type: SrgShowRole
        ydk::YLeaf current_role; //type: SrgShowRole
        ydk::YLeaf slave_mode; //type: SrgShowSlaveMode
        ydk::YLeaf hold_timer; //type: uint32
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf virtual_mac_address_disable; //type: boolean
        ydk::YLeaf l2tp_source_ip; //type: string
        ydk::YLeaf core_tracking_object_name; //type: string
        ydk::YLeaf core_tracking_object_status; //type: boolean
        ydk::YLeaf access_tracking_object_name; //type: string
        ydk::YLeaf access_tracking_object_status; //type: boolean
        ydk::YLeaf object_tracking_status; //type: boolean
        ydk::YLeaf peer_ipv4_address; //type: string
        ydk::YLeaf peer_ipv6_address; //type: string
        ydk::YLeaf peer_status; //type: SrgPeerStatus
        ydk::YLeaf peer_last_negotiation_time_epoch; //type: uint64
        ydk::YLeaf peer_last_up_time_epoch; //type: uint64
        ydk::YLeaf peer_last_down_time_epoch; //type: uint64
        ydk::YLeaf peer_init_role; //type: SrgShowRole
        ydk::YLeaf peer_negotiating_role; //type: SrgShowRole
        ydk::YLeaf peer_current_role; //type: SrgShowRole
        ydk::YLeaf peer_object_tracking_status; //type: boolean
        ydk::YLeaf last_switchover_time_epoch; //type: uint64
        ydk::YLeaf switchover_count; //type: uint32
        ydk::YLeaf last_switchover_reason; //type: SrgShowSoReason
        ydk::YLeaf switchover_hold_time; //type: uint32
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf slave_update_failure_count; //type: uint32
        ydk::YLeaf tunnel_count; //type: uint32
        ydk::YLeaf pending_session_update_count; //type: uint32
        ydk::YLeaf pending_session_delete_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf revertive_timer; //type: uint32
        ydk::YLeaf switchover_revert_time; //type: uint32
        class Interface; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface

        ydk::YList interface;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId


class SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface : public ydk::Entity
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
        ydk::YLeaf interface_synchronization_id; //type: uint32
        ydk::YLeaf forward_referenced; //type: boolean
        ydk::YLeaf session_count; //type: uint32

}; // SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface

class SrgShowImRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class SrgShowSessionError : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hard;
        static const ydk::Enum::YLeaf soft;

};

class SrgShowSoReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf admin;
        static const ydk::Enum::YLeaf peer_up;
        static const ydk::Enum::YLeaf peer_down;
        static const ydk::Enum::YLeaf object_tracking_status_change;
        static const ydk::Enum::YLeaf srg_show_so_reason_max;

};

class SrgShowSessionOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf update;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf in_sync;

};

class SrgPeerStatus : public ydk::Enum
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

class SrgShowRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class SrgShowSlaveMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf warm;
        static const ydk::Enum::YLeaf hot;

};

class SrgShowComp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srga;
        static const ydk::Enum::YLeaf dhcpv4;
        static const ydk::Enum::YLeaf dhcpv6;
        static const ydk::Enum::YLeaf pppoe;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf iedge;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_SRG_OPER_ */

