#ifndef _CISCO_IOS_XR_PPPOE_EA_OPER_
#define _CISCO_IOS_XR_PPPOE_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_pppoe_ea_oper {

class PppoeEa : public Entity
{
    public:
        PppoeEa();
        ~PppoeEa();

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

        class Nodes; //type: PppoeEa::Nodes

        std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes> nodes;
        
}; // PppoeEa


class PppoeEa::Nodes : public Entity
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

        class Node; //type: PppoeEa::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node> > node;
        
}; // PppoeEa::Nodes


class PppoeEa::Nodes::Node : public Entity
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
        class ParentInterfaceIds; //type: PppoeEa::Nodes::Node::ParentInterfaceIds
        class InterfaceIds; //type: PppoeEa::Nodes::Node::InterfaceIds

        std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::InterfaceIds> interface_ids;
        std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::ParentInterfaceIds> parent_interface_ids;
        
}; // PppoeEa::Nodes::Node


class PppoeEa::Nodes::Node::ParentInterfaceIds : public Entity
{
    public:
        ParentInterfaceIds();
        ~ParentInterfaceIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ParentInterfaceId; //type: PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId

        std::vector<std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId> > parent_interface_id;
        
}; // PppoeEa::Nodes::Node::ParentInterfaceIds


class PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId : public Entity
{
    public:
        ParentInterfaceId();
        ~ParentInterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf parent_interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf is_in_sync; //type: boolean
        class SrgvMac; //type: PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac

        std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac> srgv_mac;
        
}; // PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId


class PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac : public Entity
{
    public:
        SrgvMac();
        ~SrgvMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // PppoeEa::Nodes::Node::ParentInterfaceIds::ParentInterfaceId::SrgvMac


class PppoeEa::Nodes::Node::InterfaceIds : public Entity
{
    public:
        InterfaceIds();
        ~InterfaceIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceId; //type: PppoeEa::Nodes::Node::InterfaceIds::InterfaceId

        std::vector<std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::InterfaceIds::InterfaceId> > interface_id;
        
}; // PppoeEa::Nodes::Node::InterfaceIds


class PppoeEa::Nodes::Node::InterfaceIds::InterfaceId : public Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf session_id; //type: uint16
        YLeaf parent_interface; //type: string
        YLeaf is_priority_set; //type: boolean
        YLeaf priority; //type: uint8
        YLeaf is_in_sync; //type: boolean
        YLeaf is_platform_created; //type: boolean
        YLeafList vlanid; //type: list of  uint16
        class PeerMac; //type: PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac
        class LocalMac; //type: PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac
        class SrgvMac; //type: PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac

        std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac> local_mac;
        std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac> peer_mac;
        std::shared_ptr<Cisco_IOS_XR_pppoe_ea_oper::PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac> srgv_mac;
        
}; // PppoeEa::Nodes::Node::InterfaceIds::InterfaceId


class PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac : public Entity
{
    public:
        PeerMac();
        ~PeerMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::PeerMac


class PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac : public Entity
{
    public:
        LocalMac();
        ~LocalMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::LocalMac


class PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac : public Entity
{
    public:
        SrgvMac();
        ~SrgvMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // PppoeEa::Nodes::Node::InterfaceIds::InterfaceId::SrgvMac


}
}

#endif /* _CISCO_IOS_XR_PPPOE_EA_OPER_ */

