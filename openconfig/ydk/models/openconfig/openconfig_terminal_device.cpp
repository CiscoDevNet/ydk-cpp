
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_terminal_device.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_terminal_device {

TerminalDevice::TerminalDevice()
    :
    config(std::make_shared<TerminalDevice::Config>())
    , state(std::make_shared<TerminalDevice::State>())
    , logical_channels(std::make_shared<TerminalDevice::LogicalChannels>())
    , operational_modes(std::make_shared<TerminalDevice::OperationalModes>())
{
    config->parent = this;
    state->parent = this;
    logical_channels->parent = this;
    operational_modes->parent = this;

    yang_name = "terminal-device"; yang_parent_name = "openconfig-terminal-device"; is_top_level_class = true; has_list_ancestor = false; 
}

TerminalDevice::~TerminalDevice()
{
}

bool TerminalDevice::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (logical_channels !=  nullptr && logical_channels->has_data())
	|| (operational_modes !=  nullptr && operational_modes->has_data());
}

bool TerminalDevice::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (logical_channels !=  nullptr && logical_channels->has_operation())
	|| (operational_modes !=  nullptr && operational_modes->has_operation());
}

std::string TerminalDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TerminalDevice::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TerminalDevice::State>();
        }
        return state;
    }

    if(child_yang_name == "logical-channels")
    {
        if(logical_channels == nullptr)
        {
            logical_channels = std::make_shared<TerminalDevice::LogicalChannels>();
        }
        return logical_channels;
    }

    if(child_yang_name == "operational-modes")
    {
        if(operational_modes == nullptr)
        {
            operational_modes = std::make_shared<TerminalDevice::OperationalModes>();
        }
        return operational_modes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(logical_channels != nullptr)
    {
        _children["logical-channels"] = logical_channels;
    }

    if(operational_modes != nullptr)
    {
        _children["operational-modes"] = operational_modes;
    }

    return _children;
}

void TerminalDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> TerminalDevice::clone_ptr() const
{
    return std::make_shared<TerminalDevice>();
}

std::string TerminalDevice::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string TerminalDevice::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function TerminalDevice::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TerminalDevice::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool TerminalDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "logical-channels" || name == "operational-modes")
        return true;
    return false;
}

TerminalDevice::Config::Config()
{

    yang_name = "config"; yang_parent_name = "terminal-device"; is_top_level_class = false; has_list_ancestor = false; 
}

TerminalDevice::Config::~Config()
{
}

bool TerminalDevice::Config::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool TerminalDevice::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string TerminalDevice::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    return path_buffer.str();
}

std::string TerminalDevice::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

TerminalDevice::State::State()
{

    yang_name = "state"; yang_parent_name = "terminal-device"; is_top_level_class = false; has_list_ancestor = false; 
}

TerminalDevice::State::~State()
{
}

bool TerminalDevice::State::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool TerminalDevice::State::has_operation() const
{
    return is_set(yfilter);
}

std::string TerminalDevice::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    return path_buffer.str();
}

std::string TerminalDevice::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::State::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

TerminalDevice::LogicalChannels::LogicalChannels()
    :
    channel(this, {"index_"})
{

    yang_name = "logical-channels"; yang_parent_name = "terminal-device"; is_top_level_class = false; has_list_ancestor = false; 
}

TerminalDevice::LogicalChannels::~LogicalChannels()
{
}

bool TerminalDevice::LogicalChannels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<channel.len(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return false;
}

bool TerminalDevice::LogicalChannels::has_operation() const
{
    for (std::size_t index=0; index<channel.len(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TerminalDevice::LogicalChannels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    return path_buffer.str();
}

std::string TerminalDevice::LogicalChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel")
    {
        auto ent_ = std::make_shared<TerminalDevice::LogicalChannels::Channel>();
        ent_->parent = this;
        channel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : channel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::LogicalChannels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::LogicalChannels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Channel()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Config>())
    , state(std::make_shared<TerminalDevice::LogicalChannels::Channel::State>())
    , otn(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn>())
    , ethernet(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet>())
    , ingress(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress>())
    , logical_channel_assignments(std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments>())
{
    config->parent = this;
    state->parent = this;
    otn->parent = this;
    ethernet->parent = this;
    ingress->parent = this;
    logical_channel_assignments->parent = this;

    yang_name = "channel"; yang_parent_name = "logical-channels"; is_top_level_class = false; has_list_ancestor = false; 
}

TerminalDevice::LogicalChannels::Channel::~Channel()
{
}

bool TerminalDevice::LogicalChannels::Channel::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (otn !=  nullptr && otn->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (ingress !=  nullptr && ingress->has_data())
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (otn !=  nullptr && otn->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device/logical-channels/" << get_segment_path();
    return path_buffer.str();
}

std::string TerminalDevice::LogicalChannels::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::State>();
        }
        return state;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "logical-channel-assignments")
    {
        if(logical_channel_assignments == nullptr)
        {
            logical_channel_assignments = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments>();
        }
        return logical_channel_assignments;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    if(logical_channel_assignments != nullptr)
    {
        _children["logical-channel-assignments"] = logical_channel_assignments;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::Channel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "otn" || name == "ethernet" || name == "ingress" || name == "logical-channel-assignments" || name == "index")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Config::Config()
    :
    index_{YType::uint32, "index"},
    description{YType::str, "description"},
    admin_state{YType::enumeration, "admin-state"},
    rate_class{YType::identityref, "rate-class"},
    trib_protocol{YType::identityref, "trib-protocol"},
    logical_channel_type{YType::identityref, "logical-channel-type"},
    loopback_mode{YType::enumeration, "loopback-mode"}
{

    yang_name = "config"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| description.is_set
	|| admin_state.is_set
	|| rate_class.is_set
	|| trib_protocol.is_set
	|| logical_channel_type.is_set
	|| loopback_mode.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(rate_class.yfilter)
	|| ydk::is_set(trib_protocol.yfilter)
	|| ydk::is_set(logical_channel_type.yfilter)
	|| ydk::is_set(loopback_mode.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (rate_class.is_set || is_set(rate_class.yfilter)) leaf_name_data.push_back(rate_class.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.yfilter)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());
    if (logical_channel_type.is_set || is_set(logical_channel_type.yfilter)) leaf_name_data.push_back(logical_channel_type.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-class")
    {
        rate_class = value;
        rate_class.value_namespace = name_space;
        rate_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
        trib_protocol.value_namespace = name_space;
        trib_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type = value;
        logical_channel_type.value_namespace = name_space;
        logical_channel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "rate-class")
    {
        rate_class.yfilter = yfilter;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol.yfilter = yfilter;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "description" || name == "admin-state" || name == "rate-class" || name == "trib-protocol" || name == "logical-channel-type" || name == "loopback-mode")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::State::State()
    :
    index_{YType::uint32, "index"},
    description{YType::str, "description"},
    admin_state{YType::enumeration, "admin-state"},
    rate_class{YType::identityref, "rate-class"},
    trib_protocol{YType::identityref, "trib-protocol"},
    logical_channel_type{YType::identityref, "logical-channel-type"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    link_state{YType::enumeration, "link-state"}
{

    yang_name = "state"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| description.is_set
	|| admin_state.is_set
	|| rate_class.is_set
	|| trib_protocol.is_set
	|| logical_channel_type.is_set
	|| loopback_mode.is_set
	|| link_state.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(rate_class.yfilter)
	|| ydk::is_set(trib_protocol.yfilter)
	|| ydk::is_set(logical_channel_type.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(link_state.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (rate_class.is_set || is_set(rate_class.yfilter)) leaf_name_data.push_back(rate_class.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.yfilter)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());
    if (logical_channel_type.is_set || is_set(logical_channel_type.yfilter)) leaf_name_data.push_back(logical_channel_type.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-class")
    {
        rate_class = value;
        rate_class.value_namespace = name_space;
        rate_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
        trib_protocol.value_namespace = name_space;
        trib_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type = value;
        logical_channel_type.value_namespace = name_space;
        logical_channel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "rate-class")
    {
        rate_class.yfilter = yfilter;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol.yfilter = yfilter;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "description" || name == "admin-state" || name == "rate-class" || name == "trib-protocol" || name == "logical-channel-type" || name == "loopback-mode" || name == "link-state")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Otn::Otn()
    :
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::Config>())
    , state(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "otn"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Otn::~Otn()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Otn::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::LogicalChannels::Channel::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Otn::Config::Config()
    :
    tti_msg_transmit{YType::str, "tti-msg-transmit"},
    tti_msg_expected{YType::str, "tti-msg-expected"},
    tti_msg_auto{YType::boolean, "tti-msg-auto"}
{

    yang_name = "config"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Otn::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::Config::has_data() const
{
    if (is_presence_container) return true;
    return tti_msg_transmit.is_set
	|| tti_msg_expected.is_set
	|| tti_msg_auto.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tti_msg_transmit.yfilter)
	|| ydk::is_set(tti_msg_expected.yfilter)
	|| ydk::is_set(tti_msg_auto.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Otn::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tti_msg_transmit.is_set || is_set(tti_msg_transmit.yfilter)) leaf_name_data.push_back(tti_msg_transmit.get_name_leafdata());
    if (tti_msg_expected.is_set || is_set(tti_msg_expected.yfilter)) leaf_name_data.push_back(tti_msg_expected.get_name_leafdata());
    if (tti_msg_auto.is_set || is_set(tti_msg_auto.yfilter)) leaf_name_data.push_back(tti_msg_auto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Otn::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Otn::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit = value;
        tti_msg_transmit.value_namespace = name_space;
        tti_msg_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected = value;
        tti_msg_expected.value_namespace = name_space;
        tti_msg_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto = value;
        tti_msg_auto.value_namespace = name_space;
        tti_msg_auto.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Otn::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit.yfilter = yfilter;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected.yfilter = yfilter;
    }
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Otn::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-msg-transmit" || name == "tti-msg-expected" || name == "tti-msg-auto")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Otn::State::State()
    :
    tti_msg_transmit{YType::str, "tti-msg-transmit"},
    tti_msg_expected{YType::str, "tti-msg-expected"},
    tti_msg_auto{YType::boolean, "tti-msg-auto"},
    tti_msg_recv{YType::str, "tti-msg-recv"},
    rdi_msg{YType::str, "rdi-msg"},
    errored_seconds{YType::uint64, "errored-seconds"},
    severely_errored_seconds{YType::uint64, "severely-errored-seconds"},
    unavailable_seconds{YType::uint64, "unavailable-seconds"},
    code_violations{YType::uint64, "code-violations"},
    fec_uncorrectable_words{YType::uint64, "fec-uncorrectable-words"},
    fec_corrected_bytes{YType::uint64, "fec-corrected-bytes"},
    fec_corrected_bits{YType::uint64, "fec-corrected-bits"},
    background_block_errors{YType::uint64, "background-block-errors"}
        ,
    pre_fec_ber(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer>())
    , post_fec_ber(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer>())
    , q_value(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::QValue>())
    , esnr(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr>())
{
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q_value->parent = this;
    esnr->parent = this;

    yang_name = "state"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Otn::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::has_data() const
{
    if (is_presence_container) return true;
    return tti_msg_transmit.is_set
	|| tti_msg_expected.is_set
	|| tti_msg_auto.is_set
	|| tti_msg_recv.is_set
	|| rdi_msg.is_set
	|| errored_seconds.is_set
	|| severely_errored_seconds.is_set
	|| unavailable_seconds.is_set
	|| code_violations.is_set
	|| fec_uncorrectable_words.is_set
	|| fec_corrected_bytes.is_set
	|| fec_corrected_bits.is_set
	|| background_block_errors.is_set
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (q_value !=  nullptr && q_value->has_data())
	|| (esnr !=  nullptr && esnr->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tti_msg_transmit.yfilter)
	|| ydk::is_set(tti_msg_expected.yfilter)
	|| ydk::is_set(tti_msg_auto.yfilter)
	|| ydk::is_set(tti_msg_recv.yfilter)
	|| ydk::is_set(rdi_msg.yfilter)
	|| ydk::is_set(errored_seconds.yfilter)
	|| ydk::is_set(severely_errored_seconds.yfilter)
	|| ydk::is_set(unavailable_seconds.yfilter)
	|| ydk::is_set(code_violations.yfilter)
	|| ydk::is_set(fec_uncorrectable_words.yfilter)
	|| ydk::is_set(fec_corrected_bytes.yfilter)
	|| ydk::is_set(fec_corrected_bits.yfilter)
	|| ydk::is_set(background_block_errors.yfilter)
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (q_value !=  nullptr && q_value->has_operation())
	|| (esnr !=  nullptr && esnr->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Otn::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tti_msg_transmit.is_set || is_set(tti_msg_transmit.yfilter)) leaf_name_data.push_back(tti_msg_transmit.get_name_leafdata());
    if (tti_msg_expected.is_set || is_set(tti_msg_expected.yfilter)) leaf_name_data.push_back(tti_msg_expected.get_name_leafdata());
    if (tti_msg_auto.is_set || is_set(tti_msg_auto.yfilter)) leaf_name_data.push_back(tti_msg_auto.get_name_leafdata());
    if (tti_msg_recv.is_set || is_set(tti_msg_recv.yfilter)) leaf_name_data.push_back(tti_msg_recv.get_name_leafdata());
    if (rdi_msg.is_set || is_set(rdi_msg.yfilter)) leaf_name_data.push_back(rdi_msg.get_name_leafdata());
    if (errored_seconds.is_set || is_set(errored_seconds.yfilter)) leaf_name_data.push_back(errored_seconds.get_name_leafdata());
    if (severely_errored_seconds.is_set || is_set(severely_errored_seconds.yfilter)) leaf_name_data.push_back(severely_errored_seconds.get_name_leafdata());
    if (unavailable_seconds.is_set || is_set(unavailable_seconds.yfilter)) leaf_name_data.push_back(unavailable_seconds.get_name_leafdata());
    if (code_violations.is_set || is_set(code_violations.yfilter)) leaf_name_data.push_back(code_violations.get_name_leafdata());
    if (fec_uncorrectable_words.is_set || is_set(fec_uncorrectable_words.yfilter)) leaf_name_data.push_back(fec_uncorrectable_words.get_name_leafdata());
    if (fec_corrected_bytes.is_set || is_set(fec_corrected_bytes.yfilter)) leaf_name_data.push_back(fec_corrected_bytes.get_name_leafdata());
    if (fec_corrected_bits.is_set || is_set(fec_corrected_bits.yfilter)) leaf_name_data.push_back(fec_corrected_bits.get_name_leafdata());
    if (background_block_errors.is_set || is_set(background_block_errors.yfilter)) leaf_name_data.push_back(background_block_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q-value")
    {
        if(q_value == nullptr)
        {
            q_value = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::QValue>();
        }
        return q_value;
    }

    if(child_yang_name == "esnr")
    {
        if(esnr == nullptr)
        {
            esnr = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr>();
        }
        return esnr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Otn::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pre_fec_ber != nullptr)
    {
        _children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        _children["post-fec-ber"] = post_fec_ber;
    }

    if(q_value != nullptr)
    {
        _children["q-value"] = q_value;
    }

    if(esnr != nullptr)
    {
        _children["esnr"] = esnr;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit = value;
        tti_msg_transmit.value_namespace = name_space;
        tti_msg_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected = value;
        tti_msg_expected.value_namespace = name_space;
        tti_msg_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto = value;
        tti_msg_auto.value_namespace = name_space;
        tti_msg_auto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-msg-recv")
    {
        tti_msg_recv = value;
        tti_msg_recv.value_namespace = name_space;
        tti_msg_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rdi-msg")
    {
        rdi_msg = value;
        rdi_msg.value_namespace = name_space;
        rdi_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-seconds")
    {
        errored_seconds = value;
        errored_seconds.value_namespace = name_space;
        errored_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severely-errored-seconds")
    {
        severely_errored_seconds = value;
        severely_errored_seconds.value_namespace = name_space;
        severely_errored_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unavailable-seconds")
    {
        unavailable_seconds = value;
        unavailable_seconds.value_namespace = name_space;
        unavailable_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code-violations")
    {
        code_violations = value;
        code_violations.value_namespace = name_space;
        code_violations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-uncorrectable-words")
    {
        fec_uncorrectable_words = value;
        fec_uncorrectable_words.value_namespace = name_space;
        fec_uncorrectable_words.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-corrected-bytes")
    {
        fec_corrected_bytes = value;
        fec_corrected_bytes.value_namespace = name_space;
        fec_corrected_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-corrected-bits")
    {
        fec_corrected_bits = value;
        fec_corrected_bits.value_namespace = name_space;
        fec_corrected_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "background-block-errors")
    {
        background_block_errors = value;
        background_block_errors.value_namespace = name_space;
        background_block_errors.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit.yfilter = yfilter;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected.yfilter = yfilter;
    }
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto.yfilter = yfilter;
    }
    if(value_path == "tti-msg-recv")
    {
        tti_msg_recv.yfilter = yfilter;
    }
    if(value_path == "rdi-msg")
    {
        rdi_msg.yfilter = yfilter;
    }
    if(value_path == "errored-seconds")
    {
        errored_seconds.yfilter = yfilter;
    }
    if(value_path == "severely-errored-seconds")
    {
        severely_errored_seconds.yfilter = yfilter;
    }
    if(value_path == "unavailable-seconds")
    {
        unavailable_seconds.yfilter = yfilter;
    }
    if(value_path == "code-violations")
    {
        code_violations.yfilter = yfilter;
    }
    if(value_path == "fec-uncorrectable-words")
    {
        fec_uncorrectable_words.yfilter = yfilter;
    }
    if(value_path == "fec-corrected-bytes")
    {
        fec_corrected_bytes.yfilter = yfilter;
    }
    if(value_path == "fec-corrected-bits")
    {
        fec_corrected_bits.yfilter = yfilter;
    }
    if(value_path == "background-block-errors")
    {
        background_block_errors.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-fec-ber" || name == "post-fec-ber" || name == "q-value" || name == "esnr" || name == "tti-msg-transmit" || name == "tti-msg-expected" || name == "tti-msg-auto" || name == "tti-msg-recv" || name == "rdi-msg" || name == "errored-seconds" || name == "severely-errored-seconds" || name == "unavailable-seconds" || name == "code-violations" || name == "fec-uncorrectable-words" || name == "fec-corrected-bytes" || name == "fec-corrected-bits" || name == "background-block-errors")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::PreFecBer()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::~PreFecBer()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::PostFecBer()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::~PostFecBer()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::QValue()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "q-value"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::~QValue()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::Esnr()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "esnr"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::~Esnr()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Ethernet::Ethernet()
    :
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::Config>())
    , state(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ethernet"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Ethernet::~Ethernet()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Ethernet::Config::Config()
{

    yang_name = "config"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Ethernet::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::Config::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

TerminalDevice::LogicalChannels::Channel::Ethernet::State::State()
    :
    in_mac_control_frames{YType::uint64, "in-mac-control-frames"},
    in_mac_pause_frames{YType::uint64, "in-mac-pause-frames"},
    in_oversize_frames{YType::uint64, "in-oversize-frames"},
    in_jabber_frames{YType::uint64, "in-jabber-frames"},
    in_fragment_frames{YType::uint64, "in-fragment-frames"},
    in_8021q_frames{YType::uint64, "in-8021q-frames"},
    in_crc_errors{YType::uint64, "in-crc-errors"},
    out_mac_control_frames{YType::uint64, "out-mac-control-frames"},
    out_mac_pause_frames{YType::uint64, "out-mac-pause-frames"},
    out_8021q_frames{YType::uint64, "out-8021q-frames"}
{

    yang_name = "state"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Ethernet::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::State::has_data() const
{
    if (is_presence_container) return true;
    return in_mac_control_frames.is_set
	|| in_mac_pause_frames.is_set
	|| in_oversize_frames.is_set
	|| in_jabber_frames.is_set
	|| in_fragment_frames.is_set
	|| in_8021q_frames.is_set
	|| in_crc_errors.is_set
	|| out_mac_control_frames.is_set
	|| out_mac_pause_frames.is_set
	|| out_8021q_frames.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_mac_control_frames.yfilter)
	|| ydk::is_set(in_mac_pause_frames.yfilter)
	|| ydk::is_set(in_oversize_frames.yfilter)
	|| ydk::is_set(in_jabber_frames.yfilter)
	|| ydk::is_set(in_fragment_frames.yfilter)
	|| ydk::is_set(in_8021q_frames.yfilter)
	|| ydk::is_set(in_crc_errors.yfilter)
	|| ydk::is_set(out_mac_control_frames.yfilter)
	|| ydk::is_set(out_mac_pause_frames.yfilter)
	|| ydk::is_set(out_8021q_frames.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_mac_control_frames.is_set || is_set(in_mac_control_frames.yfilter)) leaf_name_data.push_back(in_mac_control_frames.get_name_leafdata());
    if (in_mac_pause_frames.is_set || is_set(in_mac_pause_frames.yfilter)) leaf_name_data.push_back(in_mac_pause_frames.get_name_leafdata());
    if (in_oversize_frames.is_set || is_set(in_oversize_frames.yfilter)) leaf_name_data.push_back(in_oversize_frames.get_name_leafdata());
    if (in_jabber_frames.is_set || is_set(in_jabber_frames.yfilter)) leaf_name_data.push_back(in_jabber_frames.get_name_leafdata());
    if (in_fragment_frames.is_set || is_set(in_fragment_frames.yfilter)) leaf_name_data.push_back(in_fragment_frames.get_name_leafdata());
    if (in_8021q_frames.is_set || is_set(in_8021q_frames.yfilter)) leaf_name_data.push_back(in_8021q_frames.get_name_leafdata());
    if (in_crc_errors.is_set || is_set(in_crc_errors.yfilter)) leaf_name_data.push_back(in_crc_errors.get_name_leafdata());
    if (out_mac_control_frames.is_set || is_set(out_mac_control_frames.yfilter)) leaf_name_data.push_back(out_mac_control_frames.get_name_leafdata());
    if (out_mac_pause_frames.is_set || is_set(out_mac_pause_frames.yfilter)) leaf_name_data.push_back(out_mac_pause_frames.get_name_leafdata());
    if (out_8021q_frames.is_set || is_set(out_8021q_frames.yfilter)) leaf_name_data.push_back(out_8021q_frames.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames = value;
        in_mac_control_frames.value_namespace = name_space;
        in_mac_control_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames = value;
        in_mac_pause_frames.value_namespace = name_space;
        in_mac_pause_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames = value;
        in_oversize_frames.value_namespace = name_space;
        in_oversize_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames = value;
        in_jabber_frames.value_namespace = name_space;
        in_jabber_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames = value;
        in_fragment_frames.value_namespace = name_space;
        in_fragment_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames = value;
        in_8021q_frames.value_namespace = name_space;
        in_8021q_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors = value;
        in_crc_errors.value_namespace = name_space;
        in_crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames = value;
        out_mac_control_frames.value_namespace = name_space;
        out_mac_control_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames = value;
        out_mac_pause_frames.value_namespace = name_space;
        out_mac_pause_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames = value;
        out_8021q_frames.value_namespace = name_space;
        out_8021q_frames.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames.yfilter = yfilter;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames.yfilter = yfilter;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames.yfilter = yfilter;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames.yfilter = yfilter;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames.yfilter = yfilter;
    }
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames.yfilter = yfilter;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors.yfilter = yfilter;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames.yfilter = yfilter;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames.yfilter = yfilter;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-mac-control-frames" || name == "in-mac-pause-frames" || name == "in-oversize-frames" || name == "in-jabber-frames" || name == "in-fragment-frames" || name == "in-8021q-frames" || name == "in-crc-errors" || name == "out-mac-control-frames" || name == "out-mac-pause-frames" || name == "out-8021q-frames")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Ingress::Ingress()
    :
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::Config>())
    , state(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ingress"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Ingress::~Ingress()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::LogicalChannels::Channel::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Ingress::Config::Config()
    :
    transceiver{YType::str, "transceiver"},
    physical_channel{YType::str, "physical-channel"}
{

    yang_name = "config"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Ingress::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : physical_channel.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return transceiver.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::Config::has_operation() const
{
    for (auto const & leaf : physical_channel.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transceiver.yfilter)
	|| ydk::is_set(physical_channel.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transceiver.is_set || is_set(transceiver.yfilter)) leaf_name_data.push_back(transceiver.get_name_leafdata());

    auto physical_channel_name_datas = physical_channel.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), physical_channel_name_datas.begin(), physical_channel_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Ingress::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transceiver")
    {
        transceiver = value;
        transceiver.value_namespace = name_space;
        transceiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-channel")
    {
        physical_channel.append(value);
    }
}

void TerminalDevice::LogicalChannels::Channel::Ingress::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transceiver")
    {
        transceiver.yfilter = yfilter;
    }
    if(value_path == "physical-channel")
    {
        physical_channel.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transceiver" || name == "physical-channel")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::Ingress::State::State()
    :
    transceiver{YType::str, "transceiver"},
    physical_channel{YType::str, "physical-channel"}
{

    yang_name = "state"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::Ingress::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : physical_channel.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return transceiver.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::State::has_operation() const
{
    for (auto const & leaf : physical_channel.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transceiver.yfilter)
	|| ydk::is_set(physical_channel.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::Ingress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::Ingress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transceiver.is_set || is_set(transceiver.yfilter)) leaf_name_data.push_back(transceiver.get_name_leafdata());

    auto physical_channel_name_datas = physical_channel.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), physical_channel_name_datas.begin(), physical_channel_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::Ingress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::Ingress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::Ingress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transceiver")
    {
        transceiver = value;
        transceiver.value_namespace = name_space;
        transceiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-channel")
    {
        physical_channel.append(value);
    }
}

void TerminalDevice::LogicalChannels::Channel::Ingress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transceiver")
    {
        transceiver.yfilter = yfilter;
    }
    if(value_path == "physical-channel")
    {
        physical_channel.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transceiver" || name == "physical-channel")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignments()
    :
    assignment(this, {"index_"})
{

    yang_name = "logical-channel-assignments"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::~LogicalChannelAssignments()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<assignment.len(); index++)
    {
        if(assignment[index]->has_data())
            return true;
    }
    return false;
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<assignment.len(); index++)
    {
        if(assignment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assignment")
    {
        auto ent_ = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment>();
        ent_->parent = this;
        assignment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : assignment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assignment")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Assignment()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config>())
    , state(std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "assignment"; yang_parent_name = "logical-channel-assignments"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::~Assignment()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assignment";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "index")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::Config()
    :
    index_{YType::uint32, "index"},
    description{YType::str, "description"},
    assignment_type{YType::enumeration, "assignment-type"},
    logical_channel{YType::str, "logical-channel"},
    optical_channel{YType::str, "optical-channel"},
    allocation{YType::str, "allocation"}
{

    yang_name = "config"; yang_parent_name = "assignment"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| description.is_set
	|| assignment_type.is_set
	|| logical_channel.is_set
	|| optical_channel.is_set
	|| allocation.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(assignment_type.yfilter)
	|| ydk::is_set(logical_channel.yfilter)
	|| ydk::is_set(optical_channel.yfilter)
	|| ydk::is_set(allocation.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.yfilter)) leaf_name_data.push_back(assignment_type.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.yfilter)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.yfilter)) leaf_name_data.push_back(optical_channel.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.yfilter)) leaf_name_data.push_back(allocation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assignment-type")
    {
        assignment_type = value;
        assignment_type.value_namespace = name_space;
        assignment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel")
    {
        logical_channel = value;
        logical_channel.value_namespace = name_space;
        logical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-channel")
    {
        optical_channel = value;
        optical_channel.value_namespace = name_space;
        optical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation")
    {
        allocation = value;
        allocation.value_namespace = name_space;
        allocation.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "assignment-type")
    {
        assignment_type.yfilter = yfilter;
    }
    if(value_path == "logical-channel")
    {
        logical_channel.yfilter = yfilter;
    }
    if(value_path == "optical-channel")
    {
        optical_channel.yfilter = yfilter;
    }
    if(value_path == "allocation")
    {
        allocation.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "description" || name == "assignment-type" || name == "logical-channel" || name == "optical-channel" || name == "allocation")
        return true;
    return false;
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::State()
    :
    index_{YType::uint32, "index"},
    description{YType::str, "description"},
    assignment_type{YType::enumeration, "assignment-type"},
    logical_channel{YType::str, "logical-channel"},
    optical_channel{YType::str, "optical-channel"},
    allocation{YType::str, "allocation"}
{

    yang_name = "state"; yang_parent_name = "assignment"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| description.is_set
	|| assignment_type.is_set
	|| logical_channel.is_set
	|| optical_channel.is_set
	|| allocation.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(assignment_type.yfilter)
	|| ydk::is_set(logical_channel.yfilter)
	|| ydk::is_set(optical_channel.yfilter)
	|| ydk::is_set(allocation.yfilter);
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.yfilter)) leaf_name_data.push_back(assignment_type.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.yfilter)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.yfilter)) leaf_name_data.push_back(optical_channel.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.yfilter)) leaf_name_data.push_back(allocation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assignment-type")
    {
        assignment_type = value;
        assignment_type.value_namespace = name_space;
        assignment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel")
    {
        logical_channel = value;
        logical_channel.value_namespace = name_space;
        logical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-channel")
    {
        optical_channel = value;
        optical_channel.value_namespace = name_space;
        optical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation")
    {
        allocation = value;
        allocation.value_namespace = name_space;
        allocation.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "assignment-type")
    {
        assignment_type.yfilter = yfilter;
    }
    if(value_path == "logical-channel")
    {
        logical_channel.yfilter = yfilter;
    }
    if(value_path == "optical-channel")
    {
        optical_channel.yfilter = yfilter;
    }
    if(value_path == "allocation")
    {
        allocation.yfilter = yfilter;
    }
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "description" || name == "assignment-type" || name == "logical-channel" || name == "optical-channel" || name == "allocation")
        return true;
    return false;
}

TerminalDevice::OperationalModes::OperationalModes()
    :
    mode(this, {"mode_id"})
{

    yang_name = "operational-modes"; yang_parent_name = "terminal-device"; is_top_level_class = false; has_list_ancestor = false; 
}

TerminalDevice::OperationalModes::~OperationalModes()
{
}

bool TerminalDevice::OperationalModes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mode.len(); index++)
    {
        if(mode[index]->has_data())
            return true;
    }
    return false;
}

bool TerminalDevice::OperationalModes::has_operation() const
{
    for (std::size_t index=0; index<mode.len(); index++)
    {
        if(mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TerminalDevice::OperationalModes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    return path_buffer.str();
}

std::string TerminalDevice::OperationalModes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-modes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::OperationalModes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::OperationalModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        auto ent_ = std::make_shared<TerminalDevice::OperationalModes::Mode>();
        ent_->parent = this;
        mode.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::OperationalModes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mode.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TerminalDevice::OperationalModes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::OperationalModes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::OperationalModes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

TerminalDevice::OperationalModes::Mode::Mode()
    :
    mode_id{YType::str, "mode-id"}
        ,
    config(std::make_shared<TerminalDevice::OperationalModes::Mode::Config>())
    , state(std::make_shared<TerminalDevice::OperationalModes::Mode::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "mode"; yang_parent_name = "operational-modes"; is_top_level_class = false; has_list_ancestor = false; 
}

TerminalDevice::OperationalModes::Mode::~Mode()
{
}

bool TerminalDevice::OperationalModes::Mode::has_data() const
{
    if (is_presence_container) return true;
    return mode_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::OperationalModes::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::OperationalModes::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device/operational-modes/" << get_segment_path();
    return path_buffer.str();
}

std::string TerminalDevice::OperationalModes::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    ADD_KEY_TOKEN(mode_id, "mode-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::OperationalModes::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::OperationalModes::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<TerminalDevice::OperationalModes::Mode::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TerminalDevice::OperationalModes::Mode::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::OperationalModes::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void TerminalDevice::OperationalModes::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-id")
    {
        mode_id = value;
        mode_id.value_namespace = name_space;
        mode_id.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::OperationalModes::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-id")
    {
        mode_id.yfilter = yfilter;
    }
}

bool TerminalDevice::OperationalModes::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "mode-id")
        return true;
    return false;
}

TerminalDevice::OperationalModes::Mode::Config::Config()
{

    yang_name = "config"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::OperationalModes::Mode::Config::~Config()
{
}

bool TerminalDevice::OperationalModes::Mode::Config::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool TerminalDevice::OperationalModes::Mode::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string TerminalDevice::OperationalModes::Mode::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::OperationalModes::Mode::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::OperationalModes::Mode::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::OperationalModes::Mode::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::OperationalModes::Mode::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TerminalDevice::OperationalModes::Mode::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TerminalDevice::OperationalModes::Mode::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

TerminalDevice::OperationalModes::Mode::State::State()
    :
    mode_id{YType::uint16, "mode-id"},
    description{YType::str, "description"},
    vendor_id{YType::str, "vendor-id"}
{

    yang_name = "state"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

TerminalDevice::OperationalModes::Mode::State::~State()
{
}

bool TerminalDevice::OperationalModes::Mode::State::has_data() const
{
    if (is_presence_container) return true;
    return mode_id.is_set
	|| description.is_set
	|| vendor_id.is_set;
}

bool TerminalDevice::OperationalModes::Mode::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_id.yfilter);
}

std::string TerminalDevice::OperationalModes::Mode::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TerminalDevice::OperationalModes::Mode::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_id.is_set || is_set(vendor_id.yfilter)) leaf_name_data.push_back(vendor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TerminalDevice::OperationalModes::Mode::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TerminalDevice::OperationalModes::Mode::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TerminalDevice::OperationalModes::Mode::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-id")
    {
        mode_id = value;
        mode_id.value_namespace = name_space;
        mode_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-id")
    {
        vendor_id = value;
        vendor_id.value_namespace = name_space;
        vendor_id.value_namespace_prefix = name_space_prefix;
    }
}

void TerminalDevice::OperationalModes::Mode::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-id")
    {
        mode_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-id")
    {
        vendor_id.yfilter = yfilter;
    }
}

bool TerminalDevice::OperationalModes::Mode::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-id" || name == "description" || name == "vendor-id")
        return true;
    return false;
}

const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::State::LinkState::UP {0, "UP"};
const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::State::LinkState::DOWN {1, "DOWN"};

const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::AssignmentType::LOGICAL_CHANNEL {0, "LOGICAL_CHANNEL"};
const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::AssignmentType::OPTICAL_CHANNEL {1, "OPTICAL_CHANNEL"};

const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::AssignmentType::LOGICAL_CHANNEL {0, "LOGICAL_CHANNEL"};
const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::AssignmentType::OPTICAL_CHANNEL {1, "OPTICAL_CHANNEL"};


}
}

