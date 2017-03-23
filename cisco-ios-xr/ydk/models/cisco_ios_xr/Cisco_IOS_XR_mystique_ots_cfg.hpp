#ifndef _CISCO_IOS_XR_MYSTIQUE_OTS_CFG_
#define _CISCO_IOS_XR_MYSTIQUE_OTS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mystique_ots_cfg {

class HardwareModule : public Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Node; //type: HardwareModule::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_mystique_ots_cfg::HardwareModule::Node> > node;


}; // HardwareModule


class HardwareModule::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location; //type: string

        class Slot; //type: HardwareModule::Node::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_mystique_ots_cfg::HardwareModule::Node::Slot> > slot;


}; // HardwareModule::Node


class HardwareModule::Node::Slot : public Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slot_id; //type: string

        class Amplifier; //type: HardwareModule::Node::Slot::Amplifier
        class Psm; //type: HardwareModule::Node::Slot::Psm

        std::shared_ptr<Cisco_IOS_XR_mystique_ots_cfg::HardwareModule::Node::Slot::Amplifier> amplifier;
        std::shared_ptr<Cisco_IOS_XR_mystique_ots_cfg::HardwareModule::Node::Slot::Psm> psm;


}; // HardwareModule::Node::Slot


class HardwareModule::Node::Slot::Amplifier : public Entity
{
    public:
        Amplifier();
        ~Amplifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_type; //type: OtsAmplifierNodeEnum
        YLeaf grid_mode; //type: OtsAmplifierGridModeEnum
        YLeaf udc_vlan; //type: uint32



}; // HardwareModule::Node::Slot::Amplifier


class HardwareModule::Node::Slot::Psm : public Entity
{
    public:
        Psm();
        ~Psm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lockout_from; //type: OtsPsmLockoutFromEnum
        YLeaf manual_switch_to; //type: OtsPsmManualSwitchEnum



}; // HardwareModule::Node::Slot::Psm

class OtsPsmLockoutFromEnum : public Enum
{
    public:
        static const Enum::YLeaf working;
        static const Enum::YLeaf protected_;

};

class OtsAmplifierGridModeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_100g_hz;
        static const Enum::YLeaf Y_50g_hz;
        static const Enum::YLeaf gr_idle_ss;

};

class OtsPsmManualSwitchEnum : public Enum
{
    public:
        static const Enum::YLeaf working;
        static const Enum::YLeaf protected_;

};

class OtsAmplifierNodeEnum : public Enum
{
    public:
        static const Enum::YLeaf term;
        static const Enum::YLeaf ila;
        static const Enum::YLeaf roadm;

};


}
}

#endif /* _CISCO_IOS_XR_MYSTIQUE_OTS_CFG_ */

