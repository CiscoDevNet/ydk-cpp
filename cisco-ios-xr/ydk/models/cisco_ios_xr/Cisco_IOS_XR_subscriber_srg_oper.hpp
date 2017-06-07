#ifndef _CISCO_IOS_XR_SUBSCRIBER_SRG_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_SRG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_subscriber_srg_oper {

class SubscriberRedundancyManager : public Entity
{
    public:
        SubscriberRedundancyManager();
        ~SubscriberRedundancyManager();

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

        class Groups; //type: SubscriberRedundancyManager::Groups
        class Summary; //type: SubscriberRedundancyManager::Summary
        class Interfaces; //type: SubscriberRedundancyManager::Interfaces

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Summary> summary;
        
}; // SubscriberRedundancyManager


class SubscriberRedundancyManager::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: SubscriberRedundancyManager::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Groups::Group> > group;
        
}; // SubscriberRedundancyManager::Groups


class SubscriberRedundancyManager::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: string
        YLeaf group_id; //type: uint32
        YLeaf description; //type: string
        YLeaf disabled; //type: boolean
        YLeaf role; //type: SrgShowImRoleEnum
        YLeaf peer_ipv4_address; //type: string
        YLeaf peer_ipv6_address; //type: string
        YLeaf interface_count; //type: uint32
        YLeaf preferred_role; //type: SrgShowRoleEnum
        YLeaf slave_mode; //type: SrgShowSlaveModeEnum
        YLeaf object_tracking_status; //type: boolean
        YLeaf virtual_mac_address; //type: string
        YLeaf virtual_mac_address_disable; //type: boolean
        YLeaf node_name; //type: string

}; // SubscriberRedundancyManager::Groups::Group


class SubscriberRedundancyManager::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disabled; //type: boolean
        YLeaf active_state; //type: boolean
        YLeaf preferred_role; //type: SrgShowRoleEnum
        YLeaf slave_mode; //type: SrgShowSlaveModeEnum
        YLeaf hold_timer; //type: uint32
        YLeaf source_interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf source_interface_ipv4_address; //type: string
        YLeaf source_interface_ipv6_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf disabled_group_count; //type: uint32
        YLeaf master_group_count; //type: uint32
        YLeaf slave_group_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf master_interface_count; //type: uint32
        YLeaf slave_interface_count; //type: uint32

}; // SubscriberRedundancyManager::Summary


class SubscriberRedundancyManager::Interfaces : public Entity
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

        class Interface; //type: SubscriberRedundancyManager::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyManager::Interfaces::Interface> > interface;
        
}; // SubscriberRedundancyManager::Interfaces


class SubscriberRedundancyManager::Interfaces::Interface : public Entity
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
        YLeaf interface_name; //type: string
        YLeaf interface_mapping_id; //type: uint32
        YLeaf forward_referenced; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf role; //type: SrgShowImRoleEnum

}; // SubscriberRedundancyManager::Interfaces::Interface

class SubscriberRedundancyAgent : public Entity
{
    public:
        SubscriberRedundancyAgent();
        ~SubscriberRedundancyAgent();

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

        class Nodes; //type: SubscriberRedundancyAgent::Nodes

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes> nodes;
        
}; // SubscriberRedundancyAgent


class SubscriberRedundancyAgent::Nodes : public Entity
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

        class Node; //type: SubscriberRedundancyAgent::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node> > node;
        
}; // SubscriberRedundancyAgent::Nodes


class SubscriberRedundancyAgent::Nodes::Node : public Entity
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

        YLeaf node_name; //type: string
        class GroupIdXr; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr
        class Interfaces; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces
        class GroupSummaries; //type: SubscriberRedundancyAgent::Nodes::Node::GroupSummaries
        class GroupIds; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIds

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIdXr> group_id_xr;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIds> group_ids;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupSummaries> group_summaries;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces> interfaces;
        
}; // SubscriberRedundancyAgent::Nodes::Node


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr : public Entity
{
    public:
        GroupIdXr();
        ~GroupIdXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GroupId; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId> > group_id;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId : public Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: string
        YLeaf group_id_xr; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf outer_vlan; //type: uint32
        YLeaf inner_vlan; //type: uint32
        YLeaf session_mac_address; //type: string
        YLeaf pppoe_session_id; //type: uint16
        YLeaf l2tp_tunnel_id; //type: uint32
        YLeaf role_master; //type: boolean
        YLeaf valid_mac_address; //type: boolean
        YLeaf negative_acknowledgement_update_all; //type: boolean
        class SessionDetailedInformation; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation
        class SessionSyncErrorInformation; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation> > session_detailed_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation> > session_sync_error_information;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation : public Entity
{
    public:
        SessionDetailedInformation();
        ~SessionDetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf component; //type: SrgShowCompEnum
        YLeaf operation_; //type: SrgShowSessionOperationEnum
        YLeaf tx_list_queue_fail; //type: boolean
        YLeaf marked_for_sweeping; //type: boolean
        YLeaf marked_for_cleanup; //type: boolean

}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation


class SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation : public Entity
{
    public:
        SessionSyncErrorInformation();
        ~SessionSyncErrorInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_error_count; //type: uint16
        YLeaf last_error_code; //type: uint32
        YLeaf last_error_type; //type: SrgShowSessionErrorEnum

}; // SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation


class SubscriberRedundancyAgent::Nodes::Node::Interfaces : public Entity
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

        class Interface; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface> > interface;
        
}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface : public Entity
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
        YLeaf interface_name; //type: string
        YLeaf interface_synchronization_id; //type: uint32
        YLeaf group_id; //type: uint32
        YLeaf role; //type: SrgShowImRoleEnum
        YLeaf forward_referenced; //type: boolean
        YLeaf session_count; //type: uint32
        YLeaf interface_enable_error_count; //type: uint32
        YLeaf interface_disable_error_count; //type: uint32
        YLeaf interface_caps_add_error_count; //type: uint32
        YLeaf interface_caps_remove_error_count; //type: uint32
        YLeaf interface_attribute_update_error_count; //type: uint32
        class InterfaceOper; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper
        class InterfaceStatus; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus
        class ClientStatus; //type: SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus> > client_status;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper> interface_oper;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus> interface_status;
        
}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper : public Entity
{
    public:
        InterfaceOper();
        ~InterfaceOper();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idb_oper_reg_enable; //type: boolean
        YLeaf idb_oper_reg_disable; //type: boolean
        YLeaf idb_oper_caps_add; //type: boolean
        YLeaf idb_oper_caps_remove; //type: boolean
        YLeaf idb_oper_attr_update; //type: boolean

}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus : public Entity
{
    public:
        InterfaceStatus();
        ~InterfaceStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idb_state_fwd_ref; //type: boolean
        YLeaf idb_state_stale; //type: boolean
        YLeaf idb_state_registered; //type: boolean
        YLeaf idb_state_caps_added; //type: boolean
        YLeaf idb_state_owned_re_source; //type: boolean
        YLeaf idb_client_eoms_pending; //type: boolean
        YLeaf idb_state_p_end_caps_rem; //type: boolean
        YLeaf idb_state_p_end_reg_disable; //type: boolean

}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus


class SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus : public Entity
{
    public:
        ClientStatus();
        ~ClientStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf component; //type: SrgShowCompEnum
        YLeaf srg_show_idb_client_eoms_pending; //type: boolean
        YLeaf srg_show_idb_client_sync_eod_pending; //type: boolean
        YLeaf session_count; //type: uint32

}; // SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus


class SubscriberRedundancyAgent::Nodes::Node::GroupSummaries : public Entity
{
    public:
        GroupSummaries();
        ~GroupSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GroupSummary; //type: SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary> > group_summary;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupSummaries


class SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary : public Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: string
        YLeaf group_id_xr; //type: uint32
        YLeaf role; //type: SrgShowImRoleEnum
        YLeaf disabled; //type: boolean
        YLeaf peer_ipv4_address; //type: string
        YLeaf peer_ipv6_address; //type: string
        YLeaf peer_status; //type: SrgPeerStatusEnum
        YLeaf preferred_role; //type: SrgShowRoleEnum
        YLeaf slave_mode; //type: SrgShowSlaveModeEnum
        YLeaf object_tracking_status; //type: boolean
        YLeaf interface_count; //type: uint32
        YLeaf session_count; //type: uint32
        YLeaf pending_add_session_count; //type: uint32

}; // SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary


class SubscriberRedundancyAgent::Nodes::Node::GroupIds : public Entity
{
    public:
        GroupIds();
        ~GroupIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GroupId; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId> > group_id;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIds


class SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId : public Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: string
        YLeaf group_id_xr; //type: uint32
        YLeaf description; //type: string
        YLeaf disabled; //type: boolean
        YLeaf init_role; //type: SrgShowRoleEnum
        YLeaf negotiating_role; //type: SrgShowRoleEnum
        YLeaf current_role; //type: SrgShowRoleEnum
        YLeaf slave_mode; //type: SrgShowSlaveModeEnum
        YLeaf hold_timer; //type: uint32
        YLeaf virtual_mac_address; //type: string
        YLeaf virtual_mac_address_disable; //type: boolean
        YLeaf l2tp_source_ip; //type: string
        YLeaf core_tracking_object_name; //type: string
        YLeaf core_tracking_object_status; //type: boolean
        YLeaf access_tracking_object_name; //type: string
        YLeaf access_tracking_object_status; //type: boolean
        YLeaf object_tracking_status; //type: boolean
        YLeaf peer_ipv4_address; //type: string
        YLeaf peer_ipv6_address; //type: string
        YLeaf peer_status; //type: SrgPeerStatusEnum
        YLeaf peer_last_negotiation_time; //type: string
        YLeaf peer_last_up_time; //type: string
        YLeaf peer_last_down_time; //type: string
        YLeaf peer_init_role; //type: SrgShowRoleEnum
        YLeaf peer_negotiating_role; //type: SrgShowRoleEnum
        YLeaf peer_current_role; //type: SrgShowRoleEnum
        YLeaf peer_object_tracking_status; //type: boolean
        YLeaf last_switchover_time; //type: string
        YLeaf switchover_count; //type: uint32
        YLeaf last_switchover_reason; //type: SrgShowSoReasonEnum
        YLeaf switchover_hold_time; //type: uint32
        YLeaf session_count; //type: uint32
        YLeaf slave_update_failure_count; //type: uint32
        YLeaf tunnel_count; //type: uint32
        YLeaf pending_session_update_count; //type: uint32
        YLeaf pending_session_delete_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf revertive_timer; //type: uint32
        YLeaf switchover_revert_time; //type: uint32
        class Interface; //type: SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_oper::SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface> > interface;
        
}; // SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId


class SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf interface_synchronization_id; //type: uint32
        YLeaf forward_referenced; //type: boolean
        YLeaf session_count; //type: uint32

}; // SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface

class SrgShowImRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};

class SrgShowSessionErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf hard;
        static const Enum::YLeaf soft;

};

class SrgShowSoReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf admin;
        static const Enum::YLeaf peer_up;
        static const Enum::YLeaf peer_down;
        static const Enum::YLeaf object_tracking_status_change;
        static const Enum::YLeaf srg_show_so_reason_max;

};

class SrgShowSessionOperationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf update;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf in_sync;

};

class SrgPeerStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_configured;
        static const Enum::YLeaf initialize;
        static const Enum::YLeaf retry;
        static const Enum::YLeaf connect;
        static const Enum::YLeaf listen;
        static const Enum::YLeaf registration;
        static const Enum::YLeaf cleanup;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf established;

};

class SrgShowRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};

class SrgShowSlaveModeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf warm;
        static const Enum::YLeaf hot;

};

class SrgShowCompEnum : public Enum
{
    public:
        static const Enum::YLeaf srga;
        static const Enum::YLeaf dhcpv4;
        static const Enum::YLeaf dhcpv6;
        static const Enum::YLeaf pppoe;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf iedge;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_SRG_OPER_ */

