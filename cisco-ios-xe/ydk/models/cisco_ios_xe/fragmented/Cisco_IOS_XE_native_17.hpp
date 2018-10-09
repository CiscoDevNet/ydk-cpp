#ifndef _CISCO_IOS_XE_NATIVE_17_
#define _CISCO_IOS_XE_NATIVE_17_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_14.hpp"
#include "Cisco_IOS_XE_native_16.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction : public ydk::Entity
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

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public ydk::Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp : public ydk::Entity
{
    public:
        PoliceRatePdp();
        ~PoliceRatePdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police> police;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police : public ydk::Entity
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

        class Rate; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate> rate;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pdp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp> pdp;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp : public ydk::Entity
{
    public:
        Pdp();
        ~Pdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf burst; //type: uint32
        ydk::YLeaf peak_rate; //type: PeakRate
        ydk::YLeaf peak_burst; //type: uint32
        class Actions; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions> actions;
                class PeakRate;

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions : public ydk::Entity
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

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop> conform_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit> violate_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop> violate_drop;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction : public ydk::Entity
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

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public ydk::Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate : public ydk::Entity
{
    public:
        PoliceTargetBitrate();
        ~PoliceTargetBitrate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police> police;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police : public ydk::Entity
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

        ydk::YLeaf bit_rate; //type: uint64
        ydk::YLeaf confirm_burst_byte; //type: uint64
        ydk::YLeaf excess_burst_byte; //type: uint64
        ydk::YLeaf conform_action; //type: empty
        ydk::YLeaf transmit; //type: empty
        ydk::YLeaf exceed_action; //type: empty
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf set_dscp_transmit; //type: empty
        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf table; //type: string
        class Actions; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions> actions;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions : public ydk::Entity
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

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop> conform_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit> violate_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop> violate_drop;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit

class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policed_dscp;

};

class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::PeakRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pdp;

};

class Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policed_dscp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_17_ */

