#ifndef _OPENCONFIG_CHANNEL_MONITOR_
#define _OPENCONFIG_CHANNEL_MONITOR_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_channel_monitor {

class ChannelMonitors : public ydk::Entity
{
    public:
        ChannelMonitors();
        ~ChannelMonitors();

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

        class ChannelMonitor; //type: ChannelMonitors::ChannelMonitor

        std::vector<std::shared_ptr<openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor> > channel_monitor;
        
}; // ChannelMonitors


class ChannelMonitors::ChannelMonitor : public ydk::Entity
{
    public:
        ChannelMonitor();
        ~ChannelMonitor();

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

        //type: leafref (refers to openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::Config::name)
        ydk::YLeaf name;
        class Config; //type: ChannelMonitors::ChannelMonitor::Config
        class State; //type: ChannelMonitors::ChannelMonitor::State
        class Channels; //type: ChannelMonitors::ChannelMonitor::Channels

        std::shared_ptr<openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::Channels> channels;
        std::shared_ptr<openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::Config> config;
        std::shared_ptr<openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::State> state;
        
}; // ChannelMonitors::ChannelMonitor


class ChannelMonitors::ChannelMonitor::Channels : public ydk::Entity
{
    public:
        Channels();
        ~Channels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Channel; //type: ChannelMonitors::ChannelMonitor::Channels::Channel

        std::vector<std::shared_ptr<openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::Channels::Channel> > channel;
        
}; // ChannelMonitors::ChannelMonitor::Channels


class ChannelMonitors::ChannelMonitor::Channels::Channel : public ydk::Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint64 (refers to openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::Channels::Channel::State::lower_frequency)
        ydk::YLeaf lower_frequency;
        //type: uint64 (refers to openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::Channels::Channel::State::upper_frequency)
        ydk::YLeaf upper_frequency;
        class State; //type: ChannelMonitors::ChannelMonitor::Channels::Channel::State

        std::shared_ptr<openconfig::openconfig_channel_monitor::ChannelMonitors::ChannelMonitor::Channels::Channel::State> state;
        
}; // ChannelMonitors::ChannelMonitor::Channels::Channel


class ChannelMonitors::ChannelMonitor::Channels::Channel::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_frequency; //type: uint64
        ydk::YLeaf upper_frequency; //type: uint64
        ydk::YLeaf psd; //type: binary

}; // ChannelMonitors::ChannelMonitor::Channels::Channel::State


class ChannelMonitors::ChannelMonitor::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf name;
        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf monitor_port;

}; // ChannelMonitors::ChannelMonitor::Config


class ChannelMonitors::ChannelMonitor::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf name;
        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf monitor_port;

}; // ChannelMonitors::ChannelMonitor::State


}
}

#endif /* _OPENCONFIG_CHANNEL_MONITOR_ */

