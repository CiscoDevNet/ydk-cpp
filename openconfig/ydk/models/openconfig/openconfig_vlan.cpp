
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_vlan.hpp"

namespace ydk {
namespace openconfig_vlan {

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

const EntityPath Vlans::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vlans::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlans::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vlans::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Vlans::clone_ptr() const
{
    return std::make_shared<Vlans>();
}

std::string Vlans::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Vlans::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Vlans::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

Vlans::Vlan::Vlan()
    :
    vlan_id{YType::str, "vlan-id"}
    	,
    config(std::make_shared<Vlans::Vlan::Config>())
	,state(std::make_shared<Vlans::Vlan::State>())
{
    config->parent = this;

    state->parent = this;

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
    path_buffer << "vlan" <<"[vlan-id='" <<vlan_id <<"']";

    return path_buffer.str();

}

const EntityPath Vlans::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-vlan:vlans/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vlans::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Vlans::Vlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Vlans::Vlan::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlans::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
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

const EntityPath Vlans::Vlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_vlan cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vlans::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlans::Vlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath Vlans::Vlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_vlan cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Vlans::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vlans::Vlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const Enum::YLeaf VlanModeTypeEnum::ACCESS {0, "ACCESS"};
const Enum::YLeaf VlanModeTypeEnum::TRUNK {1, "TRUNK"};

const Enum::YLeaf Vlans::Vlan::Config::StatusEnum::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf Vlans::Vlan::Config::StatusEnum::SUSPENDED {1, "SUSPENDED"};

const Enum::YLeaf Vlans::Vlan::State::StatusEnum::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf Vlans::Vlan::State::StatusEnum::SUSPENDED {1, "SUSPENDED"};


}
}

