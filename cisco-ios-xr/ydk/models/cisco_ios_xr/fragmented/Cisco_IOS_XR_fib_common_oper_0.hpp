#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_0_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {

class FibStatistics : public ydk::Entity
{
    public:
        FibStatistics();
        ~FibStatistics();

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

        class Nodes; //type: FibStatistics::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes> nodes;
        
}; // FibStatistics


class FibStatistics::Nodes : public ydk::Entity
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

        class Node; //type: FibStatistics::Nodes::Node

        ydk::YList node;
        
}; // FibStatistics::Nodes


class FibStatistics::Nodes::Node : public ydk::Entity
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
        class Drops; //type: FibStatistics::Nodes::Node::Drops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node::Drops> drops;
        
}; // FibStatistics::Nodes::Node


class FibStatistics::Nodes::Node::Drops : public ydk::Entity
{
    public:
        Drops();
        ~Drops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_route_packets; //type: uint64
        ydk::YLeaf punt_unreachable_packets; //type: uint64
        ydk::YLeaf df_unreachable_packets; //type: uint64
        ydk::YLeaf encapsulation_failure_packets; //type: uint64
        ydk::YLeaf incomplete_adjacency_packets; //type: uint64
        ydk::YLeaf unresolved_prefix_packets; //type: uint64
        ydk::YLeaf unsupported_feature_packets; //type: uint64
        ydk::YLeaf discard_packets; //type: uint64
        ydk::YLeaf checksum_error_packets; //type: uint64
        ydk::YLeaf fragmenation_consumed_packets; //type: uint64
        ydk::YLeaf fragmenation_failure_packets; //type: uint64
        ydk::YLeaf null_packets; //type: uint64
        ydk::YLeaf rpf_check_failure_packets; //type: uint64
        ydk::YLeaf acl_in_rpf_packets; //type: uint64
        ydk::YLeaf rp_destination_drop_packets; //type: uint64
        ydk::YLeaf total_number_of_drop_packets; //type: uint64
        ydk::YLeaf mpls_disabled_interface; //type: uint64
        ydk::YLeaf gre_lookup_failed_drop; //type: uint64
        ydk::YLeaf gre_error_drop; //type: uint64
        ydk::YLeaf lisp_punt_drops; //type: uint64
        ydk::YLeaf lisp_encap_error_drops; //type: uint64
        ydk::YLeaf lisp_decap_error_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64

}; // FibStatistics::Nodes::Node::Drops

class Fib : public ydk::Entity
{
    public:
        Fib();
        ~Fib();

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

        class Nodes; //type: Fib::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes> nodes;
        
}; // Fib


class Fib::Nodes : public ydk::Entity
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

        class Node; //type: Fib::Nodes::Node

        ydk::YList node;
        
}; // Fib::Nodes


class Fib::Nodes::Node : public ydk::Entity
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
        class Global; //type: Fib::Nodes::Node::Global
        class Protocols; //type: Fib::Nodes::Node::Protocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols> protocols;
        
}; // Fib::Nodes::Node


class Fib::Nodes::Node::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibCofo; //type: Fib::Nodes::Node::Global::FibCofo
        class Summary; //type: Fib::Nodes::Node::Global::Summary
        class ObjectHistory; //type: Fib::Nodes::Node::Global::ObjectHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo> fib_cofo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory> object_history;
        
}; // Fib::Nodes::Node::Global


class Fib::Nodes::Node::Global::FibCofo : public ydk::Entity
{
    public:
        FibCofo();
        ~FibCofo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibCofoIdb; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoIdb
        class FibCofoTableId; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoTableId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo::FibCofoIdb> fib_cofo_idb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo::FibCofoTableId> fib_cofo_table_id;
        
}; // Fib::Nodes::Node::Global::FibCofo


class Fib::Nodes::Node::Global::FibCofo::FibCofoIdb : public ydk::Entity
{
    public:
        FibCofoIdb();
        ~FibCofoIdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibCofoIdbTableEntries; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries> fib_cofo_idb_table_entries;
        
}; // Fib::Nodes::Node::Global::FibCofo::FibCofoIdb


class Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries : public ydk::Entity
{
    public:
        FibCofoIdbTableEntries();
        ~FibCofoIdbTableEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibCofoIdbTableEntry; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry

        ydk::YList fib_cofo_idb_table_entry;
        
}; // Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries


class Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry : public ydk::Entity
{
    public:
        FibCofoIdbTableEntry();
        ~FibCofoIdbTableEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr_id; //type: uint32
        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf sdrid; //type: uint32
        ydk::YLeaf intf_type; //type: uint32
        ydk::YLeaf intf_index; //type: uint32
        ydk::YLeaf parent_intf_index; //type: uint32
        ydk::YLeaf bundle_member_total_weight; //type: uint16
        ydk::YLeaf main_pointer; //type: uint64
        ydk::YLeaf table_pointer; //type: uint64
        ydk::YLeaf hardware_handle; //type: uint64
        ydk::YLeaf intf_name; //type: string
        ydk::YLeafList pic; //type: list of  uint64
        class ObjectBase; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry::ObjectBase
        class BundleMemberInfo; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry::BundleMemberInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry::ObjectBase> object_base;
        ydk::YList bundle_member_info;
        
}; // Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry


class Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry::ObjectBase


class Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry::BundleMemberInfo : public ydk::Entity
{
    public:
        BundleMemberInfo();
        ~BundleMemberInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf_index; //type: uint32
        ydk::YLeaf unique_id; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf pic; //type: uint64

}; // Fib::Nodes::Node::Global::FibCofo::FibCofoIdb::FibCofoIdbTableEntries::FibCofoIdbTableEntry::BundleMemberInfo


class Fib::Nodes::Node::Global::FibCofo::FibCofoTableId : public ydk::Entity
{
    public:
        FibCofoTableId();
        ~FibCofoTableId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibCofoTableIdEntries; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries
        class FibCofoTableIdSummary; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries> fib_cofo_table_id_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdSummary> fib_cofo_table_id_summary;
        
}; // Fib::Nodes::Node::Global::FibCofo::FibCofoTableId


class Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries : public ydk::Entity
{
    public:
        FibCofoTableIdEntries();
        ~FibCofoTableIdEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibCofoTableIdEntry; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries::FibCofoTableIdEntry

        ydk::YList fib_cofo_table_id_entry;
        
}; // Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries


class Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries::FibCofoTableIdEntry : public ydk::Entity
{
    public:
        FibCofoTableIdEntry();
        ~FibCofoTableIdEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr_id; //type: uint32
        ydk::YLeaf protocol; //type: FibProtocol
        ydk::YLeaf rd; //type: string
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf sdrid; //type: uint32
        ydk::YLeaf protocol_type; //type: uint32
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf table_id_xr; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf table_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries::FibCofoTableIdEntry::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries::FibCofoTableIdEntry::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries::FibCofoTableIdEntry


class Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries::FibCofoTableIdEntry::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdEntries::FibCofoTableIdEntry::ObjectBase


class Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdSummary : public ydk::Entity
{
    public:
        FibCofoTableIdSummary();
        ~FibCofoTableIdSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_tbl_id_allocated; //type: uint32
        ydk::YLeaf tbl_id_minimum; //type: uint32
        ydk::YLeaf tbl_id_maximum; //type: uint32
        ydk::YLeaf tbl_id_last_allocated; //type: uint32
        ydk::YLeaf tbl_id_default_v4; //type: uint32
        ydk::YLeaf tbl_id_default_v6; //type: uint32
        ydk::YLeaf number_of_tbl_id_in_gc; //type: uint32
        class PerSdrStat; //type: Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdSummary::PerSdrStat

        ydk::YList per_sdr_stat;
        
}; // Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdSummary


class Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdSummary::PerSdrStat : public ydk::Entity
{
    public:
        PerSdrStat();
        ~PerSdrStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdrid; //type: uint32
        ydk::YLeaf num_ofipv4_tables; //type: uint16
        ydk::YLeaf num_ofipv6_tables; //type: uint16
        ydk::YLeaf num_ofmpls_tables; //type: uint16

}; // Fib::Nodes::Node::Global::FibCofo::FibCofoTableId::FibCofoTableIdSummary::PerSdrStat


class Fib::Nodes::Node::Global::Summary : public ydk::Entity
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

        class Total; //type: Fib::Nodes::Node::Global::Summary::Total
        class Protos; //type: Fib::Nodes::Node::Global::Summary::Protos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total> total;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos> protos;
        
}; // Fib::Nodes::Node::Global::Summary


class Fib::Nodes::Node::Global::Summary::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonInfo; //type: Fib::Nodes::Node::Global::Summary::Total::CommonInfo
        class TotalCounters; //type: Fib::Nodes::Node::Global::Summary::Total::TotalCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::CommonInfo> common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters> total_counters;
        
}; // Fib::Nodes::Node::Global::Summary::Total


class Fib::Nodes::Node::Global::Summary::Total::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Total::CommonInfo


class Fib::Nodes::Node::Global::Summary::Total::TotalCounters : public ydk::Entity
{
    public:
        TotalCounters();
        ~TotalCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_retry_timeouts; //type: uint64
        ydk::YLeaf num_retry_ojbects; //type: uint32
        class ArrayNumberOfRetry; //type: Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry
        class ArrayNumberOfObject; //type: Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject

        ydk::YList array_number_of_retry;
        ydk::YList array_number_of_object;
        
}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters


class Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry : public ydk::Entity
{
    public:
        ArrayNumberOfRetry();
        ~ArrayNumberOfRetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retry_object_type; //type: string
        ydk::YLeaf num_retries; //type: uint64

}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry


class Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject : public ydk::Entity
{
    public:
        ArrayNumberOfObject();
        ~ArrayNumberOfObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_type; //type: string
        ydk::YLeaf num_objects; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject


class Fib::Nodes::Node::Global::Summary::Protos : public ydk::Entity
{
    public:
        Protos();
        ~Protos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Proto; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto

        ydk::YList proto;
        
}; // Fib::Nodes::Node::Global::Summary::Protos


class Fib::Nodes::Node::Global::Summary::Protos::Proto : public ydk::Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: FibafiProto
        class CommonInfo; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo
        class Summary_; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo> common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_> summary;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto


class Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_ : public ydk::Entity
{
    public:
        Summary_();
        ~Summary_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BaseObject; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject
        class SummaryCounts; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts
        class Health; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject> base_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts> summary_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health> health;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject : public ydk::Entity
{
    public:
        BaseObject();
        ~BaseObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts : public ydk::Entity
{
    public:
        SummaryCounts();
        ~SummaryCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_retry_timeouts; //type: uint64
        ydk::YLeaf num_retry_ojbects; //type: uint32
        class ArrayNumberOfRetry; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry
        class ArrayNumberOfObject; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject

        ydk::YList array_number_of_retry;
        ydk::YList array_number_of_object;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry : public ydk::Entity
{
    public:
        ArrayNumberOfRetry();
        ~ArrayNumberOfRetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retry_object_type; //type: string
        ydk::YLeaf num_retries; //type: uint64

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject : public ydk::Entity
{
    public:
        ArrayNumberOfObject();
        ~ArrayNumberOfObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_type; //type: string
        ydk::YLeaf num_objects; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health : public ydk::Entity
{
    public:
        Health();
        ~Health();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_retry_db_empty; //type: boolean

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health


class Fib::Nodes::Node::Global::ObjectHistory : public ydk::Entity
{
    public:
        ObjectHistory();
        ~ObjectHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjHistoryProtos; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos> obj_history_protos;
        
}; // Fib::Nodes::Node::Global::ObjectHistory


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos : public ydk::Entity
{
    public:
        ObjHistoryProtos();
        ~ObjHistoryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjHistoryProto; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto

        ydk::YList obj_history_proto;
        
}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto : public ydk::Entity
{
    public:
        ObjHistoryProto();
        ~ObjHistoryProto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: FibafiProto
        class BaseObject; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject
        class ObjectHistory_; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject> base_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_> object_history;
        
}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject : public ydk::Entity
{
    public:
        BaseObject();
        ~BaseObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: uint32

}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_ : public ydk::Entity
{
    public:
        ObjectHistory_();
        ~ObjectHistory_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32

}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_


class Fib::Nodes::Node::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Fib::Nodes::Node::Protocols::Protocol

        ydk::YList protocol;
        
}; // Fib::Nodes::Node::Protocols


class Fib::Nodes::Node::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: FibProtocol
        class IssuState; //type: Fib::Nodes::Node::Protocols::Protocol::IssuState
        class Resource; //type: Fib::Nodes::Node::Protocols::Protocol::Resource
        class FibSummaries; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries
        class ExternalSummaryAll; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll
        class FrrLog; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog
        class Vrfs; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs
        class ExactRoutes; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes
        class NhIds; //type: Fib::Nodes::Node::Protocols::Protocol::NhIds
        class ExternalClientSummaries; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries
        class Misc; //type: Fib::Nodes::Node::Protocols::Protocol::Misc
        class LocalLabel; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState> issu_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource> resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries> fib_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll> external_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog> frr_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes> exact_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::NhIds> nh_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries> external_client_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc> misc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel> local_label;
        
}; // Fib::Nodes::Node::Protocols::Protocol


class Fib::Nodes::Node::Protocols::Protocol::IssuState : public ydk::Entity
{
    public:
        IssuState();
        ~IssuState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf imdr_support; //type: boolean
        ydk::YLeaf slc_support; //type: boolean
        ydk::YLeaf fis_issu_restart; //type: boolean
        ydk::YLeaf imdr_eoc_implicit; //type: boolean
        ydk::YLeaf slc_eoc_implicit; //type: boolean
        ydk::YLeaf eoc_received_imdr_time_stamp; //type: string
        ydk::YLeaf eoc_received_slc_time_stamp; //type: string
        ydk::YLeaf eod_received_im_time_stamp; //type: string
        ydk::YLeaf eod_sent_imdr_time_stamp; //type: string
        ydk::YLeaf eod_sent_slc_time_stamp; //type: string
        ydk::YLeaf fis_issu_error_ts; //type: uint64
        class FisProtoState; //type: Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState

        ydk::YList fis_proto_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::IssuState


class Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState : public ydk::Entity
{
    public:
        FisProtoState();
        ~FisProtoState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf aib_eod_time_stamp; //type: string
        ydk::YLeaf rsi_eod_valid; //type: boolean
        ydk::YLeaf rsi_eod_time_stamp; //type: string
        ydk::YLeaf lsd_eod_valid; //type: boolean
        ydk::YLeaf lsd_eod_time_stamp; //type: string
        ydk::YLeaf lmrib_eod_valid; //type: boolean
        ydk::YLeaf lmrib_eod_time_stamp; //type: string
        ydk::YLeaf rib_info_valid; //type: boolean
        ydk::YLeaf bcdl_tables; //type: uint32
        ydk::YLeaf converged_tables; //type: uint32
        ydk::YLeaf rib_tables_converged_time_stamp; //type: string
        ydk::YLeaf protocol_eod_valid; //type: boolean
        ydk::YLeaf protocol_eod_time_stamp; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState


class Fib::Nodes::Node::Protocols::Protocol::Resource : public ydk::Entity
{
    public:
        Resource();
        ~Resource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ResourceDetailInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo
        class ResourceHardwareIngressInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo
        class ResourceHardwareEgressInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo
        class ResourceSummaryInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo> resource_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo> resource_hardware_ingress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo> resource_hardware_egress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo> resource_summary_info;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo : public ydk::Entity
{
    public:
        ResourceDetailInfo();
        ~ResourceDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_curr_mode; //type: uint32
        ydk::YLeaf sr_hwrsrc_info; //type: string
        ydk::YLeaf sr_shmwin_oor_count; //type: uint8
        ydk::YLeaf sr_hw_oor_count; //type: uint8
        ydk::YLeaf sr_in_oor_ts; //type: uint64
        ydk::YLeaf sr_out_oor_ts; //type: uint64
        class SrHwrsrcMode; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState

        ydk::YList sr_hwrsrc_mode;
        ydk::YList sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState : public ydk::Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srs_curr_mode; //type: uint32
        ydk::YLeaf srs_avg_avail; //type: uint64
        ydk::YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo : public ydk::Entity
{
    public:
        ResourceHardwareIngressInfo();
        ~ResourceHardwareIngressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_curr_mode; //type: uint32
        ydk::YLeaf sr_hwrsrc_info; //type: string
        ydk::YLeaf sr_shmwin_oor_count; //type: uint8
        ydk::YLeaf sr_hw_oor_count; //type: uint8
        ydk::YLeaf sr_in_oor_ts; //type: uint64
        ydk::YLeaf sr_out_oor_ts; //type: uint64
        class SrHwrsrcMode; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState

        ydk::YList sr_hwrsrc_mode;
        ydk::YList sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState : public ydk::Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srs_curr_mode; //type: uint32
        ydk::YLeaf srs_avg_avail; //type: uint64
        ydk::YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo : public ydk::Entity
{
    public:
        ResourceHardwareEgressInfo();
        ~ResourceHardwareEgressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_curr_mode; //type: uint32
        ydk::YLeaf sr_hwrsrc_info; //type: string
        ydk::YLeaf sr_shmwin_oor_count; //type: uint8
        ydk::YLeaf sr_hw_oor_count; //type: uint8
        ydk::YLeaf sr_in_oor_ts; //type: uint64
        ydk::YLeaf sr_out_oor_ts; //type: uint64
        class SrHwrsrcMode; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState

        ydk::YList sr_hwrsrc_mode;
        ydk::YList sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState : public ydk::Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srs_curr_mode; //type: uint32
        ydk::YLeaf srs_avg_avail; //type: uint64
        ydk::YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo : public ydk::Entity
{
    public:
        ResourceSummaryInfo();
        ~ResourceSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_curr_mode; //type: uint32
        ydk::YLeaf sr_hwrsrc_info; //type: string
        ydk::YLeaf sr_shmwin_oor_count; //type: uint8
        ydk::YLeaf sr_hw_oor_count; //type: uint8
        ydk::YLeaf sr_in_oor_ts; //type: uint64
        ydk::YLeaf sr_out_oor_ts; //type: uint64
        class SrHwrsrcMode; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState

        ydk::YList sr_hwrsrc_mode;
        ydk::YList sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState : public ydk::Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srs_curr_mode; //type: uint32
        ydk::YLeaf srs_avg_avail; //type: uint64
        ydk::YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries : public ydk::Entity
{
    public:
        FibSummaries();
        ~FibSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibSummary; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary

        ydk::YList fib_summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary : public ydk::Entity
{
    public:
        FibSummary();
        ~FibSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf table_id; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ss_tbl_id; //type: uint32
        ydk::YLeaf ss_tbl_id_ptr; //type: uint32
        ydk::YLeaf ss_vrf_id; //type: uint32
        ydk::YLeaf ss_vr_id; //type: uint32
        ydk::YLeaf load_balancing; //type: SsLbaState
        ydk::YLeaf forwarding_elements; //type: uint32
        ydk::YLeaf routes; //type: uint32
        ydk::YLeaf prefix_in_place_modifications; //type: uint32
        ydk::YLeaf stale_prefix_deletes; //type: uint32
        ydk::YLeaf load_sharing_elements; //type: uint32
        ydk::YLeaf load_sharing_references; //type: uint64
        ydk::YLeaf total_load_share_element_bytes; //type: uint32
        ydk::YLeaf leaves_used_bytes; //type: uint32
        ydk::YLeaf reresolve_entries; //type: uint32
        ydk::YLeaf old_unresolve_entries; //type: uint32
        ydk::YLeaf new_unresolve_entries; //type: uint32
        ydk::YLeaf unresolve_entries; //type: uint32
        ydk::YLeaf cef_route_drops; //type: uint32
        ydk::YLeaf cef_version_mismatch_route_drops; //type: uint64
        ydk::YLeaf delete_cache_num_entries; //type: uint32
        ydk::YLeaf existing_leaves_revisions; //type: uint32
        ydk::YLeaf fib_default_prefix; //type: uint32
        ydk::YLeaf fib_default_prefix_mask_length; //type: uint32
        ydk::YLeaf next_hops; //type: uint32
        ydk::YLeaf incomplete_next_hops; //type: uint32
        ydk::YLeaf resolution_timer; //type: uint32
        ydk::YLeaf slow_process_timer; //type: uint32
        ydk::YLeaf max_resolution_timer; //type: uint32
        ydk::YLeaf imposition_prefixes; //type: uint32
        ydk::YLeaf extended_prefixes; //type: uint32
        ydk::YLeaf cefl_bl_recycled_routes; //type: uint32
        ydk::YLeaf ldi_backwalks; //type: uint32
        ydk::YLeaf ss_prot_route_count; //type: uint32
        ydk::YLeaf lisp_eid_prefixes; //type: uint32
        ydk::YLeaf lisp_eid_valid_prefixes; //type: uint32
        ydk::YLeaf lisp_rloc_objects; //type: uint32
        ydk::YLeaf number_routes_srv6_transit; //type: uint32
        ydk::YLeaf number_routes_srv6_end; //type: uint32
        ydk::YLeaf ss_vxlan_ltep_ifh; //type: string
        ydk::YLeaf ss_drop_pl_count; //type: uint32
        class ExclusiveLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement
        class SharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement
        class CrossSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement
        class LabelSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement
        class PrefixMasklenDistribution; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement> shared_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution> prefix_masklen_distribution;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement : public ydk::Entity
{
    public:
        ExclusiveLoadSharingElement();
        ~ExclusiveLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement : public ydk::Entity
{
    public:
        SharedLoadSharingElement();
        ~SharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement : public ydk::Entity
{
    public:
        CrossSharedLoadSharingElement();
        ~CrossSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement : public ydk::Entity
{
    public:
        LabelSharedLoadSharingElement();
        ~LabelSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution : public ydk::Entity
{
    public:
        PrefixMasklenDistribution();
        ~PrefixMasklenDistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnicastPrefixe; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe
        class BroadcastPrefixe; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe
        class MulticastPrefix; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix

        ydk::YList unicast_prefixe;
        ydk::YList broadcast_prefixe;
        ydk::YList multicast_prefix;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe : public ydk::Entity
{
    public:
        UnicastPrefixe();
        ~UnicastPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mask_length; //type: uint8
        ydk::YLeaf number_of_prefixes; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe : public ydk::Entity
{
    public:
        BroadcastPrefixe();
        ~BroadcastPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mask_length; //type: uint8
        ydk::YLeaf number_of_prefixes; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix : public ydk::Entity
{
    public:
        MulticastPrefix();
        ~MulticastPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mask_length; //type: uint8
        ydk::YLeaf number_of_prefixes; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll : public ydk::Entity
{
    public:
        ExternalSummaryAll();
        ~ExternalSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sesa_num_client; //type: uint32
        class SesaPlSum; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum> sesa_pl_sum;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum : public ydk::Entity
{
    public:
        SesaPlSum();
        ~SesaPlSum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sep_num_ecd_pathlist; //type: uint32
        ydk::YLeaf sep_num_ecd_pl_unresolved; //type: uint32
        class SepNumEcdPlPerInterest; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest

        ydk::YList sep_num_ecd_pl_per_interest;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest : public ydk::Entity
{
    public:
        SepNumEcdPlPerInterest();
        ~SepNumEcdPlPerInterest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest


class Fib::Nodes::Node::Protocols::Protocol::FrrLog : public ydk::Entity
{
    public:
        FrrLog();
        ~FrrLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrInterfaces; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces> frr_interfaces;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces : public ydk::Entity
{
    public:
        FrrInterfaces();
        ~FrrInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrInterface; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface

        ydk::YList frr_interface;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface : public ydk::Entity
{
    public:
        FrrInterface();
        ~FrrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_interface_name; //type: string
        class Logs; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs> logs;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Log; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log

        ydk::YList log;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_index; //type: uint32
        ydk::YLeaf frr_protocol_type; //type: FibFrrProtocolShow
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_prefix; //type: string
        ydk::YLeaf frr_switching_time; //type: uint32
        ydk::YLeaf bundle_member_interface_name; //type: string
        class FrrTimestamp; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp> frr_timestamp;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp : public ydk::Entity
{
    public:
        FrrTimestamp();
        ~FrrTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nano_seconds; //type: int32

}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp


class Fib::Nodes::Node::Protocols::Protocol::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class NhInfoDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress
        class IpPrefixDetails; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails
        class NhInfoDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail
        class Summary; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary
        class InterfaceInfos; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos
        class IpPrefixBriefs; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs
        class NhInfoDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress
        class NhInfoBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress> nh_info_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails> ip_prefix_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail> nh_info_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos> interface_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs> ip_prefix_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress> nh_info_detail_hardware_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief> nh_info_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoDetailHardwareEgress();
        ~NhInfoDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress
        class NhInfoLocalDetailHardwareEgresses; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses
        class NhInfoRemoteDetailHardwareEgresses; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress> nh_info_special_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses> nh_info_local_detail_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses> nh_info_remote_detail_hardware_egresses;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialDetailHardwareEgress();
        ~NhInfoSpecialDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialNullDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress
        class NhInfoSpecialPuntDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress
        class NhInfoSpecialDiscardDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress
        class NhInfoSpecialDropDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress> nh_info_special_null_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress> nh_info_special_punt_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress> nh_info_special_discard_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress> nh_info_special_drop_detail_hardware_egress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialNullDetailHardwareEgress();
        ~NhInfoSpecialNullDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialPuntDetailHardwareEgress();
        ~NhInfoSpecialPuntDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialDiscardDetailHardwareEgress();
        ~NhInfoSpecialDiscardDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialDropDetailHardwareEgress();
        ~NhInfoSpecialDropDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses : public ydk::Entity
{
    public:
        NhInfoLocalDetailHardwareEgresses();
        ~NhInfoLocalDetailHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoLocalDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress

        ydk::YList nh_info_local_detail_hardware_egress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoLocalDetailHardwareEgress();
        ~NhInfoLocalDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses : public ydk::Entity
{
    public:
        NhInfoRemoteDetailHardwareEgresses();
        ~NhInfoRemoteDetailHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoRemoteDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress

        ydk::YList nh_info_remote_detail_hardware_egress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoRemoteDetailHardwareEgress();
        ~NhInfoRemoteDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails : public ydk::Entity
{
    public:
        IpPrefixDetails();
        ~IpPrefixDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpPrefixDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail

        ydk::YList ip_prefix_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail : public ydk::Entity
{
    public:
        IpPrefixDetail();
        ~IpPrefixDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf protocol_type_fib_entry; //type: uint32
        ydk::YLeaf platform_hardware; //type: string
        ydk::YLeaf number_of_referances_to_path_list; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf path_list_source; //type: uint32
        ydk::YLeaf number_of_referances_to_ldi; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf flags_external_ldi; //type: uint32
        ydk::YLeaf pointer_external_ldi; //type: uint32
        ydk::YLeaf exact_path_interface_handle; //type: uint32
        ydk::YLeaf exact_path_gre_interface_handle; //type: uint32
        ydk::YLeaf exact_route_gre_phys_ifh_avail; //type: boolean
        ydk::YLeaf exact_route_result; //type: boolean
        ydk::YLeaf prefix_is_static_or_connected; //type: boolean
        ydk::YLeaf packet_should_recieve; //type: boolean
        ydk::YLeaf prefix_connected; //type: boolean
        ydk::YLeaf prefix_for_adjancency; //type: boolean
        ydk::YLeaf prefix_for_pic_next_hop; //type: boolean
        ydk::YLeaf purgable_after_purge_interval; //type: boolean
        ydk::YLeaf broadcast_recive_flag; //type: boolean
        ydk::YLeaf broadcast_forward_flag; //type: boolean
        ydk::YLeaf zero_by_zero_route_as_default; //type: boolean
        ydk::YLeaf external_switch_triggered; //type: boolean
        ydk::YLeaf route_attribute_flag; //type: boolean
        ydk::YLeaf dummy_real_zero_route; //type: boolean
        ydk::YLeaf ldi_lw_flag; //type: uint32
        ydk::YLeaf ref_counter_of_ldi_lw_ldi; //type: uint32
        ydk::YLeaf type_of_ldi_lw_ldi; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf version_of_route; //type: uint64
        ydk::YLeaf fib_route_download_priority; //type: uint32
        ydk::YLeaf time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf l2_subscriber_route; //type: boolean
        ydk::YLeaf l2_subscriber_xconnect_id; //type: uint32
        ydk::YLeaf l2_subscriber_flags; //type: uint32
        ydk::YLeaf l2_subscriber_ip_protocol; //type: uint32
        ydk::YLeaf l2tpv3_cookie_length_bits; //type: uint32
        ydk::YLeaf route_for_external_reach_linecard_flag; //type: boolean
        ydk::YLeaf route_is_sr_flag; //type: boolean
        ydk::YLeaf route_is_srv6_transit; //type: boolean
        ydk::YLeaf route_is_srv6_end; //type: boolean
        ydk::YLeaf srv6_operation_type; //type: string
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation> detail_fib_entry_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath> fib_entry_path;
        ydk::YList extension_object;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation : public ydk::Entity
{
    public:
        DetailFibEntryInformation();
        ~DetailFibEntryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fib_entry_version; //type: uint32
        ydk::YLeaf per_prefix_accounting; //type: uint8
        ydk::YLeaf load_sharing_type; //type: FibLoadshareShow
        ydk::YLeaf fib_entry_adjacency_type; //type: FibAdjacencyShow
        ydk::YLeaf fib_protocol_type; //type: uint32
        ydk::YLeaf afi_fib_protocol_type; //type: uint32
        ydk::YLeaf aib_l3_address; //type: string
        ydk::YLeaf adjacency_address_length; //type: uint32
        ydk::YLeaf adjacency_interface; //type: uint32
        ydk::YLeaf fib_special_nh_information_type; //type: uint32
        ydk::YLeaf fib_entry_adjacency_address; //type: string
        ydk::YLeaf fib_entry_adjacency_interface; //type: uint32
        ydk::YLeaf packets_through_fib_entry; //type: uint64
        ydk::YLeaf bytes_through_fib_entry; //type: uint64
        ydk::YLeaf detailed_prefix_length; //type: uint32
        ydk::YLeaf prefix_protocol; //type: uint32
        ydk::YLeaf precedence_forpackets; //type: uint8
        ydk::YLeaf traffic_index_for_packets; //type: uint8
        ydk::YLeaf switch_compontent_id; //type: uint32
        ydk::YLeaf fast_adjacency_flag; //type: boolean
        ydk::YLeaf illegal_fast_adjacency_flag; //type: boolean
        ydk::YLeaf remote_adjacency_flag; //type: boolean
        ydk::YLeaf bgp_attribute_id; //type: uint32
        ydk::YLeaf bgp_local_attribute_id; //type: uint32
        ydk::YLeaf bgp_attribute_origin_as; //type: uint32
        ydk::YLeaf bgp_attribute_next_hop_as; //type: uint32
        ydk::YLeaf path_string; //type: string
        ydk::YLeaf extcom_string; //type: string
        ydk::YLeaf com_string; //type: string
        ydk::YLeaf extended_community; //type: uint32
        ydk::YLeaf qos_group; //type: uint32
        ydk::YLeaf mpls_fec; //type: uint32
        ydk::YLeaf qppb_qos_group_and_ip_precedence; //type: uint32
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf pl_time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf ldi_time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf pl_time_stamp_type; //type: uint32
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation : public ydk::Entity
{
    public:
        LoadshareInformation();
        ~LoadshareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_through_load_information; //type: uint64
        ydk::YLeaf bytes_through_load_information; //type: uint64
        ydk::YLeaf total_packets_through_load_information; //type: uint64
        ydk::YLeaf total_bytes_through_load_information; //type: uint64
        ydk::YLeaf prefix_of_owner; //type: uint32
        ydk::YLeaf mask_length_of_owner; //type: uint32
        ydk::YLeaf load_information_reference_count; //type: uint16
        ydk::YLeaf per_dest_load_sharing_flag; //type: boolean
        ydk::YLeaf load_information_owner_deleted_flag; //type: boolean
        ydk::YLeaf loadinfo_sanity_flag; //type: boolean
        ydk::YLeaf is_owner; //type: boolean
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public ydk::Entity
{
    public:
        LoadInformtionInternalData();
        ~LoadInformtionInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_ofldis; //type: uint8
        ydk::YLeaf number_of_ldis; //type: uint8
        ydk::YLeaf maximum_index_arrays; //type: uint32
        ydk::YLeaf path_indices; //type: string
        ydk::YLeaf path_ldi_numbers; //type: string
        ydk::YLeaf maximum_slots; //type: uint32
        ydk::YLeaf normalized_weights; //type: string
        ydk::YLeaf tunnel_class_value; //type: string
        ydk::YLeaf is_pbts_info_valid; //type: boolean
        ydk::YLeaf pbts_class_offset; //type: string
        ydk::YLeaf pbts_class_num_paths; //type: string
        ydk::YLeaf pbts_fallback_mapped_class; //type: string
        ydk::YLeaf round_robin_disable; //type: boolean
        ydk::YLeaf ldi_next_hop_buckets; //type: uint8
        ydk::YLeaf platform_hardware_information; //type: string
        class SanityFlag; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag
        class InterfaceHandle; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle
        class WeightsOfPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        ydk::YList sanity_flag;
        ydk::YList interface_handle;
        ydk::YList weights_of_path;
        ydk::YList adjacency_address;
        ydk::YList pbts_class_is_fallback_mapped;
        ydk::YList pbts_fallback_to_drop;
        ydk::YList tunnel_is_forward_class;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag : public ydk::Entity
{
    public:
        SanityFlag();
        ~SanityFlag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle : public ydk::Entity
{
    public:
        InterfaceHandle();
        ~InterfaceHandle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath : public ydk::Entity
{
    public:
        WeightsOfPath();
        ~WeightsOfPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public ydk::Entity
{
    public:
        AdjacencyAddress();
        ~AdjacencyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public ydk::Entity
{
    public:
        PbtsClassIsFallbackMapped();
        ~PbtsClassIsFallbackMapped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public ydk::Entity
{
    public:
        PbtsFallbackToDrop();
        ~PbtsFallbackToDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public ydk::Entity
{
    public:
        TunnelIsForwardClass();
        ~TunnelIsForwardClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath : public ydk::Entity
{
    public:
        FibEntryPath();
        ~FibEntryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath

        ydk::YList fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath : public ydk::Entity
{
    public:
        FibShTblPath();
        ~FibShTblPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf brief_interface_handle; //type: string
        ydk::YLeaf brief_next_hop_prefix; //type: string
        ydk::YLeaf via_label_to_recurse; //type: uint32
        ydk::YLeaf brief_pnode_address; //type: string
        ydk::YLeaf brief_qnode_address; //type: string
        ydk::YLeaf brief_lfa_protection_type; //type: FibUpdatePathLfaProtection
        ydk::YLeaf resolved_path; //type: boolean
        ydk::YLeaf recursive_path; //type: boolean
        ydk::YLeaf packets_received_path; //type: boolean
        ydk::YLeaf attached_path; //type: boolean
        ydk::YLeaf backup_path; //type: boolean
        ydk::YLeaf best_external_path; //type: boolean
        ydk::YLeaf protect_ignore; //type: boolean
        ydk::YLeaf path_dlb; //type: boolean
        ydk::YLeaf path_flags; //type: uint32
        ydk::YLeaf path_info_flags; //type: uint16
        ydk::YLeaf path_index; //type: uint8
        ydk::YLeaf backup_index; //type: uint8
        ydk::YLeaf next_hop_index; //type: uint32
        ydk::YLeaf parent_interface_handle; //type: string
        ydk::YLeaf recursionvia_len; //type: uint8
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath
        class Srv6InformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::Srv6InformationForPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::Srv6InformationForPath> srv6_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public ydk::Entity
{
    public:
        MoreDetailAboutPath();
        ~MoreDetailAboutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address_to_recurse; //type: string
        ydk::YLeaf label_to_recurse; //type: uint32
        ydk::YLeaf detail_next_hop_prefix; //type: string
        ydk::YLeaf next_hop_mask_length; //type: uint8
        ydk::YLeaf interface_associated_path; //type: string
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_vrf; //type: string
        ydk::YLeaf tunnle_endpoint_id; //type: uint32
        ydk::YLeaf lisprlocid; //type: uint32
        ydk::YLeaf number_of_dependencies_this_path; //type: uint32
        ydk::YLeaf robin_reset_value; //type: uint8
        ydk::YLeaf recurse_prefix_object; //type: boolean
        ydk::YLeaf next_prefix_recursion; //type: string
        ydk::YLeaf next_prefix_length; //type: uint8
        ydk::YLeaf recurse_prefix_object2; //type: boolean
        ydk::YLeaf next_prefix_recursion2; //type: string
        ydk::YLeaf next_prefix_length2; //type: uint8
        ydk::YLeaf detail_fib_adjacency_type; //type: FibAdjacencyShow
        ydk::YLeaf current_path_flag; //type: boolean
        ydk::YLeaf recursive_path_information; //type: boolean
        ydk::YLeaf external_adjacency; //type: boolean
        ydk::YLeaf fib_path_nh_information_type; //type: FibNeh
        ydk::YLeaf fib_path_nh_information_type_special; //type: FibNehSpecial
        ydk::YLeaf weight_of_path; //type: uint32
        ydk::YLeaf tunnel_class; //type: uint8
        ydk::YLeaf tunnel_is_forward_class; //type: boolean
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        ydk::YList spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public ydk::Entity
{
    public:
        SpdIpencap();
        ~SpdIpencap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_encap_hdr_count; //type: uint8
        ydk::YLeaf ip_encap_locks; //type: uint32
        ydk::YLeaf ip_encap_transport_tbl; //type: uint32
        ydk::YLeaf ipe_transport_vrf_name; //type: string
        ydk::YLeaf ip_encap_transport_af; //type: uint32
        ydk::YLeaf ip_encap_payload_af; //type: uint32
        ydk::YLeaf ip_encap_payload_mtu; //type: uint16
        ydk::YLeaf ip_encap_parent; //type: uint32
        ydk::YLeaf ip_encap_parent_type; //type: uint32
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        ydk::YList ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public ydk::Entity
{
    public:
        IpEncapHdr();
        ~IpEncapHdr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_encap_hdr_type; //type: FibShIpencapHdr
        ydk::YLeaf ip_encap_hdrp; //type: string
        ydk::YLeaf ip_encap_hdr_dyn; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath : public ydk::Entity
{
    public:
        MplsInformationForPath();
        ~MplsInformationForPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_lable; //type: uint32
        ydk::YLeaf recursive_fwd_chain; //type: boolean
        ydk::YLeaf number_of_igp_paths; //type: uint32
        ydk::YLeaf remote_backup; //type: boolean
        class RecursiveLblStack; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        ydk::YList recursive_lbl_stack;
        ydk::YList igp_label_stack_array;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack : public ydk::Entity
{
    public:
        RecursiveLblStack();
        ~RecursiveLblStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public ydk::Entity
{
    public:
        IgpLabelStackArray();
        ~IgpLabelStackArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_labels; //type: uint32
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf nh_address; //type: string
        class Lstack; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack

        ydk::YList lstack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

class MgmtFibMplsFrrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partial;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf complete;
        static const ydk::Enum::YLeaf any;

};

class FibNehSpecial : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nh_not_found;
        static const ydk::Enum::YLeaf nh_null0;
        static const ydk::Enum::YLeaf nh_punt;
        static const ydk::Enum::YLeaf nh_drop;
        static const ydk::Enum::YLeaf nh_glean;
        static const ydk::Enum::YLeaf nh_receive;
        static const ydk::Enum::YLeaf nh_broadcast;
        static const ydk::Enum::YLeaf nh_external;
        static const ydk::Enum::YLeaf nh_lisp;
        static const ydk::Enum::YLeaf nh_lookup;
        static const ydk::Enum::YLeaf nh_max_type;

};

class Proto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls;

};

class FibShIpencapHdr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_sh_ip_encap_none;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_ip4;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_ip6;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_udp;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_lisp;

};

class FibAdjacencyShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_adjacency_normal;
        static const ydk::Enum::YLeaf fib_adjacency_null;
        static const ydk::Enum::YLeaf fib_adjacency_punt;
        static const ydk::Enum::YLeaf fib_adjacency_drop;
        static const ydk::Enum::YLeaf fib_adjacency_glean;
        static const ydk::Enum::YLeaf fib_adjacency_discard;
        static const ydk::Enum::YLeaf fib_adjacency_broadcast;
        static const ydk::Enum::YLeaf fib_adjacency_external;
        static const ydk::Enum::YLeaf fib_adjacency_lisp;
        static const ydk::Enum::YLeaf fib_adjacency_unknown;

};

class FibNhinfoExtBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf replicated_nh_info;
        static const ydk::Enum::YLeaf shared_nh_info;

};

class SsLbaState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l3;
        static const ydk::Enum::YLeaf l4;

};

class FibRouteSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsd;
        static const ydk::Enum::YLeaf rib;
        static const ydk::Enum::YLeaf mrib;

};

class FibMplsLlcEntryBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_xc;
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_pfx;
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_lsm;
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_max;

};

class FibRpfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_rpf_mode_strict;
        static const ydk::Enum::YLeaf fib_rpf_mode_loose;
        static const ydk::Enum::YLeaf fib_rpf_mode_unknown;

};

class FibafiProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv4_mpls;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ipv6_mpls;

};

class Mplseos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eos0;
        static const ydk::Enum::YLeaf eos1;

};

class FibFrrProtocolShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frr_protocol_ipv4;
        static const ydk::Enum::YLeaf frr_protocol_ipv6;
        static const ydk::Enum::YLeaf frr_protocol_mpls;

};

class FibLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_ipv4;
        static const ydk::Enum::YLeaf link_ipv6;
        static const ydk::Enum::YLeaf link_mpls;

};

class FibUpdatePathLfaProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_lfa_protected;
        static const ydk::Enum::YLeaf local_lfa_protected;
        static const ydk::Enum::YLeaf remote_lfa_protected;
        static const ydk::Enum::YLeaf ti_lfa_protected;

};

class FibLoadshareShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_load_share_none;
        static const ydk::Enum::YLeaf fib_load_share_per_packet;
        static const ydk::Enum::YLeaf fib_load_share_dest_sharing;

};

class FibllcEntry : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf xc;
        static const ydk::Enum::YLeaf pfx;

};

class FibNeh : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nh_local;
        static const ydk::Enum::YLeaf nh_remote;
        static const ydk::Enum::YLeaf nh_special;

};

class NextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tx;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf special;

};

class MgmtFibMplsLspRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf head;
        static const ydk::Enum::YLeaf midpoint;

};

class FibProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls;

};

class FibidbOper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fibidb_none;
        static const ydk::Enum::YLeaf fibidb_create;
        static const ydk::Enum::YLeaf fibidb_delete;
        static const ydk::Enum::YLeaf fibidb_modify;
        static const ydk::Enum::YLeaf fibidb_max;

};

class FibShTblFibExtBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf leaf_extension;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_0_ */

