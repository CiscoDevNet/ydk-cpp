
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_vlan.hpp"

namespace ydk {
namespace openconfig_vlan {

Vlans::Vlan::Config::Config()
    :
    	name{YType::str, "name"},
	 status{YType::enumeration, "status"},
	 vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "config"; yang_parent_name = "vlan";
}

Vlans::Vlan::Config::~Config()
{
}

bool Vlans::Vlan::Config::has_data() const
{
    return name.is_set
	|| status.is_set
	|| vlan_id.is_set;
}

bool Vlans::Vlan::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(status.operation)
	|| is_set(vlan_id.operation);
}

std::string Vlans::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Vlans::Vlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlans::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlans::Vlan::Config::get_children()
{
    return children;
}

void Vlans::Vlan::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Vlans::Vlan::State::State()
    :
    	member_ports{YType::str, "member-ports"},
	 name{YType::str, "name"},
	 status{YType::enumeration, "status"},
	 vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "state"; yang_parent_name = "vlan";
}

Vlans::Vlan::State::~State()
{
}

bool Vlans::Vlan::State::has_data() const
{
    for (auto const & leaf : member_ports.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| status.is_set
	|| vlan_id.is_set;
}

bool Vlans::Vlan::State::has_operation() const
{
    for (auto const & leaf : member_ports.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(member_ports.operation)
	|| is_set(name.operation)
	|| is_set(status.operation)
	|| is_set(vlan_id.operation);
}

std::string Vlans::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Vlans::Vlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    auto member_ports_name_datas = member_ports.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_ports_name_datas.begin(), member_ports_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlans::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlans::Vlan::State::get_children()
{
    return children;
}

void Vlans::Vlan::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-ports")
    {
        member_ports.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Vlans::Vlan::Vlan()
    :
    	vlan_id{YType::str, "vlan-id"}
    	,
    config(std::make_unique<Vlans::Vlan::Config>())
	,state(std::make_unique<Vlans::Vlan::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "vlan"; yang_parent_name = "vlans";
}

Vlans::Vlan::~Vlan()
{
}

bool Vlans::Vlan::has_data() const
{
    return vlan_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Vlans::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Vlans::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[vlan-id='" <<vlan_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Vlans::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-vlan:vlans/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlans::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<Vlans::Vlan::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<Vlans::Vlan::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlans::Vlan::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void Vlans::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Vlans::Vlans()
{
    yang_name = "vlans"; yang_parent_name = "openconfig-vlan";
}

Vlans::~Vlans()
{
}

bool Vlans::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Vlans::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vlans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:vlans";

    return path_buffer.str();

}

EntityPath Vlans::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlans::Vlan>();
        c->parent = this;
        vlan.push_back(std::move(c));
        children[segment_path] = vlan.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlans::get_children()
{
    for (auto const & c : vlan)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlans::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Vlans::clone_ptr()
{
    return std::make_unique<Vlans>();
}

const Enum::YLeaf VlanModeTypeEnum::ACCESS {0, "ACCESS"};
const Enum::YLeaf VlanModeTypeEnum::TRUNK {1, "TRUNK"};

const Enum::YLeaf Vlans::Vlan::Config::StatusEnum::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf Vlans::Vlan::Config::StatusEnum::SUSPENDED {1, "SUSPENDED"};

const Enum::YLeaf Vlans::Vlan::State::StatusEnum::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf Vlans::Vlan::State::StatusEnum::SUSPENDED {1, "SUSPENDED"};


}
}

