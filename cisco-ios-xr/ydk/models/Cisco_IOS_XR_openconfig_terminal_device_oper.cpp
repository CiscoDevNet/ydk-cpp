
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_openconfig_terminal_device_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_openconfig_terminal_device_oper {

OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::OpticalClientLogicalChannelAssignment()
    :
    	index_{YType::int32, "index"},
	 allocation{YType::uint32, "allocation"},
	 is_logical_link{YType::boolean, "is-logical-link"},
	 logical_channel{YType::uint32, "logical-channel"},
	 optical_channel{YType::str, "optical-channel"}
{
    yang_name = "optical-client-logical-channel-assignment"; yang_parent_name = "optical-client-logical-channel-assignments";
}

OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::~OpticalClientLogicalChannelAssignment()
{
}

bool OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::has_data() const
{
    return index_.is_set
	|| allocation.is_set
	|| is_logical_link.is_set
	|| logical_channel.is_set
	|| optical_channel.is_set;
}

bool OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(allocation.operation)
	|| is_set(is_logical_link.operation)
	|| is_set(logical_channel.operation)
	|| is_set(optical_channel.operation);
}

std::string OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-client-logical-channel-assignment" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.operation)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (is_logical_link.is_set || is_set(is_logical_link.operation)) leaf_name_data.push_back(is_logical_link.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.operation)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.operation)) leaf_name_data.push_back(optical_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::get_children()
{
    return children;
}

void OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "allocation")
    {
        allocation = value;
    }
    if(value_path == "is-logical-link")
    {
        is_logical_link = value;
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

OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignments()
{
    yang_name = "optical-client-logical-channel-assignments"; yang_parent_name = "optical-client-interface";
}

OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::~OpticalClientLogicalChannelAssignments()
{
}

bool OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::has_data() const
{
    for (std::size_t index=0; index<optical_client_logical_channel_assignment.size(); index++)
    {
        if(optical_client_logical_channel_assignment[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<optical_client_logical_channel_assignment.size(); index++)
    {
        if(optical_client_logical_channel_assignment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-client-logical-channel-assignments";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-client-logical-channel-assignment")
    {
        for(auto const & c : optical_client_logical_channel_assignment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment>();
        c->parent = this;
        optical_client_logical_channel_assignment.push_back(std::move(c));
        children[segment_path] = optical_client_logical_channel_assignment.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::get_children()
{
    for (auto const & c : optical_client_logical_channel_assignment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientInterface()
    :
    	name{YType::str, "name"}
    	,
    optical_client_logical_channel_assignments(std::make_unique<OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments>())
{
    optical_client_logical_channel_assignments->parent = this;
    children["optical-client-logical-channel-assignments"] = optical_client_logical_channel_assignments.get();

    yang_name = "optical-client-interface"; yang_parent_name = "optical-client-interfaces";
}

OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::~OpticalClientInterface()
{
}

bool OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::has_data() const
{
    return name.is_set
	|| (optical_client_logical_channel_assignments !=  nullptr && optical_client_logical_channel_assignments->has_data());
}

bool OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (optical_client_logical_channel_assignments !=  nullptr && is_set(optical_client_logical_channel_assignments->operation));
}

std::string OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-client-interface" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface/optical-client-interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-client-logical-channel-assignments")
    {
        if(optical_client_logical_channel_assignments != nullptr)
        {
            children["optical-client-logical-channel-assignments"] = optical_client_logical_channel_assignments.get();
        }
        else
        {
            optical_client_logical_channel_assignments = std::make_unique<OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments>();
            optical_client_logical_channel_assignments->parent = this;
            children["optical-client-logical-channel-assignments"] = optical_client_logical_channel_assignments.get();
        }
        return children.at("optical-client-logical-channel-assignments");
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::get_children()
{
    if(children.find("optical-client-logical-channel-assignments") == children.end())
    {
        if(optical_client_logical_channel_assignments != nullptr)
        {
            children["optical-client-logical-channel-assignments"] = optical_client_logical_channel_assignments.get();
        }
    }

    return children;
}

void OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

OpticalInterface::OpticalClientInterfaces::OpticalClientInterfaces()
{
    yang_name = "optical-client-interfaces"; yang_parent_name = "optical-interface";
}

OpticalInterface::OpticalClientInterfaces::~OpticalClientInterfaces()
{
}

bool OpticalInterface::OpticalClientInterfaces::has_data() const
{
    for (std::size_t index=0; index<optical_client_interface.size(); index++)
    {
        if(optical_client_interface[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalClientInterfaces::has_operation() const
{
    for (std::size_t index=0; index<optical_client_interface.size(); index++)
    {
        if(optical_client_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OpticalClientInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-client-interfaces";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalClientInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalClientInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-client-interface")
    {
        for(auto const & c : optical_client_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<OpticalInterface::OpticalClientInterfaces::OpticalClientInterface>();
        c->parent = this;
        optical_client_interface.push_back(std::move(c));
        children[segment_path] = optical_client_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OpticalClientInterfaces::get_children()
{
    for (auto const & c : optical_client_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void OpticalInterface::OpticalClientInterfaces::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::OperationalModeAttributes()
    :
    	description{YType::str, "description"},
	 vendor_id{YType::str, "vendor-id"}
{
    yang_name = "operational-mode-attributes"; yang_parent_name = "operational-mode";
}

OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::~OperationalModeAttributes()
{
}

bool OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::has_data() const
{
    return description.is_set
	|| vendor_id.is_set;
}

bool OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(vendor_id.operation);
}

std::string OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-mode-attributes";

    return path_buffer.str();

}

EntityPath OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_id.is_set || is_set(vendor_id.operation)) leaf_name_data.push_back(vendor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_children()
{
    return children;
}

void OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "vendor-id")
    {
        vendor_id = value;
    }
}

OpticalInterface::OperationalModes::OperationalMode::OperationalMode()
    :
    	mode_id{YType::int32, "mode-id"}
    	,
    operational_mode_attributes(std::make_unique<OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes>())
{
    operational_mode_attributes->parent = this;
    children["operational-mode-attributes"] = operational_mode_attributes.get();

    yang_name = "operational-mode"; yang_parent_name = "operational-modes";
}

OpticalInterface::OperationalModes::OperationalMode::~OperationalMode()
{
}

bool OpticalInterface::OperationalModes::OperationalMode::has_data() const
{
    return mode_id.is_set
	|| (operational_mode_attributes !=  nullptr && operational_mode_attributes->has_data());
}

bool OpticalInterface::OperationalModes::OperationalMode::has_operation() const
{
    return is_set(operation)
	|| is_set(mode_id.operation)
	|| (operational_mode_attributes !=  nullptr && is_set(operational_mode_attributes->operation));
}

std::string OpticalInterface::OperationalModes::OperationalMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-mode" <<"[mode-id='" <<mode_id.get() <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OperationalModes::OperationalMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface/operational-modes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_id.is_set || is_set(mode_id.operation)) leaf_name_data.push_back(mode_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OperationalModes::OperationalMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operational-mode-attributes")
    {
        if(operational_mode_attributes != nullptr)
        {
            children["operational-mode-attributes"] = operational_mode_attributes.get();
        }
        else
        {
            operational_mode_attributes = std::make_unique<OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes>();
            operational_mode_attributes->parent = this;
            children["operational-mode-attributes"] = operational_mode_attributes.get();
        }
        return children.at("operational-mode-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OperationalModes::OperationalMode::get_children()
{
    if(children.find("operational-mode-attributes") == children.end())
    {
        if(operational_mode_attributes != nullptr)
        {
            children["operational-mode-attributes"] = operational_mode_attributes.get();
        }
    }

    return children;
}

void OpticalInterface::OperationalModes::OperationalMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode-id")
    {
        mode_id = value;
    }
}

OpticalInterface::OperationalModes::OperationalModes()
{
    yang_name = "operational-modes"; yang_parent_name = "optical-interface";
}

OpticalInterface::OperationalModes::~OperationalModes()
{
}

bool OpticalInterface::OperationalModes::has_data() const
{
    for (std::size_t index=0; index<operational_mode.size(); index++)
    {
        if(operational_mode[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OperationalModes::has_operation() const
{
    for (std::size_t index=0; index<operational_mode.size(); index++)
    {
        if(operational_mode[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OperationalModes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-modes";

    return path_buffer.str();

}

EntityPath OpticalInterface::OperationalModes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OperationalModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operational-mode")
    {
        for(auto const & c : operational_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<OpticalInterface::OperationalModes::OperationalMode>();
        c->parent = this;
        operational_mode.push_back(std::move(c));
        children[segment_path] = operational_mode.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OperationalModes::get_children()
{
    for (auto const & c : operational_mode)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void OpticalInterface::OperationalModes::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::OpticalLogicalInterfaceAttr()
    :
    	protocol_type{YType::enumeration, "protocol-type"},
	 trib_protocol{YType::enumeration, "trib-protocol"},
	 trib_rate_class{YType::enumeration, "trib-rate-class"}
{
    yang_name = "optical-logical-interface-attr"; yang_parent_name = "optical-logical-interface";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::~OpticalLogicalInterfaceAttr()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::has_data() const
{
    return protocol_type.is_set
	|| trib_protocol.is_set
	|| trib_rate_class.is_set;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_type.operation)
	|| is_set(trib_protocol.operation)
	|| is_set(trib_rate_class.operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-attr";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.operation)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.operation)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());
    if (trib_rate_class.is_set || is_set(trib_rate_class.operation)) leaf_name_data.push_back(trib_rate_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_children()
{
    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
    }
    if(value_path == "trib-rate-class")
    {
        trib_rate_class = value;
    }
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignment()
    :
    	index_{YType::int32, "index"},
	 allocation{YType::uint32, "allocation"},
	 is_logical_link{YType::boolean, "is-logical-link"},
	 logical_channel{YType::uint32, "logical-channel"},
	 optical_channel{YType::str, "optical-channel"}
{
    yang_name = "optical-logical-interface-logical-channel-assignment"; yang_parent_name = "optical-logical-interface-logical-channel-assignments";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::~OpticalLogicalInterfaceLogicalChannelAssignment()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::has_data() const
{
    return index_.is_set
	|| allocation.is_set
	|| is_logical_link.is_set
	|| logical_channel.is_set
	|| optical_channel.is_set;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(allocation.operation)
	|| is_set(is_logical_link.operation)
	|| is_set(logical_channel.operation)
	|| is_set(optical_channel.operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignment" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.operation)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (is_logical_link.is_set || is_set(is_logical_link.operation)) leaf_name_data.push_back(is_logical_link.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.operation)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.operation)) leaf_name_data.push_back(optical_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_children()
{
    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "allocation")
    {
        allocation = value;
    }
    if(value_path == "is-logical-link")
    {
        is_logical_link = value;
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

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignments()
{
    yang_name = "optical-logical-interface-logical-channel-assignments"; yang_parent_name = "optical-logical-interface";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::~OpticalLogicalInterfaceLogicalChannelAssignments()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::has_data() const
{
    for (std::size_t index=0; index<optical_logical_interface_logical_channel_assignment.size(); index++)
    {
        if(optical_logical_interface_logical_channel_assignment[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<optical_logical_interface_logical_channel_assignment.size(); index++)
    {
        if(optical_logical_interface_logical_channel_assignment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignments";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-logical-interface-logical-channel-assignment")
    {
        for(auto const & c : optical_logical_interface_logical_channel_assignment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment>();
        c->parent = this;
        optical_logical_interface_logical_channel_assignment.push_back(std::move(c));
        children[segment_path] = optical_logical_interface_logical_channel_assignment.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_children()
{
    for (auto const & c : optical_logical_interface_logical_channel_assignment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterface()
    :
    	index_{YType::int32, "index"}
    	,
    optical_logical_interface_attr(std::make_unique<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr>())
	,optical_logical_interface_logical_channel_assignments(std::make_unique<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments>())
{
    optical_logical_interface_attr->parent = this;
    children["optical-logical-interface-attr"] = optical_logical_interface_attr.get();

    optical_logical_interface_logical_channel_assignments->parent = this;
    children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments.get();

    yang_name = "optical-logical-interface"; yang_parent_name = "optical-logical-interfaces";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::~OpticalLogicalInterface()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::has_data() const
{
    return index_.is_set
	|| (optical_logical_interface_attr !=  nullptr && optical_logical_interface_attr->has_data())
	|| (optical_logical_interface_logical_channel_assignments !=  nullptr && optical_logical_interface_logical_channel_assignments->has_data());
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (optical_logical_interface_attr !=  nullptr && is_set(optical_logical_interface_attr->operation))
	|| (optical_logical_interface_logical_channel_assignments !=  nullptr && is_set(optical_logical_interface_logical_channel_assignments->operation));
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface/optical-logical-interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-logical-interface-attr")
    {
        if(optical_logical_interface_attr != nullptr)
        {
            children["optical-logical-interface-attr"] = optical_logical_interface_attr.get();
        }
        else
        {
            optical_logical_interface_attr = std::make_unique<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr>();
            optical_logical_interface_attr->parent = this;
            children["optical-logical-interface-attr"] = optical_logical_interface_attr.get();
        }
        return children.at("optical-logical-interface-attr");
    }

    if(child_yang_name == "optical-logical-interface-logical-channel-assignments")
    {
        if(optical_logical_interface_logical_channel_assignments != nullptr)
        {
            children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments.get();
        }
        else
        {
            optical_logical_interface_logical_channel_assignments = std::make_unique<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments>();
            optical_logical_interface_logical_channel_assignments->parent = this;
            children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments.get();
        }
        return children.at("optical-logical-interface-logical-channel-assignments");
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_children()
{
    if(children.find("optical-logical-interface-attr") == children.end())
    {
        if(optical_logical_interface_attr != nullptr)
        {
            children["optical-logical-interface-attr"] = optical_logical_interface_attr.get();
        }
    }

    if(children.find("optical-logical-interface-logical-channel-assignments") == children.end())
    {
        if(optical_logical_interface_logical_channel_assignments != nullptr)
        {
            children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments.get();
        }
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterfaces()
{
    yang_name = "optical-logical-interfaces"; yang_parent_name = "optical-interface";
}

OpticalInterface::OpticalLogicalInterfaces::~OpticalLogicalInterfaces()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::has_data() const
{
    for (std::size_t index=0; index<optical_logical_interface.size(); index++)
    {
        if(optical_logical_interface[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalLogicalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<optical_logical_interface.size(); index++)
    {
        if(optical_logical_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interfaces";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::OpticalLogicalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-logical-interface")
    {
        for(auto const & c : optical_logical_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface>();
        c->parent = this;
        optical_logical_interface.push_back(std::move(c));
        children[segment_path] = optical_logical_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::OpticalLogicalInterfaces::get_children()
{
    for (auto const & c : optical_logical_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OpticalInterface()
    :
    operational_modes(std::make_unique<OpticalInterface::OperationalModes>())
	,optical_client_interfaces(std::make_unique<OpticalInterface::OpticalClientInterfaces>())
	,optical_logical_interfaces(std::make_unique<OpticalInterface::OpticalLogicalInterfaces>())
{
    operational_modes->parent = this;
    children["operational-modes"] = operational_modes.get();

    optical_client_interfaces->parent = this;
    children["optical-client-interfaces"] = optical_client_interfaces.get();

    optical_logical_interfaces->parent = this;
    children["optical-logical-interfaces"] = optical_logical_interfaces.get();

    yang_name = "optical-interface"; yang_parent_name = "Cisco-IOS-XR-openconfig-terminal-device-oper";
}

OpticalInterface::~OpticalInterface()
{
}

bool OpticalInterface::has_data() const
{
    return (operational_modes !=  nullptr && operational_modes->has_data())
	|| (optical_client_interfaces !=  nullptr && optical_client_interfaces->has_data())
	|| (optical_logical_interfaces !=  nullptr && optical_logical_interfaces->has_data());
}

bool OpticalInterface::has_operation() const
{
    return is_set(operation)
	|| (operational_modes !=  nullptr && is_set(operational_modes->operation))
	|| (optical_client_interfaces !=  nullptr && is_set(optical_client_interfaces->operation))
	|| (optical_logical_interfaces !=  nullptr && is_set(optical_logical_interfaces->operation));
}

std::string OpticalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface";

    return path_buffer.str();

}

EntityPath OpticalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* OpticalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operational-modes")
    {
        if(operational_modes != nullptr)
        {
            children["operational-modes"] = operational_modes.get();
        }
        else
        {
            operational_modes = std::make_unique<OpticalInterface::OperationalModes>();
            operational_modes->parent = this;
            children["operational-modes"] = operational_modes.get();
        }
        return children.at("operational-modes");
    }

    if(child_yang_name == "optical-client-interfaces")
    {
        if(optical_client_interfaces != nullptr)
        {
            children["optical-client-interfaces"] = optical_client_interfaces.get();
        }
        else
        {
            optical_client_interfaces = std::make_unique<OpticalInterface::OpticalClientInterfaces>();
            optical_client_interfaces->parent = this;
            children["optical-client-interfaces"] = optical_client_interfaces.get();
        }
        return children.at("optical-client-interfaces");
    }

    if(child_yang_name == "optical-logical-interfaces")
    {
        if(optical_logical_interfaces != nullptr)
        {
            children["optical-logical-interfaces"] = optical_logical_interfaces.get();
        }
        else
        {
            optical_logical_interfaces = std::make_unique<OpticalInterface::OpticalLogicalInterfaces>();
            optical_logical_interfaces->parent = this;
            children["optical-logical-interfaces"] = optical_logical_interfaces.get();
        }
        return children.at("optical-logical-interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & OpticalInterface::get_children()
{
    if(children.find("operational-modes") == children.end())
    {
        if(operational_modes != nullptr)
        {
            children["operational-modes"] = operational_modes.get();
        }
    }

    if(children.find("optical-client-interfaces") == children.end())
    {
        if(optical_client_interfaces != nullptr)
        {
            children["optical-client-interfaces"] = optical_client_interfaces.get();
        }
    }

    if(children.find("optical-logical-interfaces") == children.end())
    {
        if(optical_logical_interfaces != nullptr)
        {
            children["optical-logical-interfaces"] = optical_logical_interfaces.get();
        }
    }

    return children;
}

void OpticalInterface::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> OpticalInterface::clone_ptr()
{
    return std::make_unique<OpticalInterface>();
}

const Enum::Value LogicalProtocolEnum::proto_type_unknown {0, "proto-type-unknown"};
const Enum::Value LogicalProtocolEnum::proto_type_ethernet {1, "proto-type-ethernet"};
const Enum::Value LogicalProtocolEnum::proto_type_otn {2, "proto-type-otn"};

const Enum::Value TribProtocolEnum::trib_proto_type_unknown {0, "trib-proto-type-unknown"};
const Enum::Value TribProtocolEnum::trib_proto_type1ge {1, "trib-proto-type1ge"};
const Enum::Value TribProtocolEnum::trib_proto_type_oc48 {2, "trib-proto-type-oc48"};
const Enum::Value TribProtocolEnum::trib_proto_type_stm16 {3, "trib-proto-type-stm16"};
const Enum::Value TribProtocolEnum::trib_proto_type10gelan {4, "trib-proto-type10gelan"};
const Enum::Value TribProtocolEnum::trib_proto_type10gewan {5, "trib-proto-type10gewan"};
const Enum::Value TribProtocolEnum::trib_proto_type_oc192 {6, "trib-proto-type-oc192"};
const Enum::Value TribProtocolEnum::trib_proto_type_stm64 {7, "trib-proto-type-stm64"};
const Enum::Value TribProtocolEnum::trib_proto_type_otu2 {8, "trib-proto-type-otu2"};
const Enum::Value TribProtocolEnum::trib_proto_type_otu2e {9, "trib-proto-type-otu2e"};
const Enum::Value TribProtocolEnum::trib_proto_type_otu1e {10, "trib-proto-type-otu1e"};
const Enum::Value TribProtocolEnum::trib_proto_type_odu2 {11, "trib-proto-type-odu2"};
const Enum::Value TribProtocolEnum::trib_proto_type_odu2e {12, "trib-proto-type-odu2e"};
const Enum::Value TribProtocolEnum::trib_proto_type40ge {13, "trib-proto-type40ge"};
const Enum::Value TribProtocolEnum::trib_proto_type_oc768 {14, "trib-proto-type-oc768"};
const Enum::Value TribProtocolEnum::trib_proto_type_stm256 {15, "trib-proto-type-stm256"};
const Enum::Value TribProtocolEnum::trib_proto_type_otu3 {16, "trib-proto-type-otu3"};
const Enum::Value TribProtocolEnum::trib_proto_type_odu3 {17, "trib-proto-type-odu3"};
const Enum::Value TribProtocolEnum::trib_proto_type100ge {18, "trib-proto-type100ge"};
const Enum::Value TribProtocolEnum::trib_proto_type100g_mlg {19, "trib-proto-type100g-mlg"};
const Enum::Value TribProtocolEnum::trib_proto_type_otu4 {20, "trib-proto-type-otu4"};
const Enum::Value TribProtocolEnum::trib_proto_type_otu_cn {21, "trib-proto-type-otu-cn"};
const Enum::Value TribProtocolEnum::trib_proto_type_odu4 {22, "trib-proto-type-odu4"};

const Enum::Value TribRateClassEnum::trib_rate1g {0, "trib-rate1g"};
const Enum::Value TribRateClassEnum::trib_rate25g {1, "trib-rate25g"};
const Enum::Value TribRateClassEnum::trib_rate10g {2, "trib-rate10g"};
const Enum::Value TribRateClassEnum::trib_rate40g {3, "trib-rate40g"};
const Enum::Value TribRateClassEnum::trib_rate100g {4, "trib-rate100g"};
const Enum::Value TribRateClassEnum::trib_rate_unknown {5, "trib-rate-unknown"};


}
}

