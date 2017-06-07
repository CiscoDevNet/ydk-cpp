#ifndef _CISCO_IOS_XR_PPP_EA_OPER_
#define _CISCO_IOS_XR_PPP_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ppp_ea_oper {

class Pppea : public Entity
{
    public:
        Pppea();
        ~Pppea();

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

        class Nodes; //type: Pppea::Nodes

        std::shared_ptr<Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes> nodes;
        
}; // Pppea


class Pppea::Nodes : public Entity
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

        class Node; //type: Pppea::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes::Node> > node;
        
}; // Pppea::Nodes


class Pppea::Nodes::Node : public Entity
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
        class EaInterfaceNames; //type: Pppea::Nodes::Node::EaInterfaceNames

        std::shared_ptr<Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes::Node::EaInterfaceNames> ea_interface_names;
        
}; // Pppea::Nodes::Node


class Pppea::Nodes::Node::EaInterfaceNames : public Entity
{
    public:
        EaInterfaceNames();
        ~EaInterfaceNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EaInterfaceName; //type: Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ea_oper::Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName> > ea_interface_name;
        
}; // Pppea::Nodes::Node::EaInterfaceNames


class Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName : public Entity
{
    public:
        EaInterfaceName();
        ~EaInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf is_lcp_running; //type: boolean
        YLeaf is_ipcp_running; //type: boolean
        YLeaf is_ipv6cp_running; //type: boolean
        YLeaf is_mplscp_running; //type: boolean
        YLeaf local_mtu; //type: uint16
        YLeaf local_mrru; //type: uint16
        YLeaf peer_mrru; //type: uint16
        YLeaf local_magic; //type: uint32
        YLeaf peer_magic; //type: uint32
        YLeaf local_mcmp_classes; //type: uint8
        YLeaf peer_mcmp_classes; //type: uint8
        YLeaf echo_request_interval; //type: uint32
        YLeaf echo_request_retry_count; //type: uint32
        YLeaf is_multilink_bundle; //type: boolean
        YLeaf synchronized; //type: boolean
        YLeaf forwarding_enabled; //type: boolean
        YLeaf multilink_interface; //type: string
        YLeaf l2_tunnel_enabled; //type: boolean
        YLeaf l2_provisioned; //type: boolean
        YLeaf l2ip_interworking_enabled; //type: boolean
        YLeaf is_vpdn_tunneled; //type: boolean
        YLeaf xconnect_id; //type: uint32
        YLeaf parent_interface_handle; //type: string
        YLeaf vrf_table_id; //type: uint32
        YLeaf ipv6vrf_table_id; //type: uint32
        YLeaf l2_adjacency_state; //type: PppEaAdjStateEnum
        YLeaf l2ip_interworking_adjacency_state; //type: PppEaAdjStateEnum
        YLeaf lac_adjacency_state; //type: PppEaAdjStateEnum
        YLeaf interface_adjacency_state; //type: PppEaAdjStateEnum
        YLeaf ipv4_adjacency_state; //type: PppEaAdjStateEnum
        YLeaf ipv6_adjacency_state; //type: PppEaAdjStateEnum
        YLeaf mpls_adjacency_state; //type: PppEaAdjStateEnum

}; // Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName

class PppEaAdjStateEnum : public Enum
{
    public:
        static const Enum::YLeaf ppp_ea_adj_state_not_installed;
        static const Enum::YLeaf ppp_ea_adj_state_installed;

};


}
}

#endif /* _CISCO_IOS_XR_PPP_EA_OPER_ */

