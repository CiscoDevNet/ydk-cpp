#ifndef _CISCO_IOS_XE_NATIVE_16_
#define _CISCO_IOS_XE_NATIVE_16_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_15.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst : public Entity
{
    public:
        PoliceCatalyst();
        ~PoliceCatalyst();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police : public Entity
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

        YLeaf bps_value; //type: string
        YLeaf bps; //type: empty
        YLeaf byte_value; //type: string
        YLeaf byte; //type: empty
        class Actions; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions> actions;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions : public Entity
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

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop> conform_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop> violate_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit> violate_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetFrdeTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction : public Entity
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

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch : public Entity
{
    public:
        PoliceSwitch();
        ~PoliceSwitch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch


class Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police : public Entity
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

        YLeaf cir; //type: uint32
        YLeaf bc; //type: uint32
        YLeaf exceed_action; //type: ExceedActionEnum
        class ExceedActionEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police


class Native::Policy::PolicyMap::Class_::ActionList::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf kilo_bits; //type: uint32
        YLeaf percent; //type: uint16
        YLeaf burst; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::Priority


class Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers : public Entity
{
    public:
        QueueBuffers();
        ~QueueBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ratio; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers


class Native::Policy::PolicyMap::Class_::ActionList::QueueLimit : public Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_limit_value; //type: uint32
        YLeaf queue_limit_type; //type: QueueLimitTypeEnum
        class QueueLimitTypeEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::QueueLimit


class Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp : public Entity
{
    public:
        QueueLimitDscp();
        ~QueueLimitDscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp> > dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp


class Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp : public Entity
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

        YLeaf dscp_val; //type: one of uint8, enumeration
        YLeaf values; //type: empty
        YLeaf dscp_val1; //type: one of uint8, enumeration
        YLeaf percent; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect : public Entity
{
    public:
        RandomDetect();
        ~RandomDetect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf discard_class_based; //type: empty
        YLeaf dscp_based; //type: empty
        YLeaf ecn; //type: empty
        YLeaf exponential_weighting_constant; //type: uint16
        YLeaf prec_based; //type: empty
        class Aggregate; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate
        class DiscardClass; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass
        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp
        class Precedence; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate> aggregate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass> discard_class;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp> > dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence> precedence;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate : public Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum_thresh; //type: uint32
        YLeaf maximum_thresh; //type: uint32
        YLeaf mark_probability; //type: empty
        YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass : public Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dclass; //type: uint16
        YLeaf min_threshold; //type: uint16
        YLeaf max_threshold; //type: uint16
        YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp : public Entity
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

        YLeaf dscp_val; //type: one of uint8, enumeration
        YLeaf min_threshold; //type: uint16
        YLeaf max_threshold; //type: uint16
        YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence : public Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prec; //type: one of uint8, enumeration
        YLeaf min_threshold; //type: uint16
        YLeaf max_threshold; //type: uint16
        YLeaf denominator; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence


class Native::Policy::PolicyMap::Class_::ActionList::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_clp; //type: empty
        YLeaf discard_class; //type: uint16
        YLeaf fr_de; //type: empty
        class Cos; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Cos
        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp
        class Ip; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Ip
        class Mpls; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls
        class QosGroup; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Cos> cos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup> qos_group;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set


class Native::Policy::PolicyMap::Class_::ActionList::Set::Cos : public Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf val; //type: uint16
        YLeaf pack; //type: PackEnum
        YLeaf user_priority; //type: empty
        YLeaf table; //type: string
        class PackEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Cos


class Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp : public Entity
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

        YLeaf tunnel; //type: empty
        YLeaf dscp_val; //type: one of uint8, enumeration
        class Dscp_; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_> dscp; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_ : public Entity
{
    public:
        Dscp_();
        ~Dscp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table; //type: string

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_


class Native::Policy::PolicyMap::Class_::ActionList::Set::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp
        class Precedence; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence> precedence; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Ip


class Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp : public Entity
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

        YLeaf tunnel; //type: empty
        YLeaf dscp_val; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence : public Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf precedence_val; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Experimental; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental> experimental;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental : public Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Imposition; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition
        class Topmost; //type: Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition> imposition;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost> topmost;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition : public Entity
{
    public:
        Imposition();
        ~Imposition();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exp_value; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition


class Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost : public Entity
{
    public:
        Topmost();
        ~Topmost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exp_value; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost


class Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup : public Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_group_value; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup


class Native::Policy::PolicyMap::Class_::ActionList::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adaptive; //type: uint32
        YLeaf fecn_adapt; //type: empty
        YLeaf max_buffers; //type: uint16
        class Average; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::Average
        class FrVoiceAdapt; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::Average> average;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt> fr_voice_adapt; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Shape


class Native::Policy::PolicyMap::Class_::ActionList::Shape::Average : public Entity
{
    public:
        Average();
        ~Average();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bit_rate; //type: uint64
        YLeaf bits_per_interval_sustained; //type: uint32
        YLeaf bits_per_interval_excess; //type: uint32
        YLeaf percent; //type: uint8
        YLeaf burst_size_sustained; //type: uint16
        YLeaf ms; //type: empty
        class Account; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account
        class Bse; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account> account;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse> bse;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::Average


class Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account : public Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf user_defined; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account


class Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse : public Entity
{
    public:
        Bse();
        ~Bse();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf burst_size_excess; //type: uint16
        YLeaf ms; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse


class Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt : public Entity
{
    public:
        FrVoiceAdapt();
        ~FrVoiceAdapt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deactivation; //type: uint16

}; // Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt


class Native::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AppnavCompress; //type: Native::Interface::AppnavCompress
        class AppnavUncompress; //type: Native::Interface::AppnavUncompress
        class Atm; //type: Native::Interface::Atm
        class AtmSubinterface; //type: Native::Interface::AtmSubinterface
        class AtmAcr; //type: Native::Interface::AtmAcr
        class AtmAcrsubinterface; //type: Native::Interface::AtmAcrsubinterface
        class Bdi; //type: Native::Interface::Bdi
        class Cem; //type: Native::Interface::Cem
        class CemAcr; //type: Native::Interface::CemAcr
        class EmbeddedServiceEngine; //type: Native::Interface::EmbeddedServiceEngine
        class Fastethernet; //type: Native::Interface::Fastethernet
        class Gigabitethernet; //type: Native::Interface::Gigabitethernet
        class Tengigabitethernet; //type: Native::Interface::Tengigabitethernet
        class Fortygigabitethernet; //type: Native::Interface::Fortygigabitethernet
        class Loopback; //type: Native::Interface::Loopback
        class Lisp; //type: Native::Interface::Lisp
        class LispSubinterface; //type: Native::Interface::LispSubinterface
        class Nve; //type: Native::Interface::Nve
        class Overlay; //type: Native::Interface::Overlay
        class PortChannel; //type: Native::Interface::PortChannel
        class PortChannelSubinterface; //type: Native::Interface::PortChannelSubinterface
        class Pseudowire; //type: Native::Interface::Pseudowire
        class Sm; //type: Native::Interface::Sm
        class Cellular; //type: Native::Interface::Cellular
        class Vlan; //type: Native::Interface::Vlan
        class GroupAsync; //type: Native::Interface::GroupAsync
        class Multilink; //type: Native::Interface::Multilink
        class Serial; //type: Native::Interface::Serial
        class Tunnel; //type: Native::Interface::Tunnel
        class VirtualTemplate; //type: Native::Interface::VirtualTemplate
        class Virtualportgroup; //type: Native::Interface::Virtualportgroup
        class Vasileft; //type: Native::Interface::Vasileft
        class Vasiright; //type: Native::Interface::Vasiright

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress> > appnav_compress;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress> > appnav_uncompress;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm> > atm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr> > atm_acr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface> atm_subinterface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi> > bdi;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular> > cellular;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem> > cem;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr> > cem_acr;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine> > embedded_service_engine;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet> > fastethernet;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fortygigabitethernet> > fortygigabitethernet;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet> > gigabitethernet;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync> > group_async;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp> > lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface> lisp_subinterface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback> > loopback;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Multilink> > multilink;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve> > nve;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay> > overlay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel> > port_channel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface> port_channel_subinterface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire> > pseudowire;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Serial> > serial;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Sm> > sm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet> > tengigabitethernet;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel> > tunnel;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasileft> > vasileft;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vasiright> > vasiright;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate> > virtual_template;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup> > virtualportgroup;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan> > vlan;
        
}; // Native::Interface


class Native::Interface::AppnavCompress : public Entity
{
    public:
        AppnavCompress();
        ~AppnavCompress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        class SwitchportConf; //type: Native::Interface::AppnavCompress::SwitchportConf
        class Switchport; //type: Native::Interface::AppnavCompress::Switchport
        class Arp; //type: Native::Interface::AppnavCompress::Arp
        class Backup; //type: Native::Interface::AppnavCompress::Backup
        class Cemoudp; //type: Native::Interface::AppnavCompress::Cemoudp
        class CwsTunnel; //type: Native::Interface::AppnavCompress::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::AppnavCompress::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::AppnavCompress::Encapsulation
        class FairQueueConf; //type: Native::Interface::AppnavCompress::FairQueueConf
        class FairQueue; //type: Native::Interface::AppnavCompress::FairQueue
        class Flowcontrol; //type: Native::Interface::AppnavCompress::Flowcontrol
        class Isis; //type: Native::Interface::AppnavCompress::Isis
        class KeepaliveSettings; //type: Native::Interface::AppnavCompress::KeepaliveSettings
        class Bfd; //type: Native::Interface::AppnavCompress::Bfd
        class Bandwidth; //type: Native::Interface::AppnavCompress::Bandwidth
        class Dampening; //type: Native::Interface::AppnavCompress::Dampening
        class Domain; //type: Native::Interface::AppnavCompress::Domain
        class HoldQueue; //type: Native::Interface::AppnavCompress::HoldQueue
        class Mpls; //type: Native::Interface::AppnavCompress::Mpls
        class IpVrf; //type: Native::Interface::AppnavCompress::IpVrf
        class Vrf; //type: Native::Interface::AppnavCompress::Vrf
        class Ip; //type: Native::Interface::AppnavCompress::Ip
        class Ipv6; //type: Native::Interface::AppnavCompress::Ipv6
        class Logging; //type: Native::Interface::AppnavCompress::Logging
        class Mdix; //type: Native::Interface::AppnavCompress::Mdix
        class Mop; //type: Native::Interface::AppnavCompress::Mop
        class Interface_Qos; //type: Native::Interface::AppnavCompress::Interface_Qos
        class Standby; //type: Native::Interface::AppnavCompress::Standby
        class AccessSession; //type: Native::Interface::AppnavCompress::AccessSession
        class StormControl; //type: Native::Interface::AppnavCompress::StormControl
        class Trust; //type: Native::Interface::AppnavCompress::Trust
        class Utd; //type: Native::Interface::AppnavCompress::Utd
        class PriorityQueue; //type: Native::Interface::AppnavCompress::PriorityQueue
        class RcvQueue; //type: Native::Interface::AppnavCompress::RcvQueue
        class Peer; //type: Native::Interface::AppnavCompress::Peer
        class PmPath; //type: Native::Interface::AppnavCompress::PmPath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavCompress::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::AppnavCompress


class Native::Interface::AppnavCompress::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::AppnavCompress::SwitchportConf


class Native::Interface::AppnavCompress::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::AppnavCompress::Switchport

class Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::TableEnum : public Enum
{
    public:
        static const Enum::YLeaf policed_dscp;

};

class Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedActionEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf policed_dscp_transmit;

};

class Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf bytes;
        static const Enum::YLeaf ms;
        static const Enum::YLeaf packets;
        static const Enum::YLeaf us;

};

class Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::PackEnum : public Enum
{
    public:
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf cos;
        static const Enum::YLeaf qos_group;
        static const Enum::YLeaf wlan;

};

class Native::Interface::AppnavCompress::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::AppnavCompress::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_16_ */

