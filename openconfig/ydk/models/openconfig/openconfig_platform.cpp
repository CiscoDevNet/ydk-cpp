
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_platform.hpp"

namespace ydk {
namespace openconfig_platform {

Components::Components()
{
    yang_name = "components"; yang_parent_name = "openconfig-platform";
}

Components::~Components()
{
}

bool Components::has_data() const
{
    for (std::size_t index=0; index<component.size(); index++)
    {
        if(component[index]->has_data())
            return true;
    }
    return false;
}

bool Components::has_operation() const
{
    for (std::size_t index=0; index<component.size(); index++)
    {
        if(component[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Components::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-platform:components";

    return path_buffer.str();

}

EntityPath Components::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Components::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "component")
    {
        for(auto const & c : component)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Components::Component>();
        c->parent = this;
        component.push_back(std::move(c));
        children[segment_path] = component.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::get_children()
{
    for (auto const & c : component)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Components::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Components::clone_ptr() const
{
    return std::make_shared<Components>();
}

std::string Components::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Components::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Components::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

Components::Component::Component()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Components::Component::Config>())
	,optical_channel(std::make_shared<Components::Component::OpticalChannel>())
	,properties(std::make_shared<Components::Component::Properties>())
	,state(std::make_shared<Components::Component::State>())
	,subcomponents(std::make_shared<Components::Component::Subcomponents>())
	,transceiver(std::make_shared<Components::Component::Transceiver>())
{
    config->parent = this;
    children["config"] = config;

    optical_channel->parent = this;
    children["optical-channel"] = optical_channel;

    properties->parent = this;
    children["properties"] = properties;

    state->parent = this;
    children["state"] = state;

    subcomponents->parent = this;
    children["subcomponents"] = subcomponents;

    transceiver->parent = this;
    children["transceiver"] = transceiver;

    yang_name = "component"; yang_parent_name = "components";
}

Components::Component::~Component()
{
}

bool Components::Component::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (optical_channel !=  nullptr && optical_channel->has_data())
	|| (properties !=  nullptr && properties->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (subcomponents !=  nullptr && subcomponents->has_data())
	|| (transceiver !=  nullptr && transceiver->has_data());
}

bool Components::Component::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (optical_channel !=  nullptr && optical_channel->has_operation())
	|| (properties !=  nullptr && properties->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (subcomponents !=  nullptr && subcomponents->has_operation())
	|| (transceiver !=  nullptr && transceiver->has_operation());
}

std::string Components::Component::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Components::Component::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-platform:components/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Components::Component::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "optical-channel")
    {
        if(optical_channel != nullptr)
        {
            children["optical-channel"] = optical_channel;
        }
        else
        {
            optical_channel = std::make_shared<Components::Component::OpticalChannel>();
            optical_channel->parent = this;
            children["optical-channel"] = optical_channel;
        }
        return children.at("optical-channel");
    }

    if(child_yang_name == "properties")
    {
        if(properties != nullptr)
        {
            children["properties"] = properties;
        }
        else
        {
            properties = std::make_shared<Components::Component::Properties>();
            properties->parent = this;
            children["properties"] = properties;
        }
        return children.at("properties");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Components::Component::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "subcomponents")
    {
        if(subcomponents != nullptr)
        {
            children["subcomponents"] = subcomponents;
        }
        else
        {
            subcomponents = std::make_shared<Components::Component::Subcomponents>();
            subcomponents->parent = this;
            children["subcomponents"] = subcomponents;
        }
        return children.at("subcomponents");
    }

    if(child_yang_name == "transceiver")
    {
        if(transceiver != nullptr)
        {
            children["transceiver"] = transceiver;
        }
        else
        {
            transceiver = std::make_shared<Components::Component::Transceiver>();
            transceiver->parent = this;
            children["transceiver"] = transceiver;
        }
        return children.at("transceiver");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("optical-channel") == children.end())
    {
        if(optical_channel != nullptr)
        {
            children["optical-channel"] = optical_channel;
        }
    }

    if(children.find("properties") == children.end())
    {
        if(properties != nullptr)
        {
            children["properties"] = properties;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("subcomponents") == children.end())
    {
        if(subcomponents != nullptr)
        {
            children["subcomponents"] = subcomponents;
        }
    }

    if(children.find("transceiver") == children.end())
    {
        if(transceiver != nullptr)
        {
            children["transceiver"] = transceiver;
        }
    }

    return children;
}

void Components::Component::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Components::Component::Config::Config()
    :
    name{YType::str, "name"}
{
    yang_name = "config"; yang_parent_name = "component";
}

Components::Component::Config::~Config()
{
}

bool Components::Component::Config::has_data() const
{
    return name.is_set;
}

bool Components::Component::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Components::Component::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Components::Component::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Config::get_children()
{
    return children;
}

void Components::Component::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Components::Component::State::State()
    :
    description{YType::str, "description"},
    id{YType::str, "id"},
    mfg_name{YType::str, "mfg-name"},
    name{YType::str, "name"},
    part_no{YType::str, "part-no"},
    serial_no{YType::str, "serial-no"},
    type{YType::str, "type"},
    version{YType::str, "version"}
{
    yang_name = "state"; yang_parent_name = "component";
}

Components::Component::State::~State()
{
}

bool Components::Component::State::has_data() const
{
    return description.is_set
	|| id.is_set
	|| mfg_name.is_set
	|| name.is_set
	|| part_no.is_set
	|| serial_no.is_set
	|| type.is_set
	|| version.is_set;
}

bool Components::Component::State::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(id.operation)
	|| is_set(mfg_name.operation)
	|| is_set(name.operation)
	|| is_set(part_no.operation)
	|| is_set(serial_no.operation)
	|| is_set(type.operation)
	|| is_set(version.operation);
}

std::string Components::Component::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Components::Component::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mfg_name.is_set || is_set(mfg_name.operation)) leaf_name_data.push_back(mfg_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (part_no.is_set || is_set(part_no.operation)) leaf_name_data.push_back(part_no.get_name_leafdata());
    if (serial_no.is_set || is_set(serial_no.operation)) leaf_name_data.push_back(serial_no.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::State::get_children()
{
    return children;
}

void Components::Component::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "mfg-name")
    {
        mfg_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "part-no")
    {
        part_no = value;
    }
    if(value_path == "serial-no")
    {
        serial_no = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Components::Component::Properties::Properties()
{
    yang_name = "properties"; yang_parent_name = "component";
}

Components::Component::Properties::~Properties()
{
}

bool Components::Component::Properties::has_data() const
{
    for (std::size_t index=0; index<property.size(); index++)
    {
        if(property[index]->has_data())
            return true;
    }
    return false;
}

bool Components::Component::Properties::has_operation() const
{
    for (std::size_t index=0; index<property.size(); index++)
    {
        if(property[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Components::Component::Properties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "properties";

    return path_buffer.str();

}

EntityPath Components::Component::Properties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Properties' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Properties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "property")
    {
        for(auto const & c : property)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Components::Component::Properties::Property>();
        c->parent = this;
        property.push_back(std::move(c));
        children[segment_path] = property.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Properties::get_children()
{
    for (auto const & c : property)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Components::Component::Properties::set_value(const std::string & value_path, std::string value)
{
}

Components::Component::Properties::Property::Property()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Components::Component::Properties::Property::Config>())
	,state(std::make_shared<Components::Component::Properties::Property::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "property"; yang_parent_name = "properties";
}

Components::Component::Properties::Property::~Property()
{
}

bool Components::Component::Properties::Property::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Components::Component::Properties::Property::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Components::Component::Properties::Property::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "property" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Components::Component::Properties::Property::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Property' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Properties::Property::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Components::Component::Properties::Property::Config>();
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
            state = std::make_shared<Components::Component::Properties::Property::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Properties::Property::get_children()
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

void Components::Component::Properties::Property::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Components::Component::Properties::Property::Config::Config()
    :
    name{YType::str, "name"},
    value_{YType::str, "value"}
{
    yang_name = "config"; yang_parent_name = "property";
}

Components::Component::Properties::Property::Config::~Config()
{
}

bool Components::Component::Properties::Property::Config::has_data() const
{
    return name.is_set
	|| value_.is_set;
}

bool Components::Component::Properties::Property::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(value_.operation);
}

std::string Components::Component::Properties::Property::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Components::Component::Properties::Property::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Properties::Property::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Properties::Property::Config::get_children()
{
    return children;
}

void Components::Component::Properties::Property::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Components::Component::Properties::Property::State::State()
    :
    configurable{YType::boolean, "configurable"},
    name{YType::str, "name"},
    value_{YType::str, "value"}
{
    yang_name = "state"; yang_parent_name = "property";
}

Components::Component::Properties::Property::State::~State()
{
}

bool Components::Component::Properties::Property::State::has_data() const
{
    return configurable.is_set
	|| name.is_set
	|| value_.is_set;
}

bool Components::Component::Properties::Property::State::has_operation() const
{
    return is_set(operation)
	|| is_set(configurable.operation)
	|| is_set(name.operation)
	|| is_set(value_.operation);
}

std::string Components::Component::Properties::Property::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Components::Component::Properties::Property::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configurable.is_set || is_set(configurable.operation)) leaf_name_data.push_back(configurable.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Properties::Property::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Properties::Property::State::get_children()
{
    return children;
}

void Components::Component::Properties::Property::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configurable")
    {
        configurable = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Components::Component::Subcomponents::Subcomponents()
{
    yang_name = "subcomponents"; yang_parent_name = "component";
}

Components::Component::Subcomponents::~Subcomponents()
{
}

bool Components::Component::Subcomponents::has_data() const
{
    for (std::size_t index=0; index<subcomponent.size(); index++)
    {
        if(subcomponent[index]->has_data())
            return true;
    }
    return false;
}

bool Components::Component::Subcomponents::has_operation() const
{
    for (std::size_t index=0; index<subcomponent.size(); index++)
    {
        if(subcomponent[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Components::Component::Subcomponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subcomponents";

    return path_buffer.str();

}

EntityPath Components::Component::Subcomponents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subcomponents' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Subcomponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subcomponent")
    {
        for(auto const & c : subcomponent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Components::Component::Subcomponents::Subcomponent>();
        c->parent = this;
        subcomponent.push_back(std::move(c));
        children[segment_path] = subcomponent.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Subcomponents::get_children()
{
    for (auto const & c : subcomponent)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Components::Component::Subcomponents::set_value(const std::string & value_path, std::string value)
{
}

Components::Component::Subcomponents::Subcomponent::Subcomponent()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Components::Component::Subcomponents::Subcomponent::Config>())
	,state(std::make_shared<Components::Component::Subcomponents::Subcomponent::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "subcomponent"; yang_parent_name = "subcomponents";
}

Components::Component::Subcomponents::Subcomponent::~Subcomponent()
{
}

bool Components::Component::Subcomponents::Subcomponent::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Components::Component::Subcomponents::Subcomponent::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Components::Component::Subcomponents::Subcomponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subcomponent" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Components::Component::Subcomponents::Subcomponent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subcomponent' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Subcomponents::Subcomponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Components::Component::Subcomponents::Subcomponent::Config>();
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
            state = std::make_shared<Components::Component::Subcomponents::Subcomponent::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Subcomponents::Subcomponent::get_children()
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

void Components::Component::Subcomponents::Subcomponent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Components::Component::Subcomponents::Subcomponent::Config::Config()
    :
    name{YType::str, "name"}
{
    yang_name = "config"; yang_parent_name = "subcomponent";
}

Components::Component::Subcomponents::Subcomponent::Config::~Config()
{
}

bool Components::Component::Subcomponents::Subcomponent::Config::has_data() const
{
    return name.is_set;
}

bool Components::Component::Subcomponents::Subcomponent::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Components::Component::Subcomponents::Subcomponent::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Components::Component::Subcomponents::Subcomponent::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Subcomponents::Subcomponent::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Subcomponents::Subcomponent::Config::get_children()
{
    return children;
}

void Components::Component::Subcomponents::Subcomponent::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Components::Component::Subcomponents::Subcomponent::State::State()
    :
    name{YType::str, "name"}
{
    yang_name = "state"; yang_parent_name = "subcomponent";
}

Components::Component::Subcomponents::Subcomponent::State::~State()
{
}

bool Components::Component::Subcomponents::Subcomponent::State::has_data() const
{
    return name.is_set;
}

bool Components::Component::Subcomponents::Subcomponent::State::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Components::Component::Subcomponents::Subcomponent::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Components::Component::Subcomponents::Subcomponent::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Subcomponents::Subcomponent::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Subcomponents::Subcomponent::State::get_children()
{
    return children;
}

void Components::Component::Subcomponents::Subcomponent::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Components::Component::Transceiver::Transceiver()
    :
    config(std::make_shared<Components::Component::Transceiver::Config>())
	,physical_channels(std::make_shared<Components::Component::Transceiver::PhysicalChannels>())
	,state(std::make_shared<Components::Component::Transceiver::State>())
{
    config->parent = this;
    children["config"] = config;

    physical_channels->parent = this;
    children["physical-channels"] = physical_channels;

    state->parent = this;
    children["state"] = state;

    yang_name = "transceiver"; yang_parent_name = "component";
}

Components::Component::Transceiver::~Transceiver()
{
}

bool Components::Component::Transceiver::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (physical_channels !=  nullptr && physical_channels->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Components::Component::Transceiver::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (physical_channels !=  nullptr && physical_channels->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Components::Component::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-platform-transceiver:transceiver";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transceiver' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Components::Component::Transceiver::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "physical-channels")
    {
        if(physical_channels != nullptr)
        {
            children["physical-channels"] = physical_channels;
        }
        else
        {
            physical_channels = std::make_shared<Components::Component::Transceiver::PhysicalChannels>();
            physical_channels->parent = this;
            children["physical-channels"] = physical_channels;
        }
        return children.at("physical-channels");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Components::Component::Transceiver::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("physical-channels") == children.end())
    {
        if(physical_channels != nullptr)
        {
            children["physical-channels"] = physical_channels;
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

void Components::Component::Transceiver::set_value(const std::string & value_path, std::string value)
{
}

Components::Component::Transceiver::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    form_factor{YType::identityref, "form-factor"}
{
    yang_name = "config"; yang_parent_name = "transceiver";
}

Components::Component::Transceiver::Config::~Config()
{
}

bool Components::Component::Transceiver::Config::has_data() const
{
    return enabled.is_set
	|| form_factor.is_set;
}

bool Components::Component::Transceiver::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(form_factor.operation);
}

std::string Components::Component::Transceiver::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (form_factor.is_set || is_set(form_factor.operation)) leaf_name_data.push_back(form_factor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Transceiver::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::Config::get_children()
{
    return children;
}

void Components::Component::Transceiver::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "form-factor")
    {
        form_factor = value;
    }
}

Components::Component::Transceiver::State::State()
    :
    connector_type{YType::identityref, "connector-type"},
    date_code{YType::str, "date-code"},
    enabled{YType::boolean, "enabled"},
    ethernet_compliance_code{YType::identityref, "ethernet-compliance-code"},
    fault_condition{YType::boolean, "fault-condition"},
    form_factor{YType::identityref, "form-factor"},
    internal_temp{YType::int16, "internal-temp"},
    otn_compliance_code{YType::identityref, "otn-compliance-code"},
    present{YType::enumeration, "present"},
    serial_no{YType::str, "serial-no"},
    sonet_sdh_compliance_code{YType::identityref, "sonet-sdh-compliance-code"},
    vendor{YType::str, "vendor"},
    vendor_part{YType::str, "vendor-part"},
    vendor_rev{YType::str, "vendor-rev"}
{
    yang_name = "state"; yang_parent_name = "transceiver";
}

Components::Component::Transceiver::State::~State()
{
}

bool Components::Component::Transceiver::State::has_data() const
{
    return connector_type.is_set
	|| date_code.is_set
	|| enabled.is_set
	|| ethernet_compliance_code.is_set
	|| fault_condition.is_set
	|| form_factor.is_set
	|| internal_temp.is_set
	|| otn_compliance_code.is_set
	|| present.is_set
	|| serial_no.is_set
	|| sonet_sdh_compliance_code.is_set
	|| vendor.is_set
	|| vendor_part.is_set
	|| vendor_rev.is_set;
}

bool Components::Component::Transceiver::State::has_operation() const
{
    return is_set(operation)
	|| is_set(connector_type.operation)
	|| is_set(date_code.operation)
	|| is_set(enabled.operation)
	|| is_set(ethernet_compliance_code.operation)
	|| is_set(fault_condition.operation)
	|| is_set(form_factor.operation)
	|| is_set(internal_temp.operation)
	|| is_set(otn_compliance_code.operation)
	|| is_set(present.operation)
	|| is_set(serial_no.operation)
	|| is_set(sonet_sdh_compliance_code.operation)
	|| is_set(vendor.operation)
	|| is_set(vendor_part.operation)
	|| is_set(vendor_rev.operation);
}

std::string Components::Component::Transceiver::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (date_code.is_set || is_set(date_code.operation)) leaf_name_data.push_back(date_code.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ethernet_compliance_code.is_set || is_set(ethernet_compliance_code.operation)) leaf_name_data.push_back(ethernet_compliance_code.get_name_leafdata());
    if (fault_condition.is_set || is_set(fault_condition.operation)) leaf_name_data.push_back(fault_condition.get_name_leafdata());
    if (form_factor.is_set || is_set(form_factor.operation)) leaf_name_data.push_back(form_factor.get_name_leafdata());
    if (internal_temp.is_set || is_set(internal_temp.operation)) leaf_name_data.push_back(internal_temp.get_name_leafdata());
    if (otn_compliance_code.is_set || is_set(otn_compliance_code.operation)) leaf_name_data.push_back(otn_compliance_code.get_name_leafdata());
    if (present.is_set || is_set(present.operation)) leaf_name_data.push_back(present.get_name_leafdata());
    if (serial_no.is_set || is_set(serial_no.operation)) leaf_name_data.push_back(serial_no.get_name_leafdata());
    if (sonet_sdh_compliance_code.is_set || is_set(sonet_sdh_compliance_code.operation)) leaf_name_data.push_back(sonet_sdh_compliance_code.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.operation)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (vendor_part.is_set || is_set(vendor_part.operation)) leaf_name_data.push_back(vendor_part.get_name_leafdata());
    if (vendor_rev.is_set || is_set(vendor_rev.operation)) leaf_name_data.push_back(vendor_rev.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Transceiver::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::State::get_children()
{
    return children;
}

void Components::Component::Transceiver::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "date-code")
    {
        date_code = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "ethernet-compliance-code")
    {
        ethernet_compliance_code = value;
    }
    if(value_path == "fault-condition")
    {
        fault_condition = value;
    }
    if(value_path == "form-factor")
    {
        form_factor = value;
    }
    if(value_path == "internal-temp")
    {
        internal_temp = value;
    }
    if(value_path == "otn-compliance-code")
    {
        otn_compliance_code = value;
    }
    if(value_path == "present")
    {
        present = value;
    }
    if(value_path == "serial-no")
    {
        serial_no = value;
    }
    if(value_path == "sonet-sdh-compliance-code")
    {
        sonet_sdh_compliance_code = value;
    }
    if(value_path == "vendor")
    {
        vendor = value;
    }
    if(value_path == "vendor-part")
    {
        vendor_part = value;
    }
    if(value_path == "vendor-rev")
    {
        vendor_rev = value;
    }
}

Components::Component::Transceiver::PhysicalChannels::PhysicalChannels()
{
    yang_name = "physical-channels"; yang_parent_name = "transceiver";
}

Components::Component::Transceiver::PhysicalChannels::~PhysicalChannels()
{
}

bool Components::Component::Transceiver::PhysicalChannels::has_data() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return false;
}

bool Components::Component::Transceiver::PhysicalChannels::has_operation() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Components::Component::Transceiver::PhysicalChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physical-channels";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::PhysicalChannels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PhysicalChannels' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Transceiver::PhysicalChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel>();
        c->parent = this;
        channel.push_back(std::move(c));
        children[segment_path] = channel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::PhysicalChannels::get_children()
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

void Components::Component::Transceiver::PhysicalChannels::set_value(const std::string & value_path, std::string value)
{
}

Components::Component::Transceiver::PhysicalChannels::Channel::Channel()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::Config>())
	,state(std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "channel"; yang_parent_name = "physical-channels";
}

Components::Component::Transceiver::PhysicalChannels::Channel::~Channel()
{
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Components::Component::Transceiver::PhysicalChannels::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::PhysicalChannels::Channel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Channel' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::Transceiver::PhysicalChannels::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::Config>();
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
            state = std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::PhysicalChannels::Channel::get_children()
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

void Components::Component::Transceiver::PhysicalChannels::Channel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

Components::Component::Transceiver::PhysicalChannels::Channel::Config::Config()
    :
    description{YType::str, "description"},
    index_{YType::uint16, "index"},
    target_output_power{YType::str, "target-output-power"},
    tx_laser{YType::boolean, "tx-laser"}
{
    yang_name = "config"; yang_parent_name = "channel";
}

Components::Component::Transceiver::PhysicalChannels::Channel::Config::~Config()
{
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::Config::has_data() const
{
    return description.is_set
	|| index_.is_set
	|| target_output_power.is_set
	|| tx_laser.is_set;
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(index_.operation)
	|| is_set(target_output_power.operation)
	|| is_set(tx_laser.operation);
}

std::string Components::Component::Transceiver::PhysicalChannels::Channel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::PhysicalChannels::Channel::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (target_output_power.is_set || is_set(target_output_power.operation)) leaf_name_data.push_back(target_output_power.get_name_leafdata());
    if (tx_laser.is_set || is_set(tx_laser.operation)) leaf_name_data.push_back(tx_laser.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Transceiver::PhysicalChannels::Channel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::PhysicalChannels::Channel::Config::get_children()
{
    return children;
}

void Components::Component::Transceiver::PhysicalChannels::Channel::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "target-output-power")
    {
        target_output_power = value;
    }
    if(value_path == "tx-laser")
    {
        tx_laser = value;
    }
}

Components::Component::Transceiver::PhysicalChannels::Channel::State::State()
    :
    description{YType::str, "description"},
    index_{YType::uint16, "index"},
    output_frequency{YType::uint64, "output-frequency"},
    target_output_power{YType::str, "target-output-power"},
    tx_laser{YType::boolean, "tx-laser"}
    	,
    input_power(std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower>())
	,laser_bias_current(std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent>())
	,output_power(std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower>())
{
    input_power->parent = this;
    children["input-power"] = input_power;

    laser_bias_current->parent = this;
    children["laser-bias-current"] = laser_bias_current;

    output_power->parent = this;
    children["output-power"] = output_power;

    yang_name = "state"; yang_parent_name = "channel";
}

Components::Component::Transceiver::PhysicalChannels::Channel::State::~State()
{
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::has_data() const
{
    return description.is_set
	|| index_.is_set
	|| output_frequency.is_set
	|| target_output_power.is_set
	|| tx_laser.is_set
	|| (input_power !=  nullptr && input_power->has_data())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_data())
	|| (output_power !=  nullptr && output_power->has_data());
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(index_.operation)
	|| is_set(output_frequency.operation)
	|| is_set(target_output_power.operation)
	|| is_set(tx_laser.operation)
	|| (input_power !=  nullptr && input_power->has_operation())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_operation())
	|| (output_power !=  nullptr && output_power->has_operation());
}

std::string Components::Component::Transceiver::PhysicalChannels::Channel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::PhysicalChannels::Channel::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (output_frequency.is_set || is_set(output_frequency.operation)) leaf_name_data.push_back(output_frequency.get_name_leafdata());
    if (target_output_power.is_set || is_set(target_output_power.operation)) leaf_name_data.push_back(target_output_power.get_name_leafdata());
    if (tx_laser.is_set || is_set(tx_laser.operation)) leaf_name_data.push_back(tx_laser.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::Transceiver::PhysicalChannels::Channel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input-power")
    {
        if(input_power != nullptr)
        {
            children["input-power"] = input_power;
        }
        else
        {
            input_power = std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower>();
            input_power->parent = this;
            children["input-power"] = input_power;
        }
        return children.at("input-power");
    }

    if(child_yang_name == "laser-bias-current")
    {
        if(laser_bias_current != nullptr)
        {
            children["laser-bias-current"] = laser_bias_current;
        }
        else
        {
            laser_bias_current = std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent>();
            laser_bias_current->parent = this;
            children["laser-bias-current"] = laser_bias_current;
        }
        return children.at("laser-bias-current");
    }

    if(child_yang_name == "output-power")
    {
        if(output_power != nullptr)
        {
            children["output-power"] = output_power;
        }
        else
        {
            output_power = std::make_shared<Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower>();
            output_power->parent = this;
            children["output-power"] = output_power;
        }
        return children.at("output-power");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::PhysicalChannels::Channel::State::get_children()
{
    if(children.find("input-power") == children.end())
    {
        if(input_power != nullptr)
        {
            children["input-power"] = input_power;
        }
    }

    if(children.find("laser-bias-current") == children.end())
    {
        if(laser_bias_current != nullptr)
        {
            children["laser-bias-current"] = laser_bias_current;
        }
    }

    if(children.find("output-power") == children.end())
    {
        if(output_power != nullptr)
        {
            children["output-power"] = output_power;
        }
    }

    return children;
}

void Components::Component::Transceiver::PhysicalChannels::Channel::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "output-frequency")
    {
        output_frequency = value;
    }
    if(value_path == "target-output-power")
    {
        target_output_power = value;
    }
    if(value_path == "tx-laser")
    {
        tx_laser = value;
    }
}

Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::OutputPower()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "output-power"; yang_parent_name = "state";
}

Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::~OutputPower()
{
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputPower' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::get_children()
{
    return children;
}

void Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower::set_value(const std::string & value_path, std::string value)
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

Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::InputPower()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "input-power"; yang_parent_name = "state";
}

Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::~InputPower()
{
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputPower' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::get_children()
{
    return children;
}

void Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower::set_value(const std::string & value_path, std::string value)
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

Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::LaserBiasCurrent()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "laser-bias-current"; yang_parent_name = "state";
}

Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::~LaserBiasCurrent()
{
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-bias-current";

    return path_buffer.str();

}

EntityPath Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LaserBiasCurrent' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::get_children()
{
    return children;
}

void Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent::set_value(const std::string & value_path, std::string value)
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

Components::Component::OpticalChannel::OpticalChannel()
    :
    config(std::make_shared<Components::Component::OpticalChannel::Config>())
	,state(std::make_shared<Components::Component::OpticalChannel::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "optical-channel"; yang_parent_name = "component";
}

Components::Component::OpticalChannel::~OpticalChannel()
{
}

bool Components::Component::OpticalChannel::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Components::Component::OpticalChannel::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Components::Component::OpticalChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-terminal-device:optical-channel";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticalChannel' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::OpticalChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Components::Component::OpticalChannel::Config>();
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
            state = std::make_shared<Components::Component::OpticalChannel::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::get_children()
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

void Components::Component::OpticalChannel::set_value(const std::string & value_path, std::string value)
{
}

Components::Component::OpticalChannel::Config::Config()
    :
    frequency{YType::uint64, "frequency"},
    line_port{YType::str, "line-port"},
    operational_mode{YType::uint16, "operational-mode"},
    target_output_power{YType::str, "target-output-power"}
{
    yang_name = "config"; yang_parent_name = "optical-channel";
}

Components::Component::OpticalChannel::Config::~Config()
{
}

bool Components::Component::OpticalChannel::Config::has_data() const
{
    return frequency.is_set
	|| line_port.is_set
	|| operational_mode.is_set
	|| target_output_power.is_set;
}

bool Components::Component::OpticalChannel::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(line_port.operation)
	|| is_set(operational_mode.operation)
	|| is_set(target_output_power.operation);
}

std::string Components::Component::OpticalChannel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (line_port.is_set || is_set(line_port.operation)) leaf_name_data.push_back(line_port.get_name_leafdata());
    if (operational_mode.is_set || is_set(operational_mode.operation)) leaf_name_data.push_back(operational_mode.get_name_leafdata());
    if (target_output_power.is_set || is_set(target_output_power.operation)) leaf_name_data.push_back(target_output_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::OpticalChannel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::Config::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "line-port")
    {
        line_port = value;
    }
    if(value_path == "operational-mode")
    {
        operational_mode = value;
    }
    if(value_path == "target-output-power")
    {
        target_output_power = value;
    }
}

Components::Component::OpticalChannel::State::State()
    :
    frequency{YType::uint64, "frequency"},
    group_id{YType::uint32, "group-id"},
    line_port{YType::str, "line-port"},
    operational_mode{YType::uint16, "operational-mode"},
    target_output_power{YType::str, "target-output-power"}
    	,
    chromatic_dispersion(std::make_shared<Components::Component::OpticalChannel::State::ChromaticDispersion>())
	,input_power(std::make_shared<Components::Component::OpticalChannel::State::InputPower>())
	,laser_bias_current(std::make_shared<Components::Component::OpticalChannel::State::LaserBiasCurrent>())
	,output_power(std::make_shared<Components::Component::OpticalChannel::State::OutputPower>())
	,polarization_dependent_loss(std::make_shared<Components::Component::OpticalChannel::State::PolarizationDependentLoss>())
	,polarization_mode_dispersion(std::make_shared<Components::Component::OpticalChannel::State::PolarizationModeDispersion>())
	,second_order_polarization_mode_dispersion(std::make_shared<Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion>())
{
    chromatic_dispersion->parent = this;
    children["chromatic-dispersion"] = chromatic_dispersion;

    input_power->parent = this;
    children["input-power"] = input_power;

    laser_bias_current->parent = this;
    children["laser-bias-current"] = laser_bias_current;

    output_power->parent = this;
    children["output-power"] = output_power;

    polarization_dependent_loss->parent = this;
    children["polarization-dependent-loss"] = polarization_dependent_loss;

    polarization_mode_dispersion->parent = this;
    children["polarization-mode-dispersion"] = polarization_mode_dispersion;

    second_order_polarization_mode_dispersion->parent = this;
    children["second-order-polarization-mode-dispersion"] = second_order_polarization_mode_dispersion;

    yang_name = "state"; yang_parent_name = "optical-channel";
}

Components::Component::OpticalChannel::State::~State()
{
}

bool Components::Component::OpticalChannel::State::has_data() const
{
    return frequency.is_set
	|| group_id.is_set
	|| line_port.is_set
	|| operational_mode.is_set
	|| target_output_power.is_set
	|| (chromatic_dispersion !=  nullptr && chromatic_dispersion->has_data())
	|| (input_power !=  nullptr && input_power->has_data())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_data())
	|| (output_power !=  nullptr && output_power->has_data())
	|| (polarization_dependent_loss !=  nullptr && polarization_dependent_loss->has_data())
	|| (polarization_mode_dispersion !=  nullptr && polarization_mode_dispersion->has_data())
	|| (second_order_polarization_mode_dispersion !=  nullptr && second_order_polarization_mode_dispersion->has_data());
}

bool Components::Component::OpticalChannel::State::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(group_id.operation)
	|| is_set(line_port.operation)
	|| is_set(operational_mode.operation)
	|| is_set(target_output_power.operation)
	|| (chromatic_dispersion !=  nullptr && chromatic_dispersion->has_operation())
	|| (input_power !=  nullptr && input_power->has_operation())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_operation())
	|| (output_power !=  nullptr && output_power->has_operation())
	|| (polarization_dependent_loss !=  nullptr && polarization_dependent_loss->has_operation())
	|| (polarization_mode_dispersion !=  nullptr && polarization_mode_dispersion->has_operation())
	|| (second_order_polarization_mode_dispersion !=  nullptr && second_order_polarization_mode_dispersion->has_operation());
}

std::string Components::Component::OpticalChannel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (line_port.is_set || is_set(line_port.operation)) leaf_name_data.push_back(line_port.get_name_leafdata());
    if (operational_mode.is_set || is_set(operational_mode.operation)) leaf_name_data.push_back(operational_mode.get_name_leafdata());
    if (target_output_power.is_set || is_set(target_output_power.operation)) leaf_name_data.push_back(target_output_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "chromatic-dispersion")
    {
        if(chromatic_dispersion != nullptr)
        {
            children["chromatic-dispersion"] = chromatic_dispersion;
        }
        else
        {
            chromatic_dispersion = std::make_shared<Components::Component::OpticalChannel::State::ChromaticDispersion>();
            chromatic_dispersion->parent = this;
            children["chromatic-dispersion"] = chromatic_dispersion;
        }
        return children.at("chromatic-dispersion");
    }

    if(child_yang_name == "input-power")
    {
        if(input_power != nullptr)
        {
            children["input-power"] = input_power;
        }
        else
        {
            input_power = std::make_shared<Components::Component::OpticalChannel::State::InputPower>();
            input_power->parent = this;
            children["input-power"] = input_power;
        }
        return children.at("input-power");
    }

    if(child_yang_name == "laser-bias-current")
    {
        if(laser_bias_current != nullptr)
        {
            children["laser-bias-current"] = laser_bias_current;
        }
        else
        {
            laser_bias_current = std::make_shared<Components::Component::OpticalChannel::State::LaserBiasCurrent>();
            laser_bias_current->parent = this;
            children["laser-bias-current"] = laser_bias_current;
        }
        return children.at("laser-bias-current");
    }

    if(child_yang_name == "output-power")
    {
        if(output_power != nullptr)
        {
            children["output-power"] = output_power;
        }
        else
        {
            output_power = std::make_shared<Components::Component::OpticalChannel::State::OutputPower>();
            output_power->parent = this;
            children["output-power"] = output_power;
        }
        return children.at("output-power");
    }

    if(child_yang_name == "polarization-dependent-loss")
    {
        if(polarization_dependent_loss != nullptr)
        {
            children["polarization-dependent-loss"] = polarization_dependent_loss;
        }
        else
        {
            polarization_dependent_loss = std::make_shared<Components::Component::OpticalChannel::State::PolarizationDependentLoss>();
            polarization_dependent_loss->parent = this;
            children["polarization-dependent-loss"] = polarization_dependent_loss;
        }
        return children.at("polarization-dependent-loss");
    }

    if(child_yang_name == "polarization-mode-dispersion")
    {
        if(polarization_mode_dispersion != nullptr)
        {
            children["polarization-mode-dispersion"] = polarization_mode_dispersion;
        }
        else
        {
            polarization_mode_dispersion = std::make_shared<Components::Component::OpticalChannel::State::PolarizationModeDispersion>();
            polarization_mode_dispersion->parent = this;
            children["polarization-mode-dispersion"] = polarization_mode_dispersion;
        }
        return children.at("polarization-mode-dispersion");
    }

    if(child_yang_name == "second-order-polarization-mode-dispersion")
    {
        if(second_order_polarization_mode_dispersion != nullptr)
        {
            children["second-order-polarization-mode-dispersion"] = second_order_polarization_mode_dispersion;
        }
        else
        {
            second_order_polarization_mode_dispersion = std::make_shared<Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion>();
            second_order_polarization_mode_dispersion->parent = this;
            children["second-order-polarization-mode-dispersion"] = second_order_polarization_mode_dispersion;
        }
        return children.at("second-order-polarization-mode-dispersion");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::get_children()
{
    if(children.find("chromatic-dispersion") == children.end())
    {
        if(chromatic_dispersion != nullptr)
        {
            children["chromatic-dispersion"] = chromatic_dispersion;
        }
    }

    if(children.find("input-power") == children.end())
    {
        if(input_power != nullptr)
        {
            children["input-power"] = input_power;
        }
    }

    if(children.find("laser-bias-current") == children.end())
    {
        if(laser_bias_current != nullptr)
        {
            children["laser-bias-current"] = laser_bias_current;
        }
    }

    if(children.find("output-power") == children.end())
    {
        if(output_power != nullptr)
        {
            children["output-power"] = output_power;
        }
    }

    if(children.find("polarization-dependent-loss") == children.end())
    {
        if(polarization_dependent_loss != nullptr)
        {
            children["polarization-dependent-loss"] = polarization_dependent_loss;
        }
    }

    if(children.find("polarization-mode-dispersion") == children.end())
    {
        if(polarization_mode_dispersion != nullptr)
        {
            children["polarization-mode-dispersion"] = polarization_mode_dispersion;
        }
    }

    if(children.find("second-order-polarization-mode-dispersion") == children.end())
    {
        if(second_order_polarization_mode_dispersion != nullptr)
        {
            children["second-order-polarization-mode-dispersion"] = second_order_polarization_mode_dispersion;
        }
    }

    return children;
}

void Components::Component::OpticalChannel::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "line-port")
    {
        line_port = value;
    }
    if(value_path == "operational-mode")
    {
        operational_mode = value;
    }
    if(value_path == "target-output-power")
    {
        target_output_power = value;
    }
}

Components::Component::OpticalChannel::State::OutputPower::OutputPower()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "output-power"; yang_parent_name = "state";
}

Components::Component::OpticalChannel::State::OutputPower::~OutputPower()
{
}

bool Components::Component::OpticalChannel::State::OutputPower::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::OpticalChannel::State::OutputPower::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::OpticalChannel::State::OutputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::OutputPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputPower' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::OutputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::OutputPower::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::State::OutputPower::set_value(const std::string & value_path, std::string value)
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

Components::Component::OpticalChannel::State::InputPower::InputPower()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "input-power"; yang_parent_name = "state";
}

Components::Component::OpticalChannel::State::InputPower::~InputPower()
{
}

bool Components::Component::OpticalChannel::State::InputPower::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::OpticalChannel::State::InputPower::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::OpticalChannel::State::InputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::InputPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputPower' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::InputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::InputPower::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::State::InputPower::set_value(const std::string & value_path, std::string value)
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

Components::Component::OpticalChannel::State::LaserBiasCurrent::LaserBiasCurrent()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "laser-bias-current"; yang_parent_name = "state";
}

Components::Component::OpticalChannel::State::LaserBiasCurrent::~LaserBiasCurrent()
{
}

bool Components::Component::OpticalChannel::State::LaserBiasCurrent::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::OpticalChannel::State::LaserBiasCurrent::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::OpticalChannel::State::LaserBiasCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-bias-current";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::LaserBiasCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LaserBiasCurrent' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::LaserBiasCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::LaserBiasCurrent::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::State::LaserBiasCurrent::set_value(const std::string & value_path, std::string value)
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

Components::Component::OpticalChannel::State::ChromaticDispersion::ChromaticDispersion()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "chromatic-dispersion"; yang_parent_name = "state";
}

Components::Component::OpticalChannel::State::ChromaticDispersion::~ChromaticDispersion()
{
}

bool Components::Component::OpticalChannel::State::ChromaticDispersion::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::OpticalChannel::State::ChromaticDispersion::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::OpticalChannel::State::ChromaticDispersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chromatic-dispersion";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::ChromaticDispersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChromaticDispersion' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::ChromaticDispersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::ChromaticDispersion::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::State::ChromaticDispersion::set_value(const std::string & value_path, std::string value)
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

Components::Component::OpticalChannel::State::PolarizationModeDispersion::PolarizationModeDispersion()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "polarization-mode-dispersion"; yang_parent_name = "state";
}

Components::Component::OpticalChannel::State::PolarizationModeDispersion::~PolarizationModeDispersion()
{
}

bool Components::Component::OpticalChannel::State::PolarizationModeDispersion::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::OpticalChannel::State::PolarizationModeDispersion::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::OpticalChannel::State::PolarizationModeDispersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polarization-mode-dispersion";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::PolarizationModeDispersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolarizationModeDispersion' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::PolarizationModeDispersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::PolarizationModeDispersion::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::State::PolarizationModeDispersion::set_value(const std::string & value_path, std::string value)
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

Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::SecondOrderPolarizationModeDispersion()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "second-order-polarization-mode-dispersion"; yang_parent_name = "state";
}

Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::~SecondOrderPolarizationModeDispersion()
{
}

bool Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second-order-polarization-mode-dispersion";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondOrderPolarizationModeDispersion' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion::set_value(const std::string & value_path, std::string value)
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

Components::Component::OpticalChannel::State::PolarizationDependentLoss::PolarizationDependentLoss()
    :
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{
    yang_name = "polarization-dependent-loss"; yang_parent_name = "state";
}

Components::Component::OpticalChannel::State::PolarizationDependentLoss::~PolarizationDependentLoss()
{
}

bool Components::Component::OpticalChannel::State::PolarizationDependentLoss::has_data() const
{
    return avg.is_set
	|| instant.is_set
	|| max.is_set
	|| min.is_set;
}

bool Components::Component::OpticalChannel::State::PolarizationDependentLoss::has_operation() const
{
    return is_set(operation)
	|| is_set(avg.operation)
	|| is_set(instant.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Components::Component::OpticalChannel::State::PolarizationDependentLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polarization-dependent-loss";

    return path_buffer.str();

}

EntityPath Components::Component::OpticalChannel::State::PolarizationDependentLoss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolarizationDependentLoss' in openconfig_platform cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Components::Component::OpticalChannel::State::PolarizationDependentLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Components::Component::OpticalChannel::State::PolarizationDependentLoss::get_children()
{
    return children;
}

void Components::Component::OpticalChannel::State::PolarizationDependentLoss::set_value(const std::string & value_path, std::string value)
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

const Enum::YLeaf Components::Component::Transceiver::State::PresentEnum::PRESENT {0, "PRESENT"};
const Enum::YLeaf Components::Component::Transceiver::State::PresentEnum::NOT_PRESENT {1, "NOT_PRESENT"};


}
}

