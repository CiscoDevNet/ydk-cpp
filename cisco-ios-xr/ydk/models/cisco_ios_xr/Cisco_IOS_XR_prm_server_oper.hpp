#ifndef _CISCO_IOS_XR_PRM_SERVER_OPER_
#define _CISCO_IOS_XR_PRM_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_prm_server_oper {

class HardwareModule : public ydk::Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

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

        class Nodes; //type: HardwareModule::Nodes

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes> nodes;
        
}; // HardwareModule


class HardwareModule::Nodes : public ydk::Entity
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

        class Node; //type: HardwareModule::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node> > node;
        
}; // HardwareModule::Nodes


class HardwareModule::Nodes::Node : public ydk::Entity
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
        class Np; //type: HardwareModule::Nodes::Node::Np

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np> np;
        
}; // HardwareModule::Nodes::Node


class HardwareModule::Nodes::Node::Np : public ydk::Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpu; //type: HardwareModule::Nodes::Node::Np::Cpu
        class PlatformDrop; //type: HardwareModule::Nodes::Node::Np::PlatformDrop

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::Cpu> cpu;
        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop> platform_drop;
        
}; // HardwareModule::Nodes::Node::Np


class HardwareModule::Nodes::Node::Np::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Indexes; //type: HardwareModule::Nodes::Node::Np::Cpu::Indexes

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::Cpu::Indexes> indexes;
        
}; // HardwareModule::Nodes::Node::Np::Cpu


class HardwareModule::Nodes::Node::Np::Cpu::Indexes : public ydk::Entity
{
    public:
        Indexes();
        ~Indexes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Index_; //type: HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_

        std::vector<std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_> > index_;
        
}; // HardwareModule::Nodes::Node::Np::Cpu::Indexes


class HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        ydk::YLeaf cos_q_name; //type: string
        ydk::YLeaf cos_q; //type: uint8
        ydk::YLeaf rx_channel; //type: uint32
        ydk::YLeaf flow_rate; //type: uint32
        ydk::YLeaf burst; //type: uint32
        ydk::YLeaf accepted; //type: uint64
        ydk::YLeaf dropped; //type: uint64

}; // HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_


class HardwareModule::Nodes::Node::Np::PlatformDrop : public ydk::Entity
{
    public:
        PlatformDrop();
        ~PlatformDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Indxes; //type: HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes
        class Idxes; //type: HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes> idxes;
        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes> indxes;
        
}; // HardwareModule::Nodes::Node::Np::PlatformDrop


class HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes : public ydk::Entity
{
    public:
        Indxes();
        ~Indxes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Indx; //type: HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx

        std::vector<std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx> > indx;
        
}; // HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes


class HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx : public ydk::Entity
{
    public:
        Indx();
        ~Indx();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        ydk::YLeaf total_captured; //type: uint32
        ydk::YLeaf captured_pak; //type: string
        ydk::YLeaf pkt_index; //type: uint8
        ydk::YLeaf ifhandle; //type: uint32
        ydk::YLeaf buffer_len; //type: uint32
        ydk::YLeaf reason_hi; //type: uint32
        ydk::YLeaf reason; //type: uint32
        ydk::YLeaf years; //type: uint64
        ydk::YLeaf hours; //type: uint64
        ydk::YLeaf days; //type: uint64
        ydk::YLeaf mins; //type: uint64
        ydk::YLeaf secs; //type: uint64

}; // HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx


class HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes : public ydk::Entity
{
    public:
        Idxes();
        ~Idxes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Idx; //type: HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx

        std::vector<std::shared_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx> > idx;
        
}; // HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes


class HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx : public ydk::Entity
{
    public:
        Idx();
        ~Idx();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        ydk::YLeaf drop_reason; //type: string
        ydk::YLeaf counters; //type: uint32

}; // HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx

class Prm : public ydk::Entity
{
    public:
        Prm();
        ~Prm();

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

        class Nodes; //type: Prm::Nodes

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes> nodes;
        
}; // Prm


class Prm::Nodes : public ydk::Entity
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

        class Node; //type: Prm::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node> > node;
        
}; // Prm::Nodes


class Prm::Nodes::Node : public ydk::Entity
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
        class Server; //type: Prm::Nodes::Node::Server

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server> server;
        
}; // Prm::Nodes::Node


class Prm::Nodes::Node::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Resource; //type: Prm::Nodes::Node::Server::Resource

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server::Resource> resource;
        
}; // Prm::Nodes::Node::Server


class Prm::Nodes::Node::Server::Resource : public ydk::Entity
{
    public:
        Resource();
        ~Resource();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Indexes; //type: Prm::Nodes::Node::Server::Resource::Indexes

        std::shared_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server::Resource::Indexes> indexes;
        
}; // Prm::Nodes::Node::Server::Resource


class Prm::Nodes::Node::Server::Resource::Indexes : public ydk::Entity
{
    public:
        Indexes();
        ~Indexes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Index_; //type: Prm::Nodes::Node::Server::Resource::Indexes::Index_

        std::vector<std::shared_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server::Resource::Indexes::Index_> > index_;
        
}; // Prm::Nodes::Node::Server::Resource::Indexes


class Prm::Nodes::Node::Server::Resource::Indexes::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        ydk::YLeaf resource_name; //type: string
        ydk::YLeaf resource_type; //type: uint32
        ydk::YLeaf total_num; //type: uint32
        ydk::YLeaf free_num; //type: uint32
        ydk::YLeaf first_available_index; //type: uint32
        ydk::YLeaf start_index; //type: uint32
        ydk::YLeaf availability_status; //type: boolean
        ydk::YLeaf flags; //type: uint8
        ydk::YLeaf inconsistent; //type: boolean

}; // Prm::Nodes::Node::Server::Resource::Indexes::Index_


}
}

#endif /* _CISCO_IOS_XR_PRM_SERVER_OPER_ */

