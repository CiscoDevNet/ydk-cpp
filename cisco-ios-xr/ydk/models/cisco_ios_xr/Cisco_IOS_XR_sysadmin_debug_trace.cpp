
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_debug_trace.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_debug_trace {

Config::Config()
    :
    debug(std::make_shared<Config::Debug>())
{
    debug->parent = this;

    yang_name = "config"; yang_parent_name = "Cisco-IOS-XR-sysadmin-debug-trace"; is_top_level_class = true; has_list_ancestor = false; 
}

Config::~Config()
{
}

bool Config::has_data() const
{
    if (is_presence_container) return true;
    return (debug !=  nullptr && debug->has_data());
}

bool Config::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation());
}

std::string Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-debug-trace:config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Config::Debug>();
        }
        return debug;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(debug != nullptr)
    {
        _children["debug"] = debug;
    }

    return _children;
}

void Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Config::clone_ptr() const
{
    return std::make_shared<Config>();
}

std::string Config::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Config::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Config::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Config::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug")
        return true;
    return false;
}

Config::Debug::Debug()
    :
    trace(this, {"connection_type"})
{

    yang_name = "debug"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Debug::~Debug()
{
}

bool Config::Debug::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Config::Debug::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Config::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-debug-trace:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Config::Debug::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Config::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Config::Debug::Trace::Trace()
    :
    connection_type{YType::str, "connection_type"},
    enable{YType::empty, "enable"},
    disable{YType::empty, "disable"}
{

    yang_name = "trace"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Debug::Trace::~Trace()
{
}

bool Config::Debug::Trace::has_data() const
{
    if (is_presence_container) return true;
    return connection_type.is_set
	|| enable.is_set
	|| disable.is_set;
}

bool Config::Debug::Trace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Config::Debug::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-debug-trace:config/debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Debug::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(connection_type, "connection_type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Debug::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_type.is_set || is_set(connection_type.yfilter)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Debug::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Debug::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Config::Debug::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection_type")
    {
        connection_type = value;
        connection_type.value_namespace = name_space;
        connection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Debug::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection_type")
    {
        connection_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Config::Debug::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection_type" || name == "enable" || name == "disable")
        return true;
    return false;
}


}
}

