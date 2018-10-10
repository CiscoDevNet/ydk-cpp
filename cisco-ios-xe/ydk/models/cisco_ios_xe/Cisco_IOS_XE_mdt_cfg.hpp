#ifndef _CISCO_IOS_XE_MDT_CFG_
#define _CISCO_IOS_XE_MDT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_cfg {

class MdtConfigData : public ydk::Entity
{
    public:
        MdtConfigData();
        ~MdtConfigData();

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

        class MdtSubscription; //type: MdtConfigData::MdtSubscription
        class MdtXfrm; //type: MdtConfigData::MdtXfrm

        ydk::YList mdt_subscription;
        ydk::YList mdt_xfrm;
        
}; // MdtConfigData


class MdtConfigData::MdtSubscription : public ydk::Entity
{
    public:
        MdtSubscription();
        ~MdtSubscription();

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

        ydk::YLeaf subscription_id; //type: uint32
        class Base; //type: MdtConfigData::MdtSubscription::Base
        class MdtReceivers; //type: MdtConfigData::MdtSubscription::MdtReceivers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtConfigData::MdtSubscription::Base> base;
        ydk::YList mdt_receivers;
        
}; // MdtConfigData::MdtSubscription


class MdtConfigData::MdtSubscription::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stream; //type: string
        ydk::YLeaf encoding; //type: string
        ydk::YLeaf source_vrf; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf no_trigger; //type: uint32
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf no_synch_on_start; //type: boolean
        ydk::YLeaf no_filter; //type: uint32
        ydk::YLeaf xpath; //type: string
        ydk::YLeaf tdl_uri; //type: string
        ydk::YLeaf transform_name; //type: string

}; // MdtConfigData::MdtSubscription::Base


class MdtConfigData::MdtSubscription::MdtReceivers : public ydk::Entity
{
    public:
        MdtReceivers();
        ~MdtReceivers();

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
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf protocol; //type: string
        ydk::YLeaf profile; //type: string

}; // MdtConfigData::MdtSubscription::MdtReceivers


class MdtConfigData::MdtXfrm : public ydk::Entity
{
    public:
        MdtXfrm();
        ~MdtXfrm();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf fully_specify; //type: boolean
        class MdtXfrmInput; //type: MdtConfigData::MdtXfrm::MdtXfrmInput
        class MdtXfrmOp; //type: MdtConfigData::MdtXfrm::MdtXfrmOp

        ydk::YList mdt_xfrm_input;
        ydk::YList mdt_xfrm_op;
        
}; // MdtConfigData::MdtXfrm


class MdtConfigData::MdtXfrm::MdtXfrmInput : public ydk::Entity
{
    public:
        MdtXfrmInput();
        ~MdtXfrmInput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_name; //type: string
        ydk::YLeaf uri; //type: string
        ydk::YLeaf join_key; //type: string
        ydk::YLeaf attr_type; //type: MdtXfrmAttrType
        ydk::YLeaf lop; //type: MdtXfrmLogicOp
        class MdtXfrmInputField; //type: MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField

        ydk::YList mdt_xfrm_input_field;
        
}; // MdtConfigData::MdtXfrm::MdtXfrmInput


class MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField : public ydk::Entity
{
    public:
        MdtXfrmInputField();
        ~MdtXfrmInputField();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field; //type: string

}; // MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField


class MdtConfigData::MdtXfrm::MdtXfrmOp : public ydk::Entity
{
    public:
        MdtXfrmOp();
        ~MdtXfrmOp();

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
        class MdtXfrmOpFilters; //type: MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters
        class MdtXfrmOpFields; //type: MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields

        ydk::YList mdt_xfrm_op_filters;
        ydk::YList mdt_xfrm_op_fields;
        
}; // MdtConfigData::MdtXfrm::MdtXfrmOp


class MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters : public ydk::Entity
{
    public:
        MdtXfrmOpFilters();
        ~MdtXfrmOpFilters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter_id; //type: uint32
        ydk::YLeaf field; //type: string
        ydk::YLeaf lop; //type: MdtXfrmLogicOp
        ydk::YLeaf next_lop; //type: MdtXfrmLogicOp
        class OpEvent; //type: MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent
        class Condition; //type: MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent> op_event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition> condition;
        
}; // MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters


class MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent : public ydk::Entity
{
    public:
        OpEvent();
        ~OpEvent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf onchange; //type: boolean

}; // MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent


class MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition : public ydk::Entity
{
    public:
        Condition();
        ~Condition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: MdtXfrmOperator
        ydk::YLeaf value_; //type: string

}; // MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition


class MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields : public ydk::Entity
{
    public:
        MdtXfrmOpFields();
        ~MdtXfrmOpFields();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_id; //type: uint32
        ydk::YLeaf field; //type: string
        ydk::YLeaf op_type; //type: MdtXfrmOpType

}; // MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields

class MdtXfrmOperator : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operator_none;
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf ne;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf ge;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf le;

};

class MdtXfrmOpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sub_record;
        static const ydk::Enum::YLeaf delta;

};

class MdtXfrmLogicOp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mdt_xfrm_lop_none;
        static const ydk::Enum::YLeaf and_;
        static const ydk::Enum::YLeaf or_;

};

class MdtXfrmAttrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mdt_xfrm_attr_none;
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf primary;

};


}
}

#endif /* _CISCO_IOS_XE_MDT_CFG_ */

