#ifndef _CISCO_IOS_XE_NATIVE_17_
#define _CISCO_IOS_XE_NATIVE_17_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_16.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop : public ydk::Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction : public ydk::Entity
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

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public ydk::Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop : public ydk::Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop : public ydk::Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch : public ydk::Entity
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

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch


class Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police


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

        ydk::YLeaf dscp_val; //type: one of uint8, enumeration
        ydk::YLeaf values; //type: empty
        ydk::YLeaf dscp_val1; //type: one of uint8, enumeration
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

        ydk::YLeaf dscp_val; //type: one of uint8, enumeration
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

        ydk::YLeaf prec; //type: one of uint8, enumeration
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
        ydk::YLeaf dscp_val; //type: one of uint8, enumeration
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
        ydk::YLeaf dscp_val; //type: one of uint8, enumeration

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

        ydk::YLeaf precedence_val; //type: one of uint8, enumeration

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
        class GigabitEthernet; //type: Native::Interface::GigabitEthernet
        class TenGigabitEthernet; //type: Native::Interface::TenGigabitEthernet
        class FortyGigabitEthernet; //type: Native::Interface::FortyGigabitEthernet
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
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet> > gigabitethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet> > tengigabitethernet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet> > fortygigabitethernet;
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
        class Utd; //type: Native::Interface::AppNavCompress::Utd
        class PriorityQueue; //type: Native::Interface::AppNavCompress::PriorityQueue
        class RcvQueue; //type: Native::Interface::AppNavCompress::RcvQueue
        class Peer; //type: Native::Interface::AppNavCompress::Peer
        class PmPath; //type: Native::Interface::AppNavCompress::PmPath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Switchport> switchport;
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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Utd> utd;
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


class Native::Interface::AppNavCompress::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Interface::AppNavCompress::Arp


class Native::Interface::AppNavCompress::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::AppNavCompress::Backup::Delay
        class Interface_; //type: Native::Interface::AppNavCompress::Backup::Interface_
        class Load; //type: Native::Interface::AppNavCompress::Backup::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup::Load> load;
        
}; // Native::Interface::AppNavCompress::Backup


class Native::Interface::AppNavCompress::Backup::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure; //type: one of enumeration, uint32
        ydk::YLeaf secondary_disable; //type: one of enumeration, uint32
        class Failure;
        class SecondaryDisable;

}; // Native::Interface::AppNavCompress::Backup::Delay


class Native::Interface::AppNavCompress::Backup::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::AppNavCompress::Backup::Interface_


class Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface


class Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface


class Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface


class Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface


class Native::Interface::AppNavCompress::Backup::Load : public ydk::Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kickin; //type: one of enumeration, uint32
        ydk::YLeaf kickout; //type: one of enumeration, uint32
        class Kickin;
        class Kickout;

}; // Native::Interface::AppNavCompress::Backup::Load


class Native::Interface::AppNavCompress::Cemoudp : public ydk::Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::AppNavCompress::Cemoudp::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::AppNavCompress::Cemoudp


class Native::Interface::AppNavCompress::Cemoudp::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr; //type: uint8

}; // Native::Interface::AppNavCompress::Cemoudp::Reserve


class Native::Interface::AppNavCompress::CwsTunnel : public ydk::Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        class Out; //type: Native::Interface::AppNavCompress::CwsTunnel::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::CwsTunnel::Out> out;
        
}; // Native::Interface::AppNavCompress::CwsTunnel


class Native::Interface::AppNavCompress::CwsTunnel::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_number; //type: uint16

}; // Native::Interface::AppNavCompress::CwsTunnel::Out


class Native::Interface::AppNavCompress::L2ProtocolTunnel : public ydk::Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf stp; //type: empty
        ydk::YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::AppNavCompress::L2ProtocolTunnel


class Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold : public ydk::Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold


class Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold : public ydk::Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::AppNavCompress::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Q; //type: Native::Interface::AppNavCompress::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::AppNavCompress::Encapsulation::Isl
        class Ppp; //type: Native::Interface::AppNavCompress::Encapsulation::Ppp
        class Slip; //type: Native::Interface::AppNavCompress::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::AppNavCompress::Encapsulation::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Encapsulation::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Encapsulation::Slip> slip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Encapsulation::FrameRelay> frame_relay; // presence node
        
}; // Native::Interface::AppNavCompress::Encapsulation


class Native::Interface::AppNavCompress::Encapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf native; //type: empty

}; // Native::Interface::AppNavCompress::Encapsulation::Dot1Q


class Native::Interface::AppNavCompress::Encapsulation::Isl : public ydk::Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16

}; // Native::Interface::AppNavCompress::Encapsulation::Isl


class Native::Interface::AppNavCompress::Encapsulation::Ppp : public ydk::Entity
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


}; // Native::Interface::AppNavCompress::Encapsulation::Ppp


class Native::Interface::AppNavCompress::Encapsulation::Slip : public ydk::Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::AppNavCompress::Encapsulation::Slip


class Native::Interface::AppNavCompress::Encapsulation::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ietf; //type: empty

}; // Native::Interface::AppNavCompress::Encapsulation::FrameRelay


class Native::Interface::AppNavCompress::FairQueueConf : public ydk::Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fair_queue; //type: boolean

}; // Native::Interface::AppNavCompress::FairQueueConf


class Native::Interface::AppNavCompress::FairQueue : public ydk::Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete; //type: empty

}; // Native::Interface::AppNavCompress::FairQueue


class Native::Interface::AppNavCompress::Flowcontrol : public ydk::Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: Receive
        ydk::YLeaf send; //type: Send
        class Receive;
        class Send;

}; // Native::Interface::AppNavCompress::Flowcontrol


class Native::Interface::AppNavCompress::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::AppNavCompress::Isis


class Native::Interface::AppNavCompress::KeepaliveSettings : public ydk::Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::AppNavCompress::KeepaliveSettings


class Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16
        ydk::YLeaf retries; //type: uint8

}; // Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive


class Native::Interface::AppNavCompress::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::AppNavCompress::Bfd


class Native::Interface::AppNavCompress::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::AppNavCompress::Bandwidth::Receive
        class Inherit; //type: Native::Interface::AppNavCompress::Bandwidth::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Bandwidth::Receive> receive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Bandwidth::Inherit> inherit; // presence node
        
}; // Native::Interface::AppNavCompress::Bandwidth


class Native::Interface::AppNavCompress::Bandwidth::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::AppNavCompress::Bandwidth::Receive


class Native::Interface::AppNavCompress::Bandwidth::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::AppNavCompress::Bandwidth::Inherit


class Native::Interface::AppNavCompress::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::AppNavCompress::Dampening::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Dampening::Restart> restart;
        
}; // Native::Interface::AppNavCompress::Dampening


class Native::Interface::AppNavCompress::Dampening::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::AppNavCompress::Dampening::Restart


class Native::Interface::AppNavCompress::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::AppNavCompress::Domain


class Native::Interface::AppNavCompress::HoldQueue : public ydk::Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf queue_length; //type: uint16
        class Direction;

}; // Native::Interface::AppNavCompress::HoldQueue


class Native::Interface::AppNavCompress::Mpls : public ydk::Entity
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


}; // Native::Interface::AppNavCompress::Mpls


class Native::Interface::AppNavCompress::IpVrf : public ydk::Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::AppNavCompress::IpVrf::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::IpVrf::Ip> ip;
        
}; // Native::Interface::AppNavCompress::IpVrf


class Native::Interface::AppNavCompress::IpVrf::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::AppNavCompress::IpVrf::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::AppNavCompress::IpVrf::Ip


class Native::Interface::AppNavCompress::IpVrf::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::AppNavCompress::IpVrf::Ip::Vrf


class Native::Interface::AppNavCompress::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::AppNavCompress::Vrf


class Native::Interface::AppNavCompress::Ip : public ydk::Entity
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

        ydk::YLeaf admission; //type: string
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf directed_broadcast; //type: one of uint16, string
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::AppNavCompress::Ip::AccessGroup
        class Arp; //type: Native::Interface::AppNavCompress::Ip::Arp
        class Vrf; //type: Native::Interface::AppNavCompress::Ip::Vrf
        class NoAddress; //type: Native::Interface::AppNavCompress::Ip::NoAddress
        class Address; //type: Native::Interface::AppNavCompress::Ip::Address
        class HelloInterval; //type: Native::Interface::AppNavCompress::Ip::HelloInterval
        class Authentication; //type: Native::Interface::AppNavCompress::Ip::Authentication
        class HoldTime; //type: Native::Interface::AppNavCompress::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::AppNavCompress::Ip::HelperAddress
        class Pim; //type: Native::Interface::AppNavCompress::Ip::Pim
        class Policy; //type: Native::Interface::AppNavCompress::Ip::Policy
        class Rip; //type: Native::Interface::AppNavCompress::Ip::Rip
        class RouteCacheConf; //type: Native::Interface::AppNavCompress::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::AppNavCompress::Ip::RouteCache
        class Router; //type: Native::Interface::AppNavCompress::Ip::Router
        class Tcp; //type: Native::Interface::AppNavCompress::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::AppNavCompress::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::AppNavCompress::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::AppNavCompress::Ip::SummaryAddress
        class Verify; //type: Native::Interface::AppNavCompress::Ip::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::NoAddress> no_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::HoldTime> hold_time;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::HelperAddress> > helper_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::SummaryAddress> summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::Verify> verify;
        
}; // Native::Interface::AppNavCompress::Ip


class Native::Interface::AppNavCompress::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Interface::AppNavCompress::Ip::AccessGroup::In
        class Out; //type: Native::Interface::AppNavCompress::Ip::AccessGroup::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::AccessGroup::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::AppNavCompress::Ip::AccessGroup


class Native::Interface::AppNavCompress::Ip::AccessGroup::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl> acl;
        
}; // Native::Interface::AppNavCompress::Ip::AccessGroup::In


class Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl


class Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl


class Native::Interface::AppNavCompress::Ip::AccessGroup::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl> acl;
        
}; // Native::Interface::AppNavCompress::Ip::AccessGroup::Out


class Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl

class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policed_dscp;

};

class Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf policed_dscp_transmit;

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

class Native::Interface::AppNavCompress::Backup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::AppNavCompress::Backup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::AppNavCompress::Backup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::AppNavCompress::Backup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::AppNavCompress::Flowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::AppNavCompress::Flowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::AppNavCompress::HoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_17_ */

