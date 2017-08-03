#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_

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

        class Nodes; //type: FibStatistics::Nodes

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes> nodes;
        
}; // FibStatistics


class FibStatistics::Nodes : public ydk::Entity
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

        class Node; //type: FibStatistics::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node> > node;
        
}; // FibStatistics::Nodes


class FibStatistics::Nodes::Node : public ydk::Entity
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
        class Drops; //type: FibStatistics::Nodes::Node::Drops

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node::Drops> drops;
        
}; // FibStatistics::Nodes::Node


class FibStatistics::Nodes::Node::Drops : public ydk::Entity
{
    public:
        Drops();
        ~Drops();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Nodes; //type: Fib::Nodes

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes> nodes;
        
}; // Fib


class Fib::Nodes : public ydk::Entity
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

        class Node; //type: Fib::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node> > node;
        
}; // Fib::Nodes


class Fib::Nodes::Node : public ydk::Entity
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
        class Global; //type: Fib::Nodes::Node::Global
        class Protocols; //type: Fib::Nodes::Node::Protocols

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global> global;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols> protocols;
        
}; // Fib::Nodes::Node


class Fib::Nodes::Node::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary; //type: Fib::Nodes::Node::Global::Summary
        class ObjectHistory; //type: Fib::Nodes::Node::Global::ObjectHistory

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory> object_history;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary> summary;
        
}; // Fib::Nodes::Node::Global


class Fib::Nodes::Node::Global::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Total; //type: Fib::Nodes::Node::Global::Summary::Total
        class Protos; //type: Fib::Nodes::Node::Global::Summary::Protos

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos> protos;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total> total;
        
}; // Fib::Nodes::Node::Global::Summary


class Fib::Nodes::Node::Global::Summary::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonInfo; //type: Fib::Nodes::Node::Global::Summary::Total::CommonInfo
        class TotalCounters; //type: Fib::Nodes::Node::Global::Summary::Total::TotalCounters

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::CommonInfo> common_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters> total_counters;
        
}; // Fib::Nodes::Node::Global::Summary::Total


class Fib::Nodes::Node::Global::Summary::Total::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject> > array_number_of_object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry> > array_number_of_retry;
        
}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters


class Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry : public ydk::Entity
{
    public:
        ArrayNumberOfRetry();
        ~ArrayNumberOfRetry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Proto; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto> > proto;
        
}; // Fib::Nodes::Node::Global::Summary::Protos


class Fib::Nodes::Node::Global::Summary::Protos::Proto : public ydk::Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: FibafiProto
        class CommonInfo; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo
        class Summary_; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo> common_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_> summary;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto


class Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BaseObject; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject
        class SummaryCounts; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts
        class Health; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject> base_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health> health;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts> summary_counts;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject : public ydk::Entity
{
    public:
        BaseObject();
        ~BaseObject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject> > array_number_of_object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry> > array_number_of_retry;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry : public ydk::Entity
{
    public:
        ArrayNumberOfRetry();
        ~ArrayNumberOfRetry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjHistoryProtos; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos> obj_history_protos;
        
}; // Fib::Nodes::Node::Global::ObjectHistory


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos : public ydk::Entity
{
    public:
        ObjHistoryProtos();
        ~ObjHistoryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjHistoryProto; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto> > obj_history_proto;
        
}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto : public ydk::Entity
{
    public:
        ObjHistoryProto();
        ~ObjHistoryProto();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: FibafiProto
        class BaseObject; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject
        class ObjectHistory_; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject> base_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_> object_history;
        
}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject : public ydk::Entity
{
    public:
        BaseObject();
        ~BaseObject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Fib::Nodes::Node::Protocols::Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol> > protocol;
        
}; // Fib::Nodes::Node::Protocols


class Fib::Nodes::Node::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class NhIds; //type: Fib::Nodes::Node::Protocols::Protocol::NhIds
        class ExternalClientSummaries; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries
        class Misc; //type: Fib::Nodes::Node::Protocols::Protocol::Misc
        class LocalLabel; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries> external_client_summaries;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll> external_summary_all;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries> fib_summaries;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog> frr_log;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState> issu_state;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel> local_label;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc> misc;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::NhIds> nh_ids;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource> resource;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs> vrfs;
        
}; // Fib::Nodes::Node::Protocols::Protocol


class Fib::Nodes::Node::Protocols::Protocol::IssuState : public ydk::Entity
{
    public:
        IssuState();
        ~IssuState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState> > fis_proto_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::IssuState


class Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState : public ydk::Entity
{
    public:
        FisProtoState();
        ~FisProtoState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo> resource_detail_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo> resource_hardware_egress_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo> resource_hardware_ingress_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo> resource_summary_info;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo : public ydk::Entity
{
    public:
        ResourceDetailInfo();
        ~ResourceDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode : public ydk::Entity
{
    public:
        SrHwrsrcMode();
        ~SrHwrsrcMode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibSummary; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary> > fib_summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary : public ydk::Entity
{
    public:
        FibSummary();
        ~FibSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf table_id; //type: int32
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
        ydk::YLeaf ss_vxlan_ltep_ifh; //type: string
        ydk::YLeaf ss_drop_pl_count; //type: uint32
        class ExclusiveLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement
        class SharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement
        class CrossSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement
        class LabelSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement> shared_load_sharing_element;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement : public ydk::Entity
{
    public:
        ExclusiveLoadSharingElement();
        ~ExclusiveLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll : public ydk::Entity
{
    public:
        ExternalSummaryAll();
        ~ExternalSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sesa_num_client; //type: uint32
        class SesaPlSum; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum> sesa_pl_sum;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum : public ydk::Entity
{
    public:
        SesaPlSum();
        ~SesaPlSum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sep_num_ecd_pathlist; //type: uint32
        ydk::YLeaf sep_num_ecd_pl_unresolved; //type: uint32
        class SepNumEcdPlPerInterest; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest> > sep_num_ecd_pl_per_interest;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest : public ydk::Entity
{
    public:
        SepNumEcdPlPerInterest();
        ~SepNumEcdPlPerInterest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrInterfaces; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces> frr_interfaces;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces : public ydk::Entity
{
    public:
        FrrInterfaces();
        ~FrrInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrInterface; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface> > frr_interface;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface : public ydk::Entity
{
    public:
        FrrInterface();
        ~FrrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_interface_name; //type: string
        class Logs; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs> logs;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Log; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log> > log;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_index; //type: int32
        ydk::YLeaf frr_protocol_type; //type: FibFrrProtocolShow
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_prefix; //type: string
        ydk::YLeaf frr_switching_time; //type: uint32
        ydk::YLeaf bundle_member_interface_name; //type: string
        class FrrTimestamp; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp> frr_timestamp;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp : public ydk::Entity
{
    public:
        FrrTimestamp();
        ~FrrTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf> > vrf;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class IpPrefixDetails; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails
        class Summary; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary
        class InterfaceInfos; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos
        class IpPrefixBriefs; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos> interface_infos;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs> ip_prefix_briefs;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails> ip_prefix_details;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary> summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails : public ydk::Entity
{
    public:
        IpPrefixDetails();
        ~IpPrefixDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpPrefixDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail> > ip_prefix_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail : public ydk::Entity
{
    public:
        IpPrefixDetail();
        ~IpPrefixDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf l2_subscriber_ip_protocol; //type: uint32
        ydk::YLeaf l2tpv3_cookie_length_bits; //type: uint32
        ydk::YLeaf route_for_external_reach_linecard_flag; //type: boolean
        ydk::YLeaf route_is_sr_flag; //type: boolean
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation> detail_fib_entry_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject> > extension_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath> fib_entry_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information> srv6_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation : public ydk::Entity
{
    public:
        DetailFibEntryInformation();
        ~DetailFibEntryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation : public ydk::Entity
{
    public:
        LoadshareInformation();
        ~LoadshareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public ydk::Entity
{
    public:
        LoadInformtionInternalData();
        ~LoadInformtionInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle> > interface_handle;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag> > sanity_flag;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath> > weights_of_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag : public ydk::Entity
{
    public:
        SanityFlag();
        ~SanityFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath : public ydk::Entity
{
    public:
        FibShTblPath();
        ~FibShTblPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public ydk::Entity
{
    public:
        MoreDetailAboutPath();
        ~MoreDetailAboutPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public ydk::Entity
{
    public:
        SpdIpencap();
        ~SpdIpencap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public ydk::Entity
{
    public:
        IpEncapHdr();
        ~IpEncapHdr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_lable; //type: uint32
        ydk::YLeaf recursive_fwd_chain; //type: boolean
        ydk::YLeaf recursive_out_label_valid; //type: boolean
        ydk::YLeaf recursive_out_lable; //type: uint32
        ydk::YLeaf number_of_igp_paths; //type: uint32
        ydk::YLeaf remote_backup; //type: boolean
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public ydk::Entity
{
    public:
        IgpLabelStackArray();
        ~IgpLabelStackArray();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack> > lstack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack : public ydk::Entity
{
    public:
        Lstack();
        ~Lstack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information : public ydk::Entity
{
    public:
        Srv6Information();
        ~Srv6Information();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_is_sripv6_flag; //type: boolean
        ydk::YLeaf srv6_pfx_resolved_via_policy_label; //type: boolean
        ydk::YLeaf sripv6_stats_valid_flag; //type: boolean
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics : public ydk::Entity
{
    public:
        Srv6Statistics();
        ~Srv6Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srv6_packets_forwarded; //type: uint64
        ydk::YLeaf srv6_packets_dropped; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject : public ydk::Entity
{
    public:
        ExtensionObject();
        ~ExtensionObject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibShTblFibExtBag
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe : public ydk::Entity
{
    public:
        SfecdLe();
        ~SfecdLe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_label_flag; //type: boolean
        ydk::YLeaf context_label; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf ss_vxlan_ltep_ifh; //type: string
        ydk::YLeaf ss_drop_pl_count; //type: uint32
        class ExclusiveLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement
        class SharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement
        class CrossSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement
        class LabelSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement> shared_load_sharing_element;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement : public ydk::Entity
{
    public:
        ExclusiveLoadSharingElement();
        ~ExclusiveLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement : public ydk::Entity
{
    public:
        SharedLoadSharingElement();
        ~SharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement : public ydk::Entity
{
    public:
        CrossSharedLoadSharingElement();
        ~CrossSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement : public ydk::Entity
{
    public:
        LabelSharedLoadSharingElement();
        ~LabelSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos : public ydk::Entity
{
    public:
        InterfaceInfos();
        ~InterfaceInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo> > interface_info;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo : public ydk::Entity
{
    public:
        InterfaceInfo();
        ~InterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: FibLink
        class Interfaces; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces> interfaces;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface> > interface;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf per_interface; //type: string
        ydk::YLeaf fib_interface_type; //type: uint32
        ydk::YLeaf fib_id_pointer; //type: uint32
        ydk::YLeaf fib_id_flags; //type: uint32
        ydk::YLeaf fib_id_extension_pointer; //type: uint32
        ydk::YLeaf fib_id_extension_flags; //type: uint32
        ydk::YLeaf number_of_dependent_next_hop_information; //type: uint32
        ydk::YLeaf vrf_local_cef_information_pointer; //type: uint32
        ydk::YLeaf reference_count; //type: uint16
        ydk::YLeaf last_modified_time; //type: uint32
        ydk::YLeaf last_operation; //type: FibidbOper
        ydk::YLeaf protocol_enabled; //type: boolean
        ydk::YLeaf referance_count_for_protocol; //type: uint32
        ydk::YLeaf number_of_input_packets; //type: uint64
        ydk::YLeaf number_of_input_bytes; //type: uint64
        ydk::YLeaf number_of_output_packets; //type: uint64
        ydk::YLeaf number_of_output_bytes; //type: uint64
        ydk::YLeaf interface_up_flag; //type: boolean
        ydk::YLeaf per_packet_load_balancing_flag; //type: boolean
        ydk::YLeaf p2p_interface_flag; //type: boolean
        ydk::YLeaf loopback_interface_flag; //type: boolean
        ydk::YLeaf null_interface_flag; //type: boolean
        ydk::YLeaf tunnel_interface_flag; //type: boolean
        ydk::YLeaf gre_tunnel_interface_flag; //type: boolean
        ydk::YLeaf punt_packets_from_fib_switching_flag; //type: boolean
        ydk::YLeaf drop_packets_while_fib_switching_flag; //type: boolean
        ydk::YLeaf punt_packets_from_linecard_flag; //type: boolean
        ydk::YLeaf primary_ipv4_address; //type: string
        ydk::YLeaf primary_ipv6_address; //type: string
        class DetailFibIntInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation
        class SiInternal; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation> detail_fib_int_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal> si_internal;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation : public ydk::Entity
{
    public:
        DetailFibIntInformation();
        ~DetailFibIntInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_mtu; //type: uint16
        ydk::YLeaf forwarding_flag; //type: boolean
        ydk::YLeaf rpf_configured_flag; //type: boolean
        ydk::YLeaf rpf_mode; //type: FibRpfMode
        ydk::YLeaf default_route_with_rpf; //type: boolean
        ydk::YLeaf self_ping_with_rpf; //type: boolean
        ydk::YLeaf bgp_pa_input_configured_flag; //type: boolean
        ydk::YLeaf source_bgp_pa_input_configured_flag; //type: boolean
        ydk::YLeaf destination_bgp_pa_input_configured_flag; //type: boolean
        ydk::YLeaf bgp_pa_output_configured_flag; //type: boolean
        ydk::YLeaf source_bgp_pa_output_configured_flag; //type: boolean
        ydk::YLeaf destination_bgp_pa_output_configured_flag; //type: boolean
        ydk::YLeaf icmp_flag; //type: uint32
        ydk::YLeaf multi_label_drop_flag; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal : public ydk::Entity
{
    public:
        SiInternal();
        ~SiInternal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibIdbHist; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist
        class FibSrteHeadHist; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist> fib_idb_hist;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist> fib_srte_head_hist;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist : public ydk::Entity
{
    public:
        FibIdbHist();
        ~FibIdbHist();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evt_class_name; //type: string
        class EvtEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry> > evt_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry : public ydk::Entity
{
    public:
        EvtEntry();
        ~EvtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evt_timestamp; //type: string
        ydk::YLeaf evt_name; //type: string
        ydk::YLeaf evt_type; //type: uint8
        ydk::YLeaf evt_many; //type: boolean
        ydk::YLeaf evt_sticky; //type: boolean
        class EvtData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData> > evt_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData : public ydk::Entity
{
    public:
        EvtData();
        ~EvtData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist : public ydk::Entity
{
    public:
        FibSrteHeadHist();
        ~FibSrteHeadHist();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evt_class_name; //type: string
        class EvtEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry> > evt_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry : public ydk::Entity
{
    public:
        EvtEntry();
        ~EvtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evt_timestamp; //type: string
        ydk::YLeaf evt_name; //type: string
        ydk::YLeaf evt_type; //type: uint8
        ydk::YLeaf evt_many; //type: boolean
        ydk::YLeaf evt_sticky; //type: boolean
        class EvtData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData> > evt_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData : public ydk::Entity
{
    public:
        EvtData();
        ~EvtData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs : public ydk::Entity
{
    public:
        IpPrefixBriefs();
        ~IpPrefixBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpPrefixBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief> > ip_prefix_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief : public ydk::Entity
{
    public:
        IpPrefixBrief();
        ~IpPrefixBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf l2_subscriber_ip_protocol; //type: uint32
        ydk::YLeaf l2tpv3_cookie_length_bits; //type: uint32
        ydk::YLeaf route_for_external_reach_linecard_flag; //type: boolean
        ydk::YLeaf route_is_sr_flag; //type: boolean
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation> detail_fib_entry_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject> > extension_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath> fib_entry_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information> srv6_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation : public ydk::Entity
{
    public:
        DetailFibEntryInformation();
        ~DetailFibEntryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation : public ydk::Entity
{
    public:
        LoadshareInformation();
        ~LoadshareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public ydk::Entity
{
    public:
        LoadInformtionInternalData();
        ~LoadInformtionInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class SanityFlag; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag
        class InterfaceHandle; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle
        class WeightsOfPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle> > interface_handle;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag> > sanity_flag;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath> > weights_of_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag : public ydk::Entity
{
    public:
        SanityFlag();
        ~SanityFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle : public ydk::Entity
{
    public:
        InterfaceHandle();
        ~InterfaceHandle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath : public ydk::Entity
{
    public:
        WeightsOfPath();
        ~WeightsOfPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public ydk::Entity
{
    public:
        AdjacencyAddress();
        ~AdjacencyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public ydk::Entity
{
    public:
        PbtsClassIsFallbackMapped();
        ~PbtsClassIsFallbackMapped();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public ydk::Entity
{
    public:
        PbtsFallbackToDrop();
        ~PbtsFallbackToDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public ydk::Entity
{
    public:
        TunnelIsForwardClass();
        ~TunnelIsForwardClass();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath : public ydk::Entity
{
    public:
        FibEntryPath();
        ~FibEntryPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath : public ydk::Entity
{
    public:
        FibShTblPath();
        ~FibShTblPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public ydk::Entity
{
    public:
        MoreDetailAboutPath();
        ~MoreDetailAboutPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public ydk::Entity
{
    public:
        SpdIpencap();
        ~SpdIpencap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public ydk::Entity
{
    public:
        IpEncapHdr();
        ~IpEncapHdr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_encap_hdr_type; //type: FibShIpencapHdr
        ydk::YLeaf ip_encap_hdrp; //type: string
        ydk::YLeaf ip_encap_hdr_dyn; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath : public ydk::Entity
{
    public:
        MplsInformationForPath();
        ~MplsInformationForPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_lable; //type: uint32
        ydk::YLeaf recursive_fwd_chain; //type: boolean
        ydk::YLeaf recursive_out_label_valid; //type: boolean
        ydk::YLeaf recursive_out_lable; //type: uint32
        ydk::YLeaf number_of_igp_paths; //type: uint32
        ydk::YLeaf remote_backup; //type: boolean
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public ydk::Entity
{
    public:
        IgpLabelStackArray();
        ~IgpLabelStackArray();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_labels; //type: uint32
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf nh_address; //type: string
        class Lstack; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack> > lstack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack : public ydk::Entity
{
    public:
        Lstack();
        ~Lstack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information : public ydk::Entity
{
    public:
        Srv6Information();
        ~Srv6Information();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_is_sripv6_flag; //type: boolean
        ydk::YLeaf srv6_pfx_resolved_via_policy_label; //type: boolean
        ydk::YLeaf sripv6_stats_valid_flag; //type: boolean
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics : public ydk::Entity
{
    public:
        Srv6Statistics();
        ~Srv6Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srv6_packets_forwarded; //type: uint64
        ydk::YLeaf srv6_packets_dropped; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject : public ydk::Entity
{
    public:
        ExtensionObject();
        ~ExtensionObject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibShTblFibExtBag
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe : public ydk::Entity
{
    public:
        SfecdLe();
        ~SfecdLe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_label_flag; //type: boolean
        ydk::YLeaf context_label; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::NhIds : public ydk::Entity
{
    public:
        NhIds();
        ~NhIds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhId; //type: Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId> > nh_id;
        
}; // Fib::Nodes::Node::Protocols::Protocol::NhIds


class Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId : public ydk::Entity
{
    public:
        NhId();
        ~NhId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_id_value; //type: int32
        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf nh_interf_handle; //type: string
        ydk::YLeaf nh_address_xr; //type: string
        ydk::YLeaf nh_protocol; //type: uint8
        ydk::YLeaf nh_link_type; //type: uint8
        ydk::YLeaf nh_table_id; //type: uint32
        ydk::YLeaf nh_id; //type: uint32
        ydk::YLeaf nh_id_application; //type: uint8
        ydk::YLeaf version; //type: uint64
        ydk::YLeaf time_of_last_update_in_msec; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries : public ydk::Entity
{
    public:
        ExternalClientSummaries();
        ~ExternalClientSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExternalClientSummary; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary> > external_client_summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary : public ydk::Entity
{
    public:
        ExternalClientSummary();
        ~ExternalClientSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ecd_ver; //type: int32
        ydk::YLeaf id; //type: int32
        ydk::YLeaf ses_client_name; //type: string
        ydk::YLeaf ses_feci_fib_proto; //type: uint32
        ydk::YLeaf ses_num_regs; //type: uint32
        ydk::YLeaf ses_num_pending; //type: uint32
        ydk::YLeaf ses_client_pulsed_time; //type: uint64
        ydk::YLeaf ses_comp_id; //type: uint32
        ydk::YLeaf ses_ecd_version; //type: uint32
        class SesPlSum; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum> ses_pl_sum;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum : public ydk::Entity
{
    public:
        SesPlSum();
        ~SesPlSum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sep_num_ecd_pathlist; //type: uint32
        ydk::YLeaf sep_num_ecd_pl_unresolved; //type: uint32
        class SepNumEcdPlPerInterest; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest> > sep_num_ecd_pl_per_interest;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest : public ydk::Entity
{
    public:
        SepNumEcdPlPerInterest();
        ~SepNumEcdPlPerInterest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest


class Fib::Nodes::Node::Protocols::Protocol::Misc : public ydk::Entity
{
    public:
        Misc();
        ~Misc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_pfi_ifh_upd; //type: uint64
        ydk::YLeaf mi_pfi_ifh_del; //type: uint64
        ydk::YLeaf mi_pfi_ifh_stale; //type: uint64
        ydk::YLeaf mi_tot_plat_upd_time; //type: uint64
        ydk::YLeaf mi_tot_gtrie_time; //type: uint64
        ydk::YLeaf mi_tot_dnld_time; //type: uint64
        ydk::YLeaf mi_clock_time; //type: uint64
        ydk::YLeaf mi_cpu_time; //type: uint64
        ydk::YLeaf mi_shm_reset_ts; //type: uint64
        ydk::YLeaf mi_idb_recycle_count; //type: uint32
        ydk::YLeaf mi_idb_recycle_cleanup_count; //type: uint32
        ydk::YLeaf mi_num_mgmt_list; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_added; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_deleted; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_dropped; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_cached; //type: uint32
        ydk::YLeaf mi_cpuless_init; //type: boolean
        ydk::YLeaf mi_cpuless_count; //type: uint32
        ydk::YLeaf mi_prefer_aib_routes_over_rib_oper; //type: boolean
        ydk::YLeaf mi_prefer_aib_routes_over_rib_cfg; //type: boolean
        ydk::YLeaf mi_xpl_ldi_enabled; //type: boolean
        class MiIssuState; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState
        class MiPlatCapabilities; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities
        class MiIdbExtCleanupFailedCount; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount
        class MiLrpfStatsFail; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail
        class MiLrpfStatsAct; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct
        class MiLrpfNum; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum
        class MiIdbLsecEnabledNum; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum
        class MiNumLispEid; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid
        class MiNumLispValidEid; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid
        class MiCpulessNode; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode
        class MiProtoDbgStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat
        class MiIdbPurgeCntr; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr
        class MiDel; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel
        class MiFrrStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode> > mi_cpuless_node;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel> > mi_del;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat> > mi_frr_stat;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount> > mi_idb_ext_cleanup_failed_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum> > mi_idb_lsec_enabled_num;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr> > mi_idb_purge_cntr;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState> mi_issu_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum> > mi_lrpf_num;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct> > mi_lrpf_stats_act;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail> > mi_lrpf_stats_fail;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid> > mi_num_lisp_eid;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid> > mi_num_lisp_valid_eid;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities> mi_plat_capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat> > mi_proto_dbg_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState : public ydk::Entity
{
    public:
        MiIssuState();
        ~MiIssuState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class FisProtoState; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState> > fis_proto_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState : public ydk::Entity
{
    public:
        FisProtoState();
        ~FisProtoState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities : public ydk::Entity
{
    public:
        MiPlatCapabilities();
        ~MiPlatCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpc_num_l3_lbl_levels; //type: uint8
        ydk::YLeaf fpc_num_l3_lbl_paths; //type: uint8
        ydk::YLeaf fpc_num_l3_lbl_rec_paths; //type: uint8
        ydk::YLeaf fpc_num_l3_ucmp_paths; //type: uint8
        ydk::YLeaf fpc_num_fwding_stages; //type: uint8
        ydk::YLeaf fpc_local_label_split; //type: uint32
        ydk::YLeaf fpc_stats_support; //type: boolean
        ydk::YLeaf fpc_platf_ready_cb_wait; //type: boolean
        ydk::YLeaf fpc_num_paths_per_pbts_class; //type: uint8
        ydk::YLeaf fpc_platf_v4_upd_disable; //type: boolean
        ydk::YLeaf fpc_platf_v6_upd_disable; //type: boolean
        ydk::YLeaf fpc_lba_tuples_default; //type: uint32
        ydk::YLeaf fpc_mraps_support; //type: boolean
        ydk::YLeaf fpc_pbts_defclass_support; //type: boolean
        ydk::YLeaf fpc_loadinfo_filter_support; //type: boolean
        ydk::YLeaf fpc_nhid; //type: boolean
        ydk::YLeaf fpc_platf_temp_back_walk_reqd; //type: boolean
        ydk::YLeaf fpc_link_mpls_nhinfo_in_ipv6_thread_support; //type: boolean
        ydk::YLeaf fpc_exclude_deag_bkup; //type: boolean
        ydk::YLeaf fpc_dlb_support; //type: boolean
        ydk::YLeaf fpc_prefix_filter_support; //type: uint8
        ydk::YLeaf fpc_slowpath_ingress_inject_reqd; //type: boolean
        class FpcLispDecapOverV4; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4
        class FpcLispDecapOverV6; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6
        class FpcLispUcmp; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp
        class FpcResolveViaTable; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4> > fpc_lisp_decap_over_v4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6> > fpc_lisp_decap_over_v6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp> > fpc_lisp_ucmp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable> > fpc_resolve_via_table;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4 : public ydk::Entity
{
    public:
        FpcLispDecapOverV4();
        ~FpcLispDecapOverV4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6 : public ydk::Entity
{
    public:
        FpcLispDecapOverV6();
        ~FpcLispDecapOverV6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp : public ydk::Entity
{
    public:
        FpcLispUcmp();
        ~FpcLispUcmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable : public ydk::Entity
{
    public:
        FpcResolveViaTable();
        ~FpcResolveViaTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount : public ydk::Entity
{
    public:
        MiIdbExtCleanupFailedCount();
        ~MiIdbExtCleanupFailedCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail : public ydk::Entity
{
    public:
        MiLrpfStatsFail();
        ~MiLrpfStatsFail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct : public ydk::Entity
{
    public:
        MiLrpfStatsAct();
        ~MiLrpfStatsAct();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum : public ydk::Entity
{
    public:
        MiLrpfNum();
        ~MiLrpfNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum : public ydk::Entity
{
    public:
        MiIdbLsecEnabledNum();
        ~MiIdbLsecEnabledNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid : public ydk::Entity
{
    public:
        MiNumLispEid();
        ~MiNumLispEid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid : public ydk::Entity
{
    public:
        MiNumLispValidEid();
        ~MiNumLispValidEid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode : public ydk::Entity
{
    public:
        MiCpulessNode();
        ~MiCpulessNode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat : public ydk::Entity
{
    public:
        MiProtoDbgStat();
        ~MiProtoDbgStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpd_gbltbl_entries; //type: uint64
        ydk::YLeaf fpd_gbltbl_rej_entries; //type: uint64
        ydk::YLeaf fpd_vrftbl_entries; //type: uint64
        ydk::YLeaf fpd_vrftbl_rej_entries; //type: uint64
        ydk::YLeaf fpd_num_tbls; //type: uint32
        ydk::YLeaf fpd_bcdl_msgs; //type: uint64
        ydk::YLeaf fpd_route_upd; //type: uint64
        ydk::YLeaf fpd_route_del; //type: uint64
        ydk::YLeaf fpd_route_rcv; //type: uint64
        ydk::YLeaf fpd_route_drops; //type: uint64
        ydk::YLeaf fpd_lbl_recycled; //type: uint64
        ydk::YLeaf fpd_version_mismatch_drops; //type: uint64
        ydk::YLeaf fpd_adj_upd; //type: uint64
        ydk::YLeaf fpd_adj_del; //type: uint64
        ydk::YLeaf fpd_adj_upd_tx; //type: uint64
        ydk::YLeaf fpd_adj_upd_tx_nh_found; //type: uint64
        ydk::YLeaf fpd_adj_upd_tx_retry_created; //type: uint64
        ydk::YLeaf fpd_adj_tx_retry_nh_found; //type: uint64
        ydk::YLeaf fpd_adj_tx_retry_obj_reinit; //type: uint64
        ydk::YLeaf fpd_adj_drops; //type: uint64
        ydk::YLeaf fpd_adj_msg; //type: uint64
        ydk::YLeaf fpd_te_rcv; //type: uint64
        ydk::YLeaf fpd_te_version_mismatch_drops; //type: uint64
        ydk::YLeaf fpd_num_retry_touts; //type: uint64
        ydk::YLeaf fpd_ldi_num_fixedup; //type: uint64
        ydk::YLeaf fpd_ldi_num_correct_fixup; //type: uint64
        ydk::YLeaf fpd_pl_num_queued_fixedup; //type: uint64
        ydk::YLeaf fpd_pl_num_correct_fixup; //type: uint64
        ydk::YLeaf fpd_pl_retry_add_exist; //type: uint64
        ydk::YLeaf fpd_pl_inline_res_q; //type: uint64
        ydk::YLeaf fpd_pl_with_backup_create_count; //type: uint64
        ydk::YLeaf fpd_pl_with_backup_del_count; //type: uint64
        ydk::YLeaf fpd_pl_backup_enable_count; //type: uint64
        ydk::YLeaf fpd_pl_backup_disable_count; //type: uint64
        ydk::YLeaf fpd_pl_fast_nfn_count; //type: uint64
        ydk::YLeaf fpd_ldi_backup_activate_count; //type: uint64
        ydk::YLeaf fpd_ldi_last_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_max_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_min_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_total_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_avg_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_recursion_constraint_count; //type: uint64
        ydk::YLeaf fpd_ldi_num_del_refcnt; //type: uint64
        ydk::YLeaf fpd_retryq_size; //type: uint32
        ydk::YLeaf fpd_num_allocs; //type: uint64
        ydk::YLeaf fpd_num_frees; //type: uint64
        ydk::YLeaf fpd_retryq_timeout; //type: uint32
        ydk::YLeaf fpd_retryq_sched_time; //type: uint32
        class FpdPlatfUpdStats; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats
        class FpdGtrieTiming; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming
        class FpdGbltblSrcEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry
        class FpdVrftblSrcEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry
        class FpdNumRetry; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry> > fpd_gbltbl_src_entry;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming> fpd_gtrie_timing;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry> > fpd_num_retry;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats> fpd_platf_upd_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry> > fpd_vrftbl_src_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats : public ydk::Entity
{
    public:
        FpdPlatfUpdStats();
        ~FpdPlatfUpdStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpus_num_success; //type: uint64
        ydk::YLeaf fpus_num_failure; //type: uint64
        ydk::YLeaf fpus_upd_total_time; //type: uint64
        class FpusObjStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat> > fpus_obj_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat : public ydk::Entity
{
    public:
        FpusObjStat();
        ~FpusObjStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fos_tot_updates; //type: uint64
        ydk::YLeaf fos_tot_upd_time; //type: uint64
        class FosObjActStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat> > fos_obj_act_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat : public ydk::Entity
{
    public:
        FosObjActStat();
        ~FosObjActStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf foas_tot_updates; //type: uint64
        ydk::YLeaf foas_tot_upd_time; //type: uint64
        ydk::YLeaf foas_tot_updates_zero; //type: uint64
        ydk::YLeaf foas_num_success; //type: uint64
        ydk::YLeaf foas_num_failure; //type: uint64
        ydk::YLeaf foas_max_time; //type: uint64
        ydk::YLeaf foas_max_tstamp; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming : public ydk::Entity
{
    public:
        FpdGtrieTiming();
        ~FpdGtrieTiming();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fgt_num_success; //type: uint64
        ydk::YLeaf fgt_num_failure; //type: uint64
        ydk::YLeaf fgt_upd_total_time; //type: uint64
        class FgtGtrieFnTiming; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming> > fgt_gtrie_fn_timing;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming : public ydk::Entity
{
    public:
        FgtGtrieFnTiming();
        ~FgtGtrieFnTiming();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fgft_fn; //type: string
        ydk::YLeaf fgft_tot_updates; //type: uint64
        ydk::YLeaf fgft_tot_updates_zero; //type: uint64
        ydk::YLeaf fgft_tot_upd_time; //type: uint64
        ydk::YLeaf fgft_max_time; //type: uint64
        ydk::YLeaf fgft_max_tstamp; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry : public ydk::Entity
{
    public:
        FpdGbltblSrcEntry();
        ~FpdGbltblSrcEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry : public ydk::Entity
{
    public:
        FpdVrftblSrcEntry();
        ~FpdVrftblSrcEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry : public ydk::Entity
{
    public:
        FpdNumRetry();
        ~FpdNumRetry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr : public ydk::Entity
{
    public:
        MiIdbPurgeCntr();
        ~MiIdbPurgeCntr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FppCntr; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr> > fpp_cntr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr : public ydk::Entity
{
    public:
        FppCntr();
        ~FppCntr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel : public ydk::Entity
{
    public:
        MiDel();
        ~MiDel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tableid; //type: uint32
        ydk::YLeaf prfx; //type: string
        ydk::YLeaf prfx_len; //type: uint16
        ydk::YLeaf prfx_proto; //type: uint16
        ydk::YLeaf msec_time; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat : public ydk::Entity
{
    public:
        MiFrrStat();
        ~MiFrrStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_num_intf_frr; //type: uint32
        ydk::YLeaf mi_num_parent_intf_frr; //type: uint32
        ydk::YLeaf mi_num_pfi_intf_down; //type: uint32
        ydk::YLeaf mi_num_bfd_down; //type: uint32
        ydk::YLeaf mi_num_prot_frr_objects; //type: uint32
        ydk::YLeaf mi_num_bkup_frr_objects; //type: uint32
        ydk::YLeaf mi_num_tunid_allocs; //type: uint32
        ydk::YLeaf mi_num_tunid_alloc_failures; //type: uint32
        ydk::YLeaf mi_num_tunid_frees; //type: uint32
        ydk::YLeaf mi_num_tunid_free_failures; //type: uint32
        ydk::YLeaf mi_num_frr_reset_queue_adds; //type: uint32
        ydk::YLeaf mi_num_frr_reset_queue_remove; //type: uint32
        ydk::YLeaf mi_num_frr_reset; //type: uint32
        ydk::YLeaf mi_num_frr_proto_events; //type: uint32
        ydk::YLeaf mi_num_frr_logs; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel : public ydk::Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Conflicts; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts> conflicts;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts : public ydk::Entity
{
    public:
        Conflicts();
        ~Conflicts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Conflict; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict> > conflict;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict : public ydk::Entity
{
    public:
        Conflict();
        ~Conflict();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf source; //type: FibRouteSource
        ydk::YLeaf ll_ctype; //type: FibllcEntry
        ydk::YLeaf pfx_tbl_id; //type: int32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_len; //type: int32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf source_xr; //type: uint32
        ydk::YLeaf update_ts; //type: uint64
        ydk::YLeaf retry_ts; //type: uint64
        ydk::YLeaf num_retries; //type: uint32
        class Ext; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext> ext;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext : public ydk::Entity
{
    public:
        Ext();
        ~Ext();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibMplsLlcEntryBag
        class Pfx; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx
        class Lsm; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm> lsm;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx> pfx;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx : public ydk::Entity
{
    public:
        Pfx();
        ~Pfx();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf tbl_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm : public ydk::Entity
{
    public:
        Lsm();
        ~Lsm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh; //type: string
        ydk::YLeaf mcast_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm

class MplsForwarding : public ydk::Entity
{
    public:
        MplsForwarding();
        ~MplsForwarding();

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

        class Nodes; //type: MplsForwarding::Nodes

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes> nodes;
        
}; // MplsForwarding


class MplsForwarding::Nodes : public ydk::Entity
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

        class Node; //type: MplsForwarding::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node> > node;
        
}; // MplsForwarding::Nodes


class MplsForwarding::Nodes::Node : public ydk::Entity
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
        class ForwardingSummary; //type: MplsForwarding::Nodes::Node::ForwardingSummary
        class FrrLogs; //type: MplsForwarding::Nodes::Node::FrrLogs
        class LabelFib; //type: MplsForwarding::Nodes::Node::LabelFib
        class Tunnel; //type: MplsForwarding::Nodes::Node::Tunnel
        class FrrDatabase; //type: MplsForwarding::Nodes::Node::FrrDatabase

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::ForwardingSummary> forwarding_summary;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase> frr_database;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs> frr_logs;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib> label_fib;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel> tunnel;
        
}; // MplsForwarding::Nodes::Node


class MplsForwarding::Nodes::Node::ForwardingSummary : public ydk::Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_imposition_entries; //type: uint32
        ydk::YLeaf reserved_label_entries; //type: uint32
        ydk::YLeaf label_switched_entries; //type: uint32
        ydk::YLeaf deleted_stale_entries; //type: uint32
        ydk::YLeaf te_head_entries; //type: uint32
        ydk::YLeaf te_frr_head_entries; //type: uint32
        ydk::YLeaf te_frr_interface_entries; //type: uint32
        ydk::YLeaf te_frr_next_hop_entries; //type: uint32
        ydk::YLeaf te_mid_points_entries; //type: uint32
        ydk::YLeaf te_frr_mid_points_entries; //type: uint32
        ydk::YLeaf te_internal_entries; //type: uint32
        ydk::YLeaf te_frr_internal_entries; //type: uint32
        ydk::YLeaf total_forwarding_updates; //type: uint32
        ydk::YLeaf total_forwarding_update_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_updates; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_added_or_modify_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_delete_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_drop_messages; //type: uint32
        ydk::YLeaf total_p2mp_iir_forwarding_drop_messages; //type: uint32
        ydk::YLeaf lowest_label; //type: uint32
        ydk::YLeaf highest_label; //type: uint32
        ydk::YLeaf ignore_protect; //type: uint32
        ydk::YLeaf mte_head_entries; //type: uint32
        ydk::YLeaf mte_ll_entries; //type: uint32
        ydk::YLeaf mte_midpoint_entries; //type: uint32
        ydk::YLeaf global_dropped_packets; //type: uint64
        ydk::YLeaf global_fragmented_packets; //type: uint64
        ydk::YLeaf global_failed_lookups; //type: uint64
        ydk::YLeaf lrpf_entries; //type: uint32

}; // MplsForwarding::Nodes::Node::ForwardingSummary


class MplsForwarding::Nodes::Node::FrrLogs : public ydk::Entity
{
    public:
        FrrLogs();
        ~FrrLogs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLog; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs::FrrLog> > frr_log;
        
}; // MplsForwarding::Nodes::Node::FrrLogs


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog : public ydk::Entity
{
    public:
        FrrLog();
        ~FrrLog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: int32
        ydk::YLeaf protected_frr_interface_name; //type: string
        ydk::YLeaf next_hop; //type: uint32
        ydk::YLeaf number_of_rewrites_affected; //type: uint32
        ydk::YLeaf switching_time_nsecs; //type: uint32
        ydk::YLeaf main_processing; //type: uint32
        ydk::YLeaf fast_bundle_member_down_interface; //type: uint32
        ydk::YLeaf frr_event_node_id; //type: string
        class StartTime; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime> start_time;
        
}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime


class MplsForwarding::Nodes::Node::LabelFib : public ydk::Entity
{
    public:
        LabelFib();
        ~LabelFib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingDetails; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails
        class Informations; //type: MplsForwarding::Nodes::Node::LabelFib::Informations
        class LabelSecurity; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails> forwarding_details;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations> informations;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity> label_security;
        
}; // MplsForwarding::Nodes::Node::LabelFib


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails : public ydk::Entity
{
    public:
        ForwardingDetails();
        ~ForwardingDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail> > forwarding_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail : public ydk::Entity
{
    public:
        ForwardingDetail();
        ~ForwardingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_value; //type: uint32
        ydk::YLeaf eos; //type: Mplseos
        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> > label_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::LabelFib::Informations : public ydk::Entity
{
    public:
        Informations();
        ~Informations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information> > information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_value; //type: uint32
        ydk::YLeaf eos; //type: Mplseos
        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation> > label_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation> ldi_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity : public ydk::Entity
{
    public:
        LabelSecurity();
        ~LabelSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces
        class Summary; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary> summary;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface> > interface;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf rpf_enabled; //type: boolean
        ydk::YLeaf rpf_supported; //type: boolean
        ydk::YLeaf mld_enabled; //type: boolean
        ydk::YLeaf mld_supported; //type: boolean
        ydk::YLeaf rpf_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64
        ydk::YLeaf rpfifh; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary


class MplsForwarding::Nodes::Node::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingTunnels; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels> forwarding_tunnels;
        
}; // MplsForwarding::Nodes::Node::Tunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels : public ydk::Entity
{
    public:
        ForwardingTunnels();
        ~ForwardingTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingTunnel; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel> > forwarding_tunnel;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel : public ydk::Entity
{
    public:
        ForwardingTunnel();
        ~ForwardingTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class TunnelInfo; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo
        class Fwdg; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg> fwdg;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo> tunnel_info;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo : public ydk::Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint8
        ydk::YLeaf tunnel_is_srte; //type: boolean
        ydk::YLeaf tunnel_resolution_incomplete; //type: boolean
        ydk::YLeaf tunnel_resolution_inconsistent; //type: boolean
        ydk::YLeaf tunnel_is_programmed_to_drop; //type: boolean

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg : public ydk::Entity
{
    public:
        Fwdg();
        ~Fwdg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation> > label_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation> ldi_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::FrrDatabase : public ydk::Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary
        class FrrdbProtectedInterfaceTableSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries
        class FrrdbTunnelMidpointSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary
        class FrrdbTunnelMidpoints; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints
        class FrrdbTunnelHeads; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads
        class FrrdbTunnelHeadSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary
        class FrrdbBackupInterfaceSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries> frrdb_backup_interface_summaries;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries> frrdb_protected_interface_table_summaries;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary> frrdb_summary;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary> frrdb_tunnel_head_summary;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads> frrdb_tunnel_heads;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary> frrdb_tunnel_midpoint_summary;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints> frrdb_tunnel_midpoints;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary : public ydk::Entity
{
    public:
        FrrdbSummary();
        ~FrrdbSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries : public ydk::Entity
{
    public:
        FrrdbProtectedInterfaceTableSummaries();
        ~FrrdbProtectedInterfaceTableSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbProtectedInterfaceTableSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary> > frrdb_protected_interface_table_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary : public ydk::Entity
{
    public:
        FrrdbProtectedInterfaceTableSummary();
        ~FrrdbProtectedInterfaceTableSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary : public ydk::Entity
{
    public:
        FrrdbTunnelMidpointSummary();
        ~FrrdbTunnelMidpointSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints : public ydk::Entity
{
    public:
        FrrdbTunnelMidpoints();
        ~FrrdbTunnelMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbTunnelMidpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint> > frrdb_tunnel_midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint : public ydk::Entity
{
    public:
        FrrdbTunnelMidpoint();
        ~FrrdbTunnelMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_lable_string; //type: string
        ydk::YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb : public ydk::Entity
{
    public:
        FrrDb();
        ~FrrDb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        ydk::YLeaf is_multicast_tunnel; //type: boolean
        ydk::YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg> > multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg : public ydk::Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads : public ydk::Entity
{
    public:
        FrrdbTunnelHeads();
        ~FrrdbTunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbTunnelHead; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead> > frrdb_tunnel_head;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead : public ydk::Entity
{
    public:
        FrrdbTunnelHead();
        ~FrrdbTunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf outgoing_lable_string; //type: string
        ydk::YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb : public ydk::Entity
{
    public:
        FrrDb();
        ~FrrDb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        ydk::YLeaf is_multicast_tunnel; //type: boolean
        ydk::YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg> > multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg : public ydk::Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary : public ydk::Entity
{
    public:
        FrrdbTunnelHeadSummary();
        ~FrrdbTunnelHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries : public ydk::Entity
{
    public:
        FrrdbBackupInterfaceSummaries();
        ~FrrdbBackupInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbBackupInterfaceSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary> > frrdb_backup_interface_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary : public ydk::Entity
{
    public:
        FrrdbBackupInterfaceSummary();
        ~FrrdbBackupInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary

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

class FibafiProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv4_mpls;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ipv6_mpls;

};

class Proto : public ydk::Enum
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

class FibLoadshareShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_load_share_none;
        static const ydk::Enum::YLeaf fib_load_share_per_packet;
        static const ydk::Enum::YLeaf fib_load_share_dest_sharing;

};

class FibFrrProtocolShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frr_protocol_ipv4;
        static const ydk::Enum::YLeaf frr_protocol_ipv6;
        static const ydk::Enum::YLeaf frr_protocol_mpls;

};

class FibNeh : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nh_local;
        static const ydk::Enum::YLeaf nh_remote;
        static const ydk::Enum::YLeaf nh_special;

};

class FibUpdatePathLfaProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_lfa_protected;
        static const ydk::Enum::YLeaf local_lfa_protected;
        static const ydk::Enum::YLeaf remote_lfa_protected;
        static const ydk::Enum::YLeaf ti_lfa_protected;

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

class Mplseos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eos0;
        static const ydk::Enum::YLeaf eos1;

};

class FibllcEntry : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf xc;
        static const ydk::Enum::YLeaf pfx;

};

class NextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tx;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf special;

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

class FibShTblFibExtBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf leaf_extension;

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

class FibProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls;

};

class FibLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_ipv4;
        static const ydk::Enum::YLeaf link_ipv6;
        static const ydk::Enum::YLeaf link_mpls;

};

class SsLbaState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l3;
        static const ydk::Enum::YLeaf l4;

};

class MgmtFibMplsLspRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf head;
        static const ydk::Enum::YLeaf midpoint;

};

class FibRpfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_rpf_mode_strict;
        static const ydk::Enum::YLeaf fib_rpf_mode_loose;
        static const ydk::Enum::YLeaf fib_rpf_mode_unknown;

};

class MgmtFibMplsFrrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partial;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf complete;
        static const ydk::Enum::YLeaf any;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_ */

