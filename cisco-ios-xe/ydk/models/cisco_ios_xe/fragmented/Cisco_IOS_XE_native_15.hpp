#ifndef _CISCO_IOS_XE_NATIVE_15_
#define _CISCO_IOS_XE_NATIVE_15_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_14.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp::Police::Rate::Pdp::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate : public Entity
{
    public:
        PoliceTargetBitrate();
        ~PoliceTargetBitrate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police : public Entity
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

        YLeaf bit_rate; //type: uint64
        YLeaf confirm_burst_byte; //type: uint64
        YLeaf excess_burst_byte; //type: uint64
        YLeaf conform_action; //type: empty
        YLeaf transmit; //type: empty
        YLeaf exceed_action; //type: empty
        YLeaf drop; //type: empty
        YLeaf set_dscp_transmit; //type: empty
        YLeaf dscp; //type: empty
        YLeaf table; //type: string
        class Actions; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions> actions;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions : public Entity
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

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop> conform_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop> violate_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit> violate_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction : public Entity
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

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop : public Entity
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

        class ViolateAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction> violate_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow : public Entity
{
    public:
        PoliceFlow();
        ~PoliceFlow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police : public Entity
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

        class Flow; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow> flow;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mask; //type: MaskEnum
        YLeaf bps; //type: uint64
        YLeaf burst_normal; //type: uint32
        class Actions; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions> actions;
                class MaskEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions : public Entity
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

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop> conform_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateDrop> violate_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ViolateTransmit> violate_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetFrdeTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop : public Entity
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

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop::ConformAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop::ConformAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction : public Entity
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

        class SetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit> set_dscp_transmit;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit : public Entity
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

        class Dscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp> dscp;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmitTable::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetFrdeTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit : public Entity
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

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction : public Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction

class Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::TableEnum : public Enum
{
    public:
        static const Enum::YLeaf policed_dscp;

};

class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::MaskEnum : public Enum
{
    public:
        static const Enum::YLeaf dest_only;
        static const Enum::YLeaf full_flow;
        static const Enum::YLeaf src_only;

};

class Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow::Police::Flow::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::TableEnum : public Enum
{
    public:
        static const Enum::YLeaf policed_dscp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_15_ */

