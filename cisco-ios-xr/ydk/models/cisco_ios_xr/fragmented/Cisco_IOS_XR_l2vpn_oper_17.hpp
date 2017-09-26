#ifndef _CISCO_IOS_XR_L2VPN_OPER_17_
#define _CISCO_IOS_XR_L2VPN_OPER_17_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_12.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_16.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo : public ydk::Entity
{
    public:
        IccpGroupInfo();
        ~IccpGroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf local_node_id; //type: uint8
        ydk::YLeaf remote_node_id; //type: uint8
        ydk::YLeaf state; //type: IccpSmState
        ydk::YLeaf iccp_transport_up; //type: boolean
        ydk::YLeaf iccp_member_up; //type: boolean
        class Ports; //type: L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports> > ports;
        
}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

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
        ydk::YLeaf mac_flush_tcn; //type: boolean
        class LocalPort; //type: L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort
        class RemotePort; //type: L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort> local_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort> remote_port;
        
}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort : public ydk::Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts : public ydk::Entity
{
    public:
        IccpPorts();
        ~IccpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpPort; //type: L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort> > iccp_port;
        
}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort : public ydk::Entity
{
    public:
        IccpPort();
        ~IccpPort();

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
        ydk::YLeaf mac_flush_tcn; //type: boolean
        class LocalPort; //type: L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort
        class RemotePort; //type: L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort> local_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort> remote_port;
        
}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort : public ydk::Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort


class L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort


class L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary : public ydk::Entity
{
    public:
        IccpSmSummary();
        ~IccpSmSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groups; //type: uint32
        ydk::YLeaf unresolved_groups; //type: uint32
        ydk::YLeaf provisioned_groups; //type: uint32
        ydk::YLeaf connecting_groups; //type: uint32
        ydk::YLeaf connected_groups; //type: uint32
        ydk::YLeaf synchronizing_groups; //type: uint32
        ydk::YLeaf synchronized_groups; //type: uint32
        ydk::YLeaf ports; //type: uint32
        ydk::YLeaf operational_ports; //type: uint32
        ydk::YLeaf failed_ports; //type: uint32
        ydk::YLeaf unknown_ports; //type: uint32
        ydk::YLeaf unconfigured_ports; //type: uint32
        ydk::YLeaf unsynchronized_ports; //type: uint32
        ydk::YLeaf reverting_ports; //type: uint32

}; // L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary


class L2Vpnv2::Nodes::Node::Indexes : public ydk::Entity
{
    public:
        Indexes();
        ~Indexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Index_; //type: L2Vpnv2::Nodes::Node::Indexes::Index_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Indexes::Index_> > index_;
        
}; // L2Vpnv2::Nodes::Node::Indexes


class L2Vpnv2::Nodes::Node::Indexes::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_id; //type: string
        ydk::YLeaf pool_id_xr; //type: uint32
        ydk::YLeaf application_type; //type: L2vpnIdMgrApp
        ydk::YLeaf allocated_ids; //type: uint32
        ydk::YLeaf zombied_ids; //type: uint32
        ydk::YLeaf pool_size; //type: uint32
        ydk::YLeaf max_num_id_mgr; //type: uint32
        ydk::YLeaf num_id_mgr_in_use; //type: uint32

}; // L2Vpnv2::Nodes::Node::Indexes::Index_


class L2Vpnv2::Nodes::Node::L2VpnCollaborators : public ydk::Entity
{
    public:
        L2VpnCollaborators();
        ~L2VpnCollaborators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CollaboratorStatistics; //type: L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics> collaborator_statistics;
        
}; // L2Vpnv2::Nodes::Node::L2VpnCollaborators


class L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics : public ydk::Entity
{
    public:
        CollaboratorStatistics();
        ~CollaboratorStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Count; //type: L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count> > count;
        
}; // L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics


class L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count : public ydk::Entity
{
    public:
        Count();
        ~Count();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf collaborator_name; //type: string
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf is_up; //type: boolean

}; // L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count


class L2Vpnv2::Nodes::Node::L2VpnPbbBsa : public ydk::Entity
{
    public:
        L2VpnPbbBsa();
        ~L2VpnPbbBsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf provisioned; //type: boolean
        ydk::YLeaf chassis_is_provisioned; //type: boolean
        ydk::YLeaf bmac_sa; //type: string
        ydk::YLeaf chassis_mac; //type: string

}; // L2Vpnv2::Nodes::Node::L2VpnPbbBsa


class L2Vpnv2::Nodes::Node::L2VpnResourceState : public ydk::Entity
{
    public:
        L2VpnResourceState();
        ~L2VpnResourceState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf resource_out_of_memory_state; //type: uint32

}; // L2Vpnv2::Nodes::Node::L2VpnResourceState


class L2Vpnv2::Nodes::Node::MainInterfaces : public ydk::Entity
{
    public:
        MainInterfaces();
        ~MainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MainInterface; //type: L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface> > main_interface;
        
}; // L2Vpnv2::Nodes::Node::MainInterfaces


class L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface : public ydk::Entity
{
    public:
        MainInterface();
        ~MainInterface();

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
        class MainInterfaceInstances; //type: L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances
        class MainInterfaceInfo; //type: L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo> main_interface_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances> main_interface_instances;
        
}; // L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface


class L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo : public ydk::Entity
{
    public:
        MainInterfaceInfo();
        ~MainInterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface_handle; //type: string
        ydk::YLeaf protected_; //type: L2vpnMainIfProtectected
        ydk::YLeaf interface_count; //type: uint32

}; // L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo


class L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances : public ydk::Entity
{
    public:
        MainInterfaceInstances();
        ~MainInterfaceInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MainInterfaceInstance; //type: L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance> > main_interface_instance;
        
}; // L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances


class L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance : public ydk::Entity
{
    public:
        MainInterfaceInstance();
        ~MainInterfaceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: int32
        class MainInterfaceInstanceInfo; //type: L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo
        class MainInterfaceInstanceBridgePorts; //type: L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts> main_interface_instance_bridge_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo> main_interface_instance_info;
        
}; // L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance


class L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts : public ydk::Entity
{
    public:
        MainInterfaceInstanceBridgePorts();
        ~MainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MainInterfaceInstanceBridgePort; //type: L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort> > main_interface_instance_bridge_port;
        
}; // L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts


class L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort : public ydk::Entity
{
    public:
        MainInterfaceInstanceBridgePort();
        ~MainInterfaceInstanceBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_port; //type: string
        ydk::YLeaf bridge_port_xr; //type: string
        ydk::YLeaf instance_id; //type: uint32

}; // L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort


class L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo : public ydk::Entity
{
    public:
        MainInterfaceInstanceInfo();
        ~MainInterfaceInstanceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_instance; //type: uint32
        ydk::YLeaf flush_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf instance_flags; //type: uint32
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: L2vpnMainIfInstanceState

}; // L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo


class L2Vpnv2::Nodes::Node::MstpPorts : public ydk::Entity
{
    public:
        MstpPorts();
        ~MstpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MstpPort; //type: L2Vpnv2::Nodes::Node::MstpPorts::MstpPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MstpPorts::MstpPort> > mstp_port;
        
}; // L2Vpnv2::Nodes::Node::MstpPorts


class L2Vpnv2::Nodes::Node::MstpPorts::MstpPort : public ydk::Entity
{
    public:
        MstpPort();
        ~MstpPort();

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
        ydk::YLeaf mstp_interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protected_; //type: boolean
        ydk::YLeaf reference_count; //type: uint32
        class MstiEntry; //type: L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry> > msti_entry;
        
}; // L2Vpnv2::Nodes::Node::MstpPorts::MstpPort


class L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry : public ydk::Entity
{
    public:
        MstiEntry();
        ~MstiEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cfg_ms_ti; //type: uint32
        ydk::YLeaf rcv_count; //type: uint32
        ydk::YLeaf ack_count; //type: uint32
        ydk::YLeaf nack_count; //type: uint32
        ydk::YLeaf flush_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf bd_count; //type: uint32
        ydk::YLeaf msti_flags; //type: uint32
        ydk::YLeaf msti_state; //type: L2vpnMstiState
        class BdEntry; //type: L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry> > bd_entry;
        
}; // L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry


class L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry : public ydk::Entity
{
    public:
        BdEntry();
        ~BdEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bdid; //type: uint32
        ydk::YLeaf bdif_count; //type: uint32

}; // L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry


class L2Vpnv2::Nodes::Node::MstpVlans : public ydk::Entity
{
    public:
        MstpVlans();
        ~MstpVlans();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MstpVlan; //type: L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan> > mstp_vlan;
        
}; // L2Vpnv2::Nodes::Node::MstpVlans


class L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan : public ydk::Entity
{
    public:
        MstpVlan();
        ~MstpVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint32
        ydk::YLeaf vlan_id_xr; //type: uint32
        ydk::YLeaf msti_id; //type: uint32
        ydk::YLeaf port_count; //type: uint32
        class SubInterface; //type: L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface> > sub_interface;
        
}; // L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan


class L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface : public ydk::Entity
{
    public:
        SubInterface();
        ~SubInterface();

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

}; // L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface


class L2Vpnv2::Nodes::Node::Mvrp : public ydk::Entity
{
    public:
        Mvrp();
        ~Mvrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MvrpMainPorts; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts> mvrp_main_ports;
        
}; // L2Vpnv2::Nodes::Node::Mvrp


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts : public ydk::Entity
{
    public:
        MvrpMainPorts();
        ~MvrpMainPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MvrpMainPort; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort> > mvrp_main_port;
        
}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort : public ydk::Entity
{
    public:
        MvrpMainPort();
        ~MvrpMainPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_port_interface_name; //type: string
        class MvrpMainPortInfo; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo
        class MvrpBridgePorts; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts> mvrp_bridge_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo> mvrp_main_port_info;
        
}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts : public ydk::Entity
{
    public:
        MvrpBridgePorts();
        ~MvrpBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MvrpBridgePort; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort> > mvrp_bridge_port;
        
}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort : public ydk::Entity
{
    public:
        MvrpBridgePort();
        ~MvrpBridgePort();

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
        ydk::YLeaf bridge_port_interface_name; //type: string
        ydk::YLeaf bridge_port_xconnect_id; //type: uint32
        ydk::YLeaf mvrp_sequence_number; //type: uint16
        class VlanRange; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo : public ydk::Entity
{
    public:
        MvrpMainPortInfo();
        ~MvrpMainPortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_port_interface_name; //type: string
        ydk::YLeaf is_trunk; //type: boolean
        ydk::YLeaf is_default_encap; //type: boolean
        ydk::YLeaf number_of_bridge_ports; //type: uint32
        class DefaultBridgePort; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort> default_bridge_port;
        
}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort : public ydk::Entity
{
    public:
        DefaultBridgePort();
        ~DefaultBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_port_interface_name; //type: string
        ydk::YLeaf bridge_port_xconnect_id; //type: uint32
        ydk::YLeaf mvrp_sequence_number; //type: uint16
        class VlanRange; //type: L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort


class L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange


class L2Vpnv2::Nodes::Node::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_role; //type: uint8
        ydk::YLeaf process_state; //type: uint8
        ydk::YLeaf sync_flags; //type: uint32
        ydk::YLeaf sw_install_in_progress; //type: boolean
        class FailoverStatus; //type: L2Vpnv2::Nodes::Node::Nsr::FailoverStatus
        class NsrStatus; //type: L2Vpnv2::Nodes::Node::Nsr::NsrStatus
        class IssuStatus; //type: L2Vpnv2::Nodes::Node::Nsr::IssuStatus
        class StateTransitionTime; //type: L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime
        class XidInfo; //type: L2Vpnv2::Nodes::Node::Nsr::XidInfo
        class ReportCard; //type: L2Vpnv2::Nodes::Node::Nsr::ReportCard
        class EventHistory; //type: L2Vpnv2::Nodes::Node::Nsr::EventHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::EventHistory> > event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::FailoverStatus> failover_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::IssuStatus> issu_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::NsrStatus> nsr_status;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::ReportCard> > report_card;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime> > state_transition_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::XidInfo> > xid_info;
        
}; // L2Vpnv2::Nodes::Node::Nsr


class L2Vpnv2::Nodes::Node::Nsr::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_state; //type: uint8
        ydk::YLeaf new_state; //type: uint8
        ydk::YLeaf process_event; //type: uint16
        ydk::YLeaf process_collaborator; //type: uint16
        ydk::YLeaf event_timestamp; //type: uint32

}; // L2Vpnv2::Nodes::Node::Nsr::EventHistory


class L2Vpnv2::Nodes::Node::Nsr::FailoverStatus : public ydk::Entity
{
    public:
        FailoverStatus();
        ~FailoverStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf triggered_time; //type: uint32
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf master_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::Nsr::FailoverStatus


class L2Vpnv2::Nodes::Node::Nsr::IssuStatus : public ydk::Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: L2vpnProcRole
        class IdtStatus; //type: L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpnv2::Nodes::Node::Nsr::IssuStatus


class L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus


class L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus : public ydk::Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus


class L2Vpnv2::Nodes::Node::Nsr::NsrStatus : public ydk::Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: L2vpnProcRole
        class IdtStatus; //type: L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpnv2::Nodes::Node::Nsr::NsrStatus


class L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus


class L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus : public ydk::Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus


class L2Vpnv2::Nodes::Node::Nsr::ReportCard : public ydk::Entity
{
    public:
        ReportCard();
        ~ReportCard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf collaborator_is_connected; //type: boolean
        ydk::YLeaf connection_change_time; //type: uint32
        ydk::YLeaf collaborator_idt_done; //type: boolean
        ydk::YLeaf idt_time; //type: uint32
        ydk::YLeaf collaborator_skipped; //type: boolean

}; // L2Vpnv2::Nodes::Node::Nsr::ReportCard


class L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime : public ydk::Entity
{
    public:
        StateTransitionTime();
        ~StateTransitionTime();

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

}; // L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime


class L2Vpnv2::Nodes::Node::Nsr::XidInfo : public ydk::Entity
{
    public:
        XidInfo();
        ~XidInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_type; //type: L2vpnIdMgrApp
        ydk::YLeaf sent_ids; //type: uint32

}; // L2Vpnv2::Nodes::Node::Nsr::XidInfo


class L2Vpnv2::Nodes::Node::PreferredPaths : public ydk::Entity
{
    public:
        PreferredPaths();
        ~PreferredPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PreferredPath; //type: L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath> > preferred_path;
        
}; // L2Vpnv2::Nodes::Node::PreferredPaths


class L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preferred_type; //type: PreferredPathOption
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf type; //type: L2vpnPreferred
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf total_bandwidth; //type: uint32
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint32
        class VirtualCircuit; //type: L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit> > virtual_circuit;
        
}; // L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath


class L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit : public ydk::Entity
{
    public:
        VirtualCircuit();
        ~VirtualCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf pwid_type; //type: L2vpnPwId
        ydk::YLeaf pwid; //type: uint64
        ydk::YLeaf fe_ctype; //type: L2vpnPwFec

}; // L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit


class L2Vpnv2::Nodes::Node::ProcFsm : public ydk::Entity
{
    public:
        ProcFsm();
        ~ProcFsm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_role; //type: uint8
        ydk::YLeaf process_state; //type: uint8
        ydk::YLeaf sync_flags; //type: uint32
        ydk::YLeaf sw_install_in_progress; //type: boolean
        class FailoverStatus; //type: L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus
        class NsrStatus; //type: L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus
        class IssuStatus; //type: L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus
        class StateTransitionTime; //type: L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime
        class XidInfo; //type: L2Vpnv2::Nodes::Node::ProcFsm::XidInfo
        class ReportCard; //type: L2Vpnv2::Nodes::Node::ProcFsm::ReportCard
        class EventHistory; //type: L2Vpnv2::Nodes::Node::ProcFsm::EventHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::EventHistory> > event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus> failover_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus> issu_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus> nsr_status;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::ReportCard> > report_card;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime> > state_transition_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::XidInfo> > xid_info;
        
}; // L2Vpnv2::Nodes::Node::ProcFsm


class L2Vpnv2::Nodes::Node::ProcFsm::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_state; //type: uint8
        ydk::YLeaf new_state; //type: uint8
        ydk::YLeaf process_event; //type: uint16
        ydk::YLeaf process_collaborator; //type: uint16
        ydk::YLeaf event_timestamp; //type: uint32

}; // L2Vpnv2::Nodes::Node::ProcFsm::EventHistory


class L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus : public ydk::Entity
{
    public:
        FailoverStatus();
        ~FailoverStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf triggered_time; //type: uint32
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf master_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus


class L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus : public ydk::Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: L2vpnProcRole
        class IdtStatus; //type: L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus


class L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus


class L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus : public ydk::Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus


class L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus : public ydk::Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: L2vpnProcRole
        class IdtStatus; //type: L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus


class L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus


class L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus : public ydk::Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus


class L2Vpnv2::Nodes::Node::ProcFsm::ReportCard : public ydk::Entity
{
    public:
        ReportCard();
        ~ReportCard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf collaborator_is_connected; //type: boolean
        ydk::YLeaf connection_change_time; //type: uint32
        ydk::YLeaf collaborator_idt_done; //type: boolean
        ydk::YLeaf idt_time; //type: uint32
        ydk::YLeaf collaborator_skipped; //type: boolean

}; // L2Vpnv2::Nodes::Node::ProcFsm::ReportCard


class L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime : public ydk::Entity
{
    public:
        StateTransitionTime();
        ~StateTransitionTime();

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

}; // L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime


class L2Vpnv2::Nodes::Node::ProcFsm::XidInfo : public ydk::Entity
{
    public:
        XidInfo();
        ~XidInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_type; //type: L2vpnIdMgrApp
        ydk::YLeaf sent_ids; //type: uint32

}; // L2Vpnv2::Nodes::Node::ProcFsm::XidInfo


class L2Vpnv2::Nodes::Node::PseudowireClasses : public ydk::Entity
{
    public:
        PseudowireClasses();
        ~PseudowireClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudowireClass; //type: L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass> > pseudowire_class;
        
}; // L2Vpnv2::Nodes::Node::PseudowireClasses


class L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass : public ydk::Entity
{
    public:
        PseudowireClass();
        ~PseudowireClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_class_name; //type: string
        ydk::YLeaf pw_class_name; //type: string
        ydk::YLeaf control_word; //type: L2vpnPwClassControlWord
        ydk::YLeaf transport_mode; //type: L2vpnTransportMode
        ydk::YLeaf sequencing_type; //type: L2vpnPwSequence
        ydk::YLeaf resync_enabled; //type: boolean
        ydk::YLeaf resync_threshold; //type: uint32
        ydk::YLeaf protocol; //type: L2vpnSignallingProto
        ydk::YLeaf disable_never; //type: boolean
        ydk::YLeaf disable_delay; //type: uint8
        ydk::YLeaf backup_mac_withdraw; //type: boolean
        ydk::YLeaf tag_rewrite; //type: uint16
        ydk::YLeaf preferred_path_disable_fallback; //type: boolean
        ydk::YLeaf load_balance; //type: L2vpnLoadBal
        ydk::YLeaf pw_flow_label_type_cfg; //type: L2vpnPwFlowLabel
        ydk::YLeaf pw_flow_label_code17_disabled; //type: boolean
        ydk::YLeaf is_flow_label_static; //type: boolean
        class EncapsulationInfo; //type: L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo
        class PreferredPath; //type: L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath
        class LocalSourceAddress; //type: L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress> local_source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath> preferred_path;
        
}; // L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass


class L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo : public ydk::Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: L2vpnEncapMethod
        class L2Tpv3; //type: L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3> l2tpv3;
        
}; // L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo


class L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3 : public ydk::Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_class_name; //type: string
        ydk::YLeaf ipv4_source_address; //type: string
        ydk::YLeaf path_mtu_enabled; //type: boolean
        ydk::YLeaf path_mtu_max_value; //type: uint16
        ydk::YLeaf dont_fragment_bit; //type: boolean
        ydk::YLeaf tos_mode; //type: L2vpnTosMode
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf cookie_size; //type: uint8

}; // L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress : public ydk::Entity
{
    public:
        LocalSourceAddress();
        ~LocalSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configuration; //type: L2vpnSrcAddressSet
        ydk::YLeaf address; //type: string

}; // L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress


class L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: L2vpnPrefpathOption
        ydk::YLeaf next_hop_ip; //type: uint32
        ydk::YLeaf te_tunnel_interface_number; //type: uint32
        ydk::YLeaf ip_tunnel_interface_number; //type: uint32
        ydk::YLeaf tp_tunnel_interface_number; //type: uint32
        class SrtePolicy; //type: L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy> srte_policy;
        
}; // L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath


class L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy : public ydk::Entity
{
    public:
        SrtePolicy();
        ~SrtePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string

}; // L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy


class L2Vpnv2::Nodes::Node::Pwr : public ydk::Entity
{
    public:
        Pwr();
        ~Pwr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary; //type: L2Vpnv2::Nodes::Node::Pwr::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary> summary;
        
}; // L2Vpnv2::Nodes::Node::Pwr


class L2Vpnv2::Nodes::Node::Pwr::Summary : public ydk::Entity
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

        ydk::YLeaf bgp_router_id; //type: string
        ydk::YLeaf cfg_router_id; //type: string
        ydk::YLeaf bgp_as; //type: uint32
        ydk::YLeaf cfg_global_id; //type: uint32
        ydk::YLeaf l2vpn_has_bgp_eod; //type: boolean
        class RdAuto; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto
        class RdConfigured; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured> rd_configured;
        
}; // L2Vpnv2::Nodes::Node::Pwr::Summary


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto : public ydk::Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto_; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_
        class TwoByteAs; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs
        class V4Addr; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr> v4_addr;
        
}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured : public ydk::Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto_; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_
        class TwoByteAs; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs
        class V4Addr; //type: L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr> v4_addr;
        
}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs


class L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr


class L2Vpnv2::Nodes::Node::XconnectBrief : public ydk::Entity
{
    public:
        XconnectBrief();
        ~XconnectBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_total_up; //type: uint32
        ydk::YLeaf main_total_down; //type: uint32
        ydk::YLeaf main_total_unresolved; //type: uint32
        ydk::YLeaf undefined_xc; //type: uint32
        ydk::YLeaf memory_state; //type: L2vpnMemoryState
        class EncapsulationReportMatrix; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix
        class EncapsulationTotal; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix> > encapsulation_report_matrix;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal> > encapsulation_total;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix : public ydk::Entity
{
    public:
        EncapsulationReportMatrix();
        ~EncapsulationReportMatrix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ac1; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1> > ac1;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1 : public ydk::Entity
{
    public:
        Ac1();
        ~Ac1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ac2; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2> > ac2;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2 : public ydk::Entity
{
    public:
        Ac2();
        ~Ac2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf psn_type; //type: L2vpnBriefPsn
        ydk::YLeaf ac1_encapsulation; //type: L2vpnAcEncap
        ydk::YLeaf ac2_encapsulation; //type: L2vpnAcEncap
        class UpCount; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount
        class DownCount; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount
        class UnresolvedCount; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount> > down_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount> > unresolved_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount> > up_count;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount : public ydk::Entity
{
    public:
        DownCount();
        ~DownCount();

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

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount : public ydk::Entity
{
    public:
        UnresolvedCount();
        ~UnresolvedCount();

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

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount : public ydk::Entity
{
    public:
        UpCount();
        ~UpCount();

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

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal : public ydk::Entity
{
    public:
        EncapsulationTotal();
        ~EncapsulationTotal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf psn_type; //type: L2vpnBriefPsn
        ydk::YLeaf ac1_encapsulation; //type: L2vpnAcEncap
        ydk::YLeaf ac2_encapsulation; //type: L2vpnAcEncap
        class UpCount; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount
        class DownCount; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount
        class UnresolvedCount; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount> > down_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount> > unresolved_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount> > up_count;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount : public ydk::Entity
{
    public:
        DownCount();
        ~DownCount();

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

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount : public ydk::Entity
{
    public:
        UnresolvedCount();
        ~UnresolvedCount();

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

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount : public ydk::Entity
{
    public:
        UpCount();
        ~UpCount();

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

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount


class L2Vpnv2::Nodes::Node::XconnectGroups : public ydk::Entity
{
    public:
        XconnectGroups();
        ~XconnectGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XconnectGroup; //type: L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup> > xconnect_group;
        
}; // L2Vpnv2::Nodes::Node::XconnectGroups


class L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup : public ydk::Entity
{
    public:
        XconnectGroup();
        ~XconnectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf group_name_xr; //type: string
        ydk::YLeaf number_xconnects; //type: uint32

}; // L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup


class L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces : public ydk::Entity
{
    public:
        XconnectMp2MpCe2Ces();
        ~XconnectMp2MpCe2Ces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XconnectMp2MpCe2Ce; //type: L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce> > xconnect_mp2mp_ce2ce;
        
}; // L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces


class L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce : public ydk::Entity
{
    public:
        XconnectMp2MpCe2Ce();
        ~XconnectMp2MpCe2Ce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf mp2_mp_name; //type: string
        ydk::YLeaf local_ceid; //type: uint32
        ydk::YLeaf remote_ceid; //type: uint32
        ydk::YLeaf local_customer_edge_id; //type: uint16
        ydk::YLeaf remote_customer_edge_id; //type: uint16
        ydk::YLeaf ce_added; //type: boolean

}; // L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce


class L2Vpnv2::Nodes::Node::XconnectMp2Mps : public ydk::Entity
{
    public:
        XconnectMp2Mps();
        ~XconnectMp2Mps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XconnectMp2Mp; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp> > xconnect_mp2mp;
        
}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp : public ydk::Entity
{
    public:
        XconnectMp2Mp();
        ~XconnectMp2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf mp2_mp_name; //type: string
        ydk::YLeaf group_name_xr; //type: string
        ydk::YLeaf mp2mp_name; //type: string
        ydk::YLeaf mp2mpid; //type: uint32
        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf vpn_mtu; //type: uint32
        ydk::YLeaf l2_encapsulation; //type: L2vpnBagAdEncap
        ydk::YLeaf xconnect_shutdown; //type: boolean
        class Discovery; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery> discovery;
        
}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ad_method; //type: uint32
        ydk::YLeaf vpn_added; //type: boolean
        ydk::YLeaf ad_service_connected; //type: boolean
        ydk::YLeaf ad_signalling_method; //type: uint32
        ydk::YLeaf ce_range; //type: uint16
        ydk::YLeaf export_route_policy; //type: string
        ydk::YLeaf number_a_cs_up; //type: uint32
        ydk::YLeaf number_p_ws_up; //type: uint32
        ydk::YLeaf number_ce2ce_advertised; //type: uint32
        ydk::YLeaf number_a_cs; //type: uint32
        ydk::YLeaf number_pseudowires; //type: uint32
        ydk::YLeaf number_ce2c_es; //type: uint32
        class RdValue; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue
        class ImportRt; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt
        class ExportRt; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt> > export_rt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt> > import_rt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue> rd_value;
        
}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt : public ydk::Entity
{
    public:
        ExportRt();
        ~ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt : public ydk::Entity
{
    public:
        ImportRt();
        ~ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue : public ydk::Entity
{
    public:
        RdValue();
        ~RdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto_; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_
        class TwoByteAs; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs
        class V4Addr; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr> v4_addr;
        
}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs


class L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr


class L2Vpnv2::Nodes::Node::XconnectSummary : public ydk::Entity
{
    public:
        XconnectSummary();
        ~XconnectSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_groups; //type: uint32
        ydk::YLeaf number_xconnects; //type: uint32
        ydk::YLeaf number_xconnects_up; //type: uint32
        ydk::YLeaf number_xconnects_down; //type: uint32
        ydk::YLeaf number_xconnects_unresolved; //type: uint32
        ydk::YLeaf number_xconnects_administratively_down; //type: uint32
        ydk::YLeaf number_xconnects_type_attachment_circuit_to_pseudo_wire; //type: uint32
        ydk::YLeaf number_xconnects_type_monitor_session_to_pseudo_wire; //type: uint32
        ydk::YLeaf number_xconnects_locally_switched; //type: uint32
        ydk::YLeaf number_xconnects_with_backup_pw; //type: uint32
        ydk::YLeaf number_xconnects_currently_using_backup; //type: uint32
        ydk::YLeaf down_backup_xconnects; //type: uint32
        ydk::YLeaf admin_down_backup_xconnects; //type: uint32
        ydk::YLeaf unresolved_backup_xconnects; //type: uint32
        ydk::YLeaf standby_backup_xconnects; //type: uint32
        ydk::YLeaf standby_ready_backup_xconnects; //type: uint32
        ydk::YLeaf out_of_memory_state; //type: uint32
        ydk::YLeaf number_xconnects_type_pseudo_wire_to_pseudo_wire; //type: uint32
        ydk::YLeaf number_mp2mp_xconnects; //type: uint32
        ydk::YLeaf number_mp2mp_xconnects_up; //type: uint32
        ydk::YLeaf number_mp2mp_xconnects_down; //type: uint32
        ydk::YLeaf number_mp2mp_xconnects_advertised; //type: uint32
        ydk::YLeaf number_mp2mp_xconnectss_not_advertised; //type: uint32
        ydk::YLeaf number_ce2_ceconnections; //type: uint32
        ydk::YLeaf number_ce2ce_advertized; //type: uint32
        ydk::YLeaf number_ce2ce_not_advertized; //type: uint32
        ydk::YLeaf partially_programmed_xconnects; //type: uint32
        ydk::YLeaf number_xconnects_with_backup_interface; //type: uint32
        ydk::YLeaf number_xconnects_currently_using_backup_interface; //type: uint32
        ydk::YLeaf down_backup_interface_xconnects; //type: uint32
        ydk::YLeaf admin_down_backup_interface_xconnects; //type: uint32
        ydk::YLeaf unresolved_backup_interface_xconnects; //type: uint32
        ydk::YLeaf standby_backup_interface_xconnects; //type: uint32

}; // L2Vpnv2::Nodes::Node::XconnectSummary


class L2Vpnv2::Nodes::Node::Xconnects : public ydk::Entity
{
    public:
        Xconnects();
        ~Xconnects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect> > xconnect;
        
}; // L2Vpnv2::Nodes::Node::Xconnects


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf xconnect_name; //type: string
        ydk::YLeaf group_name_xr; //type: string
        ydk::YLeaf xconnect_name_xr; //type: string
        ydk::YLeaf number_of_backup_p_ws; //type: uint32
        ydk::YLeaf state; //type: L2vpnXcState
        ydk::YLeaf interworking; //type: L2vpnInterworking
        ydk::YLeaf diag_mask; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf is_mp2mp; //type: boolean
        class Backup; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup
        class Segment1; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment1
        class Segment2; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment2
        class Ce2Ce; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Ce2Ce
        class BackupSegment; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup> backup;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment> > backup_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Ce2Ce> ce2ce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment2> segment2;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_type; //type: L2vpnSegment
        class AttachmentCircuit; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit
        class PseudoWire; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit> attachment_circuit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire> pseudo_wire;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit : public ydk::Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: L2vpnSegmentState
        ydk::YLeaf msti; //type: string
        ydk::YLeaf internal_ms_ti; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf ms_ti_mismatch; //type: boolean
        ydk::YLeaf mtu_mismatched; //type: boolean
        ydk::YLeaf tdm_media_mismatched; //type: boolean
        ydk::YLeaf bvi_mac_conflict; //type: boolean
        ydk::YLeaf bvi_no_port_up; //type: boolean
        ydk::YLeaf control_word_mismatched; //type: boolean
        ydk::YLeaf encapsulation_mismatched; //type: boolean
        ydk::YLeaf encapsulation_error; //type: string
        ydk::YLeaf interworking; //type: L2vpnInterworking
        ydk::YLeaf out_of_memory_state; //type: uint32
        ydk::YLeaf msti_mismatch_down; //type: boolean
        ydk::YLeaf mac_limit_oper_down; //type: boolean
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_group_state; //type: L2vpnRgState
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf is_ac_partially_programmed; //type: boolean
        ydk::YLeaf evpn_internal_label; //type: uint32
        class Interface; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface
        class Statistics; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics
        class L2VpnProtection; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface> interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection> l2vpn_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics> statistics;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters> parameters;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface_; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_> > interface;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface_; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_> > interface;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection : public ydk::Entity
{
    public:
        L2VpnProtection();
        ~L2VpnProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection_type; //type: L2vpnProtection
        ydk::YLeaf protection_configured; //type: L2vpnProtectionRole
        ydk::YLeaf protection_name; //type: string
        ydk::YLeaf protected_name; //type: string
        ydk::YLeaf active; //type: boolean

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics : public ydk::Entity
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

        class ImpostionStats; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DispositionStat; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_17_ */

