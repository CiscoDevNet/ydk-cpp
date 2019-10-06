
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_lacp.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_lacp {

Lacp::Lacp()
    :
    config(std::make_shared<Lacp::Config>())
    , state(std::make_shared<Lacp::State>())
    , interfaces(std::make_shared<Lacp::Interfaces>())
{
    config->parent = this;
    state->parent = this;
    interfaces->parent = this;

    yang_name = "lacp"; yang_parent_name = "openconfig-lacp"; is_top_level_class = true; has_list_ancestor = false; 
}

Lacp::~Lacp()
{
}

bool Lacp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Lacp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lacp:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Lacp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lacp::State>();
        }
        return state;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Lacp::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Lacp::clone_ptr() const
{
    return std::make_shared<Lacp>();
}

std::string Lacp::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Lacp::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Lacp::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lacp::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interfaces")
        return true;
    return false;
}

Lacp::Config::Config()
    :
    system_priority{YType::uint16, "system-priority"}
{

    yang_name = "config"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lacp::Config::~Config()
{
}

bool Lacp::Config::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set;
}

bool Lacp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter);
}

std::string Lacp::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lacp:lacp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lacp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lacp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool Lacp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority")
        return true;
    return false;
}

Lacp::State::State()
    :
    system_priority{YType::uint16, "system-priority"}
{

    yang_name = "state"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lacp::State::~State()
{
}

bool Lacp::State::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set;
}

bool Lacp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter);
}

std::string Lacp::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lacp:lacp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lacp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lacp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool Lacp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority")
        return true;
    return false;
}

Lacp::Interfaces::Interfaces()
    :
    interface(this, {"name"})
{

    yang_name = "interfaces"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lacp::Interfaces::~Interfaces()
{
}

bool Lacp::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Lacp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lacp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lacp:lacp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lacp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Lacp::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lacp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lacp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lacp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Lacp::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<Lacp::Interfaces::Interface::Config>())
    , state(std::make_shared<Lacp::Interfaces::Interface::State>())
    , members(std::make_shared<Lacp::Interfaces::Interface::Members>())
{
    config->parent = this;
    state->parent = this;
    members->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Lacp::Interfaces::Interface::~Interface()
{
}

bool Lacp::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool Lacp::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string Lacp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-lacp:lacp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Lacp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Lacp::Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lacp::Interfaces::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Lacp::Interfaces::Interface::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(members != nullptr)
    {
        _children["members"] = members;
    }

    return _children;
}

void Lacp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Lacp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "members" || name == "name")
        return true;
    return false;
}

Lacp::Interfaces::Interface::Config::Config()
    :
    name{YType::str, "name"},
    interval{YType::enumeration, "interval"},
    lacp_mode{YType::enumeration, "lacp-mode"},
    system_id_mac{YType::str, "system-id-mac"},
    system_priority{YType::uint16, "system-priority"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Lacp::Interfaces::Interface::Config::~Config()
{
}

bool Lacp::Interfaces::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| interval.is_set
	|| lacp_mode.is_set
	|| system_id_mac.is_set
	|| system_priority.is_set;
}

bool Lacp::Interfaces::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(lacp_mode.yfilter)
	|| ydk::is_set(system_id_mac.yfilter)
	|| ydk::is_set(system_priority.yfilter);
}

std::string Lacp::Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lacp_mode.is_set || is_set(lacp_mode.yfilter)) leaf_name_data.push_back(lacp_mode.get_name_leafdata());
    if (system_id_mac.is_set || is_set(system_id_mac.yfilter)) leaf_name_data.push_back(system_id_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lacp::Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-mode")
    {
        lacp_mode = value;
        lacp_mode.value_namespace = name_space;
        lacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id-mac")
    {
        system_id_mac = value;
        system_id_mac.value_namespace = name_space;
        system_id_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "lacp-mode")
    {
        lacp_mode.yfilter = yfilter;
    }
    if(value_path == "system-id-mac")
    {
        system_id_mac.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool Lacp::Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interval" || name == "lacp-mode" || name == "system-id-mac" || name == "system-priority")
        return true;
    return false;
}

Lacp::Interfaces::Interface::State::State()
    :
    name{YType::str, "name"},
    interval{YType::enumeration, "interval"},
    lacp_mode{YType::enumeration, "lacp-mode"},
    system_id_mac{YType::str, "system-id-mac"},
    system_priority{YType::uint16, "system-priority"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Lacp::Interfaces::Interface::State::~State()
{
}

bool Lacp::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| interval.is_set
	|| lacp_mode.is_set
	|| system_id_mac.is_set
	|| system_priority.is_set;
}

bool Lacp::Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(lacp_mode.yfilter)
	|| ydk::is_set(system_id_mac.yfilter)
	|| ydk::is_set(system_priority.yfilter);
}

std::string Lacp::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lacp_mode.is_set || is_set(lacp_mode.yfilter)) leaf_name_data.push_back(lacp_mode.get_name_leafdata());
    if (system_id_mac.is_set || is_set(system_id_mac.yfilter)) leaf_name_data.push_back(system_id_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lacp::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-mode")
    {
        lacp_mode = value;
        lacp_mode.value_namespace = name_space;
        lacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id-mac")
    {
        system_id_mac = value;
        system_id_mac.value_namespace = name_space;
        system_id_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "lacp-mode")
    {
        lacp_mode.yfilter = yfilter;
    }
    if(value_path == "system-id-mac")
    {
        system_id_mac.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool Lacp::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interval" || name == "lacp-mode" || name == "system-id-mac" || name == "system-priority")
        return true;
    return false;
}

Lacp::Interfaces::Interface::Members::Members()
    :
    member(this, {"interface"})
{

    yang_name = "members"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Lacp::Interfaces::Interface::Members::~Members()
{
}

bool Lacp::Interfaces::Interface::Members::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool Lacp::Interfaces::Interface::Members::has_operation() const
{
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lacp::Interfaces::Interface::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::Interface::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::Interface::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        auto ent_ = std::make_shared<Lacp::Interfaces::Interface::Members::Member>();
        ent_->parent = this;
        member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::Interface::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lacp::Interfaces::Interface::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lacp::Interfaces::Interface::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lacp::Interfaces::Interface::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

Lacp::Interfaces::Interface::Members::Member::Member()
    :
    interface{YType::str, "interface"}
        ,
    state(std::make_shared<Lacp::Interfaces::Interface::Members::Member::State>())
{
    state->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true; 
}

Lacp::Interfaces::Interface::Members::Member::~Member()
{
}

bool Lacp::Interfaces::Interface::Members::Member::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Lacp::Interfaces::Interface::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Lacp::Interfaces::Interface::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::Interface::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::Interface::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Lacp::Interfaces::Interface::Members::Member::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::Interface::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Lacp::Interfaces::Interface::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::Interfaces::Interface::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Lacp::Interfaces::Interface::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "interface")
        return true;
    return false;
}

Lacp::Interfaces::Interface::Members::Member::State::State()
    :
    interface{YType::str, "interface"},
    activity{YType::enumeration, "activity"},
    timeout{YType::enumeration, "timeout"},
    synchronization{YType::enumeration, "synchronization"},
    aggregatable{YType::boolean, "aggregatable"},
    collecting{YType::boolean, "collecting"},
    distributing{YType::boolean, "distributing"},
    system_id{YType::str, "system-id"},
    oper_key{YType::uint16, "oper-key"},
    partner_id{YType::str, "partner-id"},
    partner_key{YType::uint16, "partner-key"}
        ,
    counters(std::make_shared<Lacp::Interfaces::Interface::Members::Member::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

Lacp::Interfaces::Interface::Members::Member::State::~State()
{
}

bool Lacp::Interfaces::Interface::Members::Member::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| activity.is_set
	|| timeout.is_set
	|| synchronization.is_set
	|| aggregatable.is_set
	|| collecting.is_set
	|| distributing.is_set
	|| system_id.is_set
	|| oper_key.is_set
	|| partner_id.is_set
	|| partner_key.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Lacp::Interfaces::Interface::Members::Member::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(activity.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(aggregatable.yfilter)
	|| ydk::is_set(collecting.yfilter)
	|| ydk::is_set(distributing.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(oper_key.yfilter)
	|| ydk::is_set(partner_id.yfilter)
	|| ydk::is_set(partner_key.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Lacp::Interfaces::Interface::Members::Member::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::Interface::Members::Member::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (activity.is_set || is_set(activity.yfilter)) leaf_name_data.push_back(activity.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (aggregatable.is_set || is_set(aggregatable.yfilter)) leaf_name_data.push_back(aggregatable.get_name_leafdata());
    if (collecting.is_set || is_set(collecting.yfilter)) leaf_name_data.push_back(collecting.get_name_leafdata());
    if (distributing.is_set || is_set(distributing.yfilter)) leaf_name_data.push_back(distributing.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (oper_key.is_set || is_set(oper_key.yfilter)) leaf_name_data.push_back(oper_key.get_name_leafdata());
    if (partner_id.is_set || is_set(partner_id.yfilter)) leaf_name_data.push_back(partner_id.get_name_leafdata());
    if (partner_key.is_set || is_set(partner_key.yfilter)) leaf_name_data.push_back(partner_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::Interface::Members::Member::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Lacp::Interfaces::Interface::Members::Member::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::Interface::Members::Member::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void Lacp::Interfaces::Interface::Members::Member::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activity")
    {
        activity = value;
        activity.value_namespace = name_space;
        activity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregatable")
    {
        aggregatable = value;
        aggregatable.value_namespace = name_space;
        aggregatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collecting")
    {
        collecting = value;
        collecting.value_namespace = name_space;
        collecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributing")
    {
        distributing = value;
        distributing.value_namespace = name_space;
        distributing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-key")
    {
        oper_key = value;
        oper_key.value_namespace = name_space;
        oper_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-id")
    {
        partner_id = value;
        partner_id.value_namespace = name_space;
        partner_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-key")
    {
        partner_key = value;
        partner_key.value_namespace = name_space;
        partner_key.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::Interfaces::Interface::Members::Member::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "activity")
    {
        activity.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "aggregatable")
    {
        aggregatable.yfilter = yfilter;
    }
    if(value_path == "collecting")
    {
        collecting.yfilter = yfilter;
    }
    if(value_path == "distributing")
    {
        distributing.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "oper-key")
    {
        oper_key.yfilter = yfilter;
    }
    if(value_path == "partner-id")
    {
        partner_id.yfilter = yfilter;
    }
    if(value_path == "partner-key")
    {
        partner_key.yfilter = yfilter;
    }
}

bool Lacp::Interfaces::Interface::Members::Member::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "interface" || name == "activity" || name == "timeout" || name == "synchronization" || name == "aggregatable" || name == "collecting" || name == "distributing" || name == "system-id" || name == "oper-key" || name == "partner-id" || name == "partner-key")
        return true;
    return false;
}

Lacp::Interfaces::Interface::Members::Member::State::Counters::Counters()
    :
    lacp_in_pkts{YType::uint64, "lacp-in-pkts"},
    lacp_out_pkts{YType::uint64, "lacp-out-pkts"},
    lacp_rx_errors{YType::uint64, "lacp-rx-errors"},
    lacp_tx_errors{YType::uint64, "lacp-tx-errors"},
    lacp_unknown_errors{YType::uint64, "lacp-unknown-errors"},
    lacp_errors{YType::uint64, "lacp-errors"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Lacp::Interfaces::Interface::Members::Member::State::Counters::~Counters()
{
}

bool Lacp::Interfaces::Interface::Members::Member::State::Counters::has_data() const
{
    if (is_presence_container) return true;
    return lacp_in_pkts.is_set
	|| lacp_out_pkts.is_set
	|| lacp_rx_errors.is_set
	|| lacp_tx_errors.is_set
	|| lacp_unknown_errors.is_set
	|| lacp_errors.is_set;
}

bool Lacp::Interfaces::Interface::Members::Member::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacp_in_pkts.yfilter)
	|| ydk::is_set(lacp_out_pkts.yfilter)
	|| ydk::is_set(lacp_rx_errors.yfilter)
	|| ydk::is_set(lacp_tx_errors.yfilter)
	|| ydk::is_set(lacp_unknown_errors.yfilter)
	|| ydk::is_set(lacp_errors.yfilter);
}

std::string Lacp::Interfaces::Interface::Members::Member::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::Interfaces::Interface::Members::Member::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacp_in_pkts.is_set || is_set(lacp_in_pkts.yfilter)) leaf_name_data.push_back(lacp_in_pkts.get_name_leafdata());
    if (lacp_out_pkts.is_set || is_set(lacp_out_pkts.yfilter)) leaf_name_data.push_back(lacp_out_pkts.get_name_leafdata());
    if (lacp_rx_errors.is_set || is_set(lacp_rx_errors.yfilter)) leaf_name_data.push_back(lacp_rx_errors.get_name_leafdata());
    if (lacp_tx_errors.is_set || is_set(lacp_tx_errors.yfilter)) leaf_name_data.push_back(lacp_tx_errors.get_name_leafdata());
    if (lacp_unknown_errors.is_set || is_set(lacp_unknown_errors.yfilter)) leaf_name_data.push_back(lacp_unknown_errors.get_name_leafdata());
    if (lacp_errors.is_set || is_set(lacp_errors.yfilter)) leaf_name_data.push_back(lacp_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::Interfaces::Interface::Members::Member::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::Interfaces::Interface::Members::Member::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lacp::Interfaces::Interface::Members::Member::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacp-in-pkts")
    {
        lacp_in_pkts = value;
        lacp_in_pkts.value_namespace = name_space;
        lacp_in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-out-pkts")
    {
        lacp_out_pkts = value;
        lacp_out_pkts.value_namespace = name_space;
        lacp_out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-rx-errors")
    {
        lacp_rx_errors = value;
        lacp_rx_errors.value_namespace = name_space;
        lacp_rx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-tx-errors")
    {
        lacp_tx_errors = value;
        lacp_tx_errors.value_namespace = name_space;
        lacp_tx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-unknown-errors")
    {
        lacp_unknown_errors = value;
        lacp_unknown_errors.value_namespace = name_space;
        lacp_unknown_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-errors")
    {
        lacp_errors = value;
        lacp_errors.value_namespace = name_space;
        lacp_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::Interfaces::Interface::Members::Member::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacp-in-pkts")
    {
        lacp_in_pkts.yfilter = yfilter;
    }
    if(value_path == "lacp-out-pkts")
    {
        lacp_out_pkts.yfilter = yfilter;
    }
    if(value_path == "lacp-rx-errors")
    {
        lacp_rx_errors.yfilter = yfilter;
    }
    if(value_path == "lacp-tx-errors")
    {
        lacp_tx_errors.yfilter = yfilter;
    }
    if(value_path == "lacp-unknown-errors")
    {
        lacp_unknown_errors.yfilter = yfilter;
    }
    if(value_path == "lacp-errors")
    {
        lacp_errors.yfilter = yfilter;
    }
}

bool Lacp::Interfaces::Interface::Members::Member::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-in-pkts" || name == "lacp-out-pkts" || name == "lacp-rx-errors" || name == "lacp-tx-errors" || name == "lacp-unknown-errors" || name == "lacp-errors")
        return true;
    return false;
}

const Enum::YLeaf LacpTimeoutType::LONG {0, "LONG"};
const Enum::YLeaf LacpTimeoutType::SHORT {1, "SHORT"};

const Enum::YLeaf LacpPeriodType::FAST {0, "FAST"};
const Enum::YLeaf LacpPeriodType::SLOW {1, "SLOW"};

const Enum::YLeaf LacpActivityType::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf LacpActivityType::PASSIVE {1, "PASSIVE"};

const Enum::YLeaf LacpSynchronizationType::IN_SYNC {0, "IN_SYNC"};
const Enum::YLeaf LacpSynchronizationType::OUT_SYNC {1, "OUT_SYNC"};


}
}

