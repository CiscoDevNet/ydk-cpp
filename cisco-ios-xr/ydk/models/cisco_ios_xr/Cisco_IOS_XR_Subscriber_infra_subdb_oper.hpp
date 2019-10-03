#ifndef _CISCO_IOS_XR_SUBSCRIBER_INFRA_SUBDB_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_INFRA_SUBDB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Subscriber_infra_subdb_oper {

class SubscriberDatabase : public ydk::Entity
{
    public:
        SubscriberDatabase();
        ~SubscriberDatabase();

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

        class Nodes; //type: SubscriberDatabase::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Subscriber_infra_subdb_oper::SubscriberDatabase::Nodes> nodes;
        
}; // SubscriberDatabase


class SubscriberDatabase::Nodes : public ydk::Entity
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

        class Node; //type: SubscriberDatabase::Nodes::Node

        ydk::YList node;
        
}; // SubscriberDatabase::Nodes


class SubscriberDatabase::Nodes::Node : public ydk::Entity
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
        class Association; //type: SubscriberDatabase::Nodes::Node::Association
        class Summary; //type: SubscriberDatabase::Nodes::Node::Summary
        class Session; //type: SubscriberDatabase::Nodes::Node::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Subscriber_infra_subdb_oper::SubscriberDatabase::Nodes::Node::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Subscriber_infra_subdb_oper::SubscriberDatabase::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Subscriber_infra_subdb_oper::SubscriberDatabase::Nodes::Node::Session> session;
        
}; // SubscriberDatabase::Nodes::Node


class SubscriberDatabase::Nodes::Node::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Labels; //type: SubscriberDatabase::Nodes::Node::Association::Labels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Subscriber_infra_subdb_oper::SubscriberDatabase::Nodes::Node::Association::Labels> labels;
        
}; // SubscriberDatabase::Nodes::Node::Association


class SubscriberDatabase::Nodes::Node::Association::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Label; //type: SubscriberDatabase::Nodes::Node::Association::Labels::Label

        ydk::YList label;
        
}; // SubscriberDatabase::Nodes::Node::Association::Labels


class SubscriberDatabase::Nodes::Node::Association::Labels::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_label; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf associations; //type: uint32
        ydk::YLeaf varlist_id; //type: uint32
        class Template; //type: SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Subscriber_infra_subdb_oper::SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template> template_;
        
}; // SubscriberDatabase::Nodes::Node::Association::Labels::Label


class SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AssociatedTemplate; //type: SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate

        ydk::YList associated_template;
        
}; // SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template


class SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate : public ydk::Entity
{
    public:
        AssociatedTemplate();
        ~AssociatedTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_type; //type: SubdbObjectTypeData
        ydk::YLeaf template_name; //type: string
        ydk::YLeaf varlist; //type: string

}; // SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate


class SubscriberDatabase::Nodes::Node::Summary : public ydk::Entity
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

        ydk::YLeaf assoc_db_entries; //type: uint32
        ydk::YLeaf assoc_db_associations; //type: uint32
        ydk::YLeaf derived_db_entries; //type: uint32
        ydk::YLeaf config_db_entries; //type: uint32
        ydk::YLeaf interface_db_entries; //type: uint32
        ydk::YLeaf num_ipsub_dhcp; //type: uint32
        ydk::YLeaf num_ipsub_inband; //type: uint32
        ydk::YLeaf num_pppoe; //type: uint32
        ydk::YLeafList subdb_obj_counts_by_type; //type: list of  uint32
        ydk::YLeafList num_subscribers_in_state; //type: list of  uint32
        ydk::YLeafList num_transitions_through_state; //type: list of  uint32

}; // SubscriberDatabase::Nodes::Node::Summary


class SubscriberDatabase::Nodes::Node::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Labels; //type: SubscriberDatabase::Nodes::Node::Session::Labels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Subscriber_infra_subdb_oper::SubscriberDatabase::Nodes::Node::Session::Labels> labels;
        
}; // SubscriberDatabase::Nodes::Node::Session


class SubscriberDatabase::Nodes::Node::Session::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Label; //type: SubscriberDatabase::Nodes::Node::Session::Labels::Label

        ydk::YList label;
        
}; // SubscriberDatabase::Nodes::Node::Session::Labels


class SubscriberDatabase::Nodes::Node::Session::Labels::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_label; //type: string
        ydk::YLeaf session_state; //type: SessionState
        ydk::YLeaf activate_request_id; //type: uint32
        ydk::YLeaf transaction_id; //type: int32
        ydk::YLeaf produce_done_request_id; //type: uint32
        ydk::YLeaf destroy_req_received; //type: boolean
        ydk::YLeaf destroy_request_id; //type: uint32
        ydk::YLeaf is_config_changed; //type: boolean
        ydk::YLeaf is_creator_gone; //type: boolean
        ydk::YLeaf is_delete_notify_done; //type: boolean
        ydk::YLeaf add_modify_done; //type: boolean
        ydk::YLeaf is_rollback_needed; //type: boolean
        ydk::YLeaf is_rollback_in_progress; //type: boolean
        ydk::YLeaf is_server_restart_apply; //type: boolean
        ydk::YLeaf is_rollback_performed; //type: boolean
        ydk::YLeaf repl_pending; //type: boolean
        ydk::YLeaf activate_timer_running; //type: boolean
        ydk::YLeaf apply_timer_running; //type: boolean
        ydk::YLeaf event_queue_size; //type: boolean
        ydk::YLeaf restarts; //type: string
        ydk::YLeaf template_interface_id; //type: uint32

}; // SubscriberDatabase::Nodes::Node::Session::Labels::Label

class SubdbObjectTypeData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf user_profile;
        static const ydk::Enum::YLeaf service_profile;
        static const ydk::Enum::YLeaf subscriber_service;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf ip_subscriber;

        static int get_enum_value(const std::string & name) {
            if (name == "user-profile") return 1;
            if (name == "service-profile") return 2;
            if (name == "subscriber-service") return 3;
            if (name == "ppp") return 4;
            if (name == "ip-subscriber") return 5;
            return -1;
        }
};

class SessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf destroy;
        static const ydk::Enum::YLeaf config_generate;
        static const ydk::Enum::YLeaf feature_registration_wait;
        static const ydk::Enum::YLeaf config_apply;
        static const ydk::Enum::YLeaf config_done;
        static const ydk::Enum::YLeaf config_removed;
        static const ydk::Enum::YLeaf config_error;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf sync;

        static int get_enum_value(const std::string & name) {
            if (name == "init") return 1;
            if (name == "destroy") return 2;
            if (name == "config-generate") return 3;
            if (name == "feature-registration-wait") return 4;
            if (name == "config-apply") return 5;
            if (name == "config-done") return 6;
            if (name == "config-removed") return 7;
            if (name == "config-error") return 8;
            if (name == "error") return 9;
            if (name == "sync") return 11;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_INFRA_SUBDB_OPER_ */

