#ifndef _CISCO_IOS_XR_PROCMEM_OPER_
#define _CISCO_IOS_XR_PROCMEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_procmem_oper {

class ProcessesMemory : public ydk::Entity
{
    public:
        ProcessesMemory();
        ~ProcessesMemory();

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

        class Nodes; //type: ProcessesMemory::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes> nodes;
        
}; // ProcessesMemory


class ProcessesMemory::Nodes : public ydk::Entity
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

        class Node; //type: ProcessesMemory::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node> > node;
        
}; // ProcessesMemory::Nodes


class ProcessesMemory::Nodes::Node : public ydk::Entity
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
        class ProcessIds; //type: ProcessesMemory::Nodes::Node::ProcessIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node::ProcessIds> process_ids;
        
}; // ProcessesMemory::Nodes::Node


class ProcessesMemory::Nodes::Node::ProcessIds : public ydk::Entity
{
    public:
        ProcessIds();
        ~ProcessIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessId; //type: ProcessesMemory::Nodes::Node::ProcessIds::ProcessId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node::ProcessIds::ProcessId> > process_id;
        
}; // ProcessesMemory::Nodes::Node::ProcessIds


class ProcessesMemory::Nodes::Node::ProcessIds::ProcessId : public ydk::Entity
{
    public:
        ProcessId();
        ~ProcessId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_id; //type: int32
        ydk::YLeaf name; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf text_seg_size; //type: uint32
        ydk::YLeaf data_seg_size; //type: uint32
        ydk::YLeaf stack_seg_size; //type: uint32
        ydk::YLeaf malloc_size; //type: uint32
        ydk::YLeaf dyn_limit; //type: uint32
        ydk::YLeaf shared_mem; //type: uint32
        ydk::YLeaf physical_mem; //type: uint32

}; // ProcessesMemory::Nodes::Node::ProcessIds::ProcessId


}
}

#endif /* _CISCO_IOS_XR_PROCMEM_OPER_ */

