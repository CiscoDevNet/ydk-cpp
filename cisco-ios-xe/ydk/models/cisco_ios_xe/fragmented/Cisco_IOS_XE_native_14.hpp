#ifndef _CISCO_IOS_XE_NATIVE_14_
#define _CISCO_IOS_XE_NATIVE_14_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_13.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit : public Entity
{
    public:
        ConformSetMplsExpTopmostTransmit();
        ~ConformSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable : public Entity
{
    public:
        ConformSetMplsExpTopmostTransmitTable();
        ~ConformSetMplsExpTopmostTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit : public Entity
{
    public:
        ConformSetPrecTransmit();
        ~ConformSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable : public Entity
{
    public:
        ConformSetPrecTransmitTable();
        ~ConformSetPrecTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit : public Entity
{
    public:
        ConformSetQosTransmit();
        ~ConformSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable : public Entity
{
    public:
        ConformSetQosTransmitTable();
        ~ConformSetQosTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_qos_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit : public Entity
{
    public:
        ConformTransmit();
        ~ConformTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop : public Entity
{
    public:
        ConformDrop();
        ~ConformDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp : public Entity
{
    public:
        ExceedDscp();
        ~ExceedDscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit : public Entity
{
    public:
        ExceedSetClpTransmit();
        ~ExceedSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit : public Entity
{
    public:
        ExceedSetCosTransmit();
        ~ExceedSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit : public Entity
{
    public:
        ExceedSetDiscardClassTransmit();
        ~ExceedSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit : public Entity
{
    public:
        ExceedSetDscpTransmit();
        ~ExceedSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public Entity
{
    public:
        SetDscpTransmit();
        ~SetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table; //type: TableEnum
        class TableEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable : public Entity
{
    public:
        ExceedSetDscpTransmitTable();
        ~ExceedSetDscpTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit : public Entity
{
    public:
        ExceedSetFrdeTransmit();
        ~ExceedSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit : public Entity
{
    public:
        ExceedSetMplsExpImpositionTransmit();
        ~ExceedSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit : public Entity
{
    public:
        ExceedSetMplsExpTopmostTransmit();
        ~ExceedSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit : public Entity
{
    public:
        ExceedSetPrecTransmit();
        ~ExceedSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit : public Entity
{
    public:
        ExceedSetQosTransmit();
        ~ExceedSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit : public Entity
{
    public:
        ExceedTransmit();
        ~ExceedTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop : public Entity
{
    public:
        ExceedDrop();
        ~ExceedDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit : public Entity
{
    public:
        ViolateSetClpTransmit();
        ~ViolateSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit : public Entity
{
    public:
        ViolateSetCosTransmit();
        ~ViolateSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit : public Entity
{
    public:
        ViolateSetDiscardClassTransmit();
        ~ViolateSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit : public Entity
{
    public:
        ViolateSetDscpTransmit();
        ~ViolateSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit : public Entity
{
    public:
        ViolateSetFrdeTransmit();
        ~ViolateSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit : public Entity
{
    public:
        ViolateSetMplsExpImpositionTransmit();
        ~ViolateSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit : public Entity
{
    public:
        ViolateSetMplsExpTopmostTransmit();
        ~ViolateSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit : public Entity
{
    public:
        ViolateSetPrecTransmit();
        ~ViolateSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit : public Entity
{
    public:
        ViolateSetQosTransmit();
        ~ViolateSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit : public Entity
{
    public:
        ViolateTransmit();
        ~ViolateTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop : public Entity
{
    public:
        ViolateDrop();
        ~ViolateDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp : public Entity
{
    public:
        PoliceRatePdp();
        ~PoliceRatePdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rate; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate> rate;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pdp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp> pdp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp : public Entity
{
    public:
        Pdp();
        ~Pdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf burst; //type: uint32
        YLeaf peak_rate; //type: PeakRateEnum
        YLeaf peak_burst; //type: uint32
        class Actions; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions> actions;
                class PeakRateEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions : public Entity
{
    public:
        Actions();
        ~Actions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop> conform_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop> violate_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit> violate_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit : public Entity
{
    public:
        ConformSetClpTransmit();
        ~ConformSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit : public Entity
{
    public:
        ConformSetCosTransmit();
        ~ConformSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_cos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable : public Entity
{
    public:
        ConformSetCosTransmitTable();
        ~ConformSetCosTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit : public Entity
{
    public:
        ConformSetDiscardClassTransmit();
        ~ConformSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit : public Entity
{
    public:
        ConformSetDscpTransmit();
        ~ConformSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_dscp_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable : public Entity
{
    public:
        ConformSetDscpTransmitTable();
        ~ConformSetDscpTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit : public Entity
{
    public:
        ConformSetFrdeTransmit();
        ~ConformSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetFrdeTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit : public Entity
{
    public:
        ConformSetMplsExpImpositionTransmit();
        ~ConformSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable : public Entity
{
    public:
        ConformSetMplsExpImpositionTransmitTable();
        ~ConformSetMplsExpImpositionTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit : public Entity
{
    public:
        ConformSetMplsExpTopmostTransmit();
        ~ConformSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable : public Entity
{
    public:
        ConformSetMplsExpTopmostTransmitTable();
        ~ConformSetMplsExpTopmostTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit : public Entity
{
    public:
        ConformSetPrecTransmit();
        ~ConformSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable : public Entity
{
    public:
        ConformSetPrecTransmitTable();
        ~ConformSetPrecTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit : public Entity
{
    public:
        ConformSetQosTransmit();
        ~ConformSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable : public Entity
{
    public:
        ConformSetQosTransmitTable();
        ~ConformSetQosTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_qos_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit : public Entity
{
    public:
        ConformTransmit();
        ~ConformTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop : public Entity
{
    public:
        ConformDrop();
        ~ConformDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp : public Entity
{
    public:
        ExceedDscp();
        ~ExceedDscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit : public Entity
{
    public:
        ExceedSetClpTransmit();
        ~ExceedSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit : public Entity
{
    public:
        ExceedSetCosTransmit();
        ~ExceedSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit : public Entity
{
    public:
        ExceedSetDiscardClassTransmit();
        ~ExceedSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit : public Entity
{
    public:
        ExceedSetDscpTransmit();
        ~ExceedSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public Entity
{
    public:
        SetDscpTransmit();
        ~SetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table; //type: TableEnum
        class TableEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable : public Entity
{
    public:
        ExceedSetDscpTransmitTable();
        ~ExceedSetDscpTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit : public Entity
{
    public:
        ExceedSetFrdeTransmit();
        ~ExceedSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit : public Entity
{
    public:
        ExceedSetMplsExpImpositionTransmit();
        ~ExceedSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit : public Entity
{
    public:
        ExceedSetMplsExpTopmostTransmit();
        ~ExceedSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit : public Entity
{
    public:
        ExceedSetPrecTransmit();
        ~ExceedSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit : public Entity
{
    public:
        ExceedSetQosTransmit();
        ~ExceedSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit : public Entity
{
    public:
        ExceedTransmit();
        ~ExceedTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop : public Entity
{
    public:
        ExceedDrop();
        ~ExceedDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit : public Entity
{
    public:
        ViolateSetClpTransmit();
        ~ViolateSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit : public Entity
{
    public:
        ViolateSetCosTransmit();
        ~ViolateSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit : public Entity
{
    public:
        ViolateSetDiscardClassTransmit();
        ~ViolateSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit : public Entity
{
    public:
        ViolateSetDscpTransmit();
        ~ViolateSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit : public Entity
{
    public:
        ViolateSetFrdeTransmit();
        ~ViolateSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit : public Entity
{
    public:
        ViolateSetMplsExpImpositionTransmit();
        ~ViolateSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit : public Entity
{
    public:
        ViolateSetMplsExpTopmostTransmit();
        ~ViolateSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit : public Entity
{
    public:
        ViolateSetPrecTransmit();
        ~ViolateSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to Cisco_IOS_XE_native::Native::TableMap::name)
        YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit : public Entity
{
    public:
        ViolateSetQosTransmit();
        ~ViolateSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit

class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::TableEnum : public Enum
{
    public:
        static const Enum::YLeaf policed_dscp;

};

class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::PeakRateEnum : public Enum
{
    public:
        static const Enum::YLeaf pdp;

};

class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::TableEnum : public Enum
{
    public:
        static const Enum::YLeaf policed_dscp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_14_ */

