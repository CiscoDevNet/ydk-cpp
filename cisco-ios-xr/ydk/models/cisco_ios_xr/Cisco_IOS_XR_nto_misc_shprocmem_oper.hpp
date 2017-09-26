#ifndef _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_
#define _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_nto_misc_shprocmem_oper {

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes> nodes;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node> > node;
        
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
        class JobIds; //type: ProcessesMemory::Nodes::Node::JobIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node::JobIds> job_ids;
        
}; // ProcessesMemory::Nodes::Node


class ProcessesMemory::Nodes::Node::JobIds : public ydk::Entity
{
    public:
        JobIds();
        ~JobIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JobId; //type: ProcessesMemory::Nodes::Node::JobIds::JobId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node::JobIds::JobId> > job_id;
        
}; // ProcessesMemory::Nodes::Node::JobIds


class ProcessesMemory::Nodes::Node::JobIds::JobId : public ydk::Entity
{
    public:
        JobId();
        ~JobId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf job_id; //type: int32
        ydk::YLeaf name; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf text_seg_size; //type: uint32
        ydk::YLeaf data_seg_size; //type: uint32
        ydk::YLeaf stack_seg_size; //type: uint32
        ydk::YLeaf malloc_size; //type: uint32

}; // ProcessesMemory::Nodes::Node::JobIds::JobId


}
}

#endif /* _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_ */

