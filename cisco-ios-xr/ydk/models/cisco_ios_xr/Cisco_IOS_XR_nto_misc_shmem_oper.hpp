#ifndef _CISCO_IOS_XR_NTO_MISC_SHMEM_OPER_
#define _CISCO_IOS_XR_NTO_MISC_SHMEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_nto_misc_shmem_oper {

class MemorySummary : public ydk::Entity
{
    public:
        MemorySummary();
        ~MemorySummary();

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

        class Nodes; //type: MemorySummary::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_nto_misc_shmem_oper::MemorySummary::Nodes> nodes;
        
}; // MemorySummary


class MemorySummary::Nodes : public ydk::Entity
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

        class Node; //type: MemorySummary::Nodes::Node

        ydk::YList node;
        
}; // MemorySummary::Nodes


class MemorySummary::Nodes::Node : public ydk::Entity
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
        class Summary; //type: MemorySummary::Nodes::Node::Summary
        class Detail; //type: MemorySummary::Nodes::Node::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_nto_misc_shmem_oper::MemorySummary::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_nto_misc_shmem_oper::MemorySummary::Nodes::Node::Detail> detail;
        
}; // MemorySummary::Nodes::Node


class MemorySummary::Nodes::Node::Summary : public ydk::Entity
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

        ydk::YLeaf page_size; //type: uint32
        ydk::YLeaf ram_memory; //type: uint64
        ydk::YLeaf free_physical_memory; //type: uint64
        ydk::YLeaf system_ram_memory; //type: uint64
        ydk::YLeaf free_application_memory; //type: uint64
        ydk::YLeaf image_memory; //type: uint64
        ydk::YLeaf boot_ram_size; //type: uint64
        ydk::YLeaf reserved_memory; //type: uint64
        ydk::YLeaf io_memory; //type: uint64
        ydk::YLeaf flash_system; //type: uint64

}; // MemorySummary::Nodes::Node::Summary


class MemorySummary::Nodes::Node::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf page_size; //type: uint32
        ydk::YLeaf ram_memory; //type: uint64
        ydk::YLeaf free_physical_memory; //type: uint64
        ydk::YLeaf private_physical_memory; //type: uint64
        ydk::YLeaf system_ram_memory; //type: uint64
        ydk::YLeaf free_application_memory; //type: uint64
        ydk::YLeaf image_memory; //type: uint64
        ydk::YLeaf boot_ram_size; //type: uint64
        ydk::YLeaf reserved_memory; //type: uint64
        ydk::YLeaf io_memory; //type: uint64
        ydk::YLeaf flash_system; //type: uint64
        ydk::YLeaf total_shared_window; //type: uint64
        ydk::YLeaf allocated_memory; //type: uint64
        ydk::YLeaf program_text; //type: uint64
        ydk::YLeaf program_data; //type: uint64
        ydk::YLeaf program_stack; //type: uint64
        ydk::YLeaf total_used; //type: uint64
        class SharedWindow; //type: MemorySummary::Nodes::Node::Detail::SharedWindow

        ydk::YList shared_window;
        
}; // MemorySummary::Nodes::Node::Detail


class MemorySummary::Nodes::Node::Detail::SharedWindow : public ydk::Entity
{
    public:
        SharedWindow();
        ~SharedWindow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_window; //type: string
        ydk::YLeaf window_size; //type: uint64

}; // MemorySummary::Nodes::Node::Detail::SharedWindow


}
}

#endif /* _CISCO_IOS_XR_NTO_MISC_SHMEM_OPER_ */

