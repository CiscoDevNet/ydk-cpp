#ifndef _CISCO_IOS_XR_LPTS_IFIB_OPER_
#define _CISCO_IOS_XR_LPTS_IFIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_ifib_oper {

class LptsIfib : public ydk::Entity
{
    public:
        LptsIfib();
        ~LptsIfib();

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

        class Nodes; //type: LptsIfib::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes> nodes;
        
}; // LptsIfib


class LptsIfib::Nodes : public ydk::Entity
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

        class Node; //type: LptsIfib::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node> > node;
        
}; // LptsIfib::Nodes


class LptsIfib::Nodes::Node : public ydk::Entity
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
        class SliceIds; //type: LptsIfib::Nodes::Node::SliceIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node::SliceIds> slice_ids;
        
}; // LptsIfib::Nodes::Node


class LptsIfib::Nodes::Node::SliceIds : public ydk::Entity
{
    public:
        SliceIds();
        ~SliceIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SliceId; //type: LptsIfib::Nodes::Node::SliceIds::SliceId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node::SliceIds::SliceId> > slice_id;
        
}; // LptsIfib::Nodes::Node::SliceIds


class LptsIfib::Nodes::Node::SliceIds::SliceId : public ydk::Entity
{
    public:
        SliceId();
        ~SliceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_name; //type: string
        class Entry; //type: LptsIfib::Nodes::Node::SliceIds::SliceId::Entry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node::SliceIds::SliceId::Entry> > entry;
        
}; // LptsIfib::Nodes::Node::SliceIds::SliceId


class LptsIfib::Nodes::Node::SliceIds::SliceId::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int32
        ydk::YLeaf destination_type; //type: string
        ydk::YLeaf destination_value; //type: string
        ydk::YLeaf source_port; //type: string
        ydk::YLeaf destination_addr; //type: string
        ydk::YLeaf source_addr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vid; //type: uint32
        ydk::YLeaf l3protocol; //type: uint32
        ydk::YLeaf l4protocol; //type: uint32
        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf intf_handle; //type: uint32
        ydk::YLeaf is_syn; //type: uint8
        ydk::YLeaf opcode; //type: string
        ydk::YLeaf accepts; //type: uint64
        ydk::YLeaf drops; //type: uint64
        ydk::YLeaf flow_type; //type: string
        ydk::YLeaf listener_tag; //type: string
        ydk::YLeaf local_flag; //type: uint8
        ydk::YLeaf is_fgid; //type: uint8
        ydk::YLeaf deliver_list_short; //type: string
        ydk::YLeaf deliver_list_long; //type: string
        ydk::YLeaf min_ttl; //type: uint8
        ydk::YLeaf pending_ifibq_delay; //type: uint32
        ydk::YLeaf sl_ifibq_delay; //type: uint32
        ydk::YLeaf ifib_program_time; //type: string

}; // LptsIfib::Nodes::Node::SliceIds::SliceId::Entry


}
}

#endif /* _CISCO_IOS_XR_LPTS_IFIB_OPER_ */

