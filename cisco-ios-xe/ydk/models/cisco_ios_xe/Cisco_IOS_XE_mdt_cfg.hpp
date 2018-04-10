#ifndef _CISCO_IOS_XE_MDT_CFG_
#define _CISCO_IOS_XE_MDT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_cfg {

class MdtSubscriptions : public ydk::Entity
{
    public:
        MdtSubscriptions();
        ~MdtSubscriptions();

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

        class MdtSubscription; //type: MdtSubscriptions::MdtSubscription
        class MdtXfrm; //type: MdtSubscriptions::MdtXfrm

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtSubscription> > mdt_subscription;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm> > mdt_xfrm;
        
}; // MdtSubscriptions


class MdtSubscriptions::MdtSubscription : public ydk::Entity
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
        class Base; //type: MdtSubscriptions::MdtSubscription::Base
        class MdtReceivers; //type: MdtSubscriptions::MdtSubscription::MdtReceivers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtSubscription::Base> base;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtSubscription::MdtReceivers> > mdt_receivers;
        
}; // MdtSubscriptions::MdtSubscription


class MdtSubscriptions::MdtSubscription::Base : public ydk::Entity
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

}; // MdtSubscriptions::MdtSubscription::Base


class MdtSubscriptions::MdtSubscription::MdtReceivers : public ydk::Entity
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
        ydk::YLeaf security_profile; //type: string

}; // MdtSubscriptions::MdtSubscription::MdtReceivers


class MdtSubscriptions::MdtXfrm : public ydk::Entity
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
        class MdtXfrmInput; //type: MdtSubscriptions::MdtXfrm::MdtXfrmInput
        class MdtXfrmOp; //type: MdtSubscriptions::MdtXfrm::MdtXfrmOp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm::MdtXfrmInput> > mdt_xfrm_input;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm::MdtXfrmOp> > mdt_xfrm_op;
        
}; // MdtSubscriptions::MdtXfrm


class MdtSubscriptions::MdtXfrm::MdtXfrmInput : public ydk::Entity
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
        class MdtXfrmInputField; //type: MdtSubscriptions::MdtXfrm::MdtXfrmInput::MdtXfrmInputField

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm::MdtXfrmInput::MdtXfrmInputField> > mdt_xfrm_input_field;
        
}; // MdtSubscriptions::MdtXfrm::MdtXfrmInput


class MdtSubscriptions::MdtXfrm::MdtXfrmInput::MdtXfrmInputField : public ydk::Entity
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

}; // MdtSubscriptions::MdtXfrm::MdtXfrmInput::MdtXfrmInputField


class MdtSubscriptions::MdtXfrm::MdtXfrmOp : public ydk::Entity
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
        class MdtXfrmOpFilters; //type: MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters
        class MdtXfrmOpFields; //type: MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters> > mdt_xfrm_op_filters;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields> > mdt_xfrm_op_fields;
        
}; // MdtSubscriptions::MdtXfrm::MdtXfrmOp


class MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters : public ydk::Entity
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
        class OpEvent; //type: MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent
        class Condition; //type: MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent> op_event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition> condition;
        
}; // MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters


class MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent : public ydk::Entity
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

}; // MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent


class MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition : public ydk::Entity
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

}; // MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition


class MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields : public ydk::Entity
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

}; // MdtSubscriptions::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields

class MdtXfrmAttrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mdt_xfrm_attr_none;
        static const ydk::Enum::YLeaf mandatory;

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


}
}

#endif /* _CISCO_IOS_XE_MDT_CFG_ */

