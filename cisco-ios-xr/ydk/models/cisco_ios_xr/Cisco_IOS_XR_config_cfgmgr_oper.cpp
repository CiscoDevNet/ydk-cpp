
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_cfgmgr_oper {

Config::Config()
    :
    global(std::make_shared<Config::Global>())
{
    global->parent = this;

    yang_name = "config"; yang_parent_name = "Cisco-IOS-XR-config-cfgmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Config::~Config()
{
}

bool Config::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Config::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Config::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
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
    if(name == "global")
        return true;
    return false;
}

Config::Global::Global()
    :
    validation(std::make_shared<Config::Global::Validation>())
{
    validation->parent = this;

    yang_name = "global"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Global::~Global()
{
}

bool Config::Global::has_data() const
{
    if (is_presence_container) return true;
    return (validation !=  nullptr && validation->has_data());
}

bool Config::Global::has_operation() const
{
    return is_set(yfilter)
	|| (validation !=  nullptr && validation->has_operation());
}

std::string Config::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-config-valid-ccv-oper:validation")
    {
        if(validation == nullptr)
        {
            validation = std::make_shared<Config::Global::Validation>();
        }
        return validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validation != nullptr)
    {
        _children["Cisco-IOS-XR-config-valid-ccv-oper:validation"] = validation;
    }

    return _children;
}

void Config::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validation")
        return true;
    return false;
}

Config::Global::Validation::Validation()
    :
    unsupported_configs(std::make_shared<Config::Global::Validation::UnsupportedConfigs>())
    , persistent_failures(std::make_shared<Config::Global::Validation::PersistentFailures>())
{
    unsupported_configs->parent = this;
    persistent_failures->parent = this;

    yang_name = "validation"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Global::Validation::~Validation()
{
}

bool Config::Global::Validation::has_data() const
{
    if (is_presence_container) return true;
    return (unsupported_configs !=  nullptr && unsupported_configs->has_data())
	|| (persistent_failures !=  nullptr && persistent_failures->has_data());
}

bool Config::Global::Validation::has_operation() const
{
    return is_set(yfilter)
	|| (unsupported_configs !=  nullptr && unsupported_configs->has_operation())
	|| (persistent_failures !=  nullptr && persistent_failures->has_operation());
}

std::string Config::Global::Validation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Global::Validation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-valid-ccv-oper:validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::Validation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::Validation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unsupported-configs")
    {
        if(unsupported_configs == nullptr)
        {
            unsupported_configs = std::make_shared<Config::Global::Validation::UnsupportedConfigs>();
        }
        return unsupported_configs;
    }

    if(child_yang_name == "persistent-failures")
    {
        if(persistent_failures == nullptr)
        {
            persistent_failures = std::make_shared<Config::Global::Validation::PersistentFailures>();
        }
        return persistent_failures;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::Validation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unsupported_configs != nullptr)
    {
        _children["unsupported-configs"] = unsupported_configs;
    }

    if(persistent_failures != nullptr)
    {
        _children["persistent-failures"] = persistent_failures;
    }

    return _children;
}

void Config::Global::Validation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Global::Validation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Global::Validation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unsupported-configs" || name == "persistent-failures")
        return true;
    return false;
}

Config::Global::Validation::UnsupportedConfigs::UnsupportedConfigs()
    :
    unsupported_config(this, {"xpath"})
{

    yang_name = "unsupported-configs"; yang_parent_name = "validation"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Global::Validation::UnsupportedConfigs::~UnsupportedConfigs()
{
}

bool Config::Global::Validation::UnsupportedConfigs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unsupported_config.len(); index++)
    {
        if(unsupported_config[index]->has_data())
            return true;
    }
    return false;
}

bool Config::Global::Validation::UnsupportedConfigs::has_operation() const
{
    for (std::size_t index=0; index<unsupported_config.len(); index++)
    {
        if(unsupported_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Config::Global::Validation::UnsupportedConfigs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config/global/Cisco-IOS-XR-config-valid-ccv-oper:validation/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Global::Validation::UnsupportedConfigs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unsupported-configs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::Validation::UnsupportedConfigs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::Validation::UnsupportedConfigs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unsupported-config")
    {
        auto ent_ = std::make_shared<Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig>();
        ent_->parent = this;
        unsupported_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::Validation::UnsupportedConfigs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unsupported_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Config::Global::Validation::UnsupportedConfigs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Global::Validation::UnsupportedConfigs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Global::Validation::UnsupportedConfigs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unsupported-config")
        return true;
    return false;
}

Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::UnsupportedConfig()
    :
    xpath{YType::str, "xpath"},
    group_name{YType::str, "group-name"}
        ,
    failure(this, {})
{

    yang_name = "unsupported-config"; yang_parent_name = "unsupported-configs"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::~UnsupportedConfig()
{
}

bool Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<failure.len(); index++)
    {
        if(failure[index]->has_data())
            return true;
    }
    return xpath.is_set
	|| group_name.is_set;
}

bool Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::has_operation() const
{
    for (std::size_t index=0; index<failure.len(); index++)
    {
        if(failure[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xpath.yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config/global/Cisco-IOS-XR-config-valid-ccv-oper:validation/unsupported-configs/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unsupported-config";
    ADD_KEY_TOKEN(xpath, "xpath");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xpath.is_set || is_set(xpath.yfilter)) leaf_name_data.push_back(xpath.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        auto ent_ = std::make_shared<Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure>();
        ent_->parent = this;
        failure.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : failure.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xpath")
    {
        xpath = value;
        xpath.value_namespace = name_space;
        xpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xpath")
    {
        xpath.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "xpath" || name == "group-name")
        return true;
    return false;
}

Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::Failure()
    :
    error_app_tag{YType::str, "error-app-tag"},
    error_message{YType::str, "error-message"},
    error_severity{YType::str, "error-severity"}
{

    yang_name = "failure"; yang_parent_name = "unsupported-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::~Failure()
{
}

bool Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::has_data() const
{
    if (is_presence_container) return true;
    return error_app_tag.is_set
	|| error_message.is_set
	|| error_severity.is_set;
}

bool Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_app_tag.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(error_severity.yfilter);
}

std::string Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_app_tag.is_set || is_set(error_app_tag.yfilter)) leaf_name_data.push_back(error_app_tag.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (error_severity.is_set || is_set(error_severity.yfilter)) leaf_name_data.push_back(error_severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-app-tag")
    {
        error_app_tag = value;
        error_app_tag.value_namespace = name_space;
        error_app_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-severity")
    {
        error_severity = value;
        error_severity.value_namespace = name_space;
        error_severity.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-app-tag")
    {
        error_app_tag.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "error-severity")
    {
        error_severity.yfilter = yfilter;
    }
}

bool Config::Global::Validation::UnsupportedConfigs::UnsupportedConfig::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-app-tag" || name == "error-message" || name == "error-severity")
        return true;
    return false;
}

Config::Global::Validation::PersistentFailures::PersistentFailures()
    :
    persistent_failure(this, {"xpath"})
{

    yang_name = "persistent-failures"; yang_parent_name = "validation"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Global::Validation::PersistentFailures::~PersistentFailures()
{
}

bool Config::Global::Validation::PersistentFailures::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<persistent_failure.len(); index++)
    {
        if(persistent_failure[index]->has_data())
            return true;
    }
    return false;
}

bool Config::Global::Validation::PersistentFailures::has_operation() const
{
    for (std::size_t index=0; index<persistent_failure.len(); index++)
    {
        if(persistent_failure[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Config::Global::Validation::PersistentFailures::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config/global/Cisco-IOS-XR-config-valid-ccv-oper:validation/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Global::Validation::PersistentFailures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent-failures";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::Validation::PersistentFailures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::Validation::PersistentFailures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent-failure")
    {
        auto ent_ = std::make_shared<Config::Global::Validation::PersistentFailures::PersistentFailure>();
        ent_->parent = this;
        persistent_failure.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::Validation::PersistentFailures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : persistent_failure.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Config::Global::Validation::PersistentFailures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Global::Validation::PersistentFailures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Global::Validation::PersistentFailures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persistent-failure")
        return true;
    return false;
}

Config::Global::Validation::PersistentFailures::PersistentFailure::PersistentFailure()
    :
    xpath{YType::str, "xpath"},
    group_name{YType::str, "group-name"}
        ,
    failure(this, {})
{

    yang_name = "persistent-failure"; yang_parent_name = "persistent-failures"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Global::Validation::PersistentFailures::PersistentFailure::~PersistentFailure()
{
}

bool Config::Global::Validation::PersistentFailures::PersistentFailure::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<failure.len(); index++)
    {
        if(failure[index]->has_data())
            return true;
    }
    return xpath.is_set
	|| group_name.is_set;
}

bool Config::Global::Validation::PersistentFailures::PersistentFailure::has_operation() const
{
    for (std::size_t index=0; index<failure.len(); index++)
    {
        if(failure[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xpath.yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Config::Global::Validation::PersistentFailures::PersistentFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config/global/Cisco-IOS-XR-config-valid-ccv-oper:validation/persistent-failures/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Global::Validation::PersistentFailures::PersistentFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent-failure";
    ADD_KEY_TOKEN(xpath, "xpath");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::Validation::PersistentFailures::PersistentFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xpath.is_set || is_set(xpath.yfilter)) leaf_name_data.push_back(xpath.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::Validation::PersistentFailures::PersistentFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        auto ent_ = std::make_shared<Config::Global::Validation::PersistentFailures::PersistentFailure::Failure>();
        ent_->parent = this;
        failure.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::Validation::PersistentFailures::PersistentFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : failure.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Config::Global::Validation::PersistentFailures::PersistentFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xpath")
    {
        xpath = value;
        xpath.value_namespace = name_space;
        xpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Global::Validation::PersistentFailures::PersistentFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xpath")
    {
        xpath.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Config::Global::Validation::PersistentFailures::PersistentFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "xpath" || name == "group-name")
        return true;
    return false;
}

Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::Failure()
    :
    error_app_tag{YType::str, "error-app-tag"},
    error_message{YType::str, "error-message"},
    error_severity{YType::str, "error-severity"}
{

    yang_name = "failure"; yang_parent_name = "persistent-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::~Failure()
{
}

bool Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::has_data() const
{
    if (is_presence_container) return true;
    return error_app_tag.is_set
	|| error_message.is_set
	|| error_severity.is_set;
}

bool Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_app_tag.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(error_severity.yfilter);
}

std::string Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_app_tag.is_set || is_set(error_app_tag.yfilter)) leaf_name_data.push_back(error_app_tag.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (error_severity.is_set || is_set(error_severity.yfilter)) leaf_name_data.push_back(error_severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-app-tag")
    {
        error_app_tag = value;
        error_app_tag.value_namespace = name_space;
        error_app_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-severity")
    {
        error_severity = value;
        error_severity.value_namespace = name_space;
        error_severity.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-app-tag")
    {
        error_app_tag.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "error-severity")
    {
        error_severity.yfilter = yfilter;
    }
}

bool Config::Global::Validation::PersistentFailures::PersistentFailure::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-app-tag" || name == "error-message" || name == "error-severity")
        return true;
    return false;
}


}
}

