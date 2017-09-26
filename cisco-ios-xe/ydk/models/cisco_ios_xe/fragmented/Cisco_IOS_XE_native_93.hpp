#ifndef _CISCO_IOS_XE_NATIVE_93_
#define _CISCO_IOS_XE_NATIVE_93_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_88.hpp"
#include "Cisco_IOS_XE_native_92.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction : public ydk::Entity
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

        ydk::YLeaf set_prec_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction : public ydk::Entity
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

        ydk::YLeaf set_prec_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction : public ydk::Entity
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

        ydk::YLeaf set_qos_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction : public ydk::Entity
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

        ydk::YLeaf set_qos_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction : public ydk::Entity
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

        ydk::YLeaf dscp; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction : public ydk::Entity
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

        ydk::YLeaf set_cos_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction : public ydk::Entity
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

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public ydk::Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction : public ydk::Entity
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

        ydk::YLeaf set_dscp_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public ydk::Entity
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

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public ydk::Entity
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

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction : public ydk::Entity
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

        ydk::YLeaf set_prec_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction : public ydk::Entity
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

        ydk::YLeaf set_qos_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction : public ydk::Entity
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

        ydk::YLeaf set_cos_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction : public ydk::Entity
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

        ydk::YLeaf set_dscp_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public ydk::Entity
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

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public ydk::Entity
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

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction : public ydk::Entity
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

        ydk::YLeaf set_prec_transmit; //type: one of enumeration, uint8
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction : public ydk::Entity
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

        ydk::YLeaf set_qos_transmit; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::Priority : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Priority


class Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers


class Native::Policy::PolicyMap::Class_::ActionList::QueueLimit : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::QueueLimit


class Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp : public ydk::Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp> > dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp


class Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp : public ydk::Entity
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

        ydk::YLeaf dscp_val; //type: one of enumeration, uint8
        ydk::YLeaf values; //type: empty
        ydk::YLeaf dscp_val1; //type: one of enumeration, uint8
        ydk::YLeaf percent; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect : public ydk::Entity
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

        ydk::YLeaf discard_class_based; //type: empty
        ydk::YLeaf dscp_based; //type: empty
        ydk::YLeaf ecn; //type: empty
        ydk::YLeaf exponential_weighting_constant; //type: uint16
        ydk::YLeaf prec_based; //type: empty
        class Aggregate; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate
        class DiscardClass; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass
        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp
        class Precedence; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate> aggregate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass> discard_class;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp> > dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence> precedence;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass : public ydk::Entity
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
        ydk::YLeaf min_threshold; //type: uint16
        ydk::YLeaf max_threshold; //type: uint16
        ydk::YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp : public ydk::Entity
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

        ydk::YLeaf dscp_val; //type: one of enumeration, uint8
        ydk::YLeaf min_threshold; //type: uint16
        ydk::YLeaf max_threshold; //type: uint16
        ydk::YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence : public ydk::Entity
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

        ydk::YLeaf prec; //type: one of enumeration, uint8
        ydk::YLeaf min_threshold; //type: uint16
        ydk::YLeaf max_threshold; //type: uint16
        ydk::YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence


class Native::Policy::PolicyMap::Class_::ActionList::Set : public ydk::Entity
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
        class Cos; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Cos
        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp
        class Ip; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Ip
        class Mpls; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls
        class QosGroup; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Cos> cos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup> qos_group;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set


class Native::Policy::PolicyMap::Class_::ActionList::Set::Cos : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Cos


class Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp : public ydk::Entity
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
        ydk::YLeaf dscp_val; //type: one of enumeration, uint8
        class Dscp_; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_> dscp; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_ : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_


class Native::Policy::PolicyMap::Class_::ActionList::Set::Ip : public ydk::Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp
        class Precedence; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence> precedence; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Ip


class Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp : public ydk::Entity
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
        ydk::YLeaf dscp_val; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence : public ydk::Entity
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

        ydk::YLeaf precedence_val; //type: one of enumeration, uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls : public ydk::Entity
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

        class Experimental; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental> experimental;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental : public ydk::Entity
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

        class Imposition; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition
        class Topmost; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition> imposition;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost> topmost;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost


class Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup


class Native::Policy::PolicyMap::Class_::ActionList::Shape : public ydk::Entity
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
        class Average; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::Average
        class FrVoiceAdapt; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::Average> average;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt> fr_voice_adapt; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Shape


class Native::Policy::PolicyMap::Class_::ActionList::Shape::Average : public ydk::Entity
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
        class Account; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account
        class Bse; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account> account;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse> bse;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::Average


class Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account


class Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse


class Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt


class Native::Policy::PolicyMap::Class_::AppnavPolicy : public ydk::Entity
{
    public:
        AppnavPolicy();
        ~AppnavPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_load; //type: MonitorLoad
        ydk::YLeaf pass_through; //type: empty
        class Distribute; //type: Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute> > distribute;
                class MonitorLoad;

}; // Native::Policy::PolicyMap::Class_::AppnavPolicy


class Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute : public ydk::Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_node_group; //type: string
        ydk::YLeaf insert_before; //type: string

}; // Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute


class Native::Policy::PolicyMap::Class_::InspectPolice : public ydk::Entity
{
    public:
        InspectPolice();
        ~InspectPolice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::InspectPolice::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::InspectPolice::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::InspectPolice


class Native::Policy::PolicyMap::Class_::InspectPolice::Police : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf burst; //type: uint32

}; // Native::Policy::PolicyMap::Class_::InspectPolice::Police


class Native::Policy::PolicyMap::Class_::PmPolicy : public ydk::Entity
{
    public:
        PmPolicy();
        ~PmPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Flow
        class Monitor; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor
        class React; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor> monitor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React> > react;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy


class Native::Policy::PolicyMap::Class_::PmPolicy::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor; //type: string

}; // Native::Policy::PolicyMap::Class_::PmPolicy::Flow


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Metric; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric> metric;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rtp; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp> rtp;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockRate; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate> > clock_rate;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate : public ydk::Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: one of enumeration, uint8
        ydk::YLeaf frequency; //type: uint32
        class Number;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate


class Native::Policy::PolicyMap::Class_::PmPolicy::React : public ydk::Entity
{
    public:
        React();
        ~React();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf description; //type: string
        class Action; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Action
        class Alarm; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm
        class Threshold; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm> alarm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold> threshold;
                class Mode;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf syslog; //type: empty

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Action


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: Severity
        class Type; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type> type;
                class Severity;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discrete; //type: empty
        class Grouped; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped> grouped;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped : public ydk::Entity
{
    public:
        Grouped();
        ~Grouped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf percent; //type: uint8

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_> value_;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ge; //type: string
        ydk::YLeaf gt; //type: string
        ydk::YLeaf le; //type: string
        ydk::YLeaf lt; //type: string
        class Range; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range> range;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: string
        ydk::YLeaf high; //type: string

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range


class Native::Policy::PolicyMap::Class_::Policy_ : public ydk::Entity
{
    public:
        Policy_();
        ~Policy_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf log; //type: empty
        ydk::YLeaf parameter_map; //type: one of string, enumeration
        class Dpi; //type: Native::Policy::PolicyMap::Class_::Policy_::Dpi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::Policy_::Dpi> dpi;
                class Action;
        class ParameterMap;

}; // Native::Policy::PolicyMap::Class_::Policy_


class Native::Policy::PolicyMap::Class_::Policy_::Dpi : public ydk::Entity
{
    public:
        Dpi();
        ~Dpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf policy_map; //type: string
        class Type;

}; // Native::Policy::PolicyMap::Class_::Policy_::Dpi


class Native::Policy::PolicyMap::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: EventType
        ydk::YLeaf match_type; //type: MatchType
        class ClassNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber> > class_number;
                class EventType;
        class MatchType;

}; // Native::Policy::PolicyMap::Event


class Native::Policy::PolicyMap::Event::ClassNumber : public ydk::Entity
{
    public:
        ClassNumber();
        ~ClassNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf class_; //type: one of string, enumeration
        ydk::YLeaf execution_type; //type: ExecutionType
        class ActionNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber> > action_number;
                class Class_;
        class ExecutionType;

}; // Native::Policy::PolicyMap::Event::ClassNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber : public ydk::Entity
{
    public:
        ActionNumber();
        ~ActionNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf clear_session; //type: empty
        ydk::YLeaf authentication_restart; //type: uint16
        ydk::YLeaf authorize; //type: empty
        class Terminate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate
        class Resume; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume
        class Pause; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause
        class Activate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate
        class Authenticate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate> activate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate> authenticate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause> pause;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume> resume;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate> terminate;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate : public ydk::Entity
{
    public:
        Activate();
        ~Activate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_template; //type: string

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate : public ydk::Entity
{
    public:
        Authenticate();
        ~Authenticate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Using_; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_> using_;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_ : public ydk::Entity
{
    public:
        Using_();
        ~Using_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method; //type: Method
        ydk::YLeaf both; //type: empty
        ydk::YLeaf retries; //type: uint8
        ydk::YLeaf retry_time; //type: uint16
        ydk::YLeaf priority; //type: uint8
        class Method;

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause : public ydk::Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume : public ydk::Entity
{
    public:
        Resume();
        ~Resume();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate : public ydk::Entity
{
    public:
        Terminate();
        ~Terminate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate


class Native::PortChannel : public ydk::Entity
{
    public:
        PortChannel();
        ~PortChannel();

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

        ydk::YLeaf auto_; //type: empty
        class LoadBalance; //type: Native::PortChannel::LoadBalance
        class LoadBalancing; //type: Native::PortChannel::LoadBalancing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel::LoadBalancing> load_balancing;
        
}; // Native::PortChannel


class Native::PortChannel::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

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

        ydk::YLeaf load_balance; //type: LoadBalance_
        class Extended; //type: Native::PortChannel::LoadBalance::Extended

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel::LoadBalance::Extended> extended; // presence node
                class LoadBalance_;

}; // Native::PortChannel::LoadBalance


class Native::PortChannel::LoadBalance::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

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

        ydk::YLeafList extended; //type: list of  Extended_
        class Extended_;

}; // Native::PortChannel::LoadBalance::Extended


class Native::PortChannel::LoadBalancing : public ydk::Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

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

        ydk::YLeaf vlan_manual; //type: empty

}; // Native::PortChannel::LoadBalancing


class Native::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

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

        ydk::YLeaf redundancy_mode; //type: RedundancyMode
        ydk::YLeaf max_min; //type: MaxMin
        ydk::YLeaf inputs; //type: uint8
        class Inline_; //type: Native::Power::Inline_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline_> inline_; // presence node
                class RedundancyMode;
        class MaxMin;

}; // Native::Power


class Native::Power::Inline_ : public ydk::Entity
{
    public:
        Inline_();
        ~Inline_();

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

        class Consumption; //type: Native::Power::Inline_::Consumption
        class Logging; //type: Native::Power::Inline_::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline_::Consumption> consumption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline_::Logging> logging;
        
}; // Native::Power::Inline_


class Native::Power::Inline_::Consumption : public ydk::Entity
{
    public:
        Consumption();
        ~Consumption();

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

        ydk::YLeaf default_; //type: uint16

}; // Native::Power::Inline_::Consumption


class Native::Power::Inline_::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf global; //type: empty

}; // Native::Power::Inline_::Logging


class Native::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

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

        class Packet; //type: Native::Ppp::Packet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ppp::Packet> packet;
        
}; // Native::Ppp


class Native::Ppp::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

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

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf allow_time; //type: uint32
        ydk::YLeaf block_time; //type: uint32

}; // Native::Ppp::Packet


class Native::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

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

        class Exec; //type: Native::Privilege::Exec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Privilege::Exec> exec;
        
}; // Native::Privilege


class Native::Privilege::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

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

        class Level; //type: Native::Privilege::Exec::Level

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Privilege::Exec::Level> > level;
        
}; // Native::Privilege::Exec


class Native::Privilege::Exec::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

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

        ydk::YLeaf privilege; //type: uint8
        class CommandList; //type: Native::Privilege::Exec::Level::CommandList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Privilege::Exec::Level::CommandList> > command_list;
        
}; // Native::Privilege::Exec::Level


class Native::Privilege::Exec::Level::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Privilege::Exec::Level::CommandList


class Native::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

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

        class Cpu; //type: Native::Process::Cpu

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu> cpu;
        
}; // Native::Process


class Native::Process::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

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

        class Threshold; //type: Native::Process::Cpu::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold> threshold;
        
}; // Native::Process::Cpu


class Native::Process::Cpu::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class Type; //type: Native::Process::Cpu::Threshold::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type> type;
        
}; // Native::Process::Cpu::Threshold


class Native::Process::Cpu::Threshold::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

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

        class Interrupt; //type: Native::Process::Cpu::Threshold::Type::Interrupt
        class Process_; //type: Native::Process::Cpu::Threshold::Type::Process_
        class Total; //type: Native::Process::Cpu::Threshold::Type::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt> interrupt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_> process;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total> total;
        
}; // Native::Process::Cpu::Threshold::Type


class Native::Process::Cpu::Threshold::Type::Interrupt : public ydk::Entity
{
    public:
        Interrupt();
        ~Interrupt();

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

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

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

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

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

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Process_


class Native::Process::Cpu::Threshold::Type::Process_::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

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

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Total::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Total


class Native::Process::Cpu::Threshold::Type::Total::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

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

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange

class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policed_dscp;

};

class Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf ms;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf us;

};

class Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf qos_group;
        static const ydk::Enum::YLeaf wlan;

};

class Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MS_port_mapper;
        static const ydk::Enum::YLeaf cifs;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf ica;
        static const ydk::Enum::YLeaf mapi;
        static const ydk::Enum::YLeaf nfs;
        static const ydk::Enum::YLeaf ssl;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf celb;
        static const ydk::Enum::YLeaf cn;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf dvi4;
        static const ydk::Enum::YLeaf dvi4_2;
        static const ydk::Enum::YLeaf dvi4_3;
        static const ydk::Enum::YLeaf dvi4_4;
        static const ydk::Enum::YLeaf g722;
        static const ydk::Enum::YLeaf g723;
        static const ydk::Enum::YLeaf g728;
        static const ydk::Enum::YLeaf g729;
        static const ydk::Enum::YLeaf gsm;
        static const ydk::Enum::YLeaf h261;
        static const ydk::Enum::YLeaf h263;
        static const ydk::Enum::YLeaf jpeg;
        static const ydk::Enum::YLeaf l16;
        static const ydk::Enum::YLeaf l16_2;
        static const ydk::Enum::YLeaf lpc;
        static const ydk::Enum::YLeaf mp2t;
        static const ydk::Enum::YLeaf mpa;
        static const ydk::Enum::YLeaf mpv;
        static const ydk::Enum::YLeaf nv;
        static const ydk::Enum::YLeaf pcma;
        static const ydk::Enum::YLeaf pcmu;
        static const ydk::Enum::YLeaf qcelp;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media_stop;
        static const ydk::Enum::YLeaf mrv;
        static const ydk::Enum::YLeaf rtp_jitter_average;
        static const ydk::Enum::YLeaf transport_packets_lost_rate;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Native::Policy::PolicyMap::Class_::Policy_::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cxsc;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf service_policy;

};

class Native::Policy::PolicyMap::Class_::Policy_::ParameterMap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf gtp;

};

class Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gtpv0;
        static const ydk::Enum::YLeaf gtpv1;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;

};

class Native::Policy::PolicyMap::Event::EventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aaa_available;
        static const ydk::Enum::YLeaf absolute_timeout;
        static const ydk::Enum::YLeaf agent_found;
        static const ydk::Enum::YLeaf authentication_failure;
        static const ydk::Enum::YLeaf authentication_success;
        static const ydk::Enum::YLeaf authorization_failure;
        static const ydk::Enum::YLeaf authorization_success;
        static const ydk::Enum::YLeaf identity_update;
        static const ydk::Enum::YLeaf inactivity_timeout;
        static const ydk::Enum::YLeaf remote_authentication_failure;
        static const ydk::Enum::YLeaf remote_authentication_success;
        static const ydk::Enum::YLeaf session_disconnected;
        static const ydk::Enum::YLeaf session_started;
        static const ydk::Enum::YLeaf tag_added;
        static const ydk::Enum::YLeaf tag_removed;
        static const ydk::Enum::YLeaf template_activated;
        static const ydk::Enum::YLeaf template_activation_failed;
        static const ydk::Enum::YLeaf template_deactivated;
        static const ydk::Enum::YLeaf template_deactivation_failed;
        static const ydk::Enum::YLeaf timer_expiry;
        static const ydk::Enum::YLeaf violation;

};

class Native::Policy::PolicyMap::Event::MatchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_first;

};

class Native::Policy::PolicyMap::Event::ClassNumber::Class_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf do_all;
        static const ydk::Enum::YLeaf do_until_failure;
        static const ydk::Enum::YLeaf do_until_success;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1x;
        static const ydk::Enum::YLeaf mab;
        static const ydk::Enum::YLeaf webauth;

};

class Native::PortChannel::LoadBalance::LoadBalance_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_ip;
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf dst_mixed_ip_port;
        static const ydk::Enum::YLeaf dst_port;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf src_dst_ip;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_dst_mixed_ip_port;
        static const ydk::Enum::YLeaf src_dst_port;
        static const ydk::Enum::YLeaf src_ip;
        static const ydk::Enum::YLeaf src_mac;
        static const ydk::Enum::YLeaf src_mixed_ip_port;
        static const ydk::Enum::YLeaf src_port;

};

class Native::PortChannel::LoadBalance::Extended::Extended_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_ip;
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf dst_port;
        static const ydk::Enum::YLeaf ipv6_label;
        static const ydk::Enum::YLeaf l3_proto;
        static const ydk::Enum::YLeaf src_ip;
        static const ydk::Enum::YLeaf src_mac;
        static const ydk::Enum::YLeaf src_port;

};

class Native::Power::RedundancyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf combined;
        static const ydk::Enum::YLeaf redundant;

};

class Native::Power::MaxMin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_93_ */

