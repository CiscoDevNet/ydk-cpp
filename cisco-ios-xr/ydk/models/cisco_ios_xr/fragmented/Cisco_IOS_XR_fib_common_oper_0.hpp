#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_0_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node> > node;
        
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

        class Summary; //type: Fib::Nodes::Node::Global::Summary
        class ObjectHistory; //type: Fib::Nodes::Node::Global::ObjectHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory> object_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary> summary;
        
}; // Fib::Nodes::Node::Global


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto> > obj_history_proto;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos> protos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total> total;
        
}; // Fib::Nodes::Node::Global::Summary


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto> > proto;
        
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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health> health;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts> summary_counts;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject> > array_number_of_object;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry> > array_number_of_retry;
        
}; // Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject> > array_number_of_object;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry> > array_number_of_retry;
        
}; // Fib::Nodes::Node::Global::Summary::Total::TotalCounters


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol> > protocol;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes> exact_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries> external_client_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll> external_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries> fib_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog> frr_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState> issu_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel> local_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc> misc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::NhIds> nh_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource> resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs> vrfs;
        
}; // Fib::Nodes::Node::Protocols::Protocol


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes : public ydk::Entity
{
    public:
        ExactRoutes();
        ~ExactRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExactRoute; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute> > exact_route;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute : public ydk::Entity
{
    public:
        ExactRoute();
        ~ExactRoute();

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
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf destination; //type: string
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
        ydk::YLeaf l2_subscriber_ip_protocol; //type: uint32
        ydk::YLeaf l2tpv3_cookie_length_bits; //type: uint32
        ydk::YLeaf route_for_external_reach_linecard_flag; //type: boolean
        ydk::YLeaf route_is_sr_flag; //type: boolean
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation> detail_fib_entry_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject> > extension_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath> fib_entry_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information> srv6_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation : public ydk::Entity
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
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation : public ydk::Entity
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
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public ydk::Entity
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
        class SanityFlag; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag
        class InterfaceHandle; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle
        class WeightsOfPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle> > interface_handle;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag> > sanity_flag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath> > weights_of_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject : public ydk::Entity
{
    public:
        ExtensionObject();
        ~ExtensionObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibShTblFibExtBag
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe : public ydk::Entity
{
    public:
        SfecdLe();
        ~SfecdLe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_label_flag; //type: boolean
        ydk::YLeaf context_label; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath : public ydk::Entity
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

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath : public ydk::Entity
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
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public ydk::Entity
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
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public ydk::Entity
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
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath : public ydk::Entity
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
        class RecursiveLblStack; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack> > recursive_lbl_stack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public ydk::Entity
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
        class Lstack; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack> > lstack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack : public ydk::Entity
{
    public:
        Lstack();
        ~Lstack();

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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information : public ydk::Entity
{
    public:
        Srv6Information();
        ~Srv6Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_is_sripv6_flag; //type: boolean
        ydk::YLeaf srv6_pfx_resolved_via_policy_label; //type: boolean
        ydk::YLeaf sripv6_stats_valid_flag; //type: boolean
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics : public ydk::Entity
{
    public:
        Srv6Statistics();
        ~Srv6Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srv6_packets_forwarded; //type: uint64
        ydk::YLeaf srv6_packets_dropped; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries : public ydk::Entity
{
    public:
        ExternalClientSummaries();
        ~ExternalClientSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExternalClientSummary; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary> > external_client_summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary : public ydk::Entity
{
    public:
        ExternalClientSummary();
        ~ExternalClientSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum> ses_pl_sum;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum : public ydk::Entity
{
    public:
        SesPlSum();
        ~SesPlSum();

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
        class SepNumEcdPlPerInterest; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest> > sep_num_ecd_pl_per_interest;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest> > sep_num_ecd_pl_per_interest;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary> > fib_summary;
        
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
        ydk::YLeaf ss_vxlan_ltep_ifh; //type: string
        ydk::YLeaf ss_drop_pl_count; //type: uint32
        class ExclusiveLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement
        class SharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement
        class CrossSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement
        class LabelSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement
        class PrefixMasklenDistribution; //type: Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution> prefix_masklen_distribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement> shared_load_sharing_element;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe> > broadcast_prefixe;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix> > multicast_prefix;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe> > unicast_prefixe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface> > frr_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log> > log;
        
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

        ydk::YLeaf log_index; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState> > fis_proto_state;
        
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


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel : public ydk::Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Conflicts; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts> conflicts;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts : public ydk::Entity
{
    public:
        Conflicts();
        ~Conflicts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Conflict; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict> > conflict;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict : public ydk::Entity
{
    public:
        Conflict();
        ~Conflict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext> ext;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext : public ydk::Entity
{
    public:
        Ext();
        ~Ext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibMplsLlcEntryBag
        class Pfx; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx
        class Lsm; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm> lsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx> pfx;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm : public ydk::Entity
{
    public:
        Lsm();
        ~Lsm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh; //type: string
        ydk::YLeaf mcast_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx : public ydk::Entity
{
    public:
        Pfx();
        ~Pfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf tbl_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx


class Fib::Nodes::Node::Protocols::Protocol::Misc : public ydk::Entity
{
    public:
        Misc();
        ~Misc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode> > mi_cpuless_node;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel> > mi_del;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat> > mi_frr_stat;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount> > mi_idb_ext_cleanup_failed_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum> > mi_idb_lsec_enabled_num;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr> > mi_idb_purge_cntr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState> mi_issu_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum> > mi_lrpf_num;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct> > mi_lrpf_stats_act;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail> > mi_lrpf_stats_fail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid> > mi_num_lisp_eid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid> > mi_num_lisp_valid_eid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities> mi_plat_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat> > mi_proto_dbg_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode : public ydk::Entity
{
    public:
        MiCpulessNode();
        ~MiCpulessNode();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel : public ydk::Entity
{
    public:
        MiDel();
        ~MiDel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount : public ydk::Entity
{
    public:
        MiIdbExtCleanupFailedCount();
        ~MiIdbExtCleanupFailedCount();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum : public ydk::Entity
{
    public:
        MiIdbLsecEnabledNum();
        ~MiIdbLsecEnabledNum();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr : public ydk::Entity
{
    public:
        MiIdbPurgeCntr();
        ~MiIdbPurgeCntr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FppCntr; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr> > fpp_cntr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr : public ydk::Entity
{
    public:
        FppCntr();
        ~FppCntr();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState : public ydk::Entity
{
    public:
        MiIssuState();
        ~MiIssuState();

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
        class FisProtoState; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState> > fis_proto_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum : public ydk::Entity
{
    public:
        MiLrpfNum();
        ~MiLrpfNum();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct : public ydk::Entity
{
    public:
        MiLrpfStatsAct();
        ~MiLrpfStatsAct();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail : public ydk::Entity
{
    public:
        MiLrpfStatsFail();
        ~MiLrpfStatsFail();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid : public ydk::Entity
{
    public:
        MiNumLispEid();
        ~MiNumLispEid();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid : public ydk::Entity
{
    public:
        MiNumLispValidEid();
        ~MiNumLispValidEid();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities : public ydk::Entity
{
    public:
        MiPlatCapabilities();
        ~MiPlatCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4> > fpc_lisp_decap_over_v4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6> > fpc_lisp_decap_over_v6;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp> > fpc_lisp_ucmp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable> > fpc_resolve_via_table;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4 : public ydk::Entity
{
    public:
        FpcLispDecapOverV4();
        ~FpcLispDecapOverV4();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6 : public ydk::Entity
{
    public:
        FpcLispDecapOverV6();
        ~FpcLispDecapOverV6();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp : public ydk::Entity
{
    public:
        FpcLispUcmp();
        ~FpcLispUcmp();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable : public ydk::Entity
{
    public:
        FpcResolveViaTable();
        ~FpcResolveViaTable();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat : public ydk::Entity
{
    public:
        MiProtoDbgStat();
        ~MiProtoDbgStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry> > fpd_gbltbl_src_entry;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming> fpd_gtrie_timing;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry> > fpd_num_retry;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats> fpd_platf_upd_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry> > fpd_vrftbl_src_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry : public ydk::Entity
{
    public:
        FpdGbltblSrcEntry();
        ~FpdGbltblSrcEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming : public ydk::Entity
{
    public:
        FpdGtrieTiming();
        ~FpdGtrieTiming();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming> > fgt_gtrie_fn_timing;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming : public ydk::Entity
{
    public:
        FgtGtrieFnTiming();
        ~FgtGtrieFnTiming();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry : public ydk::Entity
{
    public:
        FpdNumRetry();
        ~FpdNumRetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats : public ydk::Entity
{
    public:
        FpdPlatfUpdStats();
        ~FpdPlatfUpdStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat> > fpus_obj_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat : public ydk::Entity
{
    public:
        FpusObjStat();
        ~FpusObjStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fos_tot_updates; //type: uint64
        ydk::YLeaf fos_tot_upd_time; //type: uint64
        class FosObjActStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat> > fos_obj_act_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat : public ydk::Entity
{
    public:
        FosObjActStat();
        ~FosObjActStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry : public ydk::Entity
{
    public:
        FpdVrftblSrcEntry();
        ~FpdVrftblSrcEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry


class Fib::Nodes::Node::Protocols::Protocol::NhIds : public ydk::Entity
{
    public:
        NhIds();
        ~NhIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhId; //type: Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId> > nh_id;
        
}; // Fib::Nodes::Node::Protocols::Protocol::NhIds


class Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId : public ydk::Entity
{
    public:
        NhId();
        ~NhId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo> resource_hardware_egress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo> resource_hardware_ingress_info;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState> > sr_shm_state;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState> > sr_shm_state;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState> > sr_shm_state;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode> > sr_hwrsrc_mode;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState> > sr_shm_state;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf> > vrf;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos> interface_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs> ip_prefix_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails> ip_prefix_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief> nh_info_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail> nh_info_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress> nh_info_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress> nh_info_detail_hardware_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary> summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos : public ydk::Entity
{
    public:
        InterfaceInfos();
        ~InterfaceInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceInfo; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo> > interface_info;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo : public ydk::Entity
{
    public:
        InterfaceInfo();
        ~InterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: FibLink
        class Interfaces; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces> interfaces;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface> > interface;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation> detail_fib_int_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal> si_internal;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation : public ydk::Entity
{
    public:
        DetailFibIntInformation();
        ~DetailFibIntInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibIdbHist; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist
        class FibSrteHeadHist; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist> fib_idb_hist;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist> fib_srte_head_hist;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist : public ydk::Entity
{
    public:
        FibIdbHist();
        ~FibIdbHist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evt_class_name; //type: string
        class EvtEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry> > evt_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry : public ydk::Entity
{
    public:
        EvtEntry();
        ~EvtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData> > evt_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData : public ydk::Entity
{
    public:
        EvtData();
        ~EvtData();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist : public ydk::Entity
{
    public:
        FibSrteHeadHist();
        ~FibSrteHeadHist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evt_class_name; //type: string
        class EvtEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry> > evt_entry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry : public ydk::Entity
{
    public:
        EvtEntry();
        ~EvtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData> > evt_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData : public ydk::Entity
{
    public:
        EvtData();
        ~EvtData();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs : public ydk::Entity
{
    public:
        IpPrefixBriefs();
        ~IpPrefixBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpPrefixBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief> > ip_prefix_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief : public ydk::Entity
{
    public:
        IpPrefixBrief();
        ~IpPrefixBrief();

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
        ydk::YLeaf l2_subscriber_ip_protocol; //type: uint32
        ydk::YLeaf l2tpv3_cookie_length_bits; //type: uint32
        ydk::YLeaf route_for_external_reach_linecard_flag; //type: boolean
        ydk::YLeaf route_is_sr_flag; //type: boolean
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation> detail_fib_entry_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject> > extension_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath> fib_entry_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information> srv6_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation : public ydk::Entity
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
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation : public ydk::Entity
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
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public ydk::Entity
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
        class SanityFlag; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag
        class InterfaceHandle; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle
        class WeightsOfPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle> > interface_handle;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag> > sanity_flag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath> > weights_of_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag

class MgmtFibMplsLspRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf head;
        static const ydk::Enum::YLeaf midpoint;

};

class FibNhinfoExtBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf replicated_nh_info;
        static const ydk::Enum::YLeaf shared_nh_info;

};

class FibafiProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv4_mpls;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ipv6_mpls;

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

class Proto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls;

};

class FibRpfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_rpf_mode_strict;
        static const ydk::Enum::YLeaf fib_rpf_mode_loose;
        static const ydk::Enum::YLeaf fib_rpf_mode_unknown;

};

class FibRouteSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsd;
        static const ydk::Enum::YLeaf rib;
        static const ydk::Enum::YLeaf mrib;

};

class SsLbaState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l3;
        static const ydk::Enum::YLeaf l4;

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

class FibShIpencapHdr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_sh_ip_encap_none;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_ip4;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_ip6;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_udp;
        static const ydk::Enum::YLeaf fib_sh_ip_encap_lisp;

};

class NextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tx;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf special;

};

class FibProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls;

};

class FibLoadshareShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_load_share_none;
        static const ydk::Enum::YLeaf fib_load_share_per_packet;
        static const ydk::Enum::YLeaf fib_load_share_dest_sharing;

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

class FibMplsLlcEntryBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_xc;
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_pfx;
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_lsm;
        static const ydk::Enum::YLeaf fib_mpls_llc_bag_type_max;

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

class FibShTblFibExtBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf leaf_extension;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_0_ */

