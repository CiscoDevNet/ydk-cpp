#ifndef _CISCO_IOS_XR_COFO_INFRA_OPER_
#define _CISCO_IOS_XR_COFO_INFRA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cofo_infra_oper {

class Cofo : public ydk::Entity
{
    public:
        Cofo();
        ~Cofo();

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

        class Nodes; //type: Cofo::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_infra_oper::Cofo::Nodes> nodes;
        
}; // Cofo


class Cofo::Nodes : public ydk::Entity
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

        class Node; //type: Cofo::Nodes::Node

        ydk::YList node;
        
}; // Cofo::Nodes


class Cofo::Nodes::Node : public ydk::Entity
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
        class ClientIds; //type: Cofo::Nodes::Node::ClientIds
        class TopicIds; //type: Cofo::Nodes::Node::TopicIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_infra_oper::Cofo::Nodes::Node::ClientIds> client_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_infra_oper::Cofo::Nodes::Node::TopicIds> topic_ids;
        
}; // Cofo::Nodes::Node


class Cofo::Nodes::Node::ClientIds : public ydk::Entity
{
    public:
        ClientIds();
        ~ClientIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientId; //type: Cofo::Nodes::Node::ClientIds::ClientId

        ydk::YList client_id;
        
}; // Cofo::Nodes::Node::ClientIds


class Cofo::Nodes::Node::ClientIds::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf connection_handle; //type: uint32
        ydk::YLeaf peer_handle; //type: uint32
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf purge_timeout; //type: uint32
        ydk::YLeaf host_client; //type: boolean
        ydk::YLeaf connection_state; //type: uint32
        ydk::YLeafList topic_subscribed; //type: list of  uint32
        ydk::YLeafList topic_published; //type: list of  uint32

}; // Cofo::Nodes::Node::ClientIds::ClientId


class Cofo::Nodes::Node::TopicIds : public ydk::Entity
{
    public:
        TopicIds();
        ~TopicIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopicId; //type: Cofo::Nodes::Node::TopicIds::TopicId

        ydk::YList topic_id;
        
}; // Cofo::Nodes::Node::TopicIds


class Cofo::Nodes::Node::TopicIds::TopicId : public ydk::Entity
{
    public:
        TopicId();
        ~TopicId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf topic_id; //type: uint32
        class DatabaseInfoStruct; //type: Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct

        ydk::YList database_info_struct;
        
}; // Cofo::Nodes::Node::TopicIds::TopicId


class Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct : public ydk::Entity
{
    public:
        DatabaseInfoStruct();
        ~DatabaseInfoStruct();

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
        class ClientDbInfoStruct; //type: Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct

        ydk::YList client_db_info_struct;
        
}; // Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct


class Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct : public ydk::Entity
{
    public:
        ClientDbInfoStruct();
        ~ClientDbInfoStruct();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_objects; //type: uint32
        ydk::YLeaf total_valid_items_in_db; //type: uint32
        class CofoObjectPublishedArray; //type: Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray

        ydk::YList cofo_object_published_array;
        
}; // Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct


class Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray : public ydk::Entity
{
    public:
        CofoObjectPublishedArray();
        ~CofoObjectPublishedArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf object_id; //type: uint32
        ydk::YLeaf insert_count; //type: uint32
        ydk::YLeaf item_state; //type: uint32
        ydk::YLeaf cofo_infra_object_key; //type: string
        ydk::YLeaf cofo_infra_object_value; //type: string
        class ObjectAddTime; //type: Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime
        class ObjectDeleteTime; //type: Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime
        class ObjectTxlAddTime; //type: Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime
        class ObjectTxlEncodeTime; //type: Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_infra_oper::Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime> object_add_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_infra_oper::Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime> object_delete_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_infra_oper::Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime> object_txl_add_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_infra_oper::Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime> object_txl_encode_time;
        
}; // Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray


class Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime : public ydk::Entity
{
    public:
        ObjectAddTime();
        ~ObjectAddTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tv_sec; //type: uint32
        ydk::YLeaf tv_nsec; //type: uint32

}; // Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime


class Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime : public ydk::Entity
{
    public:
        ObjectDeleteTime();
        ~ObjectDeleteTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tv_sec; //type: uint32
        ydk::YLeaf tv_nsec; //type: uint32

}; // Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime


class Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime : public ydk::Entity
{
    public:
        ObjectTxlAddTime();
        ~ObjectTxlAddTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tv_sec; //type: uint32
        ydk::YLeaf tv_nsec; //type: uint32

}; // Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime


class Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime : public ydk::Entity
{
    public:
        ObjectTxlEncodeTime();
        ~ObjectTxlEncodeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tv_sec; //type: uint32
        ydk::YLeaf tv_nsec; //type: uint32

}; // Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime


}
}

#endif /* _CISCO_IOS_XR_COFO_INFRA_OPER_ */

