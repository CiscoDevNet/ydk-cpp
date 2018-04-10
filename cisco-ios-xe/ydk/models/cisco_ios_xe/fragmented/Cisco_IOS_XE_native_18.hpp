#ifndef _CISCO_IOS_XE_NATIVE_18_
#define _CISCO_IOS_XE_NATIVE_18_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_17.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit : public ydk::Entity
{
    public:
        ExceedSetQosTransmit();
        ~ExceedSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit : public ydk::Entity
{
    public:
        ExceedTransmit();
        ~ExceedTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop : public ydk::Entity
{
    public:
        ExceedDrop();
        ~ExceedDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit : public ydk::Entity
{
    public:
        ViolateSetClpTransmit();
        ~ViolateSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit : public ydk::Entity
{
    public:
        ViolateSetCosTransmit();
        ~ViolateSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit : public ydk::Entity
{
    public:
        ViolateSetDiscardClassTransmit();
        ~ViolateSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit : public ydk::Entity
{
    public:
        ViolateSetDscpTransmit();
        ~ViolateSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit : public ydk::Entity
{
    public:
        ViolateSetFrdeTransmit();
        ~ViolateSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit : public ydk::Entity
{
    public:
        ViolateSetMplsExpImpositionTransmit();
        ~ViolateSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit : public ydk::Entity
{
    public:
        ViolateSetMplsExpTopmostTransmit();
        ~ViolateSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit : public ydk::Entity
{
    public:
        ViolateSetPrecTransmit();
        ~ViolateSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit : public ydk::Entity
{
    public:
        ViolateSetQosTransmit();
        ~ViolateSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit : public ydk::Entity
{
    public:
        ViolateTransmit();
        ~ViolateTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop : public ydk::Entity
{
    public:
        ViolateDrop();
        ~ViolateDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst : public ydk::Entity
{
    public:
        PoliceCatalyst();
        ~PoliceCatalyst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police> police;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bps_value; //type: string
        ydk::YLeaf bps; //type: empty
        ydk::YLeaf byte_value; //type: string
        ydk::YLeaf byte; //type: empty
        class Actions; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions> actions;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions : public ydk::Entity
{
    public:
        Actions();
        ~Actions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop> conform_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit> violate_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop> violate_drop;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit : public ydk::Entity
{
    public:
        ConformSetClpTransmit();
        ~ConformSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit : public ydk::Entity
{
    public:
        ConformSetCosTransmit();
        ~ConformSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable : public ydk::Entity
{
    public:
        ConformSetCosTransmitTable();
        ~ConformSetCosTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit : public ydk::Entity
{
    public:
        ConformSetDiscardClassTransmit();
        ~ConformSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit : public ydk::Entity
{
    public:
        ConformSetDscpTransmit();
        ~ConformSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_dscp_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable : public ydk::Entity
{
    public:
        ConformSetDscpTransmitTable();
        ~ConformSetDscpTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit : public ydk::Entity
{
    public:
        ConformSetFrdeTransmit();
        ~ConformSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit : public ydk::Entity
{
    public:
        ConformSetMplsExpImpositionTransmit();
        ~ConformSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable : public ydk::Entity
{
    public:
        ConformSetMplsExpImpositionTransmitTable();
        ~ConformSetMplsExpImpositionTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit : public ydk::Entity
{
    public:
        ConformSetMplsExpTopmostTransmit();
        ~ConformSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable : public ydk::Entity
{
    public:
        ConformSetMplsExpTopmostTransmitTable();
        ~ConformSetMplsExpTopmostTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit : public ydk::Entity
{
    public:
        ConformSetPrecTransmit();
        ~ConformSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable : public ydk::Entity
{
    public:
        ConformSetPrecTransmitTable();
        ~ConformSetPrecTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit : public ydk::Entity
{
    public:
        ConformSetQosTransmit();
        ~ConformSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable : public ydk::Entity
{
    public:
        ConformSetQosTransmitTable();
        ~ConformSetQosTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit : public ydk::Entity
{
    public:
        ConformTransmit();
        ~ConformTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop : public ydk::Entity
{
    public:
        ConformDrop();
        ~ConformDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp : public ydk::Entity
{
    public:
        ExceedDscp();
        ~ExceedDscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit : public ydk::Entity
{
    public:
        ExceedSetClpTransmit();
        ~ExceedSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit : public ydk::Entity
{
    public:
        ExceedSetCosTransmit();
        ~ExceedSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit : public ydk::Entity
{
    public:
        ExceedSetDiscardClassTransmit();
        ~ExceedSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit : public ydk::Entity
{
    public:
        ExceedSetDscpTransmit();
        ~ExceedSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public ydk::Entity
{
    public:
        SetDscpTransmit();
        ~SetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dscp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table; //type: Table
        class Table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable : public ydk::Entity
{
    public:
        ExceedSetDscpTransmitTable();
        ~ExceedSetDscpTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit : public ydk::Entity
{
    public:
        ExceedSetFrdeTransmit();
        ~ExceedSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit : public ydk::Entity
{
    public:
        ExceedSetMplsExpImpositionTransmit();
        ~ExceedSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit : public ydk::Entity
{
    public:
        ExceedSetMplsExpTopmostTransmit();
        ~ExceedSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit : public ydk::Entity
{
    public:
        ExceedSetPrecTransmit();
        ~ExceedSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit : public ydk::Entity
{
    public:
        ExceedSetQosTransmit();
        ~ExceedSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit : public ydk::Entity
{
    public:
        ExceedTransmit();
        ~ExceedTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop : public ydk::Entity
{
    public:
        ExceedDrop();
        ~ExceedDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit : public ydk::Entity
{
    public:
        ViolateSetClpTransmit();
        ~ViolateSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit : public ydk::Entity
{
    public:
        ViolateSetCosTransmit();
        ~ViolateSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit : public ydk::Entity
{
    public:
        ViolateSetDiscardClassTransmit();
        ~ViolateSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit : public ydk::Entity
{
    public:
        ViolateSetDscpTransmit();
        ~ViolateSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit : public ydk::Entity
{
    public:
        ViolateSetFrdeTransmit();
        ~ViolateSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit : public ydk::Entity
{
    public:
        ViolateSetMplsExpImpositionTransmit();
        ~ViolateSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit : public ydk::Entity
{
    public:
        ViolateSetMplsExpTopmostTransmit();
        ~ViolateSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit : public ydk::Entity
{
    public:
        ViolateSetPrecTransmit();
        ~ViolateSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit : public ydk::Entity
{
    public:
        ViolateSetQosTransmit();
        ~ViolateSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit : public ydk::Entity
{
    public:
        ViolateTransmit();
        ~ViolateTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop : public ydk::Entity
{
    public:
        ViolateDrop();
        ~ViolateDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch : public ydk::Entity
{
    public:
        PoliceSwitch();
        ~PoliceSwitch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch::Police> police;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch


class Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cir; //type: uint32
        ydk::YLeaf bc; //type: uint32
        ydk::YLeaf exceed_action; //type: ExceedAction
        class ExceedAction;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch::Police


class Native::Policy::PolicyMap::Class::ActionList::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf kilo_bits; //type: uint32
        ydk::YLeaf percent; //type: uint16
        ydk::YLeaf burst; //type: uint32

}; // Native::Policy::PolicyMap::Class::ActionList::Priority


class Native::Policy::PolicyMap::Class::ActionList::QueueBuffers : public ydk::Entity
{
    public:
        QueueBuffers();
        ~QueueBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ratio; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::QueueBuffers


class Native::Policy::PolicyMap::Class::ActionList::QueueLimit : public ydk::Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_limit_value; //type: uint32
        ydk::YLeaf queue_limit_type; //type: QueueLimitType
        class QueueLimitType;

}; // Native::Policy::PolicyMap::Class::ActionList::QueueLimit


class Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp : public ydk::Entity
{
    public:
        QueueLimitDscp();
        ~QueueLimitDscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dscp; //type: Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp::Dscp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp::Dscp> > dscp;
        
}; // Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp


class Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_val; //type: one of uint8, enumeration
        ydk::YLeaf values; //type: empty
        ydk::YLeaf dscp_val1; //type: one of uint8, enumeration
        ydk::YLeaf percent; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp::Dscp


class Native::Policy::PolicyMap::Class::ActionList::RandomDetect : public ydk::Entity
{
    public:
        RandomDetect();
        ~RandomDetect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_based; //type: empty
        ydk::YLeaf discard_class_based; //type: empty
        ydk::YLeaf dscp_based; //type: empty
        ydk::YLeaf ecn; //type: empty
        ydk::YLeaf exponential_weighting_constant; //type: uint16
        ydk::YLeaf precedence_based; //type: empty
        class Aggregate; //type: Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Aggregate
        class Cos; //type: Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Cos
        class DiscardClass; //type: Native::Policy::PolicyMap::Class::ActionList::RandomDetect::DiscardClass
        class Dscp; //type: Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Dscp
        class Precedence; //type: Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Precedence

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Aggregate> aggregate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Cos> cos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::RandomDetect::DiscardClass> discard_class;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Dscp> > dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Precedence> precedence;
        
}; // Native::Policy::PolicyMap::Class::ActionList::RandomDetect


class Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_thresh; //type: uint32
        ydk::YLeaf maximum_thresh; //type: uint32
        ydk::YLeaf mark_probability; //type: empty
        ydk::YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Aggregate


class Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Cos : public ydk::Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_val; //type: uint16
        ydk::YLeaf min_threshold; //type: uint32
        ydk::YLeaf min_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf max_threshold; //type: uint32
        ydk::YLeaf max_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf denominator; //type: uint16

}; // Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Cos


class Native::Policy::PolicyMap::Class::ActionList::RandomDetect::DiscardClass : public ydk::Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dclass; //type: uint16
        ydk::YLeaf min_threshold; //type: uint32
        ydk::YLeaf min_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf max_threshold; //type: uint32
        ydk::YLeaf max_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf denominator; //type: uint16

}; // Native::Policy::PolicyMap::Class::ActionList::RandomDetect::DiscardClass


class Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_val; //type: one of uint8, enumeration
        ydk::YLeaf min_threshold; //type: uint32
        ydk::YLeaf min_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf max_threshold; //type: uint32
        ydk::YLeaf max_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf denominator; //type: uint16

}; // Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Dscp


class Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Precedence : public ydk::Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec; //type: one of uint8, enumeration
        ydk::YLeaf min_threshold; //type: uint32
        ydk::YLeaf min_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf max_threshold; //type: uint32
        ydk::YLeaf max_threshold_unit; //type: BytesMsUsType
        ydk::YLeaf denominator; //type: uint16

}; // Native::Policy::PolicyMap::Class::ActionList::RandomDetect::Precedence


class Native::Policy::PolicyMap::Class::ActionList::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_clp; //type: empty
        ydk::YLeaf discard_class; //type: uint16
        ydk::YLeaf fr_de; //type: empty
        class Cos; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Cos
        class Dscp; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Dscp
        class Ip; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Ip
        class Mpls; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Mpls
        class QosGroup; //type: Native::Policy::PolicyMap::Class::ActionList::Set::QosGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Cos> cos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::QosGroup> qos_group;
        
}; // Native::Policy::PolicyMap::Class::ActionList::Set


class Native::Policy::PolicyMap::Class::ActionList::Set::Cos : public ydk::Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint16
        ydk::YLeaf pack; //type: Pack
        ydk::YLeaf user_priority; //type: empty
        ydk::YLeaf table; //type: string
        class Pack;

}; // Native::Policy::PolicyMap::Class::ActionList::Set::Cos


class Native::Policy::PolicyMap::Class::ActionList::Set::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: empty
        ydk::YLeaf dscp_val; //type: one of uint8, enumeration
        class Dscp_; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Dscp::Dscp_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Dscp::Dscp_> dscp; // presence node
        
}; // Native::Policy::PolicyMap::Class::ActionList::Set::Dscp


class Native::Policy::PolicyMap::Class::ActionList::Set::Dscp::Dscp_ : public ydk::Entity
{
    public:
        Dscp_();
        ~Dscp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table; //type: string

}; // Native::Policy::PolicyMap::Class::ActionList::Set::Dscp::Dscp_


class Native::Policy::PolicyMap::Class::ActionList::Set::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dscp; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Dscp
        class Precedence; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Precedence

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Precedence> precedence; // presence node
        
}; // Native::Policy::PolicyMap::Class::ActionList::Set::Ip


class Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: empty
        ydk::YLeaf dscp_val; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Dscp


class Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Precedence : public ydk::Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf precedence_val; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class::ActionList::Set::Ip::Precedence


class Native::Policy::PolicyMap::Class::ActionList::Set::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental> experimental;
        
}; // Native::Policy::PolicyMap::Class::ActionList::Set::Mpls


class Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Imposition; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Imposition
        class Topmost; //type: Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Topmost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Imposition> imposition;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Topmost> topmost;
        
}; // Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental


class Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Imposition : public ydk::Entity
{
    public:
        Imposition();
        ~Imposition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp_value; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Imposition


class Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Topmost : public ydk::Entity
{
    public:
        Topmost();
        ~Topmost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp_value; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::Set::Mpls::Experimental::Topmost


class Native::Policy::PolicyMap::Class::ActionList::Set::QosGroup : public ydk::Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_group_value; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::Set::QosGroup


class Native::Policy::PolicyMap::Class::ActionList::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adaptive; //type: uint32
        ydk::YLeaf fecn_adapt; //type: empty
        ydk::YLeaf max_buffers; //type: uint16
        class Average; //type: Native::Policy::PolicyMap::Class::ActionList::Shape::Average
        class FrVoiceAdapt; //type: Native::Policy::PolicyMap::Class::ActionList::Shape::FrVoiceAdapt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Shape::Average> average;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Shape::FrVoiceAdapt> fr_voice_adapt; // presence node
        
}; // Native::Policy::PolicyMap::Class::ActionList::Shape


class Native::Policy::PolicyMap::Class::ActionList::Shape::Average : public ydk::Entity
{
    public:
        Average();
        ~Average();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint64
        ydk::YLeaf bits_per_interval_sustained; //type: uint32
        ydk::YLeaf bits_per_interval_excess; //type: uint32
        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf burst_size_sustained; //type: uint16
        ydk::YLeaf ms; //type: empty
        class Account; //type: Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Account
        class Bse; //type: Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Bse

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Account> account;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Bse> bse;
        
}; // Native::Policy::PolicyMap::Class::ActionList::Shape::Average


class Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Account : public ydk::Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_defined; //type: int32

}; // Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Account


class Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Bse : public ydk::Entity
{
    public:
        Bse();
        ~Bse();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf burst_size_excess; //type: uint16
        ydk::YLeaf ms; //type: empty

}; // Native::Policy::PolicyMap::Class::ActionList::Shape::Average::Bse


class Native::Policy::PolicyMap::Class::ActionList::Shape::FrVoiceAdapt : public ydk::Entity
{
    public:
        FrVoiceAdapt();
        ~FrVoiceAdapt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deactivation; //type: uint16

}; // Native::Policy::PolicyMap::Class::ActionList::Shape::FrVoiceAdapt


class Native::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AppNavCompress; //type: Native::Interface::AppNavCompress
        class AppNavUnCompress; //type: Native::Interface::AppNavUnCompress
        class ATM; //type: Native::Interface::ATM
        class ATMSubinterface; //type: Native::Interface::ATMSubinterface
        class ATMACR; //type: Native::Interface::ATMACR
        class ATMACRsubinterface; //type: Native::Interface::ATMACRsubinterface
        class BDI; //type: Native::Interface::BDI
        class CEM; //type: Native::Interface::CEM
        class CEMACR; //type: Native::Interface::CEMACR
        class EmbeddedServiceEngine; //type: Native::Interface::EmbeddedServiceEngine
        class FastEthernet; //type: Native::Interface::FastEthernet
        class Ucse; //type: Native::Interface::Ucse
        class EthernetInternal; //type: Native::Interface::EthernetInternal
        class ServiceEngine; //type: Native::Interface::ServiceEngine
        class GigabitEthernet; //type: Native::Interface::GigabitEthernet
        class TwoGigabitEthernet; //type: Native::Interface::TwoGigabitEthernet
        class FiveGigabitEthernet; //type: Native::Interface::FiveGigabitEthernet
        class TenGigabitEthernet; //type: Native::Interface::TenGigabitEthernet
        class TwentyFiveGigE; //type: Native::Interface::TwentyFiveGigE
        class FortyGigabitEthernet; //type: Native::Interface::FortyGigabitEthernet
        class HundredGigE; //type: Native::Interface::HundredGigE
        class Loopback; //type: Native::Interface::Loopback
        class LISP; //type: Native::Interface::LISP
        class LISPSubinterface; //type: Native::Interface::LISPSubinterface
        class Nve; //type: Native::Interface::Nve
        class Overlay; //type: Native::Interface::Overlay
        class PortChannel; //type: Native::Interface::PortChannel
        class PortChannelSubinterface; //type: Native::Interface::PortChannelSubinterface
        class Pseudowire; //type: Native::Interface::Pseudowire
        class SM; //type: Native::Interface::SM
        class Cellular; //type: Native::Interface::Cellular
        class Vlan; //type: Native::Interface::Vlan
        class GroupAsync; //type: Native::Interface::GroupAsync
        class Multilink; //type: Native::Interface::Multilink
        class Serial; //type: Native::Interface::Serial
        class Tunnel; //type: Native::Interface::Tunnel
        class VirtualTemplate; //type: Native::Interface::VirtualTemplate
        class VirtualPortGroup; //type: Native::Interface::VirtualPortGroup
        class Vasileft; //type: Native::Interface::Vasileft
        class Vasiright; //type: Native::Interface::Vasiright

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress> > appnav_compress;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress> > appnav_uncompress;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM> > atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface> atm_subinterface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR> > atm_acr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI> > bdi;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM> > cem;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEMACR> > cem_acr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine> > embedded_service_engine;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet> > fastethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Ucse> > ucse;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::EthernetInternal> > ethernet_internal;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ServiceEngine> > service_engine;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet> > gigabitethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwoGigabitEthernet> > twogigabitethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet> > fivegigabitethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet> > tengigabitethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE> > twentyfivegige;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet> > fortygigabitethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE> > hundredgige;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback> > loopback;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::LISP> > lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::LISPSubinterface> lisp_subinterface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Nve> > nve;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Overlay> > overlay;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel> > port_channel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface> port_channel_subinterface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Pseudowire> > pseudowire;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::SM> > sm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular> > cellular;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan> > vlan;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GroupAsync> > group_async;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Multilink> > multilink;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Serial> > serial;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel> > tunnel;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate> > virtual_template;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup> > virtualportgroup;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasileft> > vasileft;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright> > vasiright;
        
}; // Native::Interface


class Native::Interface::AppNavCompress : public ydk::Entity
{
    public:
        AppNavCompress();
        ~AppNavCompress();

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

        ydk::YLeaf name; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf if_state; //type: IfState
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf max_reserved_bandwidth; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf service_insertion; //type: ServiceInsertion
        class SwitchportConf; //type: Native::Interface::AppNavCompress::SwitchportConf
        class Switchport; //type: Native::Interface::AppNavCompress::Switchport
        class StackwiseVirtual; //type: Native::Interface::AppNavCompress::StackwiseVirtual
        class Arp; //type: Native::Interface::AppNavCompress::Arp
        class Backup; //type: Native::Interface::AppNavCompress::Backup
        class Cemoudp; //type: Native::Interface::AppNavCompress::Cemoudp
        class CwsTunnel; //type: Native::Interface::AppNavCompress::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::AppNavCompress::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::AppNavCompress::Encapsulation
        class FairQueueConf; //type: Native::Interface::AppNavCompress::FairQueueConf
        class FairQueue; //type: Native::Interface::AppNavCompress::FairQueue
        class Flowcontrol; //type: Native::Interface::AppNavCompress::Flowcontrol
        class Isis; //type: Native::Interface::AppNavCompress::Isis
        class KeepaliveSettings; //type: Native::Interface::AppNavCompress::KeepaliveSettings
        class Bfd; //type: Native::Interface::AppNavCompress::Bfd
        class Bandwidth; //type: Native::Interface::AppNavCompress::Bandwidth
        class Dampening; //type: Native::Interface::AppNavCompress::Dampening
        class Domain; //type: Native::Interface::AppNavCompress::Domain
        class HoldQueue; //type: Native::Interface::AppNavCompress::HoldQueue
        class Mpls; //type: Native::Interface::AppNavCompress::Mpls
        class IpVrf; //type: Native::Interface::AppNavCompress::IpVrf
        class Vrf; //type: Native::Interface::AppNavCompress::Vrf
        class Ip; //type: Native::Interface::AppNavCompress::Ip
        class Ipv6; //type: Native::Interface::AppNavCompress::Ipv6
        class Logging; //type: Native::Interface::AppNavCompress::Logging
        class Mdix; //type: Native::Interface::AppNavCompress::Mdix
        class Mop; //type: Native::Interface::AppNavCompress::Mop
        class InterfaceQos; //type: Native::Interface::AppNavCompress::InterfaceQos
        class Standby; //type: Native::Interface::AppNavCompress::Standby
        class AccessSession; //type: Native::Interface::AppNavCompress::AccessSession
        class StormControl; //type: Native::Interface::AppNavCompress::StormControl
        class Trust; //type: Native::Interface::AppNavCompress::Trust
        class PriorityQueue; //type: Native::Interface::AppNavCompress::PriorityQueue
        class RcvQueue; //type: Native::Interface::AppNavCompress::RcvQueue
        class Peer; //type: Native::Interface::AppNavCompress::Peer
        class PmPath; //type: Native::Interface::AppNavCompress::PmPath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::StackwiseVirtual> stackwise_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Domain> domain;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::HoldQueue> > hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::PmPath> pm_path;
                class IfState;
        class ServiceInsertion;

}; // Native::Interface::AppNavCompress


class Native::Interface::AppNavCompress::SwitchportConf : public ydk::Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::AppNavCompress::SwitchportConf


class Native::Interface::AppNavCompress::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::AppNavCompress::Switchport

class Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policed_dscp;

};

class Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch::Police::ExceedAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf policed_dscp_transmit;

};

class Native::Policy::PolicyMap::Class::ActionList::QueueLimit::QueueLimitType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf ms;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf us;

};

class Native::Policy::PolicyMap::Class::ActionList::Set::Cos::Pack : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf qos_group;
        static const ydk::Enum::YLeaf wlan;

};

class Native::Interface::AppNavCompress::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::AppNavCompress::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_18_ */

