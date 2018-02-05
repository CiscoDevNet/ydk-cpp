
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_channel_monitor.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_channel_monitor {

ChannelMonitors::ChannelMonitors()
{

    yang_name = "channel-monitors"; yang_parent_name = "openconfig-channel-monitor"; is_top_level_class = true; has_list_ancestor = false;
}

ChannelMonitors::~ChannelMonitors()
{
}

bool ChannelMonitors::has_data() const
{
    for (std::size_t index=0; index<channel_monitor.size(); index++)
    {
        if(channel_monitor[index]->has_data())
            return true;
    }
    return false;
}

bool ChannelMonitors::has_operation() const
{
    for (std::size_t index=0; index<channel_monitor.size(); index++)
    {
        if(channel_monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ChannelMonitors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-channel-monitor:channel-monitors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ChannelMonitors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ChannelMonitors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel-monitor")
    {
        auto c = std::make_shared<ChannelMonitors::ChannelMonitor>();
        c->parent = this;
        channel_monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ChannelMonitors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : channel_monitor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ChannelMonitors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ChannelMonitors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ChannelMonitors::clone_ptr() const
{
    return std::make_shared<ChannelMonitors>();
}

std::string ChannelMonitors::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string ChannelMonitors::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function ChannelMonitors::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ChannelMonitors::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool ChannelMonitors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-monitor")
        return true;
    return false;
}

ChannelMonitors::ChannelMonitor::ChannelMonitor()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<ChannelMonitors::ChannelMonitor::Config>())
	,state(std::make_shared<ChannelMonitors::ChannelMonitor::State>())
	,channels(std::make_shared<ChannelMonitors::ChannelMonitor::Channels>())
{
    config->parent = this;
    state->parent = this;
    channels->parent = this;

    yang_name = "channel-monitor"; yang_parent_name = "channel-monitors"; is_top_level_class = false; has_list_ancestor = false;
}

ChannelMonitors::ChannelMonitor::~ChannelMonitor()
{
}

bool ChannelMonitors::ChannelMonitor::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (channels !=  nullptr && channels->has_data());
}

bool ChannelMonitors::ChannelMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (channels !=  nullptr && channels->has_operation());
}

std::string ChannelMonitors::ChannelMonitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-channel-monitor:channel-monitors/" << get_segment_path();
    return path_buffer.str();
}

std::string ChannelMonitors::ChannelMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-monitor" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ChannelMonitors::ChannelMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ChannelMonitors::ChannelMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<ChannelMonitors::ChannelMonitor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<ChannelMonitors::ChannelMonitor::State>();
        }
        return state;
    }

    if(child_yang_name == "channels")
    {
        if(channels == nullptr)
        {
            channels = std::make_shared<ChannelMonitors::ChannelMonitor::Channels>();
        }
        return channels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ChannelMonitors::ChannelMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(channels != nullptr)
    {
        children["channels"] = channels;
    }

    return children;
}

void ChannelMonitors::ChannelMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ChannelMonitors::ChannelMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ChannelMonitors::ChannelMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "channels" || name == "name")
        return true;
    return false;
}

ChannelMonitors::ChannelMonitor::Config::Config()
    :
    name{YType::str, "name"},
    monitor_port{YType::str, "monitor-port"}
{

    yang_name = "config"; yang_parent_name = "channel-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

ChannelMonitors::ChannelMonitor::Config::~Config()
{
}

bool ChannelMonitors::ChannelMonitor::Config::has_data() const
{
    return name.is_set
	|| monitor_port.is_set;
}

bool ChannelMonitors::ChannelMonitor::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(monitor_port.yfilter);
}

std::string ChannelMonitors::ChannelMonitor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ChannelMonitors::ChannelMonitor::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (monitor_port.is_set || is_set(monitor_port.yfilter)) leaf_name_data.push_back(monitor_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ChannelMonitors::ChannelMonitor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ChannelMonitors::ChannelMonitor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ChannelMonitors::ChannelMonitor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-port")
    {
        monitor_port = value;
        monitor_port.value_namespace = name_space;
        monitor_port.value_namespace_prefix = name_space_prefix;
    }
}

void ChannelMonitors::ChannelMonitor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "monitor-port")
    {
        monitor_port.yfilter = yfilter;
    }
}

bool ChannelMonitors::ChannelMonitor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "monitor-port")
        return true;
    return false;
}

ChannelMonitors::ChannelMonitor::State::State()
    :
    name{YType::str, "name"},
    monitor_port{YType::str, "monitor-port"}
{

    yang_name = "state"; yang_parent_name = "channel-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

ChannelMonitors::ChannelMonitor::State::~State()
{
}

bool ChannelMonitors::ChannelMonitor::State::has_data() const
{
    return name.is_set
	|| monitor_port.is_set;
}

bool ChannelMonitors::ChannelMonitor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(monitor_port.yfilter);
}

std::string ChannelMonitors::ChannelMonitor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ChannelMonitors::ChannelMonitor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (monitor_port.is_set || is_set(monitor_port.yfilter)) leaf_name_data.push_back(monitor_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ChannelMonitors::ChannelMonitor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ChannelMonitors::ChannelMonitor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ChannelMonitors::ChannelMonitor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-port")
    {
        monitor_port = value;
        monitor_port.value_namespace = name_space;
        monitor_port.value_namespace_prefix = name_space_prefix;
    }
}

void ChannelMonitors::ChannelMonitor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "monitor-port")
    {
        monitor_port.yfilter = yfilter;
    }
}

bool ChannelMonitors::ChannelMonitor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "monitor-port")
        return true;
    return false;
}

ChannelMonitors::ChannelMonitor::Channels::Channels()
{

    yang_name = "channels"; yang_parent_name = "channel-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

ChannelMonitors::ChannelMonitor::Channels::~Channels()
{
}

bool ChannelMonitors::ChannelMonitor::Channels::has_data() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return false;
}

bool ChannelMonitors::ChannelMonitor::Channels::has_operation() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ChannelMonitors::ChannelMonitor::Channels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ChannelMonitors::ChannelMonitor::Channels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ChannelMonitors::ChannelMonitor::Channels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel")
    {
        auto c = std::make_shared<ChannelMonitors::ChannelMonitor::Channels::Channel>();
        c->parent = this;
        channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ChannelMonitors::ChannelMonitor::Channels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : channel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ChannelMonitors::ChannelMonitor::Channels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ChannelMonitors::ChannelMonitor::Channels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ChannelMonitors::ChannelMonitor::Channels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel")
        return true;
    return false;
}

ChannelMonitors::ChannelMonitor::Channels::Channel::Channel()
    :
    lower_frequency{YType::str, "lower-frequency"},
    upper_frequency{YType::str, "upper-frequency"}
    	,
    state(std::make_shared<ChannelMonitors::ChannelMonitor::Channels::Channel::State>())
{
    state->parent = this;

    yang_name = "channel"; yang_parent_name = "channels"; is_top_level_class = false; has_list_ancestor = true;
}

ChannelMonitors::ChannelMonitor::Channels::Channel::~Channel()
{
}

bool ChannelMonitors::ChannelMonitor::Channels::Channel::has_data() const
{
    return lower_frequency.is_set
	|| upper_frequency.is_set
	|| (state !=  nullptr && state->has_data());
}

bool ChannelMonitors::ChannelMonitor::Channels::Channel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_frequency.yfilter)
	|| ydk::is_set(upper_frequency.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string ChannelMonitors::ChannelMonitor::Channels::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel" <<"[lower-frequency='" <<lower_frequency <<"']" <<"[upper-frequency='" <<upper_frequency <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ChannelMonitors::ChannelMonitor::Channels::Channel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_frequency.is_set || is_set(lower_frequency.yfilter)) leaf_name_data.push_back(lower_frequency.get_name_leafdata());
    if (upper_frequency.is_set || is_set(upper_frequency.yfilter)) leaf_name_data.push_back(upper_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ChannelMonitors::ChannelMonitor::Channels::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<ChannelMonitors::ChannelMonitor::Channels::Channel::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ChannelMonitors::ChannelMonitor::Channels::Channel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void ChannelMonitors::ChannelMonitor::Channels::Channel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-frequency")
    {
        lower_frequency = value;
        lower_frequency.value_namespace = name_space;
        lower_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-frequency")
    {
        upper_frequency = value;
        upper_frequency.value_namespace = name_space;
        upper_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void ChannelMonitors::ChannelMonitor::Channels::Channel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-frequency")
    {
        lower_frequency.yfilter = yfilter;
    }
    if(value_path == "upper-frequency")
    {
        upper_frequency.yfilter = yfilter;
    }
}

bool ChannelMonitors::ChannelMonitor::Channels::Channel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "lower-frequency" || name == "upper-frequency")
        return true;
    return false;
}

ChannelMonitors::ChannelMonitor::Channels::Channel::State::State()
    :
    lower_frequency{YType::uint64, "lower-frequency"},
    upper_frequency{YType::uint64, "upper-frequency"},
    psd{YType::str, "psd"}
{

    yang_name = "state"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true;
}

ChannelMonitors::ChannelMonitor::Channels::Channel::State::~State()
{
}

bool ChannelMonitors::ChannelMonitor::Channels::Channel::State::has_data() const
{
    return lower_frequency.is_set
	|| upper_frequency.is_set
	|| psd.is_set;
}

bool ChannelMonitors::ChannelMonitor::Channels::Channel::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_frequency.yfilter)
	|| ydk::is_set(upper_frequency.yfilter)
	|| ydk::is_set(psd.yfilter);
}

std::string ChannelMonitors::ChannelMonitor::Channels::Channel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ChannelMonitors::ChannelMonitor::Channels::Channel::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_frequency.is_set || is_set(lower_frequency.yfilter)) leaf_name_data.push_back(lower_frequency.get_name_leafdata());
    if (upper_frequency.is_set || is_set(upper_frequency.yfilter)) leaf_name_data.push_back(upper_frequency.get_name_leafdata());
    if (psd.is_set || is_set(psd.yfilter)) leaf_name_data.push_back(psd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ChannelMonitors::ChannelMonitor::Channels::Channel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ChannelMonitors::ChannelMonitor::Channels::Channel::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ChannelMonitors::ChannelMonitor::Channels::Channel::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-frequency")
    {
        lower_frequency = value;
        lower_frequency.value_namespace = name_space;
        lower_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-frequency")
    {
        upper_frequency = value;
        upper_frequency.value_namespace = name_space;
        upper_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psd")
    {
        psd = value;
        psd.value_namespace = name_space;
        psd.value_namespace_prefix = name_space_prefix;
    }
}

void ChannelMonitors::ChannelMonitor::Channels::Channel::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-frequency")
    {
        lower_frequency.yfilter = yfilter;
    }
    if(value_path == "upper-frequency")
    {
        upper_frequency.yfilter = yfilter;
    }
    if(value_path == "psd")
    {
        psd.yfilter = yfilter;
    }
}

bool ChannelMonitors::ChannelMonitor::Channels::Channel::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-frequency" || name == "upper-frequency" || name == "psd")
        return true;
    return false;
}


}
}

