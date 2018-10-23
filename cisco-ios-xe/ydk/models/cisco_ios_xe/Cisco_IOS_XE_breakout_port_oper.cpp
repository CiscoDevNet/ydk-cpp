
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_breakout_port_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_breakout_port_oper {

BreakoutPortOperData::BreakoutPortOperData()
    :
    port_breakout(this, {"name"})
{

    yang_name = "breakout-port-oper-data"; yang_parent_name = "Cisco-IOS-XE-breakout-port-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

BreakoutPortOperData::~BreakoutPortOperData()
{
}

bool BreakoutPortOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_breakout.len(); index++)
    {
        if(port_breakout[index]->has_data())
            return true;
    }
    return false;
}

bool BreakoutPortOperData::has_operation() const
{
    for (std::size_t index=0; index<port_breakout.len(); index++)
    {
        if(port_breakout[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BreakoutPortOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-breakout-port-oper:breakout-port-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BreakoutPortOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BreakoutPortOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-breakout")
    {
        auto ent_ = std::make_shared<BreakoutPortOperData::PortBreakout>();
        ent_->parent = this;
        port_breakout.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BreakoutPortOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_breakout.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BreakoutPortOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BreakoutPortOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BreakoutPortOperData::clone_ptr() const
{
    return std::make_shared<BreakoutPortOperData>();
}

std::string BreakoutPortOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BreakoutPortOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BreakoutPortOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BreakoutPortOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BreakoutPortOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-breakout")
        return true;
    return false;
}

BreakoutPortOperData::PortBreakout::PortBreakout()
    :
    name{YType::str, "name"},
    number{YType::int16, "number"},
    speed{YType::enumeration, "speed"}
{

    yang_name = "port-breakout"; yang_parent_name = "breakout-port-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

BreakoutPortOperData::PortBreakout::~PortBreakout()
{
}

bool BreakoutPortOperData::PortBreakout::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| number.is_set
	|| speed.is_set;
}

bool BreakoutPortOperData::PortBreakout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string BreakoutPortOperData::PortBreakout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-breakout-port-oper:breakout-port-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BreakoutPortOperData::PortBreakout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-breakout";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BreakoutPortOperData::PortBreakout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BreakoutPortOperData::PortBreakout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BreakoutPortOperData::PortBreakout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BreakoutPortOperData::PortBreakout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void BreakoutPortOperData::PortBreakout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool BreakoutPortOperData::PortBreakout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "number" || name == "speed")
        return true;
    return false;
}

const Enum::YLeaf BcChannelSpeed::Y_10gb {0, "10gb"};
const Enum::YLeaf BcChannelSpeed::unknown {1, "unknown"};


}
}

