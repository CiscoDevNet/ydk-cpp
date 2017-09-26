#ifndef _CISCO_IOS_XR_PPP_EA_OPER_
#define _CISCO_IOS_XR_PPP_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ppp_ea_oper {

class Pppea : public ydk::Entity
{
    public:
        Pppea();
        ~Pppea();

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

        class Nodes; //type: Pppea::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes> nodes;
        
}; // Pppea


class Pppea::Nodes : public ydk::Entity
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

        class Node; //type: Pppea::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes::Node> > node;
        
}; // Pppea::Nodes


class Pppea::Nodes::Node : public ydk::Entity
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
        class EaInterfaceNames; //type: Pppea::Nodes::Node::EaInterfaceNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes::Node::EaInterfaceNames> ea_interface_names;
        
}; // Pppea::Nodes::Node


class Pppea::Nodes::Node::EaInterfaceNames : public ydk::Entity
{
    public:
        EaInterfaceNames();
        ~EaInterfaceNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EaInterfaceName; //type: Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName> > ea_interface_name;
        
}; // Pppea::Nodes::Node::EaInterfaceNames


class Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName : public ydk::Entity
{
    public:
        EaInterfaceName();
        ~EaInterfaceName();

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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf is_lcp_running; //type: boolean
        ydk::YLeaf is_ipcp_running; //type: boolean
        ydk::YLeaf is_ipv6cp_running; //type: boolean
        ydk::YLeaf is_mplscp_running; //type: boolean
        ydk::YLeaf local_mtu; //type: uint16
        ydk::YLeaf local_mrru; //type: uint16
        ydk::YLeaf peer_mrru; //type: uint16
        ydk::YLeaf local_magic; //type: uint32
        ydk::YLeaf peer_magic; //type: uint32
        ydk::YLeaf local_mcmp_classes; //type: uint8
        ydk::YLeaf peer_mcmp_classes; //type: uint8
        ydk::YLeaf echo_request_interval; //type: uint32
        ydk::YLeaf echo_request_retry_count; //type: uint32
        ydk::YLeaf is_multilink_bundle; //type: boolean
        ydk::YLeaf synchronized; //type: boolean
        ydk::YLeaf forwarding_enabled; //type: boolean
        ydk::YLeaf multilink_interface; //type: string
        ydk::YLeaf l2_tunnel_enabled; //type: boolean
        ydk::YLeaf l2_provisioned; //type: boolean
        ydk::YLeaf l2ip_interworking_enabled; //type: boolean
        ydk::YLeaf is_vpdn_tunneled; //type: boolean
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf parent_interface_handle; //type: string
        ydk::YLeaf vrf_table_id; //type: uint32
        ydk::YLeaf ipv6vrf_table_id; //type: uint32
        ydk::YLeaf l2_adjacency_state; //type: PppEaAdjState
        ydk::YLeaf l2ip_interworking_adjacency_state; //type: PppEaAdjState
        ydk::YLeaf lac_adjacency_state; //type: PppEaAdjState
        ydk::YLeaf interface_adjacency_state; //type: PppEaAdjState
        ydk::YLeaf ipv4_adjacency_state; //type: PppEaAdjState
        ydk::YLeaf ipv6_adjacency_state; //type: PppEaAdjState
        ydk::YLeaf mpls_adjacency_state; //type: PppEaAdjState

}; // Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName

class PppEaAdjState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_ea_adj_state_not_installed;
        static const ydk::Enum::YLeaf ppp_ea_adj_state_installed;

};


}
}

#endif /* _CISCO_IOS_XR_PPP_EA_OPER_ */

