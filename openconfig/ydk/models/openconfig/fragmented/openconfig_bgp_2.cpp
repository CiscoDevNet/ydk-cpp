
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_2.hpp"

namespace ydk {
namespace openconfig_bgp {

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "use-multiple-paths";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_data() const
{
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_children()
{
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "use-multiple-paths";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_data() const
{
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_children()
{
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ebgp' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config>();
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
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_children()
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

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "config"; yang_parent_name = "ebgp";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_multiple_as.operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.operation)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_children()
{
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "state"; yang_parent_name = "ebgp";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_multiple_as.operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.operation)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_children()
{
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config>();
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
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_children()
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

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "config"; yang_parent_name = "ibgp";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_children()
{
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "state"; yang_parent_name = "ibgp";
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_children()
{
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}


}
}

