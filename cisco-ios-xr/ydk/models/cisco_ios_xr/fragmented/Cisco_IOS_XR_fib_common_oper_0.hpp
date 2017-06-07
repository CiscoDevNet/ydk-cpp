#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_0_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_fib_common_oper {

class FibStatistics : public Entity
{
    public:
        FibStatistics();
        ~FibStatistics();

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

        class Nodes; //type: FibStatistics::Nodes

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes> nodes;
        
}; // FibStatistics


class FibStatistics::Nodes : public Entity
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

        class Node; //type: FibStatistics::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node> > node;
        
}; // FibStatistics::Nodes


class FibStatistics::Nodes::Node : public Entity
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
        class Drops; //type: FibStatistics::Nodes::Node::Drops

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node::Drops> drops;
        
}; // FibStatistics::Nodes::Node


class FibStatistics::Nodes::Node::Drops : public Entity
{
    public:
        Drops();
        ~Drops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_route_packets; //type: uint64
        YLeaf punt_unreachable_packets; //type: uint64
        YLeaf df_unreachable_packets; //type: uint64
        YLeaf encapsulation_failure_packets; //type: uint64
        YLeaf incomplete_adjacency_packets; //type: uint64
        YLeaf unresolved_prefix_packets; //type: uint64
        YLeaf unsupported_feature_packets; //type: uint64
        YLeaf discard_packets; //type: uint64
        YLeaf checksum_error_packets; //type: uint64
        YLeaf fragmenation_consumed_packets; //type: uint64
        YLeaf fragmenation_failure_packets; //type: uint64
        YLeaf null_packets; //type: uint64
        YLeaf rpf_check_failure_packets; //type: uint64
        YLeaf acl_in_rpf_packets; //type: uint64
        YLeaf rp_destination_drop_packets; //type: uint64
        YLeaf total_number_of_drop_packets; //type: uint64
        YLeaf mpls_disabled_interface; //type: uint64
        YLeaf gre_lookup_failed_drop; //type: uint64
        YLeaf gre_error_drop; //type: uint64
        YLeaf lisp_punt_drops; //type: uint64
        YLeaf lisp_encap_error_drops; //type: uint64
        YLeaf lisp_decap_error_drops; //type: uint64
        YLeaf multi_label_drops; //type: uint64

}; // FibStatistics::Nodes::Node::Drops

class Fib : public Entity
{
    public:
        Fib();
        ~Fib();

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

        class Nodes; //type: Fib::Nodes

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes> nodes;
        
}; // Fib


class Fib::Nodes : public Entity
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

        class Node; //type: Fib::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node> > node;
        
}; // Fib::Nodes


class Fib::Nodes::Node : public Entity
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
        class Global; //type: Fib::Nodes::Node::Global
        class Protocols; //type: Fib::Nodes::Node::Protocols

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global> global;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols> protocols;
        
}; // Fib::Nodes::Node


class Fib::Nodes::Node::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: Fib::Nodes::Node::Global::Summary
        class ObjectHistory; //type: Fib::Nodes::Node::Global::ObjectHistory

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory> object_history;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary> summary;
        
}; // Fib::Nodes::Node::Global


class Fib::Nodes::Node::Global::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Total; //type: Fib::Nodes::Node::Global::Summary::Total
        class Protos; //type: Fib::Nodes::Node::Global::Summary::Protos

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos> protos;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total> total;
        
}; // Fib::Nodes::Node::Global::Summary


class Fib::Nodes::Node::Global::Summary::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonInfo; //type: Fib::Nodes::Node::Global::Summary::Total::CommonInfo
        class TotalCounters; //type: Fib::Nodes::Node::Global::Summary::Total::TotalCounters

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::CommonInfo> common_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters> total_counters;
        
}; // Fib::Nodes::Node::Global::Summary::Total


class Fib::Nodes::Node::Global::Summary::Total::CommonInfo : public Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Total::CommonInfo


class Fib::Nodes::Node::Global::Summary::Total::TotalCounters : public Entity
{
    public:
        TotalCounters();
        ~TotalCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_retry_timeouts; //type: uint64
        YLeaf num_retry_ojbects; //type: uint32
        class ArrayNumberOfRetry; //type: Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry
        class ArrayNumberOfObject; //type: Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject> > array_number_of_object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry> > array_number_of_retry;
        
}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters


class Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry : public Entity
{
    public:
        ArrayNumberOfRetry();
        ~ArrayNumberOfRetry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retry_object_type; //type: string
        YLeaf num_retries; //type: uint64

}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry


class Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject : public Entity
{
    public:
        ArrayNumberOfObject();
        ~ArrayNumberOfObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: string
        YLeaf num_objects; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject


class Fib::Nodes::Node::Global::Summary::Protos : public Entity
{
    public:
        Protos();
        ~Protos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Proto; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto> > proto;
        
}; // Fib::Nodes::Node::Global::Summary::Protos


class Fib::Nodes::Node::Global::Summary::Protos::Proto : public Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: FibafiProtoEnum
        class CommonInfo; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo
        class Summary_; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo> common_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_> summary;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto


class Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo : public Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_ : public Entity
{
    public:
        Summary_();
        ~Summary_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BaseObject; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject
        class SummaryCounts; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts
        class Health; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject> base_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health> health;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts> summary_counts;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject : public Entity
{
    public:
        BaseObject();
        ~BaseObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts : public Entity
{
    public:
        SummaryCounts();
        ~SummaryCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_retry_timeouts; //type: uint64
        YLeaf num_retry_ojbects; //type: uint32
        class ArrayNumberOfRetry; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry
        class ArrayNumberOfObject; //type: Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject> > array_number_of_object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry> > array_number_of_retry;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry : public Entity
{
    public:
        ArrayNumberOfRetry();
        ~ArrayNumberOfRetry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retry_object_type; //type: string
        YLeaf num_retries; //type: uint64

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject : public Entity
{
    public:
        ArrayNumberOfObject();
        ~ArrayNumberOfObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: string
        YLeaf num_objects; //type: uint32

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject


class Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health : public Entity
{
    public:
        Health();
        ~Health();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_retry_db_empty; //type: boolean

}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health


class Fib::Nodes::Node::Global::ObjectHistory : public Entity
{
    public:
        ObjectHistory();
        ~ObjectHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ObjHistoryProtos; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos> obj_history_protos;
        
}; // Fib::Nodes::Node::Global::ObjectHistory


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos : public Entity
{
    public:
        ObjHistoryProtos();
        ~ObjHistoryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ObjHistoryProto; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto> > obj_history_proto;
        
}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto : public Entity
{
    public:
        ObjHistoryProto();
        ~ObjHistoryProto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: FibafiProtoEnum
        class BaseObject; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject
        class ObjectHistory_; //type: Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject> base_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_> object_history;
        
}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject : public Entity
{
    public:
        BaseObject();
        ~BaseObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: uint32

}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject


class Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_ : public Entity
{
    public:
        ObjectHistory_();
        ~ObjectHistory_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint32

}; // Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_


class Fib::Nodes::Node::Protocols : public Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Protocol; //type: Fib::Nodes::Node::Protocols::Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol> > protocol;
        
}; // Fib::Nodes::Node::Protocols


class Fib::Nodes::Node::Protocols::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: FibProtocolEnum
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


class Fib::Nodes::Node::Protocols::Protocol::IssuState : public Entity
{
    public:
        IssuState();
        ~IssuState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf imdr_support; //type: boolean
        YLeaf slc_support; //type: boolean
        YLeaf fis_issu_restart; //type: boolean
        YLeaf imdr_eoc_implicit; //type: boolean
        YLeaf slc_eoc_implicit; //type: boolean
        YLeaf eoc_received_imdr_time_stamp; //type: string
        YLeaf eoc_received_slc_time_stamp; //type: string
        YLeaf eod_received_im_time_stamp; //type: string
        YLeaf eod_sent_imdr_time_stamp; //type: string
        YLeaf eod_sent_slc_time_stamp; //type: string
        YLeaf fis_issu_error_ts; //type: uint64
        class FisProtoState; //type: Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState> > fis_proto_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::IssuState


class Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState : public Entity
{
    public:
        FisProtoState();
        ~FisProtoState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: string
        YLeaf aib_eod_time_stamp; //type: string
        YLeaf rsi_eod_valid; //type: boolean
        YLeaf rsi_eod_time_stamp; //type: string
        YLeaf lsd_eod_valid; //type: boolean
        YLeaf lsd_eod_time_stamp; //type: string
        YLeaf lmrib_eod_valid; //type: boolean
        YLeaf lmrib_eod_time_stamp; //type: string
        YLeaf rib_info_valid; //type: boolean
        YLeaf bcdl_tables; //type: uint32
        YLeaf converged_tables; //type: uint32
        YLeaf rib_tables_converged_time_stamp; //type: string
        YLeaf protocol_eod_valid; //type: boolean
        YLeaf protocol_eod_time_stamp; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState


class Fib::Nodes::Node::Protocols::Protocol::Resource : public Entity
{
    public:
        Resource();
        ~Resource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ResourceDetailInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo
        class ResourceHardwareIngressInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo
        class ResourceHardwareEgressInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo
        class ResourceSummaryInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo> resource_detail_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo> resource_hardware_egress_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo> resource_hardware_ingress_info;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo> resource_summary_info;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo : public Entity
{
    public:
        ResourceDetailInfo();
        ~ResourceDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sr_curr_mode; //type: uint32
        YLeaf sr_hwrsrc_info; //type: string
        YLeaf sr_shmwin_oor_count; //type: uint8
        YLeaf sr_hw_oor_count; //type: uint8
        YLeaf sr_in_oor_ts; //type: uint64
        YLeaf sr_out_oor_ts; //type: uint64
        YLeafList sr_hwrsrc_mode; //type: list of  uint32
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState : public Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srs_curr_mode; //type: uint32
        YLeaf srs_avg_avail; //type: uint64
        YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo : public Entity
{
    public:
        ResourceHardwareIngressInfo();
        ~ResourceHardwareIngressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sr_curr_mode; //type: uint32
        YLeaf sr_hwrsrc_info; //type: string
        YLeaf sr_shmwin_oor_count; //type: uint8
        YLeaf sr_hw_oor_count; //type: uint8
        YLeaf sr_in_oor_ts; //type: uint64
        YLeaf sr_out_oor_ts; //type: uint64
        YLeafList sr_hwrsrc_mode; //type: list of  uint32
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState : public Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srs_curr_mode; //type: uint32
        YLeaf srs_avg_avail; //type: uint64
        YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo : public Entity
{
    public:
        ResourceHardwareEgressInfo();
        ~ResourceHardwareEgressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sr_curr_mode; //type: uint32
        YLeaf sr_hwrsrc_info; //type: string
        YLeaf sr_shmwin_oor_count; //type: uint8
        YLeaf sr_hw_oor_count; //type: uint8
        YLeaf sr_in_oor_ts; //type: uint64
        YLeaf sr_out_oor_ts; //type: uint64
        YLeafList sr_hwrsrc_mode; //type: list of  uint32
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState : public Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srs_curr_mode; //type: uint32
        YLeaf srs_avg_avail; //type: uint64
        YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo : public Entity
{
    public:
        ResourceSummaryInfo();
        ~ResourceSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sr_curr_mode; //type: uint32
        YLeaf sr_hwrsrc_info; //type: string
        YLeaf sr_shmwin_oor_count; //type: uint8
        YLeaf sr_hw_oor_count; //type: uint8
        YLeaf sr_in_oor_ts; //type: uint64
        YLeaf sr_out_oor_ts; //type: uint64
        YLeafList sr_hwrsrc_mode; //type: list of  uint32
        class SrShmState; //type: Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState> > sr_shm_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo


class Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState : public Entity
{
    public:
        SrShmState();
        ~SrShmState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srs_curr_mode; //type: uint32
        YLeaf srs_avg_avail; //type: uint64
        YLeaf srs_max_avail; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries : public Entity
{
    public:
        FibSummaries();
        ~FibSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FibSummary; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary> > fib_summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary : public Entity
{
    public:
        FibSummary();
        ~FibSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf table_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf ss_tbl_id; //type: uint32
        YLeaf ss_tbl_id_ptr; //type: uint32
        YLeaf ss_vrf_id; //type: uint32
        YLeaf ss_vr_id; //type: uint32
        YLeaf load_balancing; //type: SsLbaStateEnum
        YLeaf forwarding_elements; //type: uint32
        YLeaf routes; //type: uint32
        YLeaf prefix_in_place_modifications; //type: uint32
        YLeaf stale_prefix_deletes; //type: uint32
        YLeaf load_sharing_elements; //type: uint32
        YLeaf load_sharing_references; //type: uint64
        YLeaf total_load_share_element_bytes; //type: uint32
        YLeaf leaves_used_bytes; //type: uint32
        YLeaf reresolve_entries; //type: uint32
        YLeaf old_unresolve_entries; //type: uint32
        YLeaf new_unresolve_entries; //type: uint32
        YLeaf unresolve_entries; //type: uint32
        YLeaf cef_route_drops; //type: uint32
        YLeaf cef_version_mismatch_route_drops; //type: uint64
        YLeaf delete_cache_num_entries; //type: uint32
        YLeaf existing_leaves_revisions; //type: uint32
        YLeaf fib_default_prefix; //type: uint32
        YLeaf fib_default_prefix_mask_length; //type: uint32
        YLeaf next_hops; //type: uint32
        YLeaf incomplete_next_hops; //type: uint32
        YLeaf resolution_timer; //type: uint32
        YLeaf slow_process_timer; //type: uint32
        YLeaf max_resolution_timer; //type: uint32
        YLeaf imposition_prefixes; //type: uint32
        YLeaf extended_prefixes; //type: uint32
        YLeaf cefl_bl_recycled_routes; //type: uint32
        YLeaf ldi_backwalks; //type: uint32
        YLeaf ss_prot_route_count; //type: uint32
        YLeaf lisp_eid_prefixes; //type: uint32
        YLeaf lisp_eid_valid_prefixes; //type: uint32
        YLeaf lisp_rloc_objects; //type: uint32
        YLeaf ss_vxlan_ltep_ifh; //type: string
        YLeaf ss_drop_pl_count; //type: uint32
        class ExclusiveLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement
        class SharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement
        class CrossSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement
        class LabelSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement> shared_load_sharing_element;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement : public Entity
{
    public:
        ExclusiveLoadSharingElement();
        ~ExclusiveLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement : public Entity
{
    public:
        SharedLoadSharingElement();
        ~SharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement : public Entity
{
    public:
        CrossSharedLoadSharingElement();
        ~CrossSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement : public Entity
{
    public:
        LabelSharedLoadSharingElement();
        ~LabelSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll : public Entity
{
    public:
        ExternalSummaryAll();
        ~ExternalSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sesa_num_client; //type: uint32
        class SesaPlSum; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum> sesa_pl_sum;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll


class Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum : public Entity
{
    public:
        SesaPlSum();
        ~SesaPlSum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sep_num_ecd_pathlist; //type: uint32
        YLeaf sep_num_ecd_pl_unresolved; //type: uint32
        YLeafList sep_num_ecd_pl_per_interest; //type: list of  uint32

}; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum


class Fib::Nodes::Node::Protocols::Protocol::FrrLog : public Entity
{
    public:
        FrrLog();
        ~FrrLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrInterfaces; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces> frr_interfaces;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces : public Entity
{
    public:
        FrrInterfaces();
        ~FrrInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrInterface; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface> > frr_interface;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface : public Entity
{
    public:
        FrrInterface();
        ~FrrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frr_interface_name; //type: string
        class Logs; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs> logs;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs : public Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Log; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log> > log;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log_index; //type: int32
        YLeaf frr_protocol_type; //type: FibFrrProtocolShowEnum
        YLeaf frr_interface_name; //type: string
        YLeaf frr_prefix; //type: string
        YLeaf frr_switching_time; //type: uint32
        YLeaf bundle_member_interface_name; //type: string
        class FrrTimestamp; //type: Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp> frr_timestamp;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log


class Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp : public Entity
{
    public:
        FrrTimestamp();
        ~FrrTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: int32
        YLeaf nano_seconds; //type: int32

}; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp


class Fib::Nodes::Node::Protocols::Protocol::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf> > vrf;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class IpPrefixDetails; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails
        class Summary; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary
        class InterfaceInfos; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos
        class IpPrefixBriefs; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos> interface_infos;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs> ip_prefix_briefs;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails> ip_prefix_details;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary> summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails : public Entity
{
    public:
        IpPrefixDetails();
        ~IpPrefixDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpPrefixDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail> > ip_prefix_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail : public Entity
{
    public:
        IpPrefixDetail();
        ~IpPrefixDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf protocol_type_fib_entry; //type: uint32
        YLeaf platform_hardware; //type: string
        YLeaf number_of_referances_to_path_list; //type: uint32
        YLeaf path_list_flags; //type: uint32
        YLeaf path_list_source; //type: uint32
        YLeaf number_of_referances_to_ldi; //type: uint32
        YLeaf ldi_flags; //type: uint32
        YLeaf flags_external_ldi; //type: uint32
        YLeaf exact_route_result; //type: boolean
        YLeaf prefix_is_static_or_connected; //type: boolean
        YLeaf packet_should_recieve; //type: boolean
        YLeaf prefix_connected; //type: boolean
        YLeaf prefix_for_adjancency; //type: boolean
        YLeaf prefix_for_pic_next_hop; //type: boolean
        YLeaf purgable_after_purge_interval; //type: boolean
        YLeaf broadcast_recive_flag; //type: boolean
        YLeaf broadcast_forward_flag; //type: boolean
        YLeaf zero_by_zero_route_as_default; //type: boolean
        YLeaf external_switch_triggered; //type: boolean
        YLeaf route_attribute_flag; //type: boolean
        YLeaf dummy_real_zero_route; //type: boolean
        YLeaf ldi_lw_flag; //type: uint32
        YLeaf ref_counter_of_ldi_lw_ldi; //type: uint32
        YLeaf type_of_ldi_lw_ldi; //type: uint32
        YLeaf lspa_flags; //type: uint32
        YLeaf version_of_route; //type: uint64
        YLeaf fib_route_download_priority; //type: uint32
        YLeaf time_of_last_update_in_msec; //type: uint64
        YLeaf l2_subscriber_route; //type: boolean
        YLeaf l2_subscriber_xconnect_id; //type: uint32
        YLeaf l2_subscriber_ip_protocol; //type: uint32
        YLeaf l2tpv3_cookie_length_bits; //type: uint32
        YLeaf route_for_external_reach_linecard_flag; //type: boolean
        YLeaf route_is_sr_flag; //type: boolean
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation> detail_fib_entry_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject> > extension_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath> fib_entry_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information> srv6_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation : public Entity
{
    public:
        DetailFibEntryInformation();
        ~DetailFibEntryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fib_entry_version; //type: uint32
        YLeaf per_prefix_accounting; //type: uint8
        YLeaf load_sharing_type; //type: FibLoadshareShowEnum
        YLeaf fib_entry_adjacency_type; //type: FibAdjacencyShowEnum
        YLeaf fib_protocol_type; //type: uint32
        YLeaf afi_fib_protocol_type; //type: uint32
        YLeaf aib_l3_address; //type: string
        YLeaf adjacency_address_length; //type: uint32
        YLeaf adjacency_interface; //type: uint32
        YLeaf fib_special_nh_information_type; //type: uint32
        YLeaf fib_entry_adjacency_address; //type: string
        YLeaf fib_entry_adjacency_interface; //type: uint32
        YLeaf packets_through_fib_entry; //type: uint64
        YLeaf bytes_through_fib_entry; //type: uint64
        YLeaf detailed_prefix_length; //type: uint32
        YLeaf prefix_protocol; //type: uint32
        YLeaf precedence_forpackets; //type: uint8
        YLeaf traffic_index_for_packets; //type: uint8
        YLeaf switch_compontent_id; //type: uint32
        YLeaf fast_adjacency_flag; //type: boolean
        YLeaf illegal_fast_adjacency_flag; //type: boolean
        YLeaf remote_adjacency_flag; //type: boolean
        YLeaf bgp_attribute_id; //type: uint32
        YLeaf bgp_local_attribute_id; //type: uint32
        YLeaf bgp_attribute_origin_as; //type: uint32
        YLeaf bgp_attribute_next_hop_as; //type: uint32
        YLeaf path_string; //type: string
        YLeaf extcom_string; //type: string
        YLeaf com_string; //type: string
        YLeaf extended_community; //type: uint32
        YLeaf qos_group; //type: uint32
        YLeaf mpls_fec; //type: uint32
        YLeaf qppb_qos_group_and_ip_precedence; //type: uint32
        YLeaf flow_tag; //type: uint8
        YLeaf forward_class; //type: uint8
        YLeaf pl_time_of_last_update_in_msec; //type: uint64
        YLeaf ldi_time_of_last_update_in_msec; //type: uint64
        YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
        YLeaf pl_time_stamp_type; //type: uint32
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation : public Entity
{
    public:
        LoadshareInformation();
        ~LoadshareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets_through_load_information; //type: uint64
        YLeaf bytes_through_load_information; //type: uint64
        YLeaf total_packets_through_load_information; //type: uint64
        YLeaf total_bytes_through_load_information; //type: uint64
        YLeaf prefix_of_owner; //type: uint32
        YLeaf mask_length_of_owner; //type: uint32
        YLeaf load_information_reference_count; //type: uint16
        YLeaf per_dest_load_sharing_flag; //type: boolean
        YLeaf load_information_owner_deleted_flag; //type: boolean
        YLeaf loadinfo_sanity_flag; //type: boolean
        YLeaf is_owner; //type: boolean
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public Entity
{
    public:
        LoadInformtionInternalData();
        ~LoadInformtionInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level_ofldis; //type: uint8
        YLeaf number_of_ldis; //type: uint8
        YLeaf maximum_index_arrays; //type: uint32
        YLeaf path_indices; //type: string
        YLeaf path_ldi_numbers; //type: string
        YLeaf maximum_slots; //type: uint32
        YLeaf normalized_weights; //type: string
        YLeaf tunnel_class_value; //type: string
        YLeaf is_pbts_info_valid; //type: boolean
        YLeaf pbts_class_offset; //type: string
        YLeaf pbts_class_num_paths; //type: string
        YLeaf pbts_fallback_mapped_class; //type: string
        YLeaf round_robin_disable; //type: boolean
        YLeaf ldi_next_hop_buckets; //type: uint8
        YLeaf platform_hardware_information; //type: string
        YLeafList sanity_flag; //type: list of  boolean
        YLeafList interface_handle; //type: list of  string
        YLeafList weights_of_path; //type: list of  uint32
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public Entity
{
    public:
        AdjacencyAddress();
        ~AdjacencyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public Entity
{
    public:
        PbtsClassIsFallbackMapped();
        ~PbtsClassIsFallbackMapped();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public Entity
{
    public:
        PbtsFallbackToDrop();
        ~PbtsFallbackToDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public Entity
{
    public:
        TunnelIsForwardClass();
        ~TunnelIsForwardClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath : public Entity
{
    public:
        FibEntryPath();
        ~FibEntryPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath : public Entity
{
    public:
        FibShTblPath();
        ~FibShTblPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hardware_information; //type: string
        YLeaf brief_interface_handle; //type: string
        YLeaf brief_next_hop_prefix; //type: string
        YLeaf via_label_to_recurse; //type: uint32
        YLeaf brief_pnode_address; //type: string
        YLeaf brief_qnode_address; //type: string
        YLeaf brief_lfa_protection_type; //type: FibUpdatePathLfaProtectionEnum
        YLeaf resolved_path; //type: boolean
        YLeaf recursive_path; //type: boolean
        YLeaf packets_received_path; //type: boolean
        YLeaf attached_path; //type: boolean
        YLeaf backup_path; //type: boolean
        YLeaf best_external_path; //type: boolean
        YLeaf protect_ignore; //type: boolean
        YLeaf path_dlb; //type: boolean
        YLeaf path_flags; //type: uint32
        YLeaf path_info_flags; //type: uint16
        YLeaf path_index; //type: uint8
        YLeaf backup_index; //type: uint8
        YLeaf next_hop_index; //type: uint32
        YLeaf parent_interface_handle; //type: string
        YLeaf recursionvia_len; //type: uint8
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public Entity
{
    public:
        MoreDetailAboutPath();
        ~MoreDetailAboutPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address_to_recurse; //type: string
        YLeaf label_to_recurse; //type: uint32
        YLeaf detail_next_hop_prefix; //type: string
        YLeaf next_hop_mask_length; //type: uint8
        YLeaf interface_associated_path; //type: string
        YLeaf next_hop_interface; //type: string
        YLeaf next_hop_vrf; //type: string
        YLeaf tunnle_endpoint_id; //type: uint32
        YLeaf lisprlocid; //type: uint32
        YLeaf number_of_dependencies_this_path; //type: uint32
        YLeaf robin_reset_value; //type: uint8
        YLeaf recurse_prefix_object; //type: boolean
        YLeaf next_prefix_recursion; //type: string
        YLeaf next_prefix_length; //type: uint8
        YLeaf recurse_prefix_object2; //type: boolean
        YLeaf next_prefix_recursion2; //type: string
        YLeaf next_prefix_length2; //type: uint8
        YLeaf detail_fib_adjacency_type; //type: FibAdjacencyShowEnum
        YLeaf current_path_flag; //type: boolean
        YLeaf recursive_path_information; //type: boolean
        YLeaf external_adjacency; //type: boolean
        YLeaf fib_path_nh_information_type; //type: FibNehEnum
        YLeaf fib_path_nh_information_type_special; //type: FibNehSpecialEnum
        YLeaf weight_of_path; //type: uint32
        YLeaf tunnel_class; //type: uint8
        YLeaf tunnel_is_forward_class; //type: boolean
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public Entity
{
    public:
        SpdIpencap();
        ~SpdIpencap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_encap_hdr_count; //type: uint8
        YLeaf ip_encap_locks; //type: uint32
        YLeaf ip_encap_transport_tbl; //type: uint32
        YLeaf ipe_transport_vrf_name; //type: string
        YLeaf ip_encap_transport_af; //type: uint32
        YLeaf ip_encap_payload_af; //type: uint32
        YLeaf ip_encap_payload_mtu; //type: uint16
        YLeaf ip_encap_parent; //type: uint32
        YLeaf ip_encap_parent_type; //type: uint32
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public Entity
{
    public:
        IpEncapHdr();
        ~IpEncapHdr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_encap_hdr_type; //type: FibShIpencapHdrEnum
        YLeaf ip_encap_hdrp; //type: string
        YLeaf ip_encap_hdr_dyn; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath : public Entity
{
    public:
        MplsInformationForPath();
        ~MplsInformationForPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_lable; //type: uint32
        YLeaf recursive_fwd_chain; //type: boolean
        YLeaf recursive_out_label_valid; //type: boolean
        YLeaf recursive_out_lable; //type: uint32
        YLeaf number_of_igp_paths; //type: uint32
        YLeaf remote_backup; //type: boolean
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public Entity
{
    public:
        IgpLabelStackArray();
        ~IgpLabelStackArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_labels; //type: uint32
        YLeaf out_interface; //type: string
        YLeaf nh_address; //type: string
        YLeafList lstack; //type: list of  uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information : public Entity
{
    public:
        Srv6Information();
        ~Srv6Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_is_sripv6_flag; //type: boolean
        YLeaf srv6_pfx_resolved_via_policy_label; //type: boolean
        YLeaf sripv6_stats_valid_flag; //type: boolean
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics : public Entity
{
    public:
        Srv6Statistics();
        ~Srv6Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srv6_packets_forwarded; //type: uint64
        YLeaf srv6_packets_dropped; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject : public Entity
{
    public:
        ExtensionObject();
        ~ExtensionObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: FibShTblFibExtBagEnum
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe : public Entity
{
    public:
        SfecdLe();
        ~SfecdLe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_label_flag; //type: boolean
        YLeaf context_label; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf ss_tbl_id; //type: uint32
        YLeaf ss_tbl_id_ptr; //type: uint32
        YLeaf ss_vrf_id; //type: uint32
        YLeaf ss_vr_id; //type: uint32
        YLeaf load_balancing; //type: SsLbaStateEnum
        YLeaf forwarding_elements; //type: uint32
        YLeaf routes; //type: uint32
        YLeaf prefix_in_place_modifications; //type: uint32
        YLeaf stale_prefix_deletes; //type: uint32
        YLeaf load_sharing_elements; //type: uint32
        YLeaf load_sharing_references; //type: uint64
        YLeaf total_load_share_element_bytes; //type: uint32
        YLeaf leaves_used_bytes; //type: uint32
        YLeaf reresolve_entries; //type: uint32
        YLeaf old_unresolve_entries; //type: uint32
        YLeaf new_unresolve_entries; //type: uint32
        YLeaf unresolve_entries; //type: uint32
        YLeaf cef_route_drops; //type: uint32
        YLeaf cef_version_mismatch_route_drops; //type: uint64
        YLeaf delete_cache_num_entries; //type: uint32
        YLeaf existing_leaves_revisions; //type: uint32
        YLeaf fib_default_prefix; //type: uint32
        YLeaf fib_default_prefix_mask_length; //type: uint32
        YLeaf next_hops; //type: uint32
        YLeaf incomplete_next_hops; //type: uint32
        YLeaf resolution_timer; //type: uint32
        YLeaf slow_process_timer; //type: uint32
        YLeaf max_resolution_timer; //type: uint32
        YLeaf imposition_prefixes; //type: uint32
        YLeaf extended_prefixes; //type: uint32
        YLeaf cefl_bl_recycled_routes; //type: uint32
        YLeaf ldi_backwalks; //type: uint32
        YLeaf ss_prot_route_count; //type: uint32
        YLeaf lisp_eid_prefixes; //type: uint32
        YLeaf lisp_eid_valid_prefixes; //type: uint32
        YLeaf lisp_rloc_objects; //type: uint32
        YLeaf ss_vxlan_ltep_ifh; //type: string
        YLeaf ss_drop_pl_count; //type: uint32
        class ExclusiveLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement
        class SharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement
        class CrossSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement
        class LabelSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement> shared_load_sharing_element;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement : public Entity
{
    public:
        ExclusiveLoadSharingElement();
        ~ExclusiveLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement : public Entity
{
    public:
        SharedLoadSharingElement();
        ~SharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement : public Entity
{
    public:
        CrossSharedLoadSharingElement();
        ~CrossSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement : public Entity
{
    public:
        LabelSharedLoadSharingElement();
        ~LabelSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_load_sharing_element_bytes; //type: uint32
        YLeaf total_load_sharing_element_references; //type: uint64
        YLeaf total_path_list_elements; //type: uint32
        YLeaf recursive_path_list_elements; //type: uint32
        YLeaf platform_shared_path_list_elements; //type: uint32
        YLeaf retry_path_list_elements; //type: uint32
        YLeaf total_load_info_elements; //type: uint32
        YLeaf recursive_load_info_elements; //type: uint32
        YLeaf platform_shared_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos : public Entity
{
    public:
        InterfaceInfos();
        ~InterfaceInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo> > interface_info;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo : public Entity
{
    public:
        InterfaceInfo();
        ~InterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_type; //type: FibLinkEnum
        class Interfaces; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces> interfaces;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface> > interface;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf per_interface; //type: string
        YLeaf fib_interface_type; //type: uint32
        YLeaf fib_id_pointer; //type: uint32
        YLeaf fib_id_flags; //type: uint32
        YLeaf fib_id_extension_pointer; //type: uint32
        YLeaf fib_id_extension_flags; //type: uint32
        YLeaf number_of_dependent_next_hop_information; //type: uint32
        YLeaf vrf_local_cef_information_pointer; //type: uint32
        YLeaf reference_count; //type: uint16
        YLeaf last_modified_time; //type: uint32
        YLeaf last_operation; //type: FibidbOperEnum
        YLeaf protocol_enabled; //type: boolean
        YLeaf referance_count_for_protocol; //type: uint32
        YLeaf number_of_input_packets; //type: uint64
        YLeaf number_of_input_bytes; //type: uint64
        YLeaf number_of_output_packets; //type: uint64
        YLeaf number_of_output_bytes; //type: uint64
        YLeaf interface_up_flag; //type: boolean
        YLeaf per_packet_load_balancing_flag; //type: boolean
        YLeaf p2p_interface_flag; //type: boolean
        YLeaf loopback_interface_flag; //type: boolean
        YLeaf null_interface_flag; //type: boolean
        YLeaf tunnel_interface_flag; //type: boolean
        YLeaf gre_tunnel_interface_flag; //type: boolean
        YLeaf punt_packets_from_fib_switching_flag; //type: boolean
        YLeaf drop_packets_while_fib_switching_flag; //type: boolean
        YLeaf punt_packets_from_linecard_flag; //type: boolean
        YLeaf primary_ipv4_address; //type: string
        YLeaf primary_ipv6_address; //type: string
        class DetailFibIntInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation
        class SiInternal; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation> detail_fib_int_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal> si_internal;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation : public Entity
{
    public:
        DetailFibIntInformation();
        ~DetailFibIntInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_mtu; //type: uint16
        YLeaf forwarding_flag; //type: boolean
        YLeaf rpf_configured_flag; //type: boolean
        YLeaf rpf_mode; //type: FibRpfModeEnum
        YLeaf default_route_with_rpf; //type: boolean
        YLeaf self_ping_with_rpf; //type: boolean
        YLeaf bgp_pa_input_configured_flag; //type: boolean
        YLeaf source_bgp_pa_input_configured_flag; //type: boolean
        YLeaf destination_bgp_pa_input_configured_flag; //type: boolean
        YLeaf bgp_pa_output_configured_flag; //type: boolean
        YLeaf source_bgp_pa_output_configured_flag; //type: boolean
        YLeaf destination_bgp_pa_output_configured_flag; //type: boolean
        YLeaf icmp_flag; //type: uint32
        YLeaf multi_label_drop_flag; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal : public Entity
{
    public:
        SiInternal();
        ~SiInternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FibIdbHist; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist
        class FibSrteHeadHist; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist> fib_idb_hist;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist> fib_srte_head_hist;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist : public Entity
{
    public:
        FibIdbHist();
        ~FibIdbHist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evt_class_name; //type: string
        class EvtEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry> > evt_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry : public Entity
{
    public:
        EvtEntry();
        ~EvtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evt_timestamp; //type: string
        YLeaf evt_name; //type: string
        YLeaf evt_type; //type: uint8
        YLeaf evt_many; //type: boolean
        YLeaf evt_sticky; //type: boolean
        YLeafList evt_data; //type: list of  uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist : public Entity
{
    public:
        FibSrteHeadHist();
        ~FibSrteHeadHist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evt_class_name; //type: string
        class EvtEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry> > evt_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry : public Entity
{
    public:
        EvtEntry();
        ~EvtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evt_timestamp; //type: string
        YLeaf evt_name; //type: string
        YLeaf evt_type; //type: uint8
        YLeaf evt_many; //type: boolean
        YLeaf evt_sticky; //type: boolean
        YLeafList evt_data; //type: list of  uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs : public Entity
{
    public:
        IpPrefixBriefs();
        ~IpPrefixBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpPrefixBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief> > ip_prefix_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief : public Entity
{
    public:
        IpPrefixBrief();
        ~IpPrefixBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf protocol_type_fib_entry; //type: uint32
        YLeaf platform_hardware; //type: string
        YLeaf number_of_referances_to_path_list; //type: uint32
        YLeaf path_list_flags; //type: uint32
        YLeaf path_list_source; //type: uint32
        YLeaf number_of_referances_to_ldi; //type: uint32
        YLeaf ldi_flags; //type: uint32
        YLeaf flags_external_ldi; //type: uint32
        YLeaf exact_route_result; //type: boolean
        YLeaf prefix_is_static_or_connected; //type: boolean
        YLeaf packet_should_recieve; //type: boolean
        YLeaf prefix_connected; //type: boolean
        YLeaf prefix_for_adjancency; //type: boolean
        YLeaf prefix_for_pic_next_hop; //type: boolean
        YLeaf purgable_after_purge_interval; //type: boolean
        YLeaf broadcast_recive_flag; //type: boolean
        YLeaf broadcast_forward_flag; //type: boolean
        YLeaf zero_by_zero_route_as_default; //type: boolean
        YLeaf external_switch_triggered; //type: boolean
        YLeaf route_attribute_flag; //type: boolean
        YLeaf dummy_real_zero_route; //type: boolean
        YLeaf ldi_lw_flag; //type: uint32
        YLeaf ref_counter_of_ldi_lw_ldi; //type: uint32
        YLeaf type_of_ldi_lw_ldi; //type: uint32
        YLeaf lspa_flags; //type: uint32
        YLeaf version_of_route; //type: uint64
        YLeaf fib_route_download_priority; //type: uint32
        YLeaf time_of_last_update_in_msec; //type: uint64
        YLeaf l2_subscriber_route; //type: boolean
        YLeaf l2_subscriber_xconnect_id; //type: uint32
        YLeaf l2_subscriber_ip_protocol; //type: uint32
        YLeaf l2tpv3_cookie_length_bits; //type: uint32
        YLeaf route_for_external_reach_linecard_flag; //type: boolean
        YLeaf route_is_sr_flag; //type: boolean
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation> detail_fib_entry_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject> > extension_object;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath> fib_entry_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information> srv6_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation : public Entity
{
    public:
        DetailFibEntryInformation();
        ~DetailFibEntryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fib_entry_version; //type: uint32
        YLeaf per_prefix_accounting; //type: uint8
        YLeaf load_sharing_type; //type: FibLoadshareShowEnum
        YLeaf fib_entry_adjacency_type; //type: FibAdjacencyShowEnum
        YLeaf fib_protocol_type; //type: uint32
        YLeaf afi_fib_protocol_type; //type: uint32
        YLeaf aib_l3_address; //type: string
        YLeaf adjacency_address_length; //type: uint32
        YLeaf adjacency_interface; //type: uint32
        YLeaf fib_special_nh_information_type; //type: uint32
        YLeaf fib_entry_adjacency_address; //type: string
        YLeaf fib_entry_adjacency_interface; //type: uint32
        YLeaf packets_through_fib_entry; //type: uint64
        YLeaf bytes_through_fib_entry; //type: uint64
        YLeaf detailed_prefix_length; //type: uint32
        YLeaf prefix_protocol; //type: uint32
        YLeaf precedence_forpackets; //type: uint8
        YLeaf traffic_index_for_packets; //type: uint8
        YLeaf switch_compontent_id; //type: uint32
        YLeaf fast_adjacency_flag; //type: boolean
        YLeaf illegal_fast_adjacency_flag; //type: boolean
        YLeaf remote_adjacency_flag; //type: boolean
        YLeaf bgp_attribute_id; //type: uint32
        YLeaf bgp_local_attribute_id; //type: uint32
        YLeaf bgp_attribute_origin_as; //type: uint32
        YLeaf bgp_attribute_next_hop_as; //type: uint32
        YLeaf path_string; //type: string
        YLeaf extcom_string; //type: string
        YLeaf com_string; //type: string
        YLeaf extended_community; //type: uint32
        YLeaf qos_group; //type: uint32
        YLeaf mpls_fec; //type: uint32
        YLeaf qppb_qos_group_and_ip_precedence; //type: uint32
        YLeaf flow_tag; //type: uint8
        YLeaf forward_class; //type: uint8
        YLeaf pl_time_of_last_update_in_msec; //type: uint64
        YLeaf ldi_time_of_last_update_in_msec; //type: uint64
        YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
        YLeaf pl_time_stamp_type; //type: uint32
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation : public Entity
{
    public:
        LoadshareInformation();
        ~LoadshareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets_through_load_information; //type: uint64
        YLeaf bytes_through_load_information; //type: uint64
        YLeaf total_packets_through_load_information; //type: uint64
        YLeaf total_bytes_through_load_information; //type: uint64
        YLeaf prefix_of_owner; //type: uint32
        YLeaf mask_length_of_owner; //type: uint32
        YLeaf load_information_reference_count; //type: uint16
        YLeaf per_dest_load_sharing_flag; //type: boolean
        YLeaf load_information_owner_deleted_flag; //type: boolean
        YLeaf loadinfo_sanity_flag; //type: boolean
        YLeaf is_owner; //type: boolean
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public Entity
{
    public:
        LoadInformtionInternalData();
        ~LoadInformtionInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level_ofldis; //type: uint8
        YLeaf number_of_ldis; //type: uint8
        YLeaf maximum_index_arrays; //type: uint32
        YLeaf path_indices; //type: string
        YLeaf path_ldi_numbers; //type: string
        YLeaf maximum_slots; //type: uint32
        YLeaf normalized_weights; //type: string
        YLeaf tunnel_class_value; //type: string
        YLeaf is_pbts_info_valid; //type: boolean
        YLeaf pbts_class_offset; //type: string
        YLeaf pbts_class_num_paths; //type: string
        YLeaf pbts_fallback_mapped_class; //type: string
        YLeaf round_robin_disable; //type: boolean
        YLeaf ldi_next_hop_buckets; //type: uint8
        YLeaf platform_hardware_information; //type: string
        YLeafList sanity_flag; //type: list of  boolean
        YLeafList interface_handle; //type: list of  string
        YLeafList weights_of_path; //type: list of  uint32
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public Entity
{
    public:
        AdjacencyAddress();
        ~AdjacencyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public Entity
{
    public:
        PbtsClassIsFallbackMapped();
        ~PbtsClassIsFallbackMapped();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public Entity
{
    public:
        PbtsFallbackToDrop();
        ~PbtsFallbackToDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public Entity
{
    public:
        TunnelIsForwardClass();
        ~TunnelIsForwardClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath : public Entity
{
    public:
        FibEntryPath();
        ~FibEntryPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath : public Entity
{
    public:
        FibShTblPath();
        ~FibShTblPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hardware_information; //type: string
        YLeaf brief_interface_handle; //type: string
        YLeaf brief_next_hop_prefix; //type: string
        YLeaf via_label_to_recurse; //type: uint32
        YLeaf brief_pnode_address; //type: string
        YLeaf brief_qnode_address; //type: string
        YLeaf brief_lfa_protection_type; //type: FibUpdatePathLfaProtectionEnum
        YLeaf resolved_path; //type: boolean
        YLeaf recursive_path; //type: boolean
        YLeaf packets_received_path; //type: boolean
        YLeaf attached_path; //type: boolean
        YLeaf backup_path; //type: boolean
        YLeaf best_external_path; //type: boolean
        YLeaf protect_ignore; //type: boolean
        YLeaf path_dlb; //type: boolean
        YLeaf path_flags; //type: uint32
        YLeaf path_info_flags; //type: uint16
        YLeaf path_index; //type: uint8
        YLeaf backup_index; //type: uint8
        YLeaf next_hop_index; //type: uint32
        YLeaf parent_interface_handle; //type: string
        YLeaf recursionvia_len; //type: uint8
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public Entity
{
    public:
        MoreDetailAboutPath();
        ~MoreDetailAboutPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address_to_recurse; //type: string
        YLeaf label_to_recurse; //type: uint32
        YLeaf detail_next_hop_prefix; //type: string
        YLeaf next_hop_mask_length; //type: uint8
        YLeaf interface_associated_path; //type: string
        YLeaf next_hop_interface; //type: string
        YLeaf next_hop_vrf; //type: string
        YLeaf tunnle_endpoint_id; //type: uint32
        YLeaf lisprlocid; //type: uint32
        YLeaf number_of_dependencies_this_path; //type: uint32
        YLeaf robin_reset_value; //type: uint8
        YLeaf recurse_prefix_object; //type: boolean
        YLeaf next_prefix_recursion; //type: string
        YLeaf next_prefix_length; //type: uint8
        YLeaf recurse_prefix_object2; //type: boolean
        YLeaf next_prefix_recursion2; //type: string
        YLeaf next_prefix_length2; //type: uint8
        YLeaf detail_fib_adjacency_type; //type: FibAdjacencyShowEnum
        YLeaf current_path_flag; //type: boolean
        YLeaf recursive_path_information; //type: boolean
        YLeaf external_adjacency; //type: boolean
        YLeaf fib_path_nh_information_type; //type: FibNehEnum
        YLeaf fib_path_nh_information_type_special; //type: FibNehSpecialEnum
        YLeaf weight_of_path; //type: uint32
        YLeaf tunnel_class; //type: uint8
        YLeaf tunnel_is_forward_class; //type: boolean
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public Entity
{
    public:
        SpdIpencap();
        ~SpdIpencap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_encap_hdr_count; //type: uint8
        YLeaf ip_encap_locks; //type: uint32
        YLeaf ip_encap_transport_tbl; //type: uint32
        YLeaf ipe_transport_vrf_name; //type: string
        YLeaf ip_encap_transport_af; //type: uint32
        YLeaf ip_encap_payload_af; //type: uint32
        YLeaf ip_encap_payload_mtu; //type: uint16
        YLeaf ip_encap_parent; //type: uint32
        YLeaf ip_encap_parent_type; //type: uint32
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public Entity
{
    public:
        IpEncapHdr();
        ~IpEncapHdr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_encap_hdr_type; //type: FibShIpencapHdrEnum
        YLeaf ip_encap_hdrp; //type: string
        YLeaf ip_encap_hdr_dyn; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath : public Entity
{
    public:
        MplsInformationForPath();
        ~MplsInformationForPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_lable; //type: uint32
        YLeaf recursive_fwd_chain; //type: boolean
        YLeaf recursive_out_label_valid; //type: boolean
        YLeaf recursive_out_lable; //type: uint32
        YLeaf number_of_igp_paths; //type: uint32
        YLeaf remote_backup; //type: boolean
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public Entity
{
    public:
        IgpLabelStackArray();
        ~IgpLabelStackArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_labels; //type: uint32
        YLeaf out_interface; //type: string
        YLeaf nh_address; //type: string
        YLeafList lstack; //type: list of  uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information : public Entity
{
    public:
        Srv6Information();
        ~Srv6Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_is_sripv6_flag; //type: boolean
        YLeaf srv6_pfx_resolved_via_policy_label; //type: boolean
        YLeaf sripv6_stats_valid_flag; //type: boolean
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics : public Entity
{
    public:
        Srv6Statistics();
        ~Srv6Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srv6_packets_forwarded; //type: uint64
        YLeaf srv6_packets_dropped; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject : public Entity
{
    public:
        ExtensionObject();
        ~ExtensionObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: FibShTblFibExtBagEnum
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe : public Entity
{
    public:
        SfecdLe();
        ~SfecdLe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_label_flag; //type: boolean
        YLeaf context_label; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::NhIds : public Entity
{
    public:
        NhIds();
        ~NhIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NhId; //type: Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId> > nh_id;
        
}; // Fib::Nodes::Node::Protocols::Protocol::NhIds


class Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId : public Entity
{
    public:
        NhId();
        ~NhId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nh_id_value; //type: int32
        YLeaf nh_interface_name; //type: string
        YLeaf nh_address; //type: string
        YLeaf nh_interf_handle; //type: string
        YLeaf nh_address_xr; //type: string
        YLeaf nh_protocol; //type: uint8
        YLeaf nh_link_type; //type: uint8
        YLeaf nh_table_id; //type: uint32
        YLeaf nh_id; //type: uint32
        YLeaf version; //type: uint64
        YLeaf time_of_last_update_in_msec; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries : public Entity
{
    public:
        ExternalClientSummaries();
        ~ExternalClientSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExternalClientSummary; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary> > external_client_summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary : public Entity
{
    public:
        ExternalClientSummary();
        ~ExternalClientSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ecd_ver; //type: int32
        YLeaf id; //type: int32
        YLeaf ses_client_name; //type: string
        YLeaf ses_feci_fib_proto; //type: uint32
        YLeaf ses_num_regs; //type: uint32
        YLeaf ses_num_pending; //type: uint32
        YLeaf ses_client_pulsed_time; //type: uint64
        YLeaf ses_comp_id; //type: uint32
        YLeaf ses_ecd_version; //type: uint32
        class SesPlSum; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum> ses_pl_sum;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum : public Entity
{
    public:
        SesPlSum();
        ~SesPlSum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sep_num_ecd_pathlist; //type: uint32
        YLeaf sep_num_ecd_pl_unresolved; //type: uint32
        YLeafList sep_num_ecd_pl_per_interest; //type: list of  uint32

}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum


class Fib::Nodes::Node::Protocols::Protocol::Misc : public Entity
{
    public:
        Misc();
        ~Misc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mi_pfi_ifh_upd; //type: uint64
        YLeaf mi_pfi_ifh_del; //type: uint64
        YLeaf mi_pfi_ifh_stale; //type: uint64
        YLeaf mi_tot_plat_upd_time; //type: uint64
        YLeaf mi_tot_gtrie_time; //type: uint64
        YLeaf mi_tot_dnld_time; //type: uint64
        YLeaf mi_clock_time; //type: uint64
        YLeaf mi_cpu_time; //type: uint64
        YLeaf mi_shm_reset_ts; //type: uint64
        YLeaf mi_idb_recycle_count; //type: uint32
        YLeaf mi_idb_recycle_cleanup_count; //type: uint32
        YLeaf mi_num_mgmt_list; //type: uint32
        YLeaf mi_num_virtual_ll_addresses_added; //type: uint32
        YLeaf mi_num_virtual_ll_addresses_deleted; //type: uint32
        YLeaf mi_num_virtual_ll_addresses_dropped; //type: uint32
        YLeaf mi_num_virtual_ll_addresses_cached; //type: uint32
        YLeaf mi_cpuless_init; //type: boolean
        YLeaf mi_cpuless_count; //type: uint32
        YLeaf mi_prefer_aib_routes_over_rib_oper; //type: boolean
        YLeaf mi_prefer_aib_routes_over_rib_cfg; //type: boolean
        YLeafList mi_idb_ext_cleanup_failed_count; //type: list of  uint32
        YLeafList mi_lrpf_stats_fail; //type: list of  uint32
        YLeafList mi_lrpf_stats_act; //type: list of  uint32
        YLeafList mi_lrpf_num; //type: list of  uint32
        YLeafList mi_idb_lsec_enabled_num; //type: list of  uint32
        YLeafList mi_num_lisp_eid; //type: list of  uint32
        YLeafList mi_num_lisp_valid_eid; //type: list of  uint32
        YLeafList mi_cpuless_node; //type: list of  uint32
        class MiIssuState; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState
        class MiPlatCapabilities; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities
        class MiProtoDbgStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat
        class MiIdbPurgeCntr; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr
        class MiDel; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel
        class MiFrrStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel> > mi_del;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat> > mi_frr_stat;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr> > mi_idb_purge_cntr;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState> mi_issu_state;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities> mi_plat_capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat> > mi_proto_dbg_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState : public Entity
{
    public:
        MiIssuState();
        ~MiIssuState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf imdr_support; //type: boolean
        YLeaf slc_support; //type: boolean
        YLeaf fis_issu_restart; //type: boolean
        YLeaf imdr_eoc_implicit; //type: boolean
        YLeaf slc_eoc_implicit; //type: boolean
        YLeaf eoc_received_imdr_time_stamp; //type: string
        YLeaf eoc_received_slc_time_stamp; //type: string
        YLeaf eod_received_im_time_stamp; //type: string
        YLeaf eod_sent_imdr_time_stamp; //type: string
        YLeaf eod_sent_slc_time_stamp; //type: string
        YLeaf fis_issu_error_ts; //type: uint64
        class FisProtoState; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState> > fis_proto_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState : public Entity
{
    public:
        FisProtoState();
        ~FisProtoState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: string
        YLeaf aib_eod_time_stamp; //type: string
        YLeaf rsi_eod_valid; //type: boolean
        YLeaf rsi_eod_time_stamp; //type: string
        YLeaf lsd_eod_valid; //type: boolean
        YLeaf lsd_eod_time_stamp; //type: string
        YLeaf lmrib_eod_valid; //type: boolean
        YLeaf lmrib_eod_time_stamp; //type: string
        YLeaf rib_info_valid; //type: boolean
        YLeaf bcdl_tables; //type: uint32
        YLeaf converged_tables; //type: uint32
        YLeaf rib_tables_converged_time_stamp; //type: string
        YLeaf protocol_eod_valid; //type: boolean
        YLeaf protocol_eod_time_stamp; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities : public Entity
{
    public:
        MiPlatCapabilities();
        ~MiPlatCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpc_num_l3_lbl_levels; //type: uint8
        YLeaf fpc_num_l3_lbl_paths; //type: uint8
        YLeaf fpc_num_l3_lbl_rec_paths; //type: uint8
        YLeaf fpc_num_l3_ucmp_paths; //type: uint8
        YLeaf fpc_num_fwding_stages; //type: uint8
        YLeaf fpc_local_label_split; //type: uint32
        YLeaf fpc_stats_support; //type: boolean
        YLeaf fpc_platf_ready_cb_wait; //type: boolean
        YLeaf fpc_num_paths_per_pbts_class; //type: uint8
        YLeaf fpc_platf_v4_upd_disable; //type: boolean
        YLeaf fpc_platf_v6_upd_disable; //type: boolean
        YLeaf fpc_lba_tuples_default; //type: uint32
        YLeaf fpc_mraps_support; //type: boolean
        YLeaf fpc_pbts_defclass_support; //type: boolean
        YLeaf fpc_loadinfo_filter_support; //type: boolean
        YLeaf fpc_nhid; //type: boolean
        YLeaf fpc_platf_temp_back_walk_reqd; //type: boolean
        YLeaf fpc_link_mpls_nhinfo_in_ipv6_thread_support; //type: boolean
        YLeaf fpc_exclude_deag_bkup; //type: boolean
        YLeaf fpc_dlb_support; //type: boolean
        YLeaf fpc_prefix_filter_support; //type: uint8
        YLeaf fpc_slowpath_ingress_inject_reqd; //type: boolean
        class FpcLispDecapOverV4; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4
        class FpcLispDecapOverV6; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6
        class FpcLispUcmp; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp
        class FpcResolveViaTable; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4> > fpc_lisp_decap_over_v4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6> > fpc_lisp_decap_over_v6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp> > fpc_lisp_ucmp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable> > fpc_resolve_via_table;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4 : public Entity
{
    public:
        FpcLispDecapOverV4();
        ~FpcLispDecapOverV4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6 : public Entity
{
    public:
        FpcLispDecapOverV6();
        ~FpcLispDecapOverV6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp : public Entity
{
    public:
        FpcLispUcmp();
        ~FpcLispUcmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable : public Entity
{
    public:
        FpcResolveViaTable();
        ~FpcResolveViaTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat : public Entity
{
    public:
        MiProtoDbgStat();
        ~MiProtoDbgStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpd_gbltbl_entries; //type: uint64
        YLeaf fpd_gbltbl_rej_entries; //type: uint64
        YLeaf fpd_vrftbl_entries; //type: uint64
        YLeaf fpd_vrftbl_rej_entries; //type: uint64
        YLeaf fpd_num_tbls; //type: uint32
        YLeaf fpd_bcdl_msgs; //type: uint64
        YLeaf fpd_route_upd; //type: uint64
        YLeaf fpd_route_del; //type: uint64
        YLeaf fpd_route_rcv; //type: uint64
        YLeaf fpd_route_drops; //type: uint64
        YLeaf fpd_lbl_recycled; //type: uint64
        YLeaf fpd_version_mismatch_drops; //type: uint64
        YLeaf fpd_adj_upd; //type: uint64
        YLeaf fpd_adj_del; //type: uint64
        YLeaf fpd_adj_upd_tx; //type: uint64
        YLeaf fpd_adj_upd_tx_nh_found; //type: uint64
        YLeaf fpd_adj_upd_tx_retry_created; //type: uint64
        YLeaf fpd_adj_tx_retry_nh_found; //type: uint64
        YLeaf fpd_adj_tx_retry_obj_reinit; //type: uint64
        YLeaf fpd_adj_drops; //type: uint64
        YLeaf fpd_adj_msg; //type: uint64
        YLeaf fpd_te_rcv; //type: uint64
        YLeaf fpd_te_version_mismatch_drops; //type: uint64
        YLeaf fpd_num_retry_touts; //type: uint64
        YLeaf fpd_ldi_num_fixedup; //type: uint64
        YLeaf fpd_ldi_num_correct_fixup; //type: uint64
        YLeaf fpd_pl_num_queued_fixedup; //type: uint64
        YLeaf fpd_pl_num_correct_fixup; //type: uint64
        YLeaf fpd_pl_retry_add_exist; //type: uint64
        YLeaf fpd_pl_inline_res_q; //type: uint64
        YLeaf fpd_pl_with_backup_create_count; //type: uint64
        YLeaf fpd_pl_with_backup_del_count; //type: uint64
        YLeaf fpd_pl_backup_enable_count; //type: uint64
        YLeaf fpd_pl_backup_disable_count; //type: uint64
        YLeaf fpd_pl_fast_nfn_count; //type: uint64
        YLeaf fpd_ldi_backup_activate_count; //type: uint64
        YLeaf fpd_ldi_last_backup_activate_time; //type: uint64
        YLeaf fpd_ldi_max_backup_activate_time; //type: uint64
        YLeaf fpd_ldi_min_backup_activate_time; //type: uint64
        YLeaf fpd_ldi_total_backup_activate_time; //type: uint64
        YLeaf fpd_ldi_avg_backup_activate_time; //type: uint64
        YLeaf fpd_recursion_constraint_count; //type: uint64
        YLeaf fpd_ldi_num_del_refcnt; //type: uint64
        YLeaf fpd_retryq_size; //type: uint32
        YLeaf fpd_num_allocs; //type: uint64
        YLeaf fpd_num_frees; //type: uint64
        YLeafList fpd_gbltbl_src_entry; //type: list of  uint64
        YLeafList fpd_vrftbl_src_entry; //type: list of  uint64
        YLeafList fpd_num_retry; //type: list of  uint64
        class FpdPlatfUpdStats; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats
        class FpdGtrieTiming; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming> fpd_gtrie_timing;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats> fpd_platf_upd_stats;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats : public Entity
{
    public:
        FpdPlatfUpdStats();
        ~FpdPlatfUpdStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpus_num_success; //type: uint64
        YLeaf fpus_num_failure; //type: uint64
        YLeaf fpus_upd_total_time; //type: uint64
        class FpusObjStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat> > fpus_obj_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat : public Entity
{
    public:
        FpusObjStat();
        ~FpusObjStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fos_tot_updates; //type: uint64
        YLeaf fos_tot_upd_time; //type: uint64
        class FosObjActStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat> > fos_obj_act_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat : public Entity
{
    public:
        FosObjActStat();
        ~FosObjActStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf foas_tot_updates; //type: uint64
        YLeaf foas_tot_upd_time; //type: uint64
        YLeaf foas_tot_updates_zero; //type: uint64
        YLeaf foas_num_success; //type: uint64
        YLeaf foas_num_failure; //type: uint64
        YLeaf foas_max_time; //type: uint64
        YLeaf foas_max_tstamp; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming : public Entity
{
    public:
        FpdGtrieTiming();
        ~FpdGtrieTiming();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fgt_num_success; //type: uint64
        YLeaf fgt_num_failure; //type: uint64
        YLeaf fgt_upd_total_time; //type: uint64
        class FgtGtrieFnTiming; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming> > fgt_gtrie_fn_timing;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming : public Entity
{
    public:
        FgtGtrieFnTiming();
        ~FgtGtrieFnTiming();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fgft_fn; //type: string
        YLeaf fgft_tot_updates; //type: uint64
        YLeaf fgft_tot_updates_zero; //type: uint64
        YLeaf fgft_tot_upd_time; //type: uint64
        YLeaf fgft_max_time; //type: uint64
        YLeaf fgft_max_tstamp; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr : public Entity
{
    public:
        MiIdbPurgeCntr();
        ~MiIdbPurgeCntr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList fpp_cntr; //type: list of  uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel : public Entity
{
    public:
        MiDel();
        ~MiDel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tableid; //type: uint32
        YLeaf prfx; //type: string
        YLeaf prfx_len; //type: uint16
        YLeaf prfx_proto; //type: uint16
        YLeaf msec_time; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat : public Entity
{
    public:
        MiFrrStat();
        ~MiFrrStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mi_num_intf_frr; //type: uint32
        YLeaf mi_num_parent_intf_frr; //type: uint32
        YLeaf mi_num_pfi_intf_down; //type: uint32
        YLeaf mi_num_bfd_down; //type: uint32
        YLeaf mi_num_prot_frr_objects; //type: uint32
        YLeaf mi_num_bkup_frr_objects; //type: uint32
        YLeaf mi_num_tunid_allocs; //type: uint32
        YLeaf mi_num_tunid_alloc_failures; //type: uint32
        YLeaf mi_num_tunid_frees; //type: uint32
        YLeaf mi_num_tunid_free_failures; //type: uint32
        YLeaf mi_num_frr_reset_queue_adds; //type: uint32
        YLeaf mi_num_frr_reset_queue_remove; //type: uint32
        YLeaf mi_num_frr_reset; //type: uint32
        YLeaf mi_num_frr_proto_events; //type: uint32
        YLeaf mi_num_frr_logs; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel : public Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Conflicts; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts> conflicts;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts : public Entity
{
    public:
        Conflicts();
        ~Conflicts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Conflict; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict> > conflict;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict : public Entity
{
    public:
        Conflict();
        ~Conflict();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: uint32
        YLeaf source; //type: FibRouteSourceEnum
        YLeaf ll_ctype; //type: FibllcEntryEnum
        YLeaf pfx_tbl_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_len; //type: int32
        YLeaf local_label; //type: uint32
        YLeaf source_xr; //type: uint32
        YLeaf update_ts; //type: uint64
        YLeaf retry_ts; //type: uint64
        YLeaf num_retries; //type: uint32
        class Ext; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext> ext;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext : public Entity
{
    public:
        Ext();
        ~Ext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: FibMplsLlcEntryBagEnum
        class Pfx; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx
        class Lsm; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm> lsm;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx> pfx;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx : public Entity
{
    public:
        Pfx();
        ~Pfx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pfx; //type: string
        YLeaf tbl_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm : public Entity
{
    public:
        Lsm();
        ~Lsm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nh; //type: string
        YLeaf mcast_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm

class MplsForwarding : public Entity
{
    public:
        MplsForwarding();
        ~MplsForwarding();

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

        class Nodes; //type: MplsForwarding::Nodes

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes> nodes;
        
}; // MplsForwarding


class MplsForwarding::Nodes : public Entity
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

        class Node; //type: MplsForwarding::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node> > node;
        
}; // MplsForwarding::Nodes


class MplsForwarding::Nodes::Node : public Entity
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


class MplsForwarding::Nodes::Node::ForwardingSummary : public Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_imposition_entries; //type: uint32
        YLeaf reserved_label_entries; //type: uint32
        YLeaf label_switched_entries; //type: uint32
        YLeaf deleted_stale_entries; //type: uint32
        YLeaf te_head_entries; //type: uint32
        YLeaf te_frr_head_entries; //type: uint32
        YLeaf te_frr_interface_entries; //type: uint32
        YLeaf te_frr_next_hop_entries; //type: uint32
        YLeaf te_mid_points_entries; //type: uint32
        YLeaf te_frr_mid_points_entries; //type: uint32
        YLeaf te_internal_entries; //type: uint32
        YLeaf te_frr_internal_entries; //type: uint32
        YLeaf total_forwarding_updates; //type: uint32
        YLeaf total_forwarding_update_messages; //type: uint32
        YLeaf total_p2mp_forwarding_updates; //type: uint32
        YLeaf total_p2mp_forwarding_added_or_modify_messages; //type: uint32
        YLeaf total_p2mp_forwarding_delete_messages; //type: uint32
        YLeaf total_p2mp_forwarding_drop_messages; //type: uint32
        YLeaf total_p2mp_iir_forwarding_drop_messages; //type: uint32
        YLeaf lowest_label; //type: uint32
        YLeaf highest_label; //type: uint32
        YLeaf ignore_protect; //type: uint32
        YLeaf mte_head_entries; //type: uint32
        YLeaf mte_ll_entries; //type: uint32
        YLeaf mte_midpoint_entries; //type: uint32
        YLeaf global_dropped_packets; //type: uint64
        YLeaf global_fragmented_packets; //type: uint64
        YLeaf global_failed_lookups; //type: uint64
        YLeaf lrpf_entries; //type: uint32

}; // MplsForwarding::Nodes::Node::ForwardingSummary


class MplsForwarding::Nodes::Node::FrrLogs : public Entity
{
    public:
        FrrLogs();
        ~FrrLogs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrLog; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs::FrrLog> > frr_log;
        
}; // MplsForwarding::Nodes::Node::FrrLogs


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog : public Entity
{
    public:
        FrrLog();
        ~FrrLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_id; //type: int32
        YLeaf protected_frr_interface_name; //type: string
        YLeaf next_hop; //type: uint32
        YLeaf number_of_rewrites_affected; //type: uint32
        YLeaf switching_time_nsecs; //type: uint32
        YLeaf main_processing; //type: uint32
        YLeaf fast_bundle_member_down_interface; //type: uint32
        YLeaf frr_event_node_id; //type: string
        class StartTime; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime> start_time;
        
}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime : public Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32

}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime


class MplsForwarding::Nodes::Node::LabelFib : public Entity
{
    public:
        LabelFib();
        ~LabelFib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingDetails; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails
        class Informations; //type: MplsForwarding::Nodes::Node::LabelFib::Informations
        class LabelSecurity; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails> forwarding_details;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations> informations;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity> label_security;
        
}; // MplsForwarding::Nodes::Node::LabelFib


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails : public Entity
{
    public:
        ForwardingDetails();
        ~ForwardingDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail> > forwarding_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail : public Entity
{
    public:
        ForwardingDetail();
        ~ForwardingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_value; //type: uint32
        YLeaf eos; //type: MplseosEnum
        YLeaf leaf_local_label; //type: uint32
        YLeaf eos_bit; //type: uint32
        YLeaf hardware_information; //type: string
        YLeaf leaf_referance_count; //type: uint32
        YLeaf leaf_flags; //type: uint32
        YLeaf path_list_referance_count; //type: uint32
        YLeaf path_list_flags; //type: uint32
        YLeaf ldi_referance_count; //type: uint32
        YLeaf ldi_flags; //type: uint32
        YLeaf ldi_type; //type: uint32
        YLeaf ldi_pointer; //type: uint32
        YLeaf lw_ldi_type; //type: uint32
        YLeaf lw_ldi_pointer; //type: uint32
        YLeaf lw_ldi_refernace_count; //type: uint32
        YLeaf lw_shared_ldi_pointer; //type: uint32
        YLeaf lspa_flags; //type: uint32
        YLeaf afi_table_id; //type: uint32
        YLeaf multicast_label; //type: boolean
        YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> > label_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail

class MgmtFibMplsFrrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf partial;
        static const Enum::YLeaf active;
        static const Enum::YLeaf ready;
        static const Enum::YLeaf complete;
        static const Enum::YLeaf any;

};

class FibNehSpecialEnum : public Enum
{
    public:
        static const Enum::YLeaf nh_not_found;
        static const Enum::YLeaf nh_null0;
        static const Enum::YLeaf nh_punt;
        static const Enum::YLeaf nh_drop;
        static const Enum::YLeaf nh_glean;
        static const Enum::YLeaf nh_receive;
        static const Enum::YLeaf nh_broadcast;
        static const Enum::YLeaf nh_external;
        static const Enum::YLeaf nh_lisp;
        static const Enum::YLeaf nh_lookup;
        static const Enum::YLeaf nh_max_type;

};

class ProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf mpls;

};

class FibShIpencapHdrEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_sh_ip_encap_none;
        static const Enum::YLeaf fib_sh_ip_encap_ip4;
        static const Enum::YLeaf fib_sh_ip_encap_ip6;
        static const Enum::YLeaf fib_sh_ip_encap_udp;
        static const Enum::YLeaf fib_sh_ip_encap_lisp;

};

class FibAdjacencyShowEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_adjacency_normal;
        static const Enum::YLeaf fib_adjacency_null;
        static const Enum::YLeaf fib_adjacency_punt;
        static const Enum::YLeaf fib_adjacency_drop;
        static const Enum::YLeaf fib_adjacency_glean;
        static const Enum::YLeaf fib_adjacency_discard;
        static const Enum::YLeaf fib_adjacency_broadcast;
        static const Enum::YLeaf fib_adjacency_external;
        static const Enum::YLeaf fib_adjacency_lisp;
        static const Enum::YLeaf fib_adjacency_unknown;

};

class SsLbaStateEnum : public Enum
{
    public:
        static const Enum::YLeaf l3;
        static const Enum::YLeaf l4;

};

class FibRouteSourceEnum : public Enum
{
    public:
        static const Enum::YLeaf lsd;
        static const Enum::YLeaf rib;
        static const Enum::YLeaf mrib;

};

class FibMplsLlcEntryBagEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_mpls_llc_bag_type_xc;
        static const Enum::YLeaf fib_mpls_llc_bag_type_pfx;
        static const Enum::YLeaf fib_mpls_llc_bag_type_lsm;
        static const Enum::YLeaf fib_mpls_llc_bag_type_max;

};

class FibRpfModeEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_rpf_mode_strict;
        static const Enum::YLeaf fib_rpf_mode_loose;
        static const Enum::YLeaf fib_rpf_mode_unknown;

};

class FibafiProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv4_mpls;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf ipv6_mpls;

};

class MplseosEnum : public Enum
{
    public:
        static const Enum::YLeaf eos0;
        static const Enum::YLeaf eos1;

};

class FibFrrProtocolShowEnum : public Enum
{
    public:
        static const Enum::YLeaf frr_protocol_ipv4;
        static const Enum::YLeaf frr_protocol_ipv6;
        static const Enum::YLeaf frr_protocol_mpls;

};

class FibLinkEnum : public Enum
{
    public:
        static const Enum::YLeaf link_ipv4;
        static const Enum::YLeaf link_ipv6;
        static const Enum::YLeaf link_mpls;

};

class FibUpdatePathLfaProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_lfa_protected;
        static const Enum::YLeaf local_lfa_protected;
        static const Enum::YLeaf remote_lfa_protected;
        static const Enum::YLeaf ti_lfa_protected;

};

class FibLoadshareShowEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_load_share_none;
        static const Enum::YLeaf fib_load_share_per_packet;
        static const Enum::YLeaf fib_load_share_dest_sharing;

};

class FibllcEntryEnum : public Enum
{
    public:
        static const Enum::YLeaf xc;
        static const Enum::YLeaf pfx;

};

class FibNehEnum : public Enum
{
    public:
        static const Enum::YLeaf nh_local;
        static const Enum::YLeaf nh_remote;
        static const Enum::YLeaf nh_special;

};

class NextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf tx;
        static const Enum::YLeaf rx;
        static const Enum::YLeaf special;

};

class MgmtFibMplsLspRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf head;
        static const Enum::YLeaf midpoint;

};

class FibProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf mpls;

};

class FibidbOperEnum : public Enum
{
    public:
        static const Enum::YLeaf fibidb_none;
        static const Enum::YLeaf fibidb_create;
        static const Enum::YLeaf fibidb_delete;
        static const Enum::YLeaf fibidb_modify;
        static const Enum::YLeaf fibidb_max;

};

class FibShTblFibExtBagEnum : public Enum
{
    public:
        static const Enum::YLeaf leaf_extension;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_0_ */

