
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_acl.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_acl {

ACLTYPE::ACLTYPE()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:ACL_TYPE")
{

}

ACLTYPE::~ACLTYPE()
{
}

FORWARDINGACTION::FORWARDINGACTION()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:FORWARDING_ACTION")
{

}

FORWARDINGACTION::~FORWARDINGACTION()
{
}

LOGACTION::LOGACTION()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:LOG_ACTION")
{

}

LOGACTION::~LOGACTION()
{
}

ACLCOUNTERCAPABILITY::ACLCOUNTERCAPABILITY()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:ACL_COUNTER_CAPABILITY")
{

}

ACLCOUNTERCAPABILITY::~ACLCOUNTERCAPABILITY()
{
}

Acl::Acl()
    :
    config(std::make_shared<Acl::Config>())
    , state(std::make_shared<Acl::State>())
    , acl_sets(std::make_shared<Acl::AclSets>())
    , interfaces(std::make_shared<Acl::Interfaces>())
{
    config->parent = this;
    state->parent = this;
    acl_sets->parent = this;
    interfaces->parent = this;

    yang_name = "acl"; yang_parent_name = "openconfig-acl"; is_top_level_class = true; has_list_ancestor = false; 
}

Acl::~Acl()
{
}

bool Acl::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (acl_sets !=  nullptr && acl_sets->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Acl::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (acl_sets !=  nullptr && acl_sets->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-acl:acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::State>();
        }
        return state;
    }

    if(child_yang_name == "acl-sets")
    {
        if(acl_sets == nullptr)
        {
            acl_sets = std::make_shared<Acl::AclSets>();
        }
        return acl_sets;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Acl::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::get_children() const
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

    if(acl_sets != nullptr)
    {
        _children["acl-sets"] = acl_sets;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Acl::clone_ptr() const
{
    return std::make_shared<Acl>();
}

std::string Acl::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Acl::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Acl::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Acl::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "acl-sets" || name == "interfaces")
        return true;
    return false;
}

Acl::Config::Config()
{

    yang_name = "config"; yang_parent_name = "acl"; is_top_level_class = false; has_list_ancestor = false; 
}

Acl::Config::~Config()
{
}

bool Acl::Config::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Acl::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string Acl::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-acl:acl/" << get_segment_path();
    return path_buffer.str();
}

std::string Acl::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Acl::State::State()
    :
    counter_capability{YType::identityref, "counter-capability"}
{

    yang_name = "state"; yang_parent_name = "acl"; is_top_level_class = false; has_list_ancestor = false; 
}

Acl::State::~State()
{
}

bool Acl::State::has_data() const
{
    if (is_presence_container) return true;
    return counter_capability.is_set;
}

bool Acl::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_capability.yfilter);
}

std::string Acl::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-acl:acl/" << get_segment_path();
    return path_buffer.str();
}

std::string Acl::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_capability.is_set || is_set(counter_capability.yfilter)) leaf_name_data.push_back(counter_capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-capability")
    {
        counter_capability = value;
        counter_capability.value_namespace = name_space;
        counter_capability.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-capability")
    {
        counter_capability.yfilter = yfilter;
    }
}

bool Acl::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-capability")
        return true;
    return false;
}

Acl::AclSets::AclSets()
    :
    acl_set(this, {"name", "type"})
{

    yang_name = "acl-sets"; yang_parent_name = "acl"; is_top_level_class = false; has_list_ancestor = false; 
}

Acl::AclSets::~AclSets()
{
}

bool Acl::AclSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_set.len(); index++)
    {
        if(acl_set[index]->has_data())
            return true;
    }
    return false;
}

bool Acl::AclSets::has_operation() const
{
    for (std::size_t index=0; index<acl_set.len(); index++)
    {
        if(acl_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Acl::AclSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-acl:acl/" << get_segment_path();
    return path_buffer.str();
}

std::string Acl::AclSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-set")
    {
        auto ent_ = std::make_shared<Acl::AclSets::AclSet>();
        ent_->parent = this;
        acl_set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Acl::AclSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-set")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclSet()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"}
        ,
    config(std::make_shared<Acl::AclSets::AclSet::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::State>())
    , acl_entries(std::make_shared<Acl::AclSets::AclSet::AclEntries>())
{
    config->parent = this;
    state->parent = this;
    acl_entries->parent = this;

    yang_name = "acl-set"; yang_parent_name = "acl-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

Acl::AclSets::AclSet::~AclSet()
{
}

bool Acl::AclSets::AclSet::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (acl_entries !=  nullptr && acl_entries->has_data());
}

bool Acl::AclSets::AclSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (acl_entries !=  nullptr && acl_entries->has_operation());
}

std::string Acl::AclSets::AclSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-acl:acl/acl-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string Acl::AclSets::AclSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-set";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::State>();
        }
        return state;
    }

    if(child_yang_name == "acl-entries")
    {
        if(acl_entries == nullptr)
        {
            acl_entries = std::make_shared<Acl::AclSets::AclSet::AclEntries>();
        }
        return acl_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::get_children() const
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

    if(acl_entries != nullptr)
    {
        _children["acl-entries"] = acl_entries;
    }

    return _children;
}

void Acl::AclSets::AclSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "acl-entries" || name == "name" || name == "type")
        return true;
    return false;
}

Acl::AclSets::AclSet::Config::Config()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    description{YType::str, "description"}
{

    yang_name = "config"; yang_parent_name = "acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::Config::~Config()
{
}

bool Acl::AclSets::AclSet::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| description.is_set;
}

bool Acl::AclSets::AclSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Acl::AclSets::AclSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "description")
        return true;
    return false;
}

Acl::AclSets::AclSet::State::State()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    description{YType::str, "description"}
{

    yang_name = "state"; yang_parent_name = "acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::State::~State()
{
}

bool Acl::AclSets::AclSet::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| description.is_set;
}

bool Acl::AclSets::AclSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Acl::AclSets::AclSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "description")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntries()
    :
    acl_entry(this, {"sequence_id"})
{

    yang_name = "acl-entries"; yang_parent_name = "acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::~AclEntries()
{
}

bool Acl::AclSets::AclSet::AclEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_entry.len(); index++)
    {
        if(acl_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Acl::AclSets::AclSet::AclEntries::has_operation() const
{
    for (std::size_t index=0; index<acl_entry.len(); index++)
    {
        if(acl_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entry")
    {
        auto ent_ = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry>();
        ent_->parent = this;
        acl_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entry")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::AclEntry()
    :
    sequence_id{YType::str, "sequence-id"}
        ,
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::State>())
    , l2(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::L2>())
    , ipv4(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4>())
    , ipv6(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6>())
    , transport(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Transport>())
    , input_interface(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface>())
    , actions(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Actions>())
{
    config->parent = this;
    state->parent = this;
    l2->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;
    input_interface->parent = this;
    actions->parent = this;

    yang_name = "acl-entry"; yang_parent_name = "acl-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::~AclEntry()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::has_data() const
{
    if (is_presence_container) return true;
    return sequence_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (l2 !=  nullptr && l2->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (input_interface !=  nullptr && input_interface->has_data())
	|| (actions !=  nullptr && actions->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (l2 !=  nullptr && l2->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (input_interface !=  nullptr && input_interface->has_operation())
	|| (actions !=  nullptr && actions->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entry";
    ADD_KEY_TOKEN(sequence_id, "sequence-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::State>();
        }
        return state;
    }

    if(child_yang_name == "l2")
    {
        if(l2 == nullptr)
        {
            l2 = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::L2>();
        }
        return l2;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "input-interface")
    {
        if(input_interface == nullptr)
        {
            input_interface = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface>();
        }
        return input_interface;
    }

    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Actions>();
        }
        return actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::get_children() const
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

    if(l2 != nullptr)
    {
        _children["l2"] = l2;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(input_interface != nullptr)
    {
        _children["input-interface"] = input_interface;
    }

    if(actions != nullptr)
    {
        _children["actions"] = actions;
    }

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "l2" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "input-interface" || name == "actions" || name == "sequence-id")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Config::Config()
    :
    sequence_id{YType::uint32, "sequence-id"},
    description{YType::str, "description"}
{

    yang_name = "config"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Config::has_data() const
{
    if (is_presence_container) return true;
    return sequence_id.is_set
	|| description.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-id" || name == "description")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::State::State()
    :
    sequence_id{YType::uint32, "sequence-id"},
    description{YType::str, "description"},
    matched_packets{YType::uint64, "matched-packets"},
    matched_octets{YType::uint64, "matched-octets"}
{

    yang_name = "state"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::State::has_data() const
{
    if (is_presence_container) return true;
    return sequence_id.is_set
	|| description.is_set
	|| matched_packets.is_set
	|| matched_octets.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(matched_packets.yfilter)
	|| ydk::is_set(matched_octets.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (matched_packets.is_set || is_set(matched_packets.yfilter)) leaf_name_data.push_back(matched_packets.get_name_leafdata());
    if (matched_octets.is_set || is_set(matched_octets.yfilter)) leaf_name_data.push_back(matched_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matched-packets")
    {
        matched_packets = value;
        matched_packets.value_namespace = name_space;
        matched_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matched-octets")
    {
        matched_octets = value;
        matched_octets.value_namespace = name_space;
        matched_octets.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "matched-packets")
    {
        matched_packets.yfilter = yfilter;
    }
    if(value_path == "matched-octets")
    {
        matched_octets.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-id" || name == "description" || name == "matched-packets" || name == "matched-octets")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::L2::L2()
    :
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "l2"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::L2::~L2()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::L2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::L2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::L2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::L2::get_children() const
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

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::L2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::L2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::Config()
    :
    source_mac{YType::str, "source-mac"},
    source_mac_mask{YType::str, "source-mac-mask"},
    destination_mac{YType::str, "destination-mac"},
    destination_mac_mask{YType::str, "destination-mac-mask"},
    ethertype{YType::str, "ethertype"}
{

    yang_name = "config"; yang_parent_name = "l2"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::has_data() const
{
    if (is_presence_container) return true;
    return source_mac.is_set
	|| source_mac_mask.is_set
	|| destination_mac.is_set
	|| destination_mac_mask.is_set
	|| ethertype.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_mac.yfilter)
	|| ydk::is_set(source_mac_mask.yfilter)
	|| ydk::is_set(destination_mac.yfilter)
	|| ydk::is_set(destination_mac_mask.yfilter)
	|| ydk::is_set(ethertype.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_mac.is_set || is_set(source_mac.yfilter)) leaf_name_data.push_back(source_mac.get_name_leafdata());
    if (source_mac_mask.is_set || is_set(source_mac_mask.yfilter)) leaf_name_data.push_back(source_mac_mask.get_name_leafdata());
    if (destination_mac.is_set || is_set(destination_mac.yfilter)) leaf_name_data.push_back(destination_mac.get_name_leafdata());
    if (destination_mac_mask.is_set || is_set(destination_mac_mask.yfilter)) leaf_name_data.push_back(destination_mac_mask.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-mac")
    {
        source_mac = value;
        source_mac.value_namespace = name_space;
        source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-mask")
    {
        source_mac_mask = value;
        source_mac_mask.value_namespace = name_space;
        source_mac_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac")
    {
        destination_mac = value;
        destination_mac.value_namespace = name_space;
        destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac-mask")
    {
        destination_mac_mask = value;
        destination_mac_mask.value_namespace = name_space;
        destination_mac_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-mac")
    {
        source_mac.yfilter = yfilter;
    }
    if(value_path == "source-mac-mask")
    {
        source_mac_mask.yfilter = yfilter;
    }
    if(value_path == "destination-mac")
    {
        destination_mac.yfilter = yfilter;
    }
    if(value_path == "destination-mac-mask")
    {
        destination_mac_mask.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-mac" || name == "source-mac-mask" || name == "destination-mac" || name == "destination-mac-mask" || name == "ethertype")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::State()
    :
    source_mac{YType::str, "source-mac"},
    source_mac_mask{YType::str, "source-mac-mask"},
    destination_mac{YType::str, "destination-mac"},
    destination_mac_mask{YType::str, "destination-mac-mask"},
    ethertype{YType::str, "ethertype"}
{

    yang_name = "state"; yang_parent_name = "l2"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::has_data() const
{
    if (is_presence_container) return true;
    return source_mac.is_set
	|| source_mac_mask.is_set
	|| destination_mac.is_set
	|| destination_mac_mask.is_set
	|| ethertype.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_mac.yfilter)
	|| ydk::is_set(source_mac_mask.yfilter)
	|| ydk::is_set(destination_mac.yfilter)
	|| ydk::is_set(destination_mac_mask.yfilter)
	|| ydk::is_set(ethertype.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_mac.is_set || is_set(source_mac.yfilter)) leaf_name_data.push_back(source_mac.get_name_leafdata());
    if (source_mac_mask.is_set || is_set(source_mac_mask.yfilter)) leaf_name_data.push_back(source_mac_mask.get_name_leafdata());
    if (destination_mac.is_set || is_set(destination_mac.yfilter)) leaf_name_data.push_back(destination_mac.get_name_leafdata());
    if (destination_mac_mask.is_set || is_set(destination_mac_mask.yfilter)) leaf_name_data.push_back(destination_mac_mask.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-mac")
    {
        source_mac = value;
        source_mac.value_namespace = name_space;
        source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-mask")
    {
        source_mac_mask = value;
        source_mac_mask.value_namespace = name_space;
        source_mac_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac")
    {
        destination_mac = value;
        destination_mac.value_namespace = name_space;
        destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac-mask")
    {
        destination_mac_mask = value;
        destination_mac_mask.value_namespace = name_space;
        destination_mac_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-mac")
    {
        source_mac.yfilter = yfilter;
    }
    if(value_path == "source-mac-mask")
    {
        source_mac_mask.yfilter = yfilter;
    }
    if(value_path == "destination-mac")
    {
        destination_mac.yfilter = yfilter;
    }
    if(value_path == "destination-mac-mask")
    {
        destination_mac_mask.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-mac" || name == "source-mac-mask" || name == "destination-mac" || name == "destination-mac-mask" || name == "ethertype")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Ipv4()
    :
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ipv4"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::~Ipv4()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::get_children() const
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

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::Config()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    dscp{YType::uint8, "dscp"},
    protocol{YType::str, "protocol"},
    hop_limit{YType::uint8, "hop-limit"}
{

    yang_name = "config"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| dscp.is_set
	|| protocol.is_set
	|| hop_limit.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(hop_limit.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "dscp" || name == "protocol" || name == "hop-limit")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::State()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    dscp{YType::uint8, "dscp"},
    protocol{YType::str, "protocol"},
    hop_limit{YType::uint8, "hop-limit"}
{

    yang_name = "state"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| dscp.is_set
	|| protocol.is_set
	|| hop_limit.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(hop_limit.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "dscp" || name == "protocol" || name == "hop-limit")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Ipv6()
    :
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ipv6"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::~Ipv6()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::get_children() const
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

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::Config()
    :
    source_address{YType::str, "source-address"},
    source_flow_label{YType::uint32, "source-flow-label"},
    destination_address{YType::str, "destination-address"},
    destination_flow_label{YType::uint32, "destination-flow-label"},
    dscp{YType::uint8, "dscp"},
    protocol{YType::str, "protocol"},
    hop_limit{YType::uint8, "hop-limit"}
{

    yang_name = "config"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_flow_label.is_set
	|| destination_address.is_set
	|| destination_flow_label.is_set
	|| dscp.is_set
	|| protocol.is_set
	|| hop_limit.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_flow_label.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_flow_label.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(hop_limit.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_flow_label.is_set || is_set(source_flow_label.yfilter)) leaf_name_data.push_back(source_flow_label.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_flow_label.is_set || is_set(destination_flow_label.yfilter)) leaf_name_data.push_back(destination_flow_label.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-flow-label")
    {
        source_flow_label = value;
        source_flow_label.value_namespace = name_space;
        source_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-flow-label")
    {
        destination_flow_label = value;
        destination_flow_label.value_namespace = name_space;
        destination_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-flow-label")
    {
        source_flow_label.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-flow-label")
    {
        destination_flow_label.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-flow-label" || name == "destination-address" || name == "destination-flow-label" || name == "dscp" || name == "protocol" || name == "hop-limit")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::State()
    :
    source_address{YType::str, "source-address"},
    source_flow_label{YType::uint32, "source-flow-label"},
    destination_address{YType::str, "destination-address"},
    destination_flow_label{YType::uint32, "destination-flow-label"},
    dscp{YType::uint8, "dscp"},
    protocol{YType::str, "protocol"},
    hop_limit{YType::uint8, "hop-limit"}
{

    yang_name = "state"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_flow_label.is_set
	|| destination_address.is_set
	|| destination_flow_label.is_set
	|| dscp.is_set
	|| protocol.is_set
	|| hop_limit.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_flow_label.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_flow_label.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(hop_limit.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_flow_label.is_set || is_set(source_flow_label.yfilter)) leaf_name_data.push_back(source_flow_label.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_flow_label.is_set || is_set(destination_flow_label.yfilter)) leaf_name_data.push_back(destination_flow_label.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-flow-label")
    {
        source_flow_label = value;
        source_flow_label.value_namespace = name_space;
        source_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-flow-label")
    {
        destination_flow_label = value;
        destination_flow_label.value_namespace = name_space;
        destination_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-flow-label")
    {
        source_flow_label.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-flow-label")
    {
        destination_flow_label.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-flow-label" || name == "destination-address" || name == "destination-flow-label" || name == "dscp" || name == "protocol" || name == "hop-limit")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Transport()
    :
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "transport"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::~Transport()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::get_children() const
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

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::Config()
    :
    source_port{YType::str, "source-port"},
    destination_port{YType::str, "destination-port"},
    tcp_flags{YType::identityref, "tcp-flags"}
{

    yang_name = "config"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tcp_flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_port.is_set
	|| destination_port.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::has_operation() const
{
    for (auto const & leaf : tcp_flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(tcp_flags.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    auto tcp_flags_name_datas = tcp_flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tcp_flags_name_datas.begin(), tcp_flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-flags")
    {
        Identity identity{name_space, name_space_prefix, value};
        tcp_flags.append(identity);
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "tcp-flags")
    {
        tcp_flags.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-port" || name == "destination-port" || name == "tcp-flags")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::State()
    :
    source_port{YType::str, "source-port"},
    destination_port{YType::str, "destination-port"},
    tcp_flags{YType::identityref, "tcp-flags"}
{

    yang_name = "state"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tcp_flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_port.is_set
	|| destination_port.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::has_operation() const
{
    for (auto const & leaf : tcp_flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(tcp_flags.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    auto tcp_flags_name_datas = tcp_flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tcp_flags_name_datas.begin(), tcp_flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-flags")
    {
        Identity identity{name_space, name_space_prefix, value};
        tcp_flags.append(identity);
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "tcp-flags")
    {
        tcp_flags.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-port" || name == "destination-port" || name == "tcp-flags")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InputInterface()
    :
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State>())
    , interface_ref(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "input-interface"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::~InputInterface()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::get_children() const
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

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::Config()
{

    yang_name = "config"; yang_parent_name = "input-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::State()
{

    yang_name = "state"; yang_parent_name = "input-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::has_operation() const
{
    return is_set(yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "input-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::~InterfaceRef()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::get_children() const
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

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Actions()
    :
    config(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config>())
    , state(std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "actions"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::~Actions()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::get_children() const
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

    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::Config()
    :
    forwarding_action{YType::identityref, "forwarding-action"},
    log_action{YType::identityref, "log-action"}
{

    yang_name = "config"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::~Config()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::has_data() const
{
    if (is_presence_container) return true;
    return forwarding_action.is_set
	|| log_action.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_action.yfilter)
	|| ydk::is_set(log_action.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_action.is_set || is_set(forwarding_action.yfilter)) leaf_name_data.push_back(forwarding_action.get_name_leafdata());
    if (log_action.is_set || is_set(log_action.yfilter)) leaf_name_data.push_back(log_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-action")
    {
        forwarding_action = value;
        forwarding_action.value_namespace = name_space;
        forwarding_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-action")
    {
        log_action = value;
        log_action.value_namespace = name_space;
        log_action.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-action")
    {
        forwarding_action.yfilter = yfilter;
    }
    if(value_path == "log-action")
    {
        log_action.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-action" || name == "log-action")
        return true;
    return false;
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::State()
    :
    forwarding_action{YType::identityref, "forwarding-action"},
    log_action{YType::identityref, "log-action"}
{

    yang_name = "state"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::~State()
{
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::has_data() const
{
    if (is_presence_container) return true;
    return forwarding_action.is_set
	|| log_action.is_set;
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_action.yfilter)
	|| ydk::is_set(log_action.yfilter);
}

std::string Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_action.is_set || is_set(forwarding_action.yfilter)) leaf_name_data.push_back(forwarding_action.get_name_leafdata());
    if (log_action.is_set || is_set(log_action.yfilter)) leaf_name_data.push_back(log_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-action")
    {
        forwarding_action = value;
        forwarding_action.value_namespace = name_space;
        forwarding_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-action")
    {
        log_action = value;
        log_action.value_namespace = name_space;
        log_action.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-action")
    {
        forwarding_action.yfilter = yfilter;
    }
    if(value_path == "log-action")
    {
        log_action.yfilter = yfilter;
    }
}

bool Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-action" || name == "log-action")
        return true;
    return false;
}

Acl::Interfaces::Interfaces()
    :
    interface(this, {"id"})
{

    yang_name = "interfaces"; yang_parent_name = "acl"; is_top_level_class = false; has_list_ancestor = false; 
}

Acl::Interfaces::~Interfaces()
{
}

bool Acl::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Acl::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Acl::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-acl:acl/" << get_segment_path();
    return path_buffer.str();
}

std::string Acl::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Acl::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::get_children() const
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

void Acl::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Acl::Interfaces::Interface::Interface()
    :
    id{YType::str, "id"}
        ,
    config(std::make_shared<Acl::Interfaces::Interface::Config>())
    , state(std::make_shared<Acl::Interfaces::Interface::State>())
    , interface_ref(std::make_shared<Acl::Interfaces::Interface::InterfaceRef>())
    , ingress_acl_sets(std::make_shared<Acl::Interfaces::Interface::IngressAclSets>())
    , egress_acl_sets(std::make_shared<Acl::Interfaces::Interface::EgressAclSets>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;
    ingress_acl_sets->parent = this;
    egress_acl_sets->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Acl::Interfaces::Interface::~Interface()
{
}

bool Acl::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (ingress_acl_sets !=  nullptr && ingress_acl_sets->has_data())
	|| (egress_acl_sets !=  nullptr && egress_acl_sets->has_data());
}

bool Acl::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (ingress_acl_sets !=  nullptr && ingress_acl_sets->has_operation())
	|| (egress_acl_sets !=  nullptr && egress_acl_sets->has_operation());
}

std::string Acl::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-acl:acl/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Acl::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::Interfaces::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Acl::Interfaces::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "ingress-acl-sets")
    {
        if(ingress_acl_sets == nullptr)
        {
            ingress_acl_sets = std::make_shared<Acl::Interfaces::Interface::IngressAclSets>();
        }
        return ingress_acl_sets;
    }

    if(child_yang_name == "egress-acl-sets")
    {
        if(egress_acl_sets == nullptr)
        {
            egress_acl_sets = std::make_shared<Acl::Interfaces::Interface::EgressAclSets>();
        }
        return egress_acl_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::get_children() const
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

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    if(ingress_acl_sets != nullptr)
    {
        _children["ingress-acl-sets"] = ingress_acl_sets;
    }

    if(egress_acl_sets != nullptr)
    {
        _children["egress-acl-sets"] = egress_acl_sets;
    }

    return _children;
}

void Acl::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "ingress-acl-sets" || name == "egress-acl-sets" || name == "id")
        return true;
    return false;
}

Acl::Interfaces::Interface::Config::Config()
    :
    id{YType::str, "id"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::Config::~Config()
{
}

bool Acl::Interfaces::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Acl::Interfaces::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Acl::Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Acl::Interfaces::Interface::State::State()
    :
    id{YType::str, "id"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::State::~State()
{
}

bool Acl::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Acl::Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Acl::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Acl::Interfaces::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Acl::Interfaces::Interface::InterfaceRef::Config>())
    , state(std::make_shared<Acl::Interfaces::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::InterfaceRef::~InterfaceRef()
{
}

bool Acl::Interfaces::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Acl::Interfaces::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::Interfaces::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::Interfaces::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::Interfaces::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::InterfaceRef::get_children() const
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

    return _children;
}

void Acl::Interfaces::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::Interfaces::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::Interfaces::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Acl::Interfaces::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::InterfaceRef::Config::~Config()
{
}

bool Acl::Interfaces::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Acl::Interfaces::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Acl::Interfaces::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Acl::Interfaces::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::InterfaceRef::State::~State()
{
}

bool Acl::Interfaces::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Acl::Interfaces::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Acl::Interfaces::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSets()
    :
    ingress_acl_set(this, {"set_name", "type"})
{

    yang_name = "ingress-acl-sets"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::IngressAclSets::~IngressAclSets()
{
}

bool Acl::Interfaces::Interface::IngressAclSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ingress_acl_set.len(); index++)
    {
        if(ingress_acl_set[index]->has_data())
            return true;
    }
    return false;
}

bool Acl::Interfaces::Interface::IngressAclSets::has_operation() const
{
    for (std::size_t index=0; index<ingress_acl_set.len(); index++)
    {
        if(ingress_acl_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Acl::Interfaces::Interface::IngressAclSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-acl-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::IngressAclSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::IngressAclSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-acl-set")
    {
        auto ent_ = std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet>();
        ent_->parent = this;
        ingress_acl_set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::IngressAclSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ingress_acl_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Acl::Interfaces::Interface::IngressAclSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::Interfaces::Interface::IngressAclSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::Interfaces::Interface::IngressAclSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-acl-set")
        return true;
    return false;
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::IngressAclSet()
    :
    set_name{YType::str, "set-name"},
    type{YType::identityref, "type"}
        ,
    config(std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config>())
    , state(std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State>())
    , acl_entries(std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries>())
{
    config->parent = this;
    state->parent = this;
    acl_entries->parent = this;

    yang_name = "ingress-acl-set"; yang_parent_name = "ingress-acl-sets"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::~IngressAclSet()
{
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| type.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (acl_entries !=  nullptr && acl_entries->has_data());
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (acl_entries !=  nullptr && acl_entries->has_operation());
}

std::string Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-acl-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State>();
        }
        return state;
    }

    if(child_yang_name == "acl-entries")
    {
        if(acl_entries == nullptr)
        {
            acl_entries = std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries>();
        }
        return acl_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::get_children() const
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

    if(acl_entries != nullptr)
    {
        _children["acl-entries"] = acl_entries;
    }

    return _children;
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "acl-entries" || name == "set-name" || name == "type")
        return true;
    return false;
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::Config()
    :
    set_name{YType::str, "set-name"},
    type{YType::identityref, "type"}
{

    yang_name = "config"; yang_parent_name = "ingress-acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::~Config()
{
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| type.is_set;
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "type")
        return true;
    return false;
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::State()
    :
    set_name{YType::str, "set-name"},
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "ingress-acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::~State()
{
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| type.is_set;
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "type")
        return true;
    return false;
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntries()
    :
    acl_entry(this, {"sequence_id"})
{

    yang_name = "acl-entries"; yang_parent_name = "ingress-acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::~AclEntries()
{
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_entry.len(); index++)
    {
        if(acl_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::has_operation() const
{
    for (std::size_t index=0; index<acl_entry.len(); index++)
    {
        if(acl_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entry")
    {
        auto ent_ = std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry>();
        ent_->parent = this;
        acl_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entry")
        return true;
    return false;
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::AclEntry()
    :
    sequence_id{YType::str, "sequence-id"}
        ,
    state(std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State>())
{
    state->parent = this;

    yang_name = "acl-entry"; yang_parent_name = "acl-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::~AclEntry()
{
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::has_data() const
{
    if (is_presence_container) return true;
    return sequence_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entry";
    ADD_KEY_TOKEN(sequence_id, "sequence-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "sequence-id")
        return true;
    return false;
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::State()
    :
    sequence_id{YType::str, "sequence-id"},
    matched_packets{YType::uint64, "matched-packets"},
    matched_octets{YType::uint64, "matched-octets"}
{

    yang_name = "state"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::~State()
{
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::has_data() const
{
    if (is_presence_container) return true;
    return sequence_id.is_set
	|| matched_packets.is_set
	|| matched_octets.is_set;
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| ydk::is_set(matched_packets.yfilter)
	|| ydk::is_set(matched_octets.yfilter);
}

std::string Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());
    if (matched_packets.is_set || is_set(matched_packets.yfilter)) leaf_name_data.push_back(matched_packets.get_name_leafdata());
    if (matched_octets.is_set || is_set(matched_octets.yfilter)) leaf_name_data.push_back(matched_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matched-packets")
    {
        matched_packets = value;
        matched_packets.value_namespace = name_space;
        matched_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matched-octets")
    {
        matched_octets = value;
        matched_octets.value_namespace = name_space;
        matched_octets.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
    if(value_path == "matched-packets")
    {
        matched_packets.yfilter = yfilter;
    }
    if(value_path == "matched-octets")
    {
        matched_octets.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-id" || name == "matched-packets" || name == "matched-octets")
        return true;
    return false;
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSets()
    :
    egress_acl_set(this, {"set_name", "type"})
{

    yang_name = "egress-acl-sets"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::EgressAclSets::~EgressAclSets()
{
}

bool Acl::Interfaces::Interface::EgressAclSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<egress_acl_set.len(); index++)
    {
        if(egress_acl_set[index]->has_data())
            return true;
    }
    return false;
}

bool Acl::Interfaces::Interface::EgressAclSets::has_operation() const
{
    for (std::size_t index=0; index<egress_acl_set.len(); index++)
    {
        if(egress_acl_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Acl::Interfaces::Interface::EgressAclSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-acl-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::EgressAclSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::EgressAclSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-acl-set")
    {
        auto ent_ = std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet>();
        ent_->parent = this;
        egress_acl_set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::EgressAclSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : egress_acl_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Acl::Interfaces::Interface::EgressAclSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::Interfaces::Interface::EgressAclSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::Interfaces::Interface::EgressAclSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-acl-set")
        return true;
    return false;
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::EgressAclSet()
    :
    set_name{YType::str, "set-name"},
    type{YType::identityref, "type"}
        ,
    config(std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config>())
    , state(std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State>())
    , acl_entries(std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries>())
{
    config->parent = this;
    state->parent = this;
    acl_entries->parent = this;

    yang_name = "egress-acl-set"; yang_parent_name = "egress-acl-sets"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::~EgressAclSet()
{
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| type.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (acl_entries !=  nullptr && acl_entries->has_data());
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (acl_entries !=  nullptr && acl_entries->has_operation());
}

std::string Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-acl-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State>();
        }
        return state;
    }

    if(child_yang_name == "acl-entries")
    {
        if(acl_entries == nullptr)
        {
            acl_entries = std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries>();
        }
        return acl_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::get_children() const
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

    if(acl_entries != nullptr)
    {
        _children["acl-entries"] = acl_entries;
    }

    return _children;
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "acl-entries" || name == "set-name" || name == "type")
        return true;
    return false;
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::Config()
    :
    set_name{YType::str, "set-name"},
    type{YType::identityref, "type"}
{

    yang_name = "config"; yang_parent_name = "egress-acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::~Config()
{
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| type.is_set;
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "type")
        return true;
    return false;
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::State()
    :
    set_name{YType::str, "set-name"},
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "egress-acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::~State()
{
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| type.is_set;
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "type")
        return true;
    return false;
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntries()
    :
    acl_entry(this, {"sequence_id"})
{

    yang_name = "acl-entries"; yang_parent_name = "egress-acl-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::~AclEntries()
{
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_entry.len(); index++)
    {
        if(acl_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::has_operation() const
{
    for (std::size_t index=0; index<acl_entry.len(); index++)
    {
        if(acl_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entry")
    {
        auto ent_ = std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry>();
        ent_->parent = this;
        acl_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entry")
        return true;
    return false;
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::AclEntry()
    :
    sequence_id{YType::str, "sequence-id"}
        ,
    state(std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State>())
{
    state->parent = this;

    yang_name = "acl-entry"; yang_parent_name = "acl-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::~AclEntry()
{
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::has_data() const
{
    if (is_presence_container) return true;
    return sequence_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entry";
    ADD_KEY_TOKEN(sequence_id, "sequence-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "sequence-id")
        return true;
    return false;
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::State()
    :
    sequence_id{YType::str, "sequence-id"},
    matched_packets{YType::uint64, "matched-packets"},
    matched_octets{YType::uint64, "matched-octets"}
{

    yang_name = "state"; yang_parent_name = "acl-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::~State()
{
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::has_data() const
{
    if (is_presence_container) return true;
    return sequence_id.is_set
	|| matched_packets.is_set
	|| matched_octets.is_set;
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| ydk::is_set(matched_packets.yfilter)
	|| ydk::is_set(matched_octets.yfilter);
}

std::string Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());
    if (matched_packets.is_set || is_set(matched_packets.yfilter)) leaf_name_data.push_back(matched_packets.get_name_leafdata());
    if (matched_octets.is_set || is_set(matched_octets.yfilter)) leaf_name_data.push_back(matched_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matched-packets")
    {
        matched_packets = value;
        matched_packets.value_namespace = name_space;
        matched_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matched-octets")
    {
        matched_octets = value;
        matched_octets.value_namespace = name_space;
        matched_octets.value_namespace_prefix = name_space_prefix;
    }
}

void Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
    if(value_path == "matched-packets")
    {
        matched_packets.yfilter = yfilter;
    }
    if(value_path == "matched-octets")
    {
        matched_octets.yfilter = yfilter;
    }
}

bool Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-id" || name == "matched-packets" || name == "matched-octets")
        return true;
    return false;
}

ACLIPV4::ACLIPV4()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:ACL_IPV4")
{

}

ACLIPV4::~ACLIPV4()
{
}

ACLIPV6::ACLIPV6()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:ACL_IPV6")
{

}

ACLIPV6::~ACLIPV6()
{
}

ACLL2::ACLL2()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:ACL_L2")
{

}

ACLL2::~ACLL2()
{
}

ACLMIXED::ACLMIXED()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:ACL_MIXED")
{

}

ACLMIXED::~ACLMIXED()
{
}

ACCEPT::ACCEPT()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:ACCEPT")
{

}

ACCEPT::~ACCEPT()
{
}

DROP::DROP()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:DROP")
{

}

DROP::~DROP()
{
}

REJECT::REJECT()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:REJECT")
{

}

REJECT::~REJECT()
{
}

LOGSYSLOG::LOGSYSLOG()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:LOG_SYSLOG")
{

}

LOGSYSLOG::~LOGSYSLOG()
{
}

LOGNONE::LOGNONE()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:LOG_NONE")
{

}

LOGNONE::~LOGNONE()
{
}

INTERFACEONLY::INTERFACEONLY()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:INTERFACE_ONLY")
{

}

INTERFACEONLY::~INTERFACEONLY()
{
}

AGGREGATEONLY::AGGREGATEONLY()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:AGGREGATE_ONLY")
{

}

AGGREGATEONLY::~AGGREGATEONLY()
{
}

INTERFACEAGGREGATE::INTERFACEAGGREGATE()
     : Identity("http://openconfig.net/yang/acl", "openconfig-acl", "openconfig-acl:INTERFACE_AGGREGATE")
{

}

INTERFACEAGGREGATE::~INTERFACEAGGREGATE()
{
}


}
}

