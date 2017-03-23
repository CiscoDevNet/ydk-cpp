
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_terminal_device.hpp"

namespace ydk {
namespace openconfig_terminal_device {

TerminalDevice::TerminalDevice()
    :
    config(std::make_shared<TerminalDevice::Config>())
	,logical_channels(std::make_shared<TerminalDevice::LogicalChannels>())
	,operational_modes(std::make_shared<TerminalDevice::OperationalModes>())
	,state(std::make_shared<TerminalDevice::State>())
{
    config->parent = this;
    children["config"] = config;

    logical_channels->parent = this;
    children["logical-channels"] = logical_channels;

    operational_modes->parent = this;
    children["operational-modes"] = operational_modes;

    state->parent = this;
    children["state"] = state;

    yang_name = "terminal-device"; yang_parent_name = "openconfig-terminal-device";
}

TerminalDevice::~TerminalDevice()
{
}

bool TerminalDevice::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (logical_channels !=  nullptr && logical_channels->has_data())
	|| (operational_modes !=  nullptr && operational_modes->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (logical_channels !=  nullptr && logical_channels->has_operation())
	|| (operational_modes !=  nullptr && operational_modes->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:terminal-device";

    return path_buffer.str();

}

EntityPath TerminalDevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<TerminalDevice::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "logical-channels")
    {
        if(logical_channels != nullptr)
        {
            children["logical-channels"] = logical_channels;
        }
        else
        {
            logical_channels = std::make_shared<TerminalDevice::LogicalChannels>();
            logical_channels->parent = this;
            children["logical-channels"] = logical_channels;
        }
        return children.at("logical-channels");
    }

    if(child_yang_name == "operational-modes")
    {
        if(operational_modes != nullptr)
        {
            children["operational-modes"] = operational_modes;
        }
        else
        {
            operational_modes = std::make_shared<TerminalDevice::OperationalModes>();
            operational_modes->parent = this;
            children["operational-modes"] = operational_modes;
        }
        return children.at("operational-modes");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<TerminalDevice::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("logical-channels") == children.end())
    {
        if(logical_channels != nullptr)
        {
            children["logical-channels"] = logical_channels;
        }
    }

    if(children.find("operational-modes") == children.end())
    {
        if(operational_modes != nullptr)
        {
            children["operational-modes"] = operational_modes;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void TerminalDevice::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TerminalDevice::clone_ptr() const
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

TerminalDevice::Config::Config()
{
    yang_name = "config"; yang_parent_name = "terminal-device";
}

TerminalDevice::Config::~Config()
{
}

bool TerminalDevice::Config::has_data() const
{
    return false;
}

bool TerminalDevice::Config::has_operation() const
{
    return is_set(operation);
}

std::string TerminalDevice::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TerminalDevice::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::Config::get_children()
{
    return children;
}

void TerminalDevice::Config::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::State::State()
{
    yang_name = "state"; yang_parent_name = "terminal-device";
}

TerminalDevice::State::~State()
{
}

bool TerminalDevice::State::has_data() const
{
    return false;
}

bool TerminalDevice::State::has_operation() const
{
    return is_set(operation);
}

std::string TerminalDevice::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TerminalDevice::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::State::get_children()
{
    return children;
}

void TerminalDevice::State::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::LogicalChannels::LogicalChannels()
{
    yang_name = "logical-channels"; yang_parent_name = "terminal-device";
}

TerminalDevice::LogicalChannels::~LogicalChannels()
{
}

bool TerminalDevice::LogicalChannels::has_data() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return false;
}

bool TerminalDevice::LogicalChannels::has_operation() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TerminalDevice::LogicalChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channels";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "channel")
    {
        for(auto const & c : channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TerminalDevice::LogicalChannels::Channel>();
        c->parent = this;
        channel.push_back(std::move(c));
        children[segment_path] = channel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::get_children()
{
    for (auto const & c : channel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::LogicalChannels::Channel::Channel()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Config>())
	,ethernet(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet>())
	,ingress(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress>())
	,logical_channel_assignments(std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments>())
	,otn(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn>())
	,state(std::make_shared<TerminalDevice::LogicalChannels::Channel::State>())
{
    config->parent = this;
    children["config"] = config;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    ingress->parent = this;
    children["ingress"] = ingress;

    logical_channel_assignments->parent = this;
    children["logical-channel-assignments"] = logical_channel_assignments;

    otn->parent = this;
    children["otn"] = otn;

    state->parent = this;
    children["state"] = state;

    yang_name = "channel"; yang_parent_name = "logical-channels";
}

TerminalDevice::LogicalChannels::Channel::~Channel()
{
}

bool TerminalDevice::LogicalChannels::Channel::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (ingress !=  nullptr && ingress->has_data())
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_data())
	|| (otn !=  nullptr && otn->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_operation())
	|| (otn !=  nullptr && otn->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-terminal-device:terminal-device/logical-channels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "ingress")
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
        else
        {
            ingress = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress>();
            ingress->parent = this;
            children["ingress"] = ingress;
        }
        return children.at("ingress");
    }

    if(child_yang_name == "logical-channel-assignments")
    {
        if(logical_channel_assignments != nullptr)
        {
            children["logical-channel-assignments"] = logical_channel_assignments;
        }
        else
        {
            logical_channel_assignments = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments>();
            logical_channel_assignments->parent = this;
            children["logical-channel-assignments"] = logical_channel_assignments;
        }
        return children.at("logical-channel-assignments");
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("ingress") == children.end())
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
    }

    if(children.find("logical-channel-assignments") == children.end())
    {
        if(logical_channel_assignments != nullptr)
        {
            children["logical-channel-assignments"] = logical_channel_assignments;
        }
    }

    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::Channel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Config::Config()
    :
    admin_state{YType::enumeration, "admin-state"},
    description{YType::str, "description"},
    index_{YType::uint32, "index"},
    logical_channel_type{YType::identityref, "logical-channel-type"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    rate_class{YType::identityref, "rate-class"},
    trib_protocol{YType::identityref, "trib-protocol"}
{
    yang_name = "config"; yang_parent_name = "channel";
}

TerminalDevice::LogicalChannels::Channel::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Config::has_data() const
{
    return admin_state.is_set
	|| description.is_set
	|| index_.is_set
	|| logical_channel_type.is_set
	|| loopback_mode.is_set
	|| rate_class.is_set
	|| trib_protocol.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(description.operation)
	|| is_set(index_.operation)
	|| is_set(logical_channel_type.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(rate_class.operation)
	|| is_set(trib_protocol.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (logical_channel_type.is_set || is_set(logical_channel_type.operation)) leaf_name_data.push_back(logical_channel_type.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (rate_class.is_set || is_set(rate_class.operation)) leaf_name_data.push_back(rate_class.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.operation)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Config::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type = value;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
    }
    if(value_path == "rate-class")
    {
        rate_class = value;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
    }
}

TerminalDevice::LogicalChannels::Channel::State::State()
    :
    admin_state{YType::enumeration, "admin-state"},
    description{YType::str, "description"},
    index_{YType::uint32, "index"},
    link_state{YType::enumeration, "link-state"},
    logical_channel_type{YType::identityref, "logical-channel-type"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    rate_class{YType::identityref, "rate-class"},
    trib_protocol{YType::identityref, "trib-protocol"}
{
    yang_name = "state"; yang_parent_name = "channel";
}

TerminalDevice::LogicalChannels::Channel::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::State::has_data() const
{
    return admin_state.is_set
	|| description.is_set
	|| index_.is_set
	|| link_state.is_set
	|| logical_channel_type.is_set
	|| loopback_mode.is_set
	|| rate_class.is_set
	|| trib_protocol.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::State::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(description.operation)
	|| is_set(index_.operation)
	|| is_set(link_state.operation)
	|| is_set(logical_channel_type.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(rate_class.operation)
	|| is_set(trib_protocol.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.operation)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (logical_channel_type.is_set || is_set(logical_channel_type.operation)) leaf_name_data.push_back(logical_channel_type.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (rate_class.is_set || is_set(rate_class.operation)) leaf_name_data.push_back(rate_class.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.operation)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::State::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "link-state")
    {
        link_state = value;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type = value;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
    }
    if(value_path == "rate-class")
    {
        rate_class = value;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Otn::Otn()
    :
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::Config>())
	,state(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "otn"; yang_parent_name = "channel";
}

TerminalDevice::LogicalChannels::Channel::Otn::~Otn()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Otn::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Otn::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::LogicalChannels::Channel::Otn::Config::Config()
    :
    tti_msg_auto{YType::boolean, "tti-msg-auto"},
    tti_msg_expected{YType::str, "tti-msg-expected"},
    tti_msg_transmit{YType::str, "tti-msg-transmit"}
{
    yang_name = "config"; yang_parent_name = "otn";
}

TerminalDevice::LogicalChannels::Channel::Otn::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::Config::has_data() const
{
    return tti_msg_auto.is_set
	|| tti_msg_expected.is_set
	|| tti_msg_transmit.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(tti_msg_auto.operation)
	|| is_set(tti_msg_expected.operation)
	|| is_set(tti_msg_transmit.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Otn::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tti_msg_auto.is_set || is_set(tti_msg_auto.operation)) leaf_name_data.push_back(tti_msg_auto.get_name_leafdata());
    if (tti_msg_expected.is_set || is_set(tti_msg_expected.operation)) leaf_name_data.push_back(tti_msg_expected.get_name_leafdata());
    if (tti_msg_transmit.is_set || is_set(tti_msg_transmit.operation)) leaf_name_data.push_back(tti_msg_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Otn::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Otn::Config::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto = value;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected = value;
    }
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Otn::State::State()
    :
    background_block_errors{YType::uint64, "background-block-errors"},
    code_violations{YType::uint64, "code-violations"},
    errored_seconds{YType::uint64, "errored-seconds"},
    fec_corrected_bits{YType::uint64, "fec-corrected-bits"},
    fec_corrected_bytes{YType::uint64, "fec-corrected-bytes"},
    fec_uncorrectable_words{YType::uint64, "fec-uncorrectable-words"},
    rdi_msg{YType::str, "rdi-msg"},
    severely_errored_seconds{YType::uint64, "severely-errored-seconds"},
    tti_msg_auto{YType::boolean, "tti-msg-auto"},
    tti_msg_expected{YType::str, "tti-msg-expected"},
    tti_msg_recv{YType::str, "tti-msg-recv"},
    tti_msg_transmit{YType::str, "tti-msg-transmit"},
    unavailable_seconds{YType::uint64, "unavailable-seconds"}
    	,
    esnr(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr>())
	,post_fec_ber(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer>())
	,pre_fec_ber(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer>())
	,q_value(std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::QValue>())
{
    esnr->parent = this;
    children["esnr"] = esnr;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q_value->parent = this;
    children["q-value"] = q_value;

    yang_name = "state"; yang_parent_name = "otn";
}

TerminalDevice::LogicalChannels::Channel::Otn::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::has_data() const
{
    return background_block_errors.is_set
	|| code_violations.is_set
	|| errored_seconds.is_set
	|| fec_corrected_bits.is_set
	|| fec_corrected_bytes.is_set
	|| fec_uncorrectable_words.is_set
	|| rdi_msg.is_set
	|| severely_errored_seconds.is_set
	|| tti_msg_auto.is_set
	|| tti_msg_expected.is_set
	|| tti_msg_recv.is_set
	|| tti_msg_transmit.is_set
	|| unavailable_seconds.is_set
	|| (esnr !=  nullptr && esnr->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q_value !=  nullptr && q_value->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::has_operation() const
{
    return is_set(operation)
	|| is_set(background_block_errors.operation)
	|| is_set(code_violations.operation)
	|| is_set(errored_seconds.operation)
	|| is_set(fec_corrected_bits.operation)
	|| is_set(fec_corrected_bytes.operation)
	|| is_set(fec_uncorrectable_words.operation)
	|| is_set(rdi_msg.operation)
	|| is_set(severely_errored_seconds.operation)
	|| is_set(tti_msg_auto.operation)
	|| is_set(tti_msg_expected.operation)
	|| is_set(tti_msg_recv.operation)
	|| is_set(tti_msg_transmit.operation)
	|| is_set(unavailable_seconds.operation)
	|| (esnr !=  nullptr && esnr->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q_value !=  nullptr && q_value->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Otn::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (background_block_errors.is_set || is_set(background_block_errors.operation)) leaf_name_data.push_back(background_block_errors.get_name_leafdata());
    if (code_violations.is_set || is_set(code_violations.operation)) leaf_name_data.push_back(code_violations.get_name_leafdata());
    if (errored_seconds.is_set || is_set(errored_seconds.operation)) leaf_name_data.push_back(errored_seconds.get_name_leafdata());
    if (fec_corrected_bits.is_set || is_set(fec_corrected_bits.operation)) leaf_name_data.push_back(fec_corrected_bits.get_name_leafdata());
    if (fec_corrected_bytes.is_set || is_set(fec_corrected_bytes.operation)) leaf_name_data.push_back(fec_corrected_bytes.get_name_leafdata());
    if (fec_uncorrectable_words.is_set || is_set(fec_uncorrectable_words.operation)) leaf_name_data.push_back(fec_uncorrectable_words.get_name_leafdata());
    if (rdi_msg.is_set || is_set(rdi_msg.operation)) leaf_name_data.push_back(rdi_msg.get_name_leafdata());
    if (severely_errored_seconds.is_set || is_set(severely_errored_seconds.operation)) leaf_name_data.push_back(severely_errored_seconds.get_name_leafdata());
    if (tti_msg_auto.is_set || is_set(tti_msg_auto.operation)) leaf_name_data.push_back(tti_msg_auto.get_name_leafdata());
    if (tti_msg_expected.is_set || is_set(tti_msg_expected.operation)) leaf_name_data.push_back(tti_msg_expected.get_name_leafdata());
    if (tti_msg_recv.is_set || is_set(tti_msg_recv.operation)) leaf_name_data.push_back(tti_msg_recv.get_name_leafdata());
    if (tti_msg_transmit.is_set || is_set(tti_msg_transmit.operation)) leaf_name_data.push_back(tti_msg_transmit.get_name_leafdata());
    if (unavailable_seconds.is_set || is_set(unavailable_seconds.operation)) leaf_name_data.push_back(unavailable_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "esnr")
    {
        if(esnr != nullptr)
        {
            children["esnr"] = esnr;
        }
        else
        {
            esnr = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr>();
            esnr->parent = this;
            children["esnr"] = esnr;
        }
        return children.at("esnr");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q-value")
    {
        if(q_value != nullptr)
        {
            children["q-value"] = q_value;
        }
        else
        {
            q_value = std::make_shared<TerminalDevice::LogicalChannels::Channel::Otn::State::QValue>();
            q_value->parent = this;
            children["q-value"] = q_value;
        }
        return children.at("q-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Otn::State::get_children()
{
    if(children.find("esnr") == children.end())
    {
        if(esnr != nullptr)
        {
            children["esnr"] = esnr;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q-value") == children.end())
    {
        if(q_value != nullptr)
        {
            children["q-value"] = q_value;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "background-block-errors")
    {
        background_block_errors = value;
    }
    if(value_path == "code-violations")
    {
        code_violations = value;
    }
    if(value_path == "errored-seconds")
    {
        errored_seconds = value;
    }
    if(value_path == "fec-corrected-bits")
    {
        fec_corrected_bits = value;
    }
    if(value_path == "fec-corrected-bytes")
    {
        fec_corrected_bytes = value;
    }
    if(value_path == "fec-uncorrectable-words")
    {
        fec_uncorrectable_words = value;
    }
    if(value_path == "rdi-msg")
    {
        rdi_msg = value;
    }
    if(value_path == "severely-errored-seconds")
    {
        severely_errored_seconds = value;
    }
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto = value;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected = value;
    }
    if(value_path == "tti-msg-recv")
    {
        tti_msg_recv = value;
    }
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit = value;
    }
    if(value_path == "unavailable-seconds")
    {
        unavailable_seconds = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::PreFecBer()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "state";
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::~PreFecBer()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.operation)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (instant.is_set || is_set(instant.operation)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg")
    {
        avg = value;
    }
    if(value_path == "instant")
    {
        instant = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::PostFecBer()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "state";
}

TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::~PostFecBer()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.operation)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (instant.is_set || is_set(instant.operation)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg")
    {
        avg = value;
    }
    if(value_path == "instant")
    {
        instant = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::QValue()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "q-value"; yang_parent_name = "state";
}

TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::~QValue()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-value";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QValue' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.operation)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (instant.is_set || is_set(instant.operation)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::QValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg")
    {
        avg = value;
    }
    if(value_path == "instant")
    {
        instant = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::Esnr()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "esnr"; yang_parent_name = "state";
}

TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::~Esnr()
{
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esnr";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Esnr' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg.is_set || is_set(avg.operation)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (instant.is_set || is_set(instant.operation)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg")
    {
        avg = value;
    }
    if(value_path == "instant")
    {
        instant = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Ethernet::Ethernet()
    :
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::Config>())
	,state(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ethernet"; yang_parent_name = "channel";
}

TerminalDevice::LogicalChannels::Channel::Ethernet::~Ethernet()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ethernet::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Ethernet::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::LogicalChannels::Channel::Ethernet::Config::Config()
{
    yang_name = "config"; yang_parent_name = "ethernet";
}

TerminalDevice::LogicalChannels::Channel::Ethernet::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::Config::has_data() const
{
    return false;
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::Config::has_operation() const
{
    return is_set(operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Ethernet::Config::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::Config::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::LogicalChannels::Channel::Ethernet::State::State()
    :
    in_8021q_frames{YType::uint64, "in-8021q-frames"},
    in_crc_errors{YType::uint64, "in-crc-errors"},
    in_fragment_frames{YType::uint64, "in-fragment-frames"},
    in_jabber_frames{YType::uint64, "in-jabber-frames"},
    in_mac_control_frames{YType::uint64, "in-mac-control-frames"},
    in_mac_pause_frames{YType::uint64, "in-mac-pause-frames"},
    in_oversize_frames{YType::uint64, "in-oversize-frames"},
    out_8021q_frames{YType::uint64, "out-8021q-frames"},
    out_mac_control_frames{YType::uint64, "out-mac-control-frames"},
    out_mac_pause_frames{YType::uint64, "out-mac-pause-frames"}
{
    yang_name = "state"; yang_parent_name = "ethernet";
}

TerminalDevice::LogicalChannels::Channel::Ethernet::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::State::has_data() const
{
    return in_8021q_frames.is_set
	|| in_crc_errors.is_set
	|| in_fragment_frames.is_set
	|| in_jabber_frames.is_set
	|| in_mac_control_frames.is_set
	|| in_mac_pause_frames.is_set
	|| in_oversize_frames.is_set
	|| out_8021q_frames.is_set
	|| out_mac_control_frames.is_set
	|| out_mac_pause_frames.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::Ethernet::State::has_operation() const
{
    return is_set(operation)
	|| is_set(in_8021q_frames.operation)
	|| is_set(in_crc_errors.operation)
	|| is_set(in_fragment_frames.operation)
	|| is_set(in_jabber_frames.operation)
	|| is_set(in_mac_control_frames.operation)
	|| is_set(in_mac_pause_frames.operation)
	|| is_set(in_oversize_frames.operation)
	|| is_set(out_8021q_frames.operation)
	|| is_set(out_mac_control_frames.operation)
	|| is_set(out_mac_pause_frames.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_8021q_frames.is_set || is_set(in_8021q_frames.operation)) leaf_name_data.push_back(in_8021q_frames.get_name_leafdata());
    if (in_crc_errors.is_set || is_set(in_crc_errors.operation)) leaf_name_data.push_back(in_crc_errors.get_name_leafdata());
    if (in_fragment_frames.is_set || is_set(in_fragment_frames.operation)) leaf_name_data.push_back(in_fragment_frames.get_name_leafdata());
    if (in_jabber_frames.is_set || is_set(in_jabber_frames.operation)) leaf_name_data.push_back(in_jabber_frames.get_name_leafdata());
    if (in_mac_control_frames.is_set || is_set(in_mac_control_frames.operation)) leaf_name_data.push_back(in_mac_control_frames.get_name_leafdata());
    if (in_mac_pause_frames.is_set || is_set(in_mac_pause_frames.operation)) leaf_name_data.push_back(in_mac_pause_frames.get_name_leafdata());
    if (in_oversize_frames.is_set || is_set(in_oversize_frames.operation)) leaf_name_data.push_back(in_oversize_frames.get_name_leafdata());
    if (out_8021q_frames.is_set || is_set(out_8021q_frames.operation)) leaf_name_data.push_back(out_8021q_frames.get_name_leafdata());
    if (out_mac_control_frames.is_set || is_set(out_mac_control_frames.operation)) leaf_name_data.push_back(out_mac_control_frames.get_name_leafdata());
    if (out_mac_pause_frames.is_set || is_set(out_mac_pause_frames.operation)) leaf_name_data.push_back(out_mac_pause_frames.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Ethernet::State::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Ethernet::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames = value;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors = value;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames = value;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames = value;
    }
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames = value;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames = value;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames = value;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames = value;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames = value;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Ingress::Ingress()
    :
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::Config>())
	,state(std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ingress"; yang_parent_name = "channel";
}

TerminalDevice::LogicalChannels::Channel::Ingress::~Ingress()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::Ingress::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Ingress::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::Channel::Ingress::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::LogicalChannels::Channel::Ingress::Config::Config()
    :
    physical_channel{YType::str, "physical-channel"},
    transceiver{YType::str, "transceiver"}
{
    yang_name = "config"; yang_parent_name = "ingress";
}

TerminalDevice::LogicalChannels::Channel::Ingress::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::Config::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(physical_channel.operation)
	|| is_set(transceiver.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transceiver.is_set || is_set(transceiver.operation)) leaf_name_data.push_back(transceiver.get_name_leafdata());

    auto physical_channel_name_datas = physical_channel.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), physical_channel_name_datas.begin(), physical_channel_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Ingress::Config::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Ingress::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "physical-channel")
    {
        physical_channel.append(value);
    }
    if(value_path == "transceiver")
    {
        transceiver = value;
    }
}

TerminalDevice::LogicalChannels::Channel::Ingress::State::State()
    :
    physical_channel{YType::str, "physical-channel"},
    transceiver{YType::str, "transceiver"}
{
    yang_name = "state"; yang_parent_name = "ingress";
}

TerminalDevice::LogicalChannels::Channel::Ingress::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::Ingress::State::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(physical_channel.operation)
	|| is_set(transceiver.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::Ingress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::Ingress::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transceiver.is_set || is_set(transceiver.operation)) leaf_name_data.push_back(transceiver.get_name_leafdata());

    auto physical_channel_name_datas = physical_channel.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), physical_channel_name_datas.begin(), physical_channel_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::Ingress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::Ingress::State::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::Ingress::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "physical-channel")
    {
        physical_channel.append(value);
    }
    if(value_path == "transceiver")
    {
        transceiver = value;
    }
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignments()
{
    yang_name = "logical-channel-assignments"; yang_parent_name = "channel";
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::~LogicalChannelAssignments()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::has_data() const
{
    for (std::size_t index=0; index<assignment.size(); index++)
    {
        if(assignment[index]->has_data())
            return true;
    }
    return false;
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<assignment.size(); index++)
    {
        if(assignment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignments";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogicalChannelAssignments' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "assignment")
    {
        for(auto const & c : assignment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment>();
        c->parent = this;
        assignment.push_back(std::move(c));
        children[segment_path] = assignment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::get_children()
{
    for (auto const & c : assignment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Assignment()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config>())
	,state(std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "assignment"; yang_parent_name = "logical-channel-assignments";
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::~Assignment()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assignment" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Assignment' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::Config()
    :
    allocation{YType::str, "allocation"},
    assignment_type{YType::enumeration, "assignment-type"},
    description{YType::str, "description"},
    index_{YType::uint32, "index"},
    logical_channel{YType::str, "logical-channel"},
    optical_channel{YType::str, "optical-channel"}
{
    yang_name = "config"; yang_parent_name = "assignment";
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::~Config()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::has_data() const
{
    return allocation.is_set
	|| assignment_type.is_set
	|| description.is_set
	|| index_.is_set
	|| logical_channel.is_set
	|| optical_channel.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(allocation.operation)
	|| is_set(assignment_type.operation)
	|| is_set(description.operation)
	|| is_set(index_.operation)
	|| is_set(logical_channel.operation)
	|| is_set(optical_channel.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocation.is_set || is_set(allocation.operation)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.operation)) leaf_name_data.push_back(assignment_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.operation)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.operation)) leaf_name_data.push_back(optical_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocation")
    {
        allocation = value;
    }
    if(value_path == "assignment-type")
    {
        assignment_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "logical-channel")
    {
        logical_channel = value;
    }
    if(value_path == "optical-channel")
    {
        optical_channel = value;
    }
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::State()
    :
    allocation{YType::str, "allocation"},
    assignment_type{YType::enumeration, "assignment-type"},
    description{YType::str, "description"},
    index_{YType::uint32, "index"},
    logical_channel{YType::str, "logical-channel"},
    optical_channel{YType::str, "optical-channel"}
{
    yang_name = "state"; yang_parent_name = "assignment";
}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::~State()
{
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::has_data() const
{
    return allocation.is_set
	|| assignment_type.is_set
	|| description.is_set
	|| index_.is_set
	|| logical_channel.is_set
	|| optical_channel.is_set;
}

bool TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::has_operation() const
{
    return is_set(operation)
	|| is_set(allocation.operation)
	|| is_set(assignment_type.operation)
	|| is_set(description.operation)
	|| is_set(index_.operation)
	|| is_set(logical_channel.operation)
	|| is_set(optical_channel.operation);
}

std::string TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocation.is_set || is_set(allocation.operation)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.operation)) leaf_name_data.push_back(assignment_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.operation)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.operation)) leaf_name_data.push_back(optical_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::get_children()
{
    return children;
}

void TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocation")
    {
        allocation = value;
    }
    if(value_path == "assignment-type")
    {
        assignment_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "logical-channel")
    {
        logical_channel = value;
    }
    if(value_path == "optical-channel")
    {
        optical_channel = value;
    }
}

TerminalDevice::OperationalModes::OperationalModes()
{
    yang_name = "operational-modes"; yang_parent_name = "terminal-device";
}

TerminalDevice::OperationalModes::~OperationalModes()
{
}

bool TerminalDevice::OperationalModes::has_data() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_data())
            return true;
    }
    return false;
}

bool TerminalDevice::OperationalModes::has_operation() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TerminalDevice::OperationalModes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-modes";

    return path_buffer.str();

}

EntityPath TerminalDevice::OperationalModes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-terminal-device:terminal-device/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::OperationalModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mode")
    {
        for(auto const & c : mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TerminalDevice::OperationalModes::Mode>();
        c->parent = this;
        mode.push_back(std::move(c));
        children[segment_path] = mode.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::OperationalModes::get_children()
{
    for (auto const & c : mode)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TerminalDevice::OperationalModes::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::OperationalModes::Mode::Mode()
    :
    mode_id{YType::str, "mode-id"}
    	,
    config(std::make_shared<TerminalDevice::OperationalModes::Mode::Config>())
	,state(std::make_shared<TerminalDevice::OperationalModes::Mode::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "mode"; yang_parent_name = "operational-modes";
}

TerminalDevice::OperationalModes::Mode::~Mode()
{
}

bool TerminalDevice::OperationalModes::Mode::has_data() const
{
    return mode_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TerminalDevice::OperationalModes::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(mode_id.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string TerminalDevice::OperationalModes::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode" <<"[mode-id='" <<mode_id <<"']";

    return path_buffer.str();

}

EntityPath TerminalDevice::OperationalModes::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-terminal-device:terminal-device/operational-modes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_id.is_set || is_set(mode_id.operation)) leaf_name_data.push_back(mode_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::OperationalModes::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<TerminalDevice::OperationalModes::Mode::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<TerminalDevice::OperationalModes::Mode::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::OperationalModes::Mode::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void TerminalDevice::OperationalModes::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode-id")
    {
        mode_id = value;
    }
}

TerminalDevice::OperationalModes::Mode::Config::Config()
{
    yang_name = "config"; yang_parent_name = "mode";
}

TerminalDevice::OperationalModes::Mode::Config::~Config()
{
}

bool TerminalDevice::OperationalModes::Mode::Config::has_data() const
{
    return false;
}

bool TerminalDevice::OperationalModes::Mode::Config::has_operation() const
{
    return is_set(operation);
}

std::string TerminalDevice::OperationalModes::Mode::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TerminalDevice::OperationalModes::Mode::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::OperationalModes::Mode::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::OperationalModes::Mode::Config::get_children()
{
    return children;
}

void TerminalDevice::OperationalModes::Mode::Config::set_value(const std::string & value_path, std::string value)
{
}

TerminalDevice::OperationalModes::Mode::State::State()
    :
    description{YType::str, "description"},
    mode_id{YType::uint16, "mode-id"},
    vendor_id{YType::str, "vendor-id"}
{
    yang_name = "state"; yang_parent_name = "mode";
}

TerminalDevice::OperationalModes::Mode::State::~State()
{
}

bool TerminalDevice::OperationalModes::Mode::State::has_data() const
{
    return description.is_set
	|| mode_id.is_set
	|| vendor_id.is_set;
}

bool TerminalDevice::OperationalModes::Mode::State::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(mode_id.operation)
	|| is_set(vendor_id.operation);
}

std::string TerminalDevice::OperationalModes::Mode::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TerminalDevice::OperationalModes::Mode::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_terminal_device cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.operation)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (vendor_id.is_set || is_set(vendor_id.operation)) leaf_name_data.push_back(vendor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TerminalDevice::OperationalModes::Mode::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TerminalDevice::OperationalModes::Mode::State::get_children()
{
    return children;
}

void TerminalDevice::OperationalModes::Mode::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "mode-id")
    {
        mode_id = value;
    }
    if(value_path == "vendor-id")
    {
        vendor_id = value;
    }
}

const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::State::LinkStateEnum::UP {0, "UP"};
const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::State::LinkStateEnum::DOWN {1, "DOWN"};

const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::AssignmentTypeEnum::LOGICAL_CHANNEL {0, "LOGICAL_CHANNEL"};
const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::AssignmentTypeEnum::OPTICAL_CHANNEL {1, "OPTICAL_CHANNEL"};

const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::AssignmentTypeEnum::LOGICAL_CHANNEL {0, "LOGICAL_CHANNEL"};
const Enum::YLeaf TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::AssignmentTypeEnum::OPTICAL_CHANNEL {1, "OPTICAL_CHANNEL"};


}
}

