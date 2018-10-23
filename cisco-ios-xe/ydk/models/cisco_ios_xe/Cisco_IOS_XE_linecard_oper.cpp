
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_linecard_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_linecard_oper {

LinecardOperData::LinecardOperData()
    :
    linecard(this, {"name"})
{

    yang_name = "linecard-oper-data"; yang_parent_name = "Cisco-IOS-XE-linecard-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

LinecardOperData::~LinecardOperData()
{
}

bool LinecardOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<linecard.len(); index++)
    {
        if(linecard[index]->has_data())
            return true;
    }
    return false;
}

bool LinecardOperData::has_operation() const
{
    for (std::size_t index=0; index<linecard.len(); index++)
    {
        if(linecard[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LinecardOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-linecard-oper:linecard-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LinecardOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LinecardOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "linecard")
    {
        auto ent_ = std::make_shared<LinecardOperData::Linecard>();
        ent_->parent = this;
        linecard.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LinecardOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : linecard.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LinecardOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LinecardOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> LinecardOperData::clone_ptr() const
{
    return std::make_shared<LinecardOperData>();
}

std::string LinecardOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LinecardOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LinecardOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LinecardOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool LinecardOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "linecard")
        return true;
    return false;
}

LinecardOperData::Linecard::Linecard()
    :
    name{YType::str, "name"},
    power_admin_state{YType::boolean, "power-admin-state"}
{

    yang_name = "linecard"; yang_parent_name = "linecard-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

LinecardOperData::Linecard::~Linecard()
{
}

bool LinecardOperData::Linecard::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| power_admin_state.is_set;
}

bool LinecardOperData::Linecard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(power_admin_state.yfilter);
}

std::string LinecardOperData::Linecard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-linecard-oper:linecard-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string LinecardOperData::Linecard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linecard";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LinecardOperData::Linecard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (power_admin_state.is_set || is_set(power_admin_state.yfilter)) leaf_name_data.push_back(power_admin_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LinecardOperData::Linecard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LinecardOperData::Linecard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LinecardOperData::Linecard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-admin-state")
    {
        power_admin_state = value;
        power_admin_state.value_namespace = name_space;
        power_admin_state.value_namespace_prefix = name_space_prefix;
    }
}

void LinecardOperData::Linecard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "power-admin-state")
    {
        power_admin_state.yfilter = yfilter;
    }
}

bool LinecardOperData::Linecard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "power-admin-state")
        return true;
    return false;
}


}
}

