
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
    :
    entity_(this, {"name"})
{

    yang_name = "inventory-configurations"; yang_parent_name = "Cisco-IOS-XR-invmgr-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

InventoryConfigurations::~InventoryConfigurations()
{
}

bool InventoryConfigurations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entity_.len(); index++)
    {
        if(entity_[index]->has_data())
            return true;
    }
    return false;
}

bool InventoryConfigurations::has_operation() const
{
    for (std::size_t index=0; index<entity_.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > InventoryConfigurations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InventoryConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entity")
    {
        auto ent_ = std::make_shared<InventoryConfigurations::Entity>();
        ent_->parent = this;
        entity_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InventoryConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entity_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InventoryConfigurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InventoryConfigurations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InventoryConfigurations::clone_ptr() const
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

InventoryConfigurations::Entity::Entity()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"}
{

    yang_name = "entity"; yang_parent_name = "inventory-configurations"; is_top_level_class = false; has_list_ancestor = false; 
}

InventoryConfigurations::Entity::~Entity()
{
}

bool InventoryConfigurations::Entity::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| name_xr.is_set;
}

bool InventoryConfigurations::Entity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(name_xr.yfilter);
}

std::string InventoryConfigurations::Entity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-invmgr-cfg:inventory-configurations/" << get_segment_path();
    return path_buffer.str();
}

std::string InventoryConfigurations::Entity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InventoryConfigurations::Entity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.yfilter)) leaf_name_data.push_back(name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InventoryConfigurations::Entity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InventoryConfigurations::Entity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InventoryConfigurations::Entity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InventoryConfigurations::Entity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InventoryConfigurations::Entity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "name-xr")
        return true;
    return false;
}


}
}

