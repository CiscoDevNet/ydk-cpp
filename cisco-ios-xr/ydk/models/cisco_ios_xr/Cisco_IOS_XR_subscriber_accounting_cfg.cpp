
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_accounting_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_accounting_cfg {

SubscriberAccounting::SubscriberAccounting()
    :
    prepaid_configurations(std::make_shared<SubscriberAccounting::PrepaidConfigurations>())
{
    prepaid_configurations->parent = this;

    yang_name = "subscriber-accounting"; yang_parent_name = "Cisco-IOS-XR-subscriber-accounting-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberAccounting::~SubscriberAccounting()
{
}

bool SubscriberAccounting::has_data() const
{
    if (is_presence_container) return true;
    return (prepaid_configurations !=  nullptr && prepaid_configurations->has_data());
}

bool SubscriberAccounting::has_operation() const
{
    return is_set(yfilter)
	|| (prepaid_configurations !=  nullptr && prepaid_configurations->has_operation());
}

std::string SubscriberAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:subscriber-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepaid-configurations")
    {
        if(prepaid_configurations == nullptr)
        {
            prepaid_configurations = std::make_shared<SubscriberAccounting::PrepaidConfigurations>();
        }
        return prepaid_configurations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prepaid_configurations != nullptr)
    {
        _children["prepaid-configurations"] = prepaid_configurations;
    }

    return _children;
}

void SubscriberAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SubscriberAccounting::clone_ptr() const
{
    return std::make_shared<SubscriberAccounting>();
}

std::string SubscriberAccounting::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberAccounting::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberAccounting::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberAccounting::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepaid-configurations")
        return true;
    return false;
}

SubscriberAccounting::PrepaidConfigurations::PrepaidConfigurations()
    :
    prepaid_configuration(this, {"prepaid_config_name"})
{

    yang_name = "prepaid-configurations"; yang_parent_name = "subscriber-accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberAccounting::PrepaidConfigurations::~PrepaidConfigurations()
{
}

bool SubscriberAccounting::PrepaidConfigurations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prepaid_configuration.len(); index++)
    {
        if(prepaid_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::PrepaidConfigurations::has_operation() const
{
    for (std::size_t index=0; index<prepaid_configuration.len(); index++)
    {
        if(prepaid_configuration[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberAccounting::PrepaidConfigurations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:subscriber-accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberAccounting::PrepaidConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-configurations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::PrepaidConfigurations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberAccounting::PrepaidConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepaid-configuration")
    {
        auto ent_ = std::make_shared<SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration>();
        ent_->parent = this;
        prepaid_configuration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberAccounting::PrepaidConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prepaid_configuration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberAccounting::PrepaidConfigurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberAccounting::PrepaidConfigurations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberAccounting::PrepaidConfigurations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepaid-configuration")
        return true;
    return false;
}

SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::PrepaidConfiguration()
    :
    prepaid_config_name{YType::str, "prepaid-config-name"},
    password{YType::str, "password"},
    volume_threshold{YType::uint32, "volume-threshold"},
    accounting_method_list{YType::str, "accounting-method-list"},
    time_hold{YType::uint32, "time-hold"},
    author_method_list{YType::str, "author-method-list"},
    traffic_direction{YType::str, "traffic-direction"},
    time_threshold{YType::uint32, "time-threshold"},
    time_valid{YType::uint32, "time-valid"}
{

    yang_name = "prepaid-configuration"; yang_parent_name = "prepaid-configurations"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::~PrepaidConfiguration()
{
}

bool SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return prepaid_config_name.is_set
	|| password.is_set
	|| volume_threshold.is_set
	|| accounting_method_list.is_set
	|| time_hold.is_set
	|| author_method_list.is_set
	|| traffic_direction.is_set
	|| time_threshold.is_set
	|| time_valid.is_set;
}

bool SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prepaid_config_name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(volume_threshold.yfilter)
	|| ydk::is_set(accounting_method_list.yfilter)
	|| ydk::is_set(time_hold.yfilter)
	|| ydk::is_set(author_method_list.yfilter)
	|| ydk::is_set(traffic_direction.yfilter)
	|| ydk::is_set(time_threshold.yfilter)
	|| ydk::is_set(time_valid.yfilter);
}

std::string SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:subscriber-accounting/prepaid-configurations/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-configuration";
    ADD_KEY_TOKEN(prepaid_config_name, "prepaid-config-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_config_name.is_set || is_set(prepaid_config_name.yfilter)) leaf_name_data.push_back(prepaid_config_name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (volume_threshold.is_set || is_set(volume_threshold.yfilter)) leaf_name_data.push_back(volume_threshold.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.yfilter)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (time_hold.is_set || is_set(time_hold.yfilter)) leaf_name_data.push_back(time_hold.get_name_leafdata());
    if (author_method_list.is_set || is_set(author_method_list.yfilter)) leaf_name_data.push_back(author_method_list.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.yfilter)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());
    if (time_threshold.is_set || is_set(time_threshold.yfilter)) leaf_name_data.push_back(time_threshold.get_name_leafdata());
    if (time_valid.is_set || is_set(time_valid.yfilter)) leaf_name_data.push_back(time_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prepaid-config-name")
    {
        prepaid_config_name = value;
        prepaid_config_name.value_namespace = name_space;
        prepaid_config_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volume-threshold")
    {
        volume_threshold = value;
        volume_threshold.value_namespace = name_space;
        volume_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
        accounting_method_list.value_namespace = name_space;
        accounting_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-hold")
    {
        time_hold = value;
        time_hold.value_namespace = name_space;
        time_hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-method-list")
    {
        author_method_list = value;
        author_method_list.value_namespace = name_space;
        author_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
        traffic_direction.value_namespace = name_space;
        traffic_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-threshold")
    {
        time_threshold = value;
        time_threshold.value_namespace = name_space;
        time_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-valid")
    {
        time_valid = value;
        time_valid.value_namespace = name_space;
        time_valid.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prepaid-config-name")
    {
        prepaid_config_name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "volume-threshold")
    {
        volume_threshold.yfilter = yfilter;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list.yfilter = yfilter;
    }
    if(value_path == "time-hold")
    {
        time_hold.yfilter = yfilter;
    }
    if(value_path == "author-method-list")
    {
        author_method_list.yfilter = yfilter;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction.yfilter = yfilter;
    }
    if(value_path == "time-threshold")
    {
        time_threshold.yfilter = yfilter;
    }
    if(value_path == "time-valid")
    {
        time_valid.yfilter = yfilter;
    }
}

bool SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepaid-config-name" || name == "password" || name == "volume-threshold" || name == "accounting-method-list" || name == "time-hold" || name == "author-method-list" || name == "traffic-direction" || name == "time-threshold" || name == "time-valid")
        return true;
    return false;
}


}
}

