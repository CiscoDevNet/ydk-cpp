#ifndef _CISCO_IOS_XR_ASR9K_PRM_CFG_
#define _CISCO_IOS_XR_ASR9K_PRM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_prm_cfg {

class HardwareModuleQosMode : public Entity
{
    public:
        HardwareModuleQosMode();
        ~HardwareModuleQosMode();

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

        class Nodes; //type: HardwareModuleQosMode::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleQosMode::Nodes> nodes;
        
}; // HardwareModuleQosMode


class HardwareModuleQosMode::Nodes : public Entity
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

        class Node; //type: HardwareModuleQosMode::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleQosMode::Nodes::Node> > node;
        
}; // HardwareModuleQosMode::Nodes


class HardwareModuleQosMode::Nodes::Node : public Entity
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
        YLeaf child_shaping_disable; //type: empty
        YLeaf lowburst_enable; //type: empty

}; // HardwareModuleQosMode::Nodes::Node

class HardwareModuleTcpMssAdjust : public Entity
{
    public:
        HardwareModuleTcpMssAdjust();
        ~HardwareModuleTcpMssAdjust();

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

        class Nodes; //type: HardwareModuleTcpMssAdjust::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes> nodes;
        
}; // HardwareModuleTcpMssAdjust


class HardwareModuleTcpMssAdjust::Nodes : public Entity
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

        class Node; //type: HardwareModuleTcpMssAdjust::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes::Node> > node;
        
}; // HardwareModuleTcpMssAdjust::Nodes


class HardwareModuleTcpMssAdjust::Nodes::Node : public Entity
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
        class Nps; //type: HardwareModuleTcpMssAdjust::Nodes::Node::Nps

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes::Node::Nps> nps;
        
}; // HardwareModuleTcpMssAdjust::Nodes::Node


class HardwareModuleTcpMssAdjust::Nodes::Node::Nps : public Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Np; //type: HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np> > np;
        
}; // HardwareModuleTcpMssAdjust::Nodes::Node::Nps


class HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np : public Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf np_id; //type: uint32
        YLeaf adjust_value; //type: uint32

}; // HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np

class HardwareModuleLoadBalance : public Entity
{
    public:
        HardwareModuleLoadBalance();
        ~HardwareModuleLoadBalance();

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

        class Bundle; //type: HardwareModuleLoadBalance::Bundle

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleLoadBalance::Bundle> bundle;
        
}; // HardwareModuleLoadBalance


class HardwareModuleLoadBalance::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Service; //type: HardwareModuleLoadBalance::Bundle::L2Service

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleLoadBalance::Bundle::L2Service> l2_service;
        
}; // HardwareModuleLoadBalance::Bundle


class HardwareModuleLoadBalance::Bundle::L2Service : public Entity
{
    public:
        L2Service();
        ~L2Service();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l3_parameters; //type: empty

}; // HardwareModuleLoadBalance::Bundle::L2Service

class HardwareModuleTcam : public Entity
{
    public:
        HardwareModuleTcam();
        ~HardwareModuleTcam();

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

        YLeaf global_profile; //type: PrmTcamProfileEnum
        class Nodes; //type: HardwareModuleTcam::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcam::Nodes> nodes;
        
}; // HardwareModuleTcam


class HardwareModuleTcam::Nodes : public Entity
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

        class Node; //type: HardwareModuleTcam::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcam::Nodes::Node> > node;
        
}; // HardwareModuleTcam::Nodes


class HardwareModuleTcam::Nodes::Node : public Entity
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
        YLeaf profile; //type: PrmTcamProfileEnum

}; // HardwareModuleTcam::Nodes::Node

class HardwareModuleEfd : public Entity
{
    public:
        HardwareModuleEfd();
        ~HardwareModuleEfd();

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

        class NodeAll; //type: HardwareModuleEfd::NodeAll
        class Nodes; //type: HardwareModuleEfd::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll> node_all;
        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes> nodes;
        
}; // HardwareModuleEfd


class HardwareModuleEfd::NodeAll : public Entity
{
    public:
        NodeAll();
        ~NodeAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf mode; //type: Asr9KEfdModeEnum
        class IpPrecedence; //type: HardwareModuleEfd::NodeAll::IpPrecedence
        class VlanCos; //type: HardwareModuleEfd::NodeAll::VlanCos
        class MplsExp; //type: HardwareModuleEfd::NodeAll::MplsExp

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::IpPrecedence> ip_precedence; // presence node
        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::MplsExp> mpls_exp; // presence node
        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::VlanCos> vlan_cos; // presence node
        
}; // HardwareModuleEfd::NodeAll


class HardwareModuleEfd::NodeAll::IpPrecedence : public Entity
{
    public:
        IpPrecedence();
        ~IpPrecedence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf precedence; //type: uint32
        YLeaf operation_; //type: Asr9KEfdOperationEnum

}; // HardwareModuleEfd::NodeAll::IpPrecedence


class HardwareModuleEfd::NodeAll::VlanCos : public Entity
{
    public:
        VlanCos();
        ~VlanCos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cos; //type: uint32
        YLeaf operation_; //type: Asr9KEfdOperationEnum

}; // HardwareModuleEfd::NodeAll::VlanCos


class HardwareModuleEfd::NodeAll::MplsExp : public Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exp; //type: uint32
        YLeaf operation_; //type: Asr9KEfdOperationEnum

}; // HardwareModuleEfd::NodeAll::MplsExp


class HardwareModuleEfd::Nodes : public Entity
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

        class Node; //type: HardwareModuleEfd::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node> > node;
        
}; // HardwareModuleEfd::Nodes


class HardwareModuleEfd::Nodes::Node : public Entity
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
        YLeaf enable; //type: empty
        YLeaf mode; //type: Asr9KEfdModeEnum
        class IpPrecedence; //type: HardwareModuleEfd::Nodes::Node::IpPrecedence
        class VlanCos; //type: HardwareModuleEfd::Nodes::Node::VlanCos
        class MplsExp; //type: HardwareModuleEfd::Nodes::Node::MplsExp

        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::IpPrecedence> ip_precedence; // presence node
        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::MplsExp> mpls_exp; // presence node
        std::shared_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::VlanCos> vlan_cos; // presence node
        
}; // HardwareModuleEfd::Nodes::Node


class HardwareModuleEfd::Nodes::Node::IpPrecedence : public Entity
{
    public:
        IpPrecedence();
        ~IpPrecedence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf precedence; //type: uint32
        YLeaf operation_; //type: Asr9KEfdOperationEnum

}; // HardwareModuleEfd::Nodes::Node::IpPrecedence


class HardwareModuleEfd::Nodes::Node::VlanCos : public Entity
{
    public:
        VlanCos();
        ~VlanCos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cos; //type: uint32
        YLeaf operation_; //type: Asr9KEfdOperationEnum

}; // HardwareModuleEfd::Nodes::Node::VlanCos


class HardwareModuleEfd::Nodes::Node::MplsExp : public Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exp; //type: uint32
        YLeaf operation_; //type: Asr9KEfdOperationEnum

}; // HardwareModuleEfd::Nodes::Node::MplsExp

class Asr9KEfdModeEnum : public Enum
{
    public:
        static const Enum::YLeaf only_outer_encap;
        static const Enum::YLeaf include_inner_encap;

};

class Asr9KEfdOperationEnum : public Enum
{
    public:
        static const Enum::YLeaf less_than;
        static const Enum::YLeaf greater_than_or_equal;

};

class PrmTcamProfileEnum : public Enum
{
    public:
        static const Enum::YLeaf profile0;
        static const Enum::YLeaf profile1;
        static const Enum::YLeaf profile2;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_PRM_CFG_ */

