#ifndef _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_
#define _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_nto_misc_shprocmem_oper {

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

        std::shared_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes> nodes;
        
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node> > node;
        
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
        class JobIds; //type: ProcessesMemory::Nodes::Node::JobIds

        std::shared_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node::JobIds> job_ids;
        
}; // ProcessesMemory::Nodes::Node


class ProcessesMemory::Nodes::Node::JobIds : public Entity
{
    public:
        JobIds();
        ~JobIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class JobId; //type: ProcessesMemory::Nodes::Node::JobIds::JobId

        std::vector<std::shared_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node::JobIds::JobId> > job_id;
        
}; // ProcessesMemory::Nodes::Node::JobIds


class ProcessesMemory::Nodes::Node::JobIds::JobId : public Entity
{
    public:
        JobId();
        ~JobId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf job_id; //type: int32
        YLeaf name; //type: string
        YLeaf jid; //type: uint32
        YLeaf text_seg_size; //type: uint32
        YLeaf data_seg_size; //type: uint32
        YLeaf stack_seg_size; //type: uint32
        YLeaf malloc_size; //type: uint32

}; // ProcessesMemory::Nodes::Node::JobIds::JobId


}
}

#endif /* _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_ */

