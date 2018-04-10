#ifndef _CISCO_IOS_XR_NCS1001_OTS_CFG_
#define _CISCO_IOS_XR_NCS1001_OTS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1001_ots_cfg {

class HardwareModule : public ydk::Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

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

        class Node; //type: HardwareModule::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_ots_cfg::HardwareModule::Node> > node;
        
}; // HardwareModule


class HardwareModule::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf location; //type: string
        class Slot; //type: HardwareModule::Node::Slot

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_ots_cfg::HardwareModule::Node::Slot> > slot;
        
}; // HardwareModule::Node


class HardwareModule::Node::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot_id; //type: uint32
        class Amplifier; //type: HardwareModule::Node::Slot::Amplifier
        class Psm; //type: HardwareModule::Node::Slot::Psm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_ots_cfg::HardwareModule::Node::Slot::Amplifier> amplifier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_ots_cfg::HardwareModule::Node::Slot::Psm> psm;
        
}; // HardwareModule::Node::Slot


class HardwareModule::Node::Slot::Amplifier : public ydk::Entity
{
    public:
        Amplifier();
        ~Amplifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_type; //type: OtsAmplifierNode
        ydk::YLeaf grid_mode; //type: OtsAmplifierGridMode
        ydk::YLeaf udc_vlan; //type: uint32

}; // HardwareModule::Node::Slot::Amplifier


class HardwareModule::Node::Slot::Psm : public ydk::Entity
{
    public:
        Psm();
        ~Psm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mono_dir; //type: boolean
        ydk::YLeaf auto_threshold; //type: boolean
        ydk::YLeaf path_protection; //type: boolean
        ydk::YLeaf section_protection; //type: boolean
        ydk::YLeaf lockout_from; //type: OtsPsmLockoutFrom

}; // HardwareModule::Node::Slot::Psm

class OtsAmplifierNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf term;
        static const ydk::Enum::YLeaf ila;
        static const ydk::Enum::YLeaf roadm;

};

class OtsAmplifierGridMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_100g_hz;
        static const ydk::Enum::YLeaf Y_50g_hz;
        static const ydk::Enum::YLeaf gr_idle_ss;

};

class OtsPsmLockoutFrom : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf working;
        static const ydk::Enum::YLeaf protected_;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1001_OTS_CFG_ */

