#ifndef _CISCO_IOS_XR_PROCMEM_OPER_
#define _CISCO_IOS_XR_PROCMEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_procmem_oper {

class ProcessesMemory : public Entity
{
    public:
        ProcessesMemory();
        ~ProcessesMemory();

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

        class Nodes; //type: ProcessesMemory::Nodes

        std::shared_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes> nodes;
        
}; // ProcessesMemory


class ProcessesMemory::Nodes : public Entity
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

        class Node; //type: ProcessesMemory::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node> > node;
        
}; // ProcessesMemory::Nodes


class ProcessesMemory::Nodes::Node : public Entity
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
        class ProcessIds; //type: ProcessesMemory::Nodes::Node::ProcessIds

        std::shared_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node::ProcessIds> process_ids;
        
}; // ProcessesMemory::Nodes::Node


class ProcessesMemory::Nodes::Node::ProcessIds : public Entity
{
    public:
        ProcessIds();
        ~ProcessIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProcessId; //type: ProcessesMemory::Nodes::Node::ProcessIds::ProcessId

        std::vector<std::shared_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node::ProcessIds::ProcessId> > process_id;
        
}; // ProcessesMemory::Nodes::Node::ProcessIds


class ProcessesMemory::Nodes::Node::ProcessIds::ProcessId : public Entity
{
    public:
        ProcessId();
        ~ProcessId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_id; //type: int32
        YLeaf name; //type: string
        YLeaf jid; //type: uint32
        YLeaf pid; //type: uint32
        YLeaf text_seg_size; //type: uint32
        YLeaf data_seg_size; //type: uint32
        YLeaf stack_seg_size; //type: uint32
        YLeaf malloc_size; //type: uint32
        YLeaf dyn_limit; //type: uint32
        YLeaf shared_mem; //type: uint32
        YLeaf physical_mem; //type: uint32

}; // ProcessesMemory::Nodes::Node::ProcessIds::ProcessId


}
}

#endif /* _CISCO_IOS_XR_PROCMEM_OPER_ */

