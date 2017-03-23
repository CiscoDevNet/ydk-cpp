
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_terminal_device_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_terminal_device_cfg {

LogicalChannels::LogicalChannels()
{
    yang_name = "logical-channels"; yang_parent_name = "Cisco-IOS-XR-terminal-device-cfg";
}

LogicalChannels::~LogicalChannels()
{
}

bool LogicalChannels::has_data() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return false;
}

bool LogicalChannels::has_operation() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LogicalChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-cfg:logical-channels";

    return path_buffer.str();

}

EntityPath LogicalChannels::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LogicalChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<LogicalChannels::Channel>();
        c->parent = this;
        channel.push_back(std::move(c));
        children[segment_path] = channel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LogicalChannels::get_children()
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

void LogicalChannels::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LogicalChannels::clone_ptr() const
{
    return std::make_shared<LogicalChannels>();
}

std::string LogicalChannels::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LogicalChannels::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LogicalChannels::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

LogicalChannels::Channel::Channel()
    :
    channel_index{YType::int32, "channel-index"},
    admin_state{YType::enumeration, "admin-state"},
    description{YType::str, "description"},
    ingress_client_port{YType::str, "ingress-client-port"},
    ingress_physical_channel{YType::uint32, "ingress-physical-channel"},
    logical_channel_type{YType::enumeration, "logical-channel-type"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    rate_class{YType::enumeration, "rate-class"},
    trib_protocol{YType::enumeration, "trib-protocol"}
    	,
    logical_channel_assignments(std::make_shared<LogicalChannels::Channel::LogicalChannelAssignments>())
	,otn(std::make_shared<LogicalChannels::Channel::Otn>())
{
    logical_channel_assignments->parent = this;
    children["logical-channel-assignments"] = logical_channel_assignments;

    otn->parent = this;
    children["otn"] = otn;

    yang_name = "channel"; yang_parent_name = "logical-channels";
}

LogicalChannels::Channel::~Channel()
{
}

bool LogicalChannels::Channel::has_data() const
{
    return channel_index.is_set
	|| admin_state.is_set
	|| description.is_set
	|| ingress_client_port.is_set
	|| ingress_physical_channel.is_set
	|| logical_channel_type.is_set
	|| loopback_mode.is_set
	|| rate_class.is_set
	|| trib_protocol.is_set
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool LogicalChannels::Channel::has_operation() const
{
    return is_set(operation)
	|| is_set(channel_index.operation)
	|| is_set(admin_state.operation)
	|| is_set(description.operation)
	|| is_set(ingress_client_port.operation)
	|| is_set(ingress_physical_channel.operation)
	|| is_set(logical_channel_type.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(rate_class.operation)
	|| is_set(trib_protocol.operation)
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string LogicalChannels::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel" <<"[channel-index='" <<channel_index <<"']";

    return path_buffer.str();

}

EntityPath LogicalChannels::Channel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-cfg:logical-channels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_index.is_set || is_set(channel_index.operation)) leaf_name_data.push_back(channel_index.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ingress_client_port.is_set || is_set(ingress_client_port.operation)) leaf_name_data.push_back(ingress_client_port.get_name_leafdata());
    if (ingress_physical_channel.is_set || is_set(ingress_physical_channel.operation)) leaf_name_data.push_back(ingress_physical_channel.get_name_leafdata());
    if (logical_channel_type.is_set || is_set(logical_channel_type.operation)) leaf_name_data.push_back(logical_channel_type.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (rate_class.is_set || is_set(rate_class.operation)) leaf_name_data.push_back(rate_class.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.operation)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LogicalChannels::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logical-channel-assignments")
    {
        if(logical_channel_assignments != nullptr)
        {
            children["logical-channel-assignments"] = logical_channel_assignments;
        }
        else
        {
            logical_channel_assignments = std::make_shared<LogicalChannels::Channel::LogicalChannelAssignments>();
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
            otn = std::make_shared<LogicalChannels::Channel::Otn>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LogicalChannels::Channel::get_children()
{
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

    return children;
}

void LogicalChannels::Channel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel-index")
    {
        channel_index = value;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ingress-client-port")
    {
        ingress_client_port = value;
    }
    if(value_path == "ingress-physical-channel")
    {
        ingress_physical_channel = value;
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

LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignments()
{
    yang_name = "logical-channel-assignments"; yang_parent_name = "channel";
}

LogicalChannels::Channel::LogicalChannelAssignments::~LogicalChannelAssignments()
{
}

bool LogicalChannels::Channel::LogicalChannelAssignments::has_data() const
{
    for (std::size_t index=0; index<logical_channel_assignment.size(); index++)
    {
        if(logical_channel_assignment[index]->has_data())
            return true;
    }
    return false;
}

bool LogicalChannels::Channel::LogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<logical_channel_assignment.size(); index++)
    {
        if(logical_channel_assignment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LogicalChannels::Channel::LogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignments";

    return path_buffer.str();

}

EntityPath LogicalChannels::Channel::LogicalChannelAssignments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogicalChannelAssignments' in Cisco_IOS_XR_terminal_device_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LogicalChannels::Channel::LogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logical-channel-assignment")
    {
        for(auto const & c : logical_channel_assignment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment>();
        c->parent = this;
        logical_channel_assignment.push_back(std::move(c));
        children[segment_path] = logical_channel_assignment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LogicalChannels::Channel::LogicalChannelAssignments::get_children()
{
    for (auto const & c : logical_channel_assignment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void LogicalChannels::Channel::LogicalChannelAssignments::set_value(const std::string & value_path, std::string value)
{
}

LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::LogicalChannelAssignment()
    :
    assignment_index{YType::int32, "assignment-index"},
    allocation{YType::int32, "allocation"},
    assignment_type{YType::enumeration, "assignment-type"},
    description{YType::str, "description"},
    logical_channel_id{YType::int32, "logical-channel-id"},
    optical_channel_id{YType::str, "optical-channel-id"}
{
    yang_name = "logical-channel-assignment"; yang_parent_name = "logical-channel-assignments";
}

LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::~LogicalChannelAssignment()
{
}

bool LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::has_data() const
{
    return assignment_index.is_set
	|| allocation.is_set
	|| assignment_type.is_set
	|| description.is_set
	|| logical_channel_id.is_set
	|| optical_channel_id.is_set;
}

bool LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::has_operation() const
{
    return is_set(operation)
	|| is_set(assignment_index.operation)
	|| is_set(allocation.operation)
	|| is_set(assignment_type.operation)
	|| is_set(description.operation)
	|| is_set(logical_channel_id.operation)
	|| is_set(optical_channel_id.operation);
}

std::string LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignment" <<"[assignment-index='" <<assignment_index <<"']";

    return path_buffer.str();

}

EntityPath LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogicalChannelAssignment' in Cisco_IOS_XR_terminal_device_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assignment_index.is_set || is_set(assignment_index.operation)) leaf_name_data.push_back(assignment_index.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.operation)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.operation)) leaf_name_data.push_back(assignment_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (logical_channel_id.is_set || is_set(logical_channel_id.operation)) leaf_name_data.push_back(logical_channel_id.get_name_leafdata());
    if (optical_channel_id.is_set || is_set(optical_channel_id.operation)) leaf_name_data.push_back(optical_channel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_children()
{
    return children;
}

void LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "assignment-index")
    {
        assignment_index = value;
    }
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
    if(value_path == "logical-channel-id")
    {
        logical_channel_id = value;
    }
    if(value_path == "optical-channel-id")
    {
        optical_channel_id = value;
    }
}

LogicalChannels::Channel::Otn::Otn()
    :
    tti_msg_auto{YType::enumeration, "tti-msg-auto"},
    tti_msg_expected{YType::str, "tti-msg-expected"},
    tti_msg_transmit{YType::str, "tti-msg-transmit"}
{
    yang_name = "otn"; yang_parent_name = "channel";
}

LogicalChannels::Channel::Otn::~Otn()
{
}

bool LogicalChannels::Channel::Otn::has_data() const
{
    return tti_msg_auto.is_set
	|| tti_msg_expected.is_set
	|| tti_msg_transmit.is_set;
}

bool LogicalChannels::Channel::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(tti_msg_auto.operation)
	|| is_set(tti_msg_expected.operation)
	|| is_set(tti_msg_transmit.operation);
}

std::string LogicalChannels::Channel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath LogicalChannels::Channel::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn' in Cisco_IOS_XR_terminal_device_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> LogicalChannels::Channel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & LogicalChannels::Channel::Otn::get_children()
{
    return children;
}

void LogicalChannels::Channel::Otn::set_value(const std::string & value_path, std::string value)
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

OpticalChannels::OpticalChannels()
{
    yang_name = "optical-channels"; yang_parent_name = "Cisco-IOS-XR-terminal-device-cfg";
}

OpticalChannels::~OpticalChannels()
{
}

bool OpticalChannels::has_data() const
{
    for (std::size_t index=0; index<optical_channel.size(); index++)
    {
        if(optical_channel[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalChannels::has_operation() const
{
    for (std::size_t index=0; index<optical_channel.size(); index++)
    {
        if(optical_channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-cfg:optical-channels";

    return path_buffer.str();

}

EntityPath OpticalChannels::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> OpticalChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-channel")
    {
        for(auto const & c : optical_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OpticalChannels::OpticalChannel>();
        c->parent = this;
        optical_channel.push_back(std::move(c));
        children[segment_path] = optical_channel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalChannels::get_children()
{
    for (auto const & c : optical_channel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void OpticalChannels::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> OpticalChannels::clone_ptr() const
{
    return std::make_shared<OpticalChannels>();
}

std::string OpticalChannels::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OpticalChannels::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OpticalChannels::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

OpticalChannels::OpticalChannel::OpticalChannel()
    :
    ifname{YType::str, "ifname"},
    line_port{YType::str, "line-port"},
    operational_mode{YType::uint32, "operational-mode"}
{
    yang_name = "optical-channel"; yang_parent_name = "optical-channels";
}

OpticalChannels::OpticalChannel::~OpticalChannel()
{
}

bool OpticalChannels::OpticalChannel::has_data() const
{
    return ifname.is_set
	|| line_port.is_set
	|| operational_mode.is_set;
}

bool OpticalChannels::OpticalChannel::has_operation() const
{
    return is_set(operation)
	|| is_set(ifname.operation)
	|| is_set(line_port.operation)
	|| is_set(operational_mode.operation);
}

std::string OpticalChannels::OpticalChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel" <<"[ifname='" <<ifname <<"']";

    return path_buffer.str();

}

EntityPath OpticalChannels::OpticalChannel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-cfg:optical-channels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.operation)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (line_port.is_set || is_set(line_port.operation)) leaf_name_data.push_back(line_port.get_name_leafdata());
    if (operational_mode.is_set || is_set(operational_mode.operation)) leaf_name_data.push_back(operational_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalChannels::OpticalChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalChannels::OpticalChannel::get_children()
{
    return children;
}

void OpticalChannels::OpticalChannel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifname")
    {
        ifname = value;
    }
    if(value_path == "line-port")
    {
        line_port = value;
    }
    if(value_path == "operational-mode")
    {
        operational_mode = value;
    }
}

const Enum::YLeaf LogicalTribRateEnum::trib_rate1g {1, "trib-rate1g"};
const Enum::YLeaf LogicalTribRateEnum::trib_rate2_5g {2, "trib-rate2-5g"};
const Enum::YLeaf LogicalTribRateEnum::trib_rate10g {3, "trib-rate10g"};
const Enum::YLeaf LogicalTribRateEnum::trib_rate40g {4, "trib-rate40g"};
const Enum::YLeaf LogicalTribRateEnum::trib_rate100g {5, "trib-rate100g"};

const Enum::YLeaf LogicalLoopbackModeEnum::none {0, "none"};
const Enum::YLeaf LogicalLoopbackModeEnum::facility {1, "facility"};
const Enum::YLeaf LogicalLoopbackModeEnum::terminal {2, "terminal"};

const Enum::YLeaf LogicalChannelOtnTtiAutoEnum::false_ {0, "false"};
const Enum::YLeaf LogicalChannelOtnTtiAutoEnum::true_ {1, "true"};

const Enum::YLeaf LogicalAdminStateEnum::enable {1, "enable"};
const Enum::YLeaf LogicalAdminStateEnum::disable {2, "disable"};
const Enum::YLeaf LogicalAdminStateEnum::maintenance {3, "maintenance"};

const Enum::YLeaf LogicalChannelAssignmentEnum::type_logical_channel {1, "type-logical-channel"};
const Enum::YLeaf LogicalChannelAssignmentEnum::type_optical_channel {2, "type-optical-channel"};

const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type1ge {1, "trib-proto-type1ge"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_oc48 {2, "trib-proto-type-oc48"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_stm16 {3, "trib-proto-type-stm16"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type10gelan {4, "trib-proto-type10gelan"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type10gewan {5, "trib-proto-type10gewan"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_oc192 {6, "trib-proto-type-oc192"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_stm64 {7, "trib-proto-type-stm64"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_otu2 {8, "trib-proto-type-otu2"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_otu2e {9, "trib-proto-type-otu2e"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_otu1e {10, "trib-proto-type-otu1e"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_odu2 {11, "trib-proto-type-odu2"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_odu2e {12, "trib-proto-type-odu2e"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type40ge {13, "trib-proto-type40ge"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_oc768 {14, "trib-proto-type-oc768"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_stm256 {15, "trib-proto-type-stm256"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_otu3 {16, "trib-proto-type-otu3"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_odu3 {17, "trib-proto-type-odu3"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type100ge {18, "trib-proto-type100ge"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type100g_mlg {19, "trib-proto-type100g-mlg"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_otu4 {20, "trib-proto-type-otu4"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_otu_cn {21, "trib-proto-type-otu-cn"};
const Enum::YLeaf LogicalTribProtocolEnum::trib_proto_type_odu4 {22, "trib-proto-type-odu4"};

const Enum::YLeaf LogicalProtocolEnum::type_ethernet {1, "type-ethernet"};
const Enum::YLeaf LogicalProtocolEnum::type_otn {2, "type-otn"};


}
}

