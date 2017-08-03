
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_invmgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_invmgr_cfg {

InventoryConfigurations::InventoryConfigurations()
{
    yang_name = "inventory-configurations"; yang_parent_name = "Cisco-IOS-XR-invmgr-cfg";
}

InventoryConfigurations::~InventoryConfigurations()
{
}

bool InventoryConfigurations::has_data() const
{
    for (std::size_t index=0; index<entity_.size(); index++)
    {
        if(entity_[index]->has_data())
            return true;
    }
    return false;
}

bool InventoryConfigurations::has_operation() const
{
    for (std::size_t index=0; index<entity_.size(); index++)
    {
        if(entity_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InventoryConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-invmgr-cfg:inventory-configurations";

    return path_buffer.str();

}

const EntityPath InventoryConfigurations::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InventoryConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entity")
    {
        for(auto const & c : entity_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InventoryConfigurations::Entity_>();
        c->parent = this;
        entity_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InventoryConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entity_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InventoryConfigurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InventoryConfigurations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InventoryConfigurations::clone_ptr() const
{
    return std::make_shared<InventoryConfigurations>();
}

std::string InventoryConfigurations::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InventoryConfigurations::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InventoryConfigurations::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InventoryConfigurations::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InventoryConfigurations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entity")
        return true;
    return false;
}

InventoryConfigurations::Entity_::Entity_()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"}
{
    yang_name = "entity"; yang_parent_name = "inventory-configurations";
}

InventoryConfigurations::Entity_::~Entity_()
{
}

bool InventoryConfigurations::Entity_::has_data() const
{
    return name.is_set
	|| name_xr.is_set;
}

bool InventoryConfigurations::Entity_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(name_xr.yfilter);
}

std::string InventoryConfigurations::Entity_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath InventoryConfigurations::Entity_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-invmgr-cfg:inventory-configurations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.yfilter)) leaf_name_data.push_back(name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InventoryConfigurations::Entity_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InventoryConfigurations::Entity_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InventoryConfigurations::Entity_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
        name_xr.value_namespace = name_space;
        name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void InventoryConfigurations::Entity_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "name-xr")
    {
        name_xr.yfilter = yfilter;
    }
}

bool InventoryConfigurations::Entity_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "name-xr")
        return true;
    return false;
}


}
}

