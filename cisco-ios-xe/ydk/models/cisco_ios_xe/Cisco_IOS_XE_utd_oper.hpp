#ifndef _CISCO_IOS_XE_UTD_OPER_
#define _CISCO_IOS_XE_UTD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Cisco_IOS_XE_utd_oper {

class UtdOperData : public ydk::Entity
{
    public:
        UtdOperData();
        ~UtdOperData();

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

        class UtdEngineStatus; //type: UtdOperData::UtdEngineStatus
        class UtdIpsUpdateStatus; //type: UtdOperData::UtdIpsUpdateStatus
        class UtdUrlfUpdateStatus; //type: UtdOperData::UtdUrlfUpdateStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_utd_oper::UtdOperData::UtdEngineStatus> utd_engine_status; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_utd_oper::UtdOperData::UtdIpsUpdateStatus> utd_ips_update_status; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_utd_oper::UtdOperData::UtdUrlfUpdateStatus> utd_urlf_update_status; // presence node
        
}; // UtdOperData


class UtdOperData::UtdEngineStatus : public ydk::Entity
{
    public:
        UtdEngineStatus();
        ~UtdEngineStatus();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf profile; //type: string
        ydk::YLeaf status; //type: UtdOperStatusVal
        ydk::YLeaf reason; //type: string
        ydk::YLeaf memory_usage; //type: decimal64
        ydk::YLeaf memory_status; //type: UtdOperStatusVal
        class UtdEngineInstanceStatus; //type: UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus

        ydk::YList utd_engine_instance_status;
        
}; // UtdOperData::UtdEngineStatus


class UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus : public ydk::Entity
{
    public:
        UtdEngineInstanceStatus();
        ~UtdEngineInstanceStatus();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf running; //type: boolean
        ydk::YLeaf status; //type: UtdOperStatusVal
        ydk::YLeaf reason; //type: string

}; // UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus


class UtdOperData::UtdIpsUpdateStatus : public ydk::Entity
{
    public:
        UtdIpsUpdateStatus();
        ~UtdIpsUpdateStatus();

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

        class IpsUpdateStatus; //type: UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_utd_oper::UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus> ips_update_status;
        
}; // UtdOperData::UtdIpsUpdateStatus


class UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus : public ydk::Entity
{
    public:
        IpsUpdateStatus();
        ~IpsUpdateStatus();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf last_update_status; //type: UtdUpdateStatusVal
        ydk::YLeaf last_update_reason; //type: string
        ydk::YLeaf last_successful_update_time; //type: string

}; // UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus


class UtdOperData::UtdUrlfUpdateStatus : public ydk::Entity
{
    public:
        UtdUrlfUpdateStatus();
        ~UtdUrlfUpdateStatus();

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

        class UrlfUpdateStatus; //type: UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_utd_oper::UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus> urlf_update_status;
        
}; // UtdOperData::UtdUrlfUpdateStatus


class UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus : public ydk::Entity
{
    public:
        UrlfUpdateStatus();
        ~UrlfUpdateStatus();

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

        ydk::YLeaf version; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf last_update_status; //type: UtdUpdateStatusVal
        ydk::YLeaf last_update_reason; //type: string
        ydk::YLeaf last_successful_update_time; //type: string

}; // UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus

class UtdOperStatusVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utd_oper_status_unknown;
        static const ydk::Enum::YLeaf utd_oper_status_green;
        static const ydk::Enum::YLeaf utd_oper_status_yellow;
        static const ydk::Enum::YLeaf utd_oper_status_red;
        static const ydk::Enum::YLeaf utd_oper_status_down;

};


}
}

#endif /* _CISCO_IOS_XE_UTD_OPER_ */

