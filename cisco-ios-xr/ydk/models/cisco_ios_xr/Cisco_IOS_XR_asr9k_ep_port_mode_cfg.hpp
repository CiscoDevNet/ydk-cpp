#ifndef _CISCO_IOS_XR_ASR9K_EP_PORT_MODE_CFG_
#define _CISCO_IOS_XR_ASR9K_EP_PORT_MODE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_ep_port_mode_cfg {

class HwModuleEpPortMode : public ydk::Entity
{
    public:
        HwModuleEpPortMode();
        ~HwModuleEpPortMode();

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

        class EpPortModeConfiguration; //type: HwModuleEpPortMode::EpPortModeConfiguration

        ydk::YList ep_port_mode_configuration;
        
}; // HwModuleEpPortMode


class HwModuleEpPortMode::EpPortModeConfiguration : public ydk::Entity
{
    public:
        EpPortModeConfiguration();
        ~EpPortModeConfiguration();

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

        ydk::YLeaf active; //type: string
        class Node; //type: HwModuleEpPortMode::EpPortModeConfiguration::Node

        ydk::YList node;
        
}; // HwModuleEpPortMode::EpPortModeConfiguration


class HwModuleEpPortMode::EpPortModeConfiguration::Node : public ydk::Entity
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

        ydk::YLeaf location; //type: string
        class Bays; //type: HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ep_port_mode_cfg::HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays> bays;
        
}; // HwModuleEpPortMode::EpPortModeConfiguration::Node


class HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays : public ydk::Entity
{
    public:
        Bays();
        ~Bays();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bay; //type: HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay

        ydk::YList bay;
        
}; // HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays


class HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay : public ydk::Entity
{
    public:
        Bay();
        ~Bay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bay_number; //type: string
        class Ports; //type: HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ep_port_mode_cfg::HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports> ports;
        
}; // HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay


class HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port

        ydk::YList port;
        
}; // HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports


class HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number; //type: string
        ydk::YLeaf if_port_mode; //type: HwModuleEpIfPortMode

}; // HwModuleEpPortMode::EpPortModeConfiguration::Node::Bays::Bay::Ports::Port

class HwModuleEpIfPortMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_2xhundredgige_16qam;
        static const ydk::Enum::YLeaf Y_2xhundredgige_8qam;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_EP_PORT_MODE_CFG_ */

