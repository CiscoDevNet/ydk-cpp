
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicies()
{

    yang_name = "service-policies"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::~ServicePolicies()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:service-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "service-policies"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSessions()
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    acl(nullptr) // presence node
	,attachment(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (acl !=  nullptr && acl->has_data())
	|| (attachment !=  nullptr && attachment->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "attachment" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"},
    session_name{YType::str, "session-name"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter)
	|| ydk::is_set(session_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "port-level-enable" || name == "session-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::SsrpSession()
    :
    group_id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>())
{
    group_id->parent = this;

    yang_name = "ssrp-session"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::~SsrpSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_data() const
{
    return (group_id !=  nullptr && group_id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_operation() const
{
    return is_set(yfilter)
	|| (group_id !=  nullptr && group_id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        if(group_id == nullptr)
        {
            group_id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>();
        }
        return group_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_id != nullptr)
    {
        children["group-id"] = group_id;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::GroupId()
    :
    group{YType::uint32, "group"},
    id{YType::uint32, "id"}
{

    yang_name = "group-id"; yang_parent_name = "ssrp-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::~GroupId()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_data() const
{
    return group.is_set
	|| id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::Statistics()
    :
    load_interval{YType::uint32, "load-interval"}
{

    yang_name = "statistics"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::~Statistics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_data() const
{
    return load_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::Subscriber()
    :
    ip_subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber>())
{
    ip_subscriber->parent = this;

    yang_name = "subscriber"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::~Subscriber()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_data() const
{
    return (ip_subscriber !=  nullptr && ip_subscriber->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber !=  nullptr && ip_subscriber->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber")
    {
        if(ip_subscriber == nullptr)
        {
            ip_subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber>();
        }
        return ip_subscriber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber != nullptr)
    {
        children["ip-subscriber"] = ip_subscriber;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::IpSubscriber()
    :
    interface{YType::empty, "interface"},
    subscriber_templates{YType::uint32, "subscriber-templates"}
    	,
    ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6>())
	,session_limit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit>())
{
    ipv4->parent = this;
    ipv6->parent = this;
    session_limit->parent = this;

    yang_name = "ip-subscriber"; yang_parent_name = "subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::~IpSubscriber()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_data() const
{
    return interface.is_set
	|| subscriber_templates.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (session_limit !=  nullptr && session_limit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subscriber_templates.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (session_limit !=  nullptr && session_limit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subscriber_templates.is_set || is_set(subscriber_templates.yfilter)) leaf_name_data.push_back(subscriber_templates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "session-limit")
    {
        if(session_limit == nullptr)
        {
            session_limit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit>();
        }
        return session_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(session_limit != nullptr)
    {
        children["session-limit"] = session_limit;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-templates")
    {
        subscriber_templates = value;
        subscriber_templates.value_namespace = name_space;
        subscriber_templates.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-templates")
    {
        subscriber_templates.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "session-limit" || name == "interface" || name == "subscriber-templates")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Ipv4()
    :
    l2_connected(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected>())
	,routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed>())
{
    l2_connected->parent = this;
    routed->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_data() const
{
    return (l2_connected !=  nullptr && l2_connected->has_data())
	|| (routed !=  nullptr && routed->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (l2_connected !=  nullptr && l2_connected->has_operation())
	|| (routed !=  nullptr && routed->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-connected")
    {
        if(l2_connected == nullptr)
        {
            l2_connected = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected>();
        }
        return l2_connected;
    }

    if(child_yang_name == "routed")
    {
        if(routed == nullptr)
        {
            routed = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed>();
        }
        return routed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_connected != nullptr)
    {
        children["l2-connected"] = l2_connected;
    }

    if(routed != nullptr)
    {
        children["routed"] = routed;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-connected" || name == "routed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::L2Connected()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator>())
{
    initiator->parent = this;

    yang_name = "l2-connected"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::~L2Connected()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    unclassified_source_fsol(nullptr) // presence node
{

    yang_name = "initiator"; yang_parent_name = "l2-connected"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_data() const
{
    return dhcp.is_set
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unclassified-source-fsol")
    {
        if(unclassified_source_fsol == nullptr)
        {
            unclassified_source_fsol = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol>();
        }
        return unclassified_source_fsol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unclassified_source_fsol != nullptr)
    {
        children["unclassified-source-fsol"] = unclassified_source_fsol;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unclassified-source-fsol" || name == "dhcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::UnclassifiedSourceFsol()
    :
    address_unique{YType::boolean, "address-unique"},
    enable{YType::empty, "enable"}
{

    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    return address_unique.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unique.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source-fsol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unique.is_set || is_set(address_unique.yfilter)) leaf_name_data.push_back(address_unique.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unique")
    {
        address_unique = value;
        address_unique.value_namespace = name_space;
        address_unique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unique")
    {
        address_unique.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-unique" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Routed()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator>())
{
    initiator->parent = this;

    yang_name = "routed"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::~Routed()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"},
    dhcp_snoop{YType::empty, "dhcp-snoop"},
    unclassified_ip{YType::empty, "unclassified-ip"}
{

    yang_name = "initiator"; yang_parent_name = "routed"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_data() const
{
    return dhcp.is_set
	|| dhcp_snoop.is_set
	|| unclassified_ip.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(dhcp_snoop.yfilter)
	|| ydk::is_set(unclassified_ip.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dhcp_snoop.is_set || is_set(dhcp_snoop.yfilter)) leaf_name_data.push_back(dhcp_snoop.get_name_leafdata());
    if (unclassified_ip.is_set || is_set(unclassified_ip.yfilter)) leaf_name_data.push_back(unclassified_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop = value;
        dhcp_snoop.value_namespace = name_space;
        dhcp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unclassified-ip")
    {
        unclassified_ip = value;
        unclassified_ip.value_namespace = name_space;
        unclassified_ip.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop.yfilter = yfilter;
    }
    if(value_path == "unclassified-ip")
    {
        unclassified_ip.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "dhcp-snoop" || name == "unclassified-ip")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Ipv6()
    :
    l2_connected(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected>())
	,routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed>())
{
    l2_connected->parent = this;
    routed->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_data() const
{
    return (l2_connected !=  nullptr && l2_connected->has_data())
	|| (routed !=  nullptr && routed->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (l2_connected !=  nullptr && l2_connected->has_operation())
	|| (routed !=  nullptr && routed->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-connected")
    {
        if(l2_connected == nullptr)
        {
            l2_connected = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected>();
        }
        return l2_connected;
    }

    if(child_yang_name == "routed")
    {
        if(routed == nullptr)
        {
            routed = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed>();
        }
        return routed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_connected != nullptr)
    {
        children["l2-connected"] = l2_connected;
    }

    if(routed != nullptr)
    {
        children["routed"] = routed;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-connected" || name == "routed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::L2Connected()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator>())
{
    initiator->parent = this;

    yang_name = "l2-connected"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::~L2Connected()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    unclassified_source_fsol(nullptr) // presence node
{

    yang_name = "initiator"; yang_parent_name = "l2-connected"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_data() const
{
    return dhcp.is_set
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unclassified-source-fsol")
    {
        if(unclassified_source_fsol == nullptr)
        {
            unclassified_source_fsol = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol>();
        }
        return unclassified_source_fsol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unclassified_source_fsol != nullptr)
    {
        children["unclassified-source-fsol"] = unclassified_source_fsol;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unclassified-source-fsol" || name == "dhcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::UnclassifiedSourceFsol()
    :
    address_unique{YType::boolean, "address-unique"},
    enable{YType::empty, "enable"}
{

    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    return address_unique.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unique.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source-fsol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unique.is_set || is_set(address_unique.yfilter)) leaf_name_data.push_back(address_unique.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unique")
    {
        address_unique = value;
        address_unique.value_namespace = name_space;
        address_unique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unique")
    {
        address_unique.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-unique" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Routed()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator>())
{
    initiator->parent = this;

    yang_name = "routed"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::~Routed()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::Initiator()
    :
    dhcp{YType::uint32, "dhcp"},
    dhcp_snoop{YType::uint32, "dhcp-snoop"},
    unclassified_ip{YType::uint32, "unclassified-ip"}
{

    yang_name = "initiator"; yang_parent_name = "routed"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_data() const
{
    return dhcp.is_set
	|| dhcp_snoop.is_set
	|| unclassified_ip.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(dhcp_snoop.yfilter)
	|| ydk::is_set(unclassified_ip.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dhcp_snoop.is_set || is_set(dhcp_snoop.yfilter)) leaf_name_data.push_back(dhcp_snoop.get_name_leafdata());
    if (unclassified_ip.is_set || is_set(unclassified_ip.yfilter)) leaf_name_data.push_back(unclassified_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop = value;
        dhcp_snoop.value_namespace = name_space;
        dhcp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unclassified-ip")
    {
        unclassified_ip = value;
        unclassified_ip.value_namespace = name_space;
        unclassified_ip.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop.yfilter = yfilter;
    }
    if(value_path == "unclassified-ip")
    {
        unclassified_ip.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "dhcp-snoop" || name == "unclassified-ip")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::SessionLimit()
    :
    total(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total>())
	,unclassified_source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource>())
{
    total->parent = this;
    unclassified_source->parent = this;

    yang_name = "session-limit"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::~SessionLimit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_data() const
{
    return (total !=  nullptr && total->has_data())
	|| (unclassified_source !=  nullptr && unclassified_source->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_operation() const
{
    return is_set(yfilter)
	|| (total !=  nullptr && total->has_operation())
	|| (unclassified_source !=  nullptr && unclassified_source->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total>();
        }
        return total;
    }

    if(child_yang_name == "unclassified-source")
    {
        if(unclassified_source == nullptr)
        {
            unclassified_source = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource>();
        }
        return unclassified_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    if(unclassified_source != nullptr)
    {
        children["unclassified-source"] = unclassified_source;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "unclassified-source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::Total()
    :
    per_vlan{YType::int32, "per-vlan"}
{

    yang_name = "total"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::~Total()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_data() const
{
    return per_vlan.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_vlan.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.yfilter)) leaf_name_data.push_back(per_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
        per_vlan.value_namespace = name_space;
        per_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-vlan")
    {
        per_vlan.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-vlan")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::UnclassifiedSource()
    :
    per_vlan{YType::int32, "per-vlan"}
{

    yang_name = "unclassified-source"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::~UnclassifiedSource()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_data() const
{
    return per_vlan.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_vlan.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.yfilter)) leaf_name_data.push_back(per_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
        per_vlan.value_namespace = name_space;
        per_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-vlan")
    {
        per_vlan.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-vlan")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::TransportProfileTunnel()
    :
    source{YType::str, "source"}
    	,
    bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>())
	,destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>())
	,fault(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>())
	,protect_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>())
	,working_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>())
{
    bfd->parent = this;
    destination->parent = this;
    fault->parent = this;
    protect_lsp->parent = this;
    working_lsp->parent = this;

    yang_name = "transport-profile-tunnel"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::~TransportProfileTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_data() const
{
    return source.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (fault !=  nullptr && fault->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (fault !=  nullptr && fault->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:transport-profile-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "fault")
    {
        if(fault == nullptr)
        {
            fault = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>();
        }
        return fault;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(fault != nullptr)
    {
        children["fault"] = fault;
    }

    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "destination" || name == "fault" || name == "protect-lsp" || name == "working-lsp" || name == "source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::empty, "enable"},
    multiplier_standby{YType::uint32, "multiplier-standby"}
    	,
    min_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>())
	,min_interval_standby(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>())
{
    min_interval->parent = this;
    min_interval_standby->parent = this;

    yang_name = "bfd"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| multiplier_standby.is_set
	|| (min_interval !=  nullptr && min_interval->has_data())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(multiplier_standby.yfilter)
	|| (min_interval !=  nullptr && min_interval->has_operation())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (multiplier_standby.is_set || is_set(multiplier_standby.yfilter)) leaf_name_data.push_back(multiplier_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-interval")
    {
        if(min_interval == nullptr)
        {
            min_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>();
        }
        return min_interval;
    }

    if(child_yang_name == "min-interval-standby")
    {
        if(min_interval_standby == nullptr)
        {
            min_interval_standby = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>();
        }
        return min_interval_standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_interval != nullptr)
    {
        children["min-interval"] = min_interval;
    }

    if(min_interval_standby != nullptr)
    {
        children["min-interval-standby"] = min_interval_standby;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-standby")
    {
        multiplier_standby = value;
        multiplier_standby.value_namespace = name_space;
        multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "multiplier-standby")
    {
        multiplier_standby.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-interval" || name == "min-interval-standby" || name == "detection-multiplier" || name == "enable" || name == "multiplier-standby")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::MinInterval()
    :
    interval_ms{YType::uint32, "interval-ms"},
    interval_us{YType::uint32, "interval-us"}
{

    yang_name = "min-interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::~MinInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_data() const
{
    return interval_ms.is_set
	|| interval_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_ms.yfilter)
	|| ydk::is_set(interval_us.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_ms.is_set || is_set(interval_ms.yfilter)) leaf_name_data.push_back(interval_ms.get_name_leafdata());
    if (interval_us.is_set || is_set(interval_us.yfilter)) leaf_name_data.push_back(interval_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-ms")
    {
        interval_ms = value;
        interval_ms.value_namespace = name_space;
        interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-us")
    {
        interval_us = value;
        interval_us.value_namespace = name_space;
        interval_us.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-ms")
    {
        interval_ms.yfilter = yfilter;
    }
    if(value_path == "interval-us")
    {
        interval_us.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-ms" || name == "interval-us")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::MinIntervalStandby()
    :
    interval_standby_ms{YType::uint32, "interval-standby-ms"},
    interval_standby_us{YType::uint32, "interval-standby-us"}
{

    yang_name = "min-interval-standby"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::~MinIntervalStandby()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_data() const
{
    return interval_standby_ms.is_set
	|| interval_standby_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_standby_ms.yfilter)
	|| ydk::is_set(interval_standby_us.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_standby_ms.is_set || is_set(interval_standby_ms.yfilter)) leaf_name_data.push_back(interval_standby_ms.get_name_leafdata());
    if (interval_standby_us.is_set || is_set(interval_standby_us.yfilter)) leaf_name_data.push_back(interval_standby_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms = value;
        interval_standby_ms.value_namespace = name_space;
        interval_standby_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us = value;
        interval_standby_us.value_namespace = name_space;
        interval_standby_us.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms.yfilter = yfilter;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-standby-ms" || name == "interval-standby-us")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::Destination()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "destination"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| tunnel_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-id" || name == "node-id" || name == "tunnel-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::Fault()
    :
    enable{YType::empty, "enable"}
    	,
    protection_trigger(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>())
{
    protection_trigger->parent = this;

    yang_name = "fault"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::~Fault()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_data() const
{
    return enable.is_set
	|| (protection_trigger !=  nullptr && protection_trigger->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (protection_trigger !=  nullptr && protection_trigger->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-trigger")
    {
        if(protection_trigger == nullptr)
        {
            protection_trigger = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>();
        }
        return protection_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection_trigger != nullptr)
    {
        children["protection-trigger"] = protection_trigger;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-trigger" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::ProtectionTrigger()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "protection-trigger"; yang_parent_name = "fault"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::~ProtectionTrigger()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_data() const
{
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "ldi" || name == "lkr")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::ProtectLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
    	,
    out_label(nullptr) // presence node
{

    yang_name = "protect-lsp"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::~ProtectLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_data() const
{
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(lockout.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-label")
    {
        if(out_label == nullptr)
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel>();
        }
        return out_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out_label != nullptr)
    {
        children["out-label"] = out_label;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "in-label" || name == "lockout" || name == "lsp-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{

    yang_name = "out-label"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_data() const
{
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "link")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::WorkingLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
    	,
    out_label(nullptr) // presence node
{

    yang_name = "working-lsp"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::~WorkingLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_data() const
{
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(lockout.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-label")
    {
        if(out_label == nullptr)
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel>();
        }
        return out_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out_label != nullptr)
    {
        children["out-label"] = out_label;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "in-label" || name == "lockout" || name == "lsp-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{

    yang_name = "out-label"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_data() const
{
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "link")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::TunnelIp()
    :
    allow_key{YType::empty, "allow-key"},
    disable{YType::int32, "disable"},
    tos{YType::uint32, "tos"},
    ttl{YType::uint32, "ttl"},
    tunnel_vrf{YType::str, "tunnel-vrf"}
    	,
    destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination>())
	,keepalive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive>())
	,key(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key>())
	,mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode>())
	,source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source>())
{
    destination->parent = this;
    keepalive->parent = this;
    key->parent = this;
    mode->parent = this;
    source->parent = this;

    yang_name = "tunnel-ip"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::~TunnelIp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_data() const
{
    return allow_key.is_set
	|| disable.is_set
	|| tos.is_set
	|| ttl.is_set
	|| tunnel_vrf.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_key.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(tunnel_vrf.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_key.is_set || is_set(allow_key.yfilter)) leaf_name_data.push_back(allow_key.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_vrf.is_set || is_set(tunnel_vrf.yfilter)) leaf_name_data.push_back(tunnel_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key>();
        }
        return key;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-key")
    {
        allow_key = value;
        allow_key.value_namespace = name_space;
        allow_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-vrf")
    {
        tunnel_vrf = value;
        tunnel_vrf.value_namespace = name_space;
        tunnel_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-key")
    {
        allow_key.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "tunnel-vrf")
    {
        tunnel_vrf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "keepalive" || name == "key" || name == "mode" || name == "source" || name == "allow-key" || name == "disable" || name == "tos" || name == "ttl" || name == "tunnel-vrf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::Destination()
    :
    address{YType::str, "address"},
    address_mask{YType::str, "address-mask"},
    ipv6_address{YType::str, "ipv6-address"},
    prefix_list_name{YType::str, "prefix-list-name"},
    type{YType::int32, "type"}
{

    yang_name = "destination"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_data() const
{
    return address.is_set
	|| address_mask.is_set
	|| ipv6_address.is_set
	|| prefix_list_name.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_mask.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_mask.is_set || is_set(address_mask.yfilter)) leaf_name_data.push_back(address_mask.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-mask")
    {
        address_mask = value;
        address_mask.value_namespace = name_space;
        address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-mask")
    {
        address_mask.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-mask" || name == "ipv6-address" || name == "prefix-list-name" || name == "type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::Keepalive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    keep_alive_retries{YType::uint32, "keep-alive-retries"}
{

    yang_name = "keepalive"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::~Keepalive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_data() const
{
    return keep_alive_period.is_set
	|| keep_alive_retries.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keep_alive_period.yfilter)
	|| ydk::is_set(keep_alive_retries.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.yfilter)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (keep_alive_retries.is_set || is_set(keep_alive_retries.yfilter)) leaf_name_data.push_back(keep_alive_retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
        keep_alive_period.value_namespace = name_space;
        keep_alive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-retries")
    {
        keep_alive_retries = value;
        keep_alive_retries.value_namespace = name_space;
        keep_alive_retries.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period.yfilter = yfilter;
    }
    if(value_path == "keep-alive-retries")
    {
        keep_alive_retries.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep-alive-period" || name == "keep-alive-retries")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::Key()
    :
    entropy{YType::empty, "entropy"},
    value_{YType::uint32, "value"}
{

    yang_name = "key"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::~Key()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_data() const
{
    return entropy.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entropy.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entropy.is_set || is_set(entropy.yfilter)) leaf_name_data.push_back(entropy.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entropy")
    {
        entropy = value;
        entropy.value_namespace = name_space;
        entropy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entropy")
    {
        entropy.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entropy" || name == "value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::Mode()
    :
    mode_direction{YType::enumeration, "mode-direction"},
    value_{YType::int32, "value"}
{

    yang_name = "mode"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::~Mode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_data() const
{
    return mode_direction.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_direction.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_direction.is_set || is_set(mode_direction.yfilter)) leaf_name_data.push_back(mode_direction.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-direction")
    {
        mode_direction = value;
        mode_direction.value_namespace = name_space;
        mode_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-direction")
    {
        mode_direction.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-direction" || name == "value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::Source()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    ipv6_address{YType::str, "ipv6-address"},
    type{YType::int32, "type"}
{

    yang_name = "source"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::~Source()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_data() const
{
    return address.is_set
	|| interface_name.is_set
	|| ipv6_address.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name" || name == "ipv6-address" || name == "type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelTeAttributes()
    :
    destination{YType::str, "destination"},
    forward_class{YType::uint32, "forward-class"},
    load_share{YType::uint32, "load-share"},
    path_protection{YType::empty, "path-protection"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    soft_preemption{YType::empty, "soft-preemption"}
    	,
    admin_mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>())
	,affinity_mask(nullptr) // presence node
	,auto_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>())
	,autoroute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>())
	,backup_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>())
	,bandwidth(nullptr) // presence node
	,bfd_over_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>())
	,bidirectional(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>())
	,binding_segment_id_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>())
	,fast_reroute(nullptr) // presence node
	,forwarding_adjacency(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>())
	,logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>())
	,path_option_protects(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>())
	,pce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>())
	,policy_classes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>())
	,priority(nullptr) // presence node
	,switching(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>())
	,tunnel_path_selection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>())
{
    admin_mode->parent = this;
    auto_bandwidth->parent = this;
    autoroute->parent = this;
    backup_bandwidth->parent = this;
    bfd_over_lsp->parent = this;
    bidirectional->parent = this;
    binding_segment_id_mpls->parent = this;
    forwarding_adjacency->parent = this;
    logging->parent = this;
    new_style_affinity_affinity_types->parent = this;
    path_option_protects->parent = this;
    pce->parent = this;
    policy_classes->parent = this;
    switching->parent = this;
    tunnel_path_selection->parent = this;

    yang_name = "tunnel-te-attributes"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::~TunnelTeAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_data() const
{
    return destination.is_set
	|| forward_class.is_set
	|| load_share.is_set
	|| path_protection.is_set
	|| path_selection_metric.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| soft_preemption.is_set
	|| (admin_mode !=  nullptr && admin_mode->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_option_protects !=  nullptr && path_option_protects->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (switching !=  nullptr && switching->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(path_protection.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| (admin_mode !=  nullptr && admin_mode->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_option_protects !=  nullptr && path_option_protects->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (switching !=  nullptr && switching->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_protection.is_set || is_set(path_protection.yfilter)) leaf_name_data.push_back(path_protection.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-mode")
    {
        if(admin_mode == nullptr)
        {
            admin_mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>();
        }
        return admin_mode;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "backup-bandwidth")
    {
        if(backup_bandwidth == nullptr)
        {
            backup_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>();
        }
        return backup_bandwidth;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp == nullptr)
        {
            bfd_over_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>();
        }
        return bfd_over_lsp;
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "binding-segment-id-mpls")
    {
        if(binding_segment_id_mpls == nullptr)
        {
            binding_segment_id_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>();
        }
        return binding_segment_id_mpls;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "path-option-protects")
    {
        if(path_option_protects == nullptr)
        {
            path_option_protects = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>();
        }
        return path_option_protects;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>();
        }
        return switching;
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection == nullptr)
        {
            tunnel_path_selection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>();
        }
        return tunnel_path_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_mode != nullptr)
    {
        children["admin-mode"] = admin_mode;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(auto_bandwidth != nullptr)
    {
        children["auto-bandwidth"] = auto_bandwidth;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(backup_bandwidth != nullptr)
    {
        children["backup-bandwidth"] = backup_bandwidth;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd_over_lsp != nullptr)
    {
        children["bfd-over-lsp"] = bfd_over_lsp;
    }

    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(binding_segment_id_mpls != nullptr)
    {
        children["binding-segment-id-mpls"] = binding_segment_id_mpls;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(forwarding_adjacency != nullptr)
    {
        children["forwarding-adjacency"] = forwarding_adjacency;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(path_option_protects != nullptr)
    {
        children["path-option-protects"] = path_option_protects;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(switching != nullptr)
    {
        children["switching"] = switching;
    }

    if(tunnel_path_selection != nullptr)
    {
        children["tunnel-path-selection"] = tunnel_path_selection;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection")
    {
        path_protection = value;
        path_protection.value_namespace = name_space;
        path_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "path-protection")
    {
        path_protection.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-mode" || name == "affinity-mask" || name == "auto-bandwidth" || name == "autoroute" || name == "backup-bandwidth" || name == "bandwidth" || name == "bfd-over-lsp" || name == "bidirectional" || name == "binding-segment-id-mpls" || name == "fast-reroute" || name == "forwarding-adjacency" || name == "logging" || name == "new-style-affinity-affinity-types" || name == "path-option-protects" || name == "pce" || name == "policy-classes" || name == "priority" || name == "switching" || name == "tunnel-path-selection" || name == "destination" || name == "forward-class" || name == "load-share" || name == "path-protection" || name == "path-selection-metric" || name == "record-route" || name == "signalled-name" || name == "soft-preemption")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::AdminMode()
    :
    deactivate_tunnel{YType::empty, "deactivate-tunnel"}
{

    yang_name = "admin-mode"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::~AdminMode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_data() const
{
    return deactivate_tunnel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deactivate_tunnel.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivate_tunnel.is_set || is_set(deactivate_tunnel.yfilter)) leaf_name_data.push_back(deactivate_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel = value;
        deactivate_tunnel.value_namespace = name_space;
        deactivate_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deactivate-tunnel")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoBandwidth()
    :
    application_frequency{YType::uint32, "application-frequency"},
    collection_only{YType::empty, "collection-only"},
    enabled{YType::boolean, "enabled"},
    overflow_enable{YType::boolean, "overflow-enable"},
    underflow_enable{YType::boolean, "underflow-enable"}
    	,
    adjustment_threshold(nullptr) // presence node
	,bandwidth_limits(nullptr) // presence node
	,overflow(nullptr) // presence node
	,underflow(nullptr) // presence node
{

    yang_name = "auto-bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::~AutoBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_data() const
{
    return application_frequency.is_set
	|| collection_only.is_set
	|| enabled.is_set
	|| overflow_enable.is_set
	|| underflow_enable.is_set
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_data())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_frequency.yfilter)
	|| ydk::is_set(collection_only.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_enable.yfilter)
	|| ydk::is_set(underflow_enable.yfilter)
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_operation())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (underflow !=  nullptr && underflow->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_frequency.is_set || is_set(application_frequency.yfilter)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.yfilter)) leaf_name_data.push_back(collection_only.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_enable.is_set || is_set(overflow_enable.yfilter)) leaf_name_data.push_back(overflow_enable.get_name_leafdata());
    if (underflow_enable.is_set || is_set(underflow_enable.yfilter)) leaf_name_data.push_back(underflow_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjustment-threshold")
    {
        if(adjustment_threshold == nullptr)
        {
            adjustment_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold>();
        }
        return adjustment_threshold;
    }

    if(child_yang_name == "bandwidth-limits")
    {
        if(bandwidth_limits == nullptr)
        {
            bandwidth_limits = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits>();
        }
        return bandwidth_limits;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjustment_threshold != nullptr)
    {
        children["adjustment-threshold"] = adjustment_threshold;
    }

    if(bandwidth_limits != nullptr)
    {
        children["bandwidth-limits"] = bandwidth_limits;
    }

    if(overflow != nullptr)
    {
        children["overflow"] = overflow;
    }

    if(underflow != nullptr)
    {
        children["underflow"] = underflow;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-frequency")
    {
        application_frequency = value;
        application_frequency.value_namespace = name_space;
        application_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
        collection_only.value_namespace = name_space;
        collection_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable = value;
        overflow_enable.value_namespace = name_space;
        overflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-enable")
    {
        underflow_enable = value;
        underflow_enable.value_namespace = name_space;
        underflow_enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-frequency")
    {
        application_frequency.yfilter = yfilter;
    }
    if(value_path == "collection-only")
    {
        collection_only.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable.yfilter = yfilter;
    }
    if(value_path == "underflow-enable")
    {
        underflow_enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjustment-threshold" || name == "bandwidth-limits" || name == "overflow" || name == "underflow" || name == "application-frequency" || name == "collection-only" || name == "enabled" || name == "overflow-enable" || name == "underflow-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::AdjustmentThreshold()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"}
{

    yang_name = "adjustment-threshold"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::~AdjustmentThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_data() const
{
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_threshold_percent.yfilter)
	|| ydk::is_set(adjustment_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjustment-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.yfilter)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.yfilter)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
        adjustment_threshold_percent.value_namespace = name_space;
        adjustment_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
        adjustment_threshold_value.value_namespace = name_space;
        adjustment_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjustment-threshold-percent" || name == "adjustment-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::BandwidthLimits()
    :
    bandwidth_max_limit{YType::uint32, "bandwidth-max-limit"},
    bandwidth_min_limit{YType::uint32, "bandwidth-min-limit"}
{

    yang_name = "bandwidth-limits"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::~BandwidthLimits()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_data() const
{
    return bandwidth_max_limit.is_set
	|| bandwidth_min_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_max_limit.yfilter)
	|| ydk::is_set(bandwidth_min_limit.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_max_limit.is_set || is_set(bandwidth_max_limit.yfilter)) leaf_name_data.push_back(bandwidth_max_limit.get_name_leafdata());
    if (bandwidth_min_limit.is_set || is_set(bandwidth_min_limit.yfilter)) leaf_name_data.push_back(bandwidth_min_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit = value;
        bandwidth_max_limit.value_namespace = name_space;
        bandwidth_max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit = value;
        bandwidth_min_limit.value_namespace = name_space;
        bandwidth_min_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit.yfilter = yfilter;
    }
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-max-limit" || name == "bandwidth-min-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::Overflow()
    :
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"},
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"}
{

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::~Overflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_data() const
{
    return overflow_threshold_limit.is_set
	|| overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overflow_threshold_limit.yfilter)
	|| ydk::is_set(overflow_threshold_percent.yfilter)
	|| ydk::is_set(overflow_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.yfilter)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());
    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.yfilter)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.yfilter)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
        overflow_threshold_limit.value_namespace = name_space;
        overflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
        overflow_threshold_percent.value_namespace = name_space;
        overflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
        overflow_threshold_value.value_namespace = name_space;
        overflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-threshold-limit" || name == "overflow-threshold-percent" || name == "overflow-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::Underflow()
    :
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"},
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"}
{

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::~Underflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_data() const
{
    return underflow_threshold_limit.is_set
	|| underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_threshold_limit.yfilter)
	|| ydk::is_set(underflow_threshold_percent.yfilter)
	|| ydk::is_set(underflow_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.yfilter)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());
    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.yfilter)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.yfilter)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
        underflow_threshold_limit.value_namespace = name_space;
        underflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
        underflow_threshold_percent.value_namespace = name_space;
        underflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
        underflow_threshold_value.value_namespace = name_space;
        underflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow-threshold-limit" || name == "underflow-threshold-percent" || name == "underflow-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Autoroute()
    :
    autoroute_announce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>())
	,destinations(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations>())
{
    autoroute_announce->parent = this;
    destinations->parent = this;

    yang_name = "autoroute"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::~Autoroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_data() const
{
    return (autoroute_announce !=  nullptr && autoroute_announce->has_data())
	|| (destinations !=  nullptr && destinations->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_operation())
	|| (destinations !=  nullptr && destinations->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute-announce")
    {
        if(autoroute_announce == nullptr)
        {
            autoroute_announce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>();
        }
        return autoroute_announce;
    }

    if(child_yang_name == "destinations")
    {
        if(destinations == nullptr)
        {
            destinations = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations>();
        }
        return destinations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute_announce != nullptr)
    {
        children["autoroute-announce"] = autoroute_announce;
    }

    if(destinations != nullptr)
    {
        children["destinations"] = destinations;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute-announce" || name == "destinations")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::AutorouteAnnounce()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"}
    	,
    exclude_traffic(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>())
	,metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>())
{
    exclude_traffic->parent = this;
    metric->parent = this;

    yang_name = "autoroute-announce"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::~AutorouteAnnounce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_data() const
{
    return enable.is_set
	|| include_ipv6.is_set
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(include_ipv6.yfilter)
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-traffic")
    {
        if(exclude_traffic == nullptr)
        {
            exclude_traffic = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>();
        }
        return exclude_traffic;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude_traffic != nullptr)
    {
        children["exclude-traffic"] = exclude_traffic;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-traffic" || name == "metric" || name == "enable" || name == "include-ipv6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::ExcludeTraffic()
    :
    segment_routing{YType::empty, "segment-routing"}
{

    yang_name = "exclude-traffic"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::~ExcludeTraffic()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_data() const
{
    return segment_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_routing.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::Metric()
    :
    absolute_metric{YType::uint32, "absolute-metric"},
    constant_metric{YType::uint32, "constant-metric"},
    metric_type{YType::enumeration, "metric-type"},
    relative_metric{YType::int32, "relative-metric"}
{

    yang_name = "metric"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_data() const
{
    return absolute_metric.is_set
	|| constant_metric.is_set
	|| metric_type.is_set
	|| relative_metric.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_metric.yfilter)
	|| ydk::is_set(constant_metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(relative_metric.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_metric.is_set || is_set(absolute_metric.yfilter)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.yfilter)) leaf_name_data.push_back(constant_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.yfilter)) leaf_name_data.push_back(relative_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
        absolute_metric.value_namespace = name_space;
        absolute_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
        constant_metric.value_namespace = name_space;
        constant_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
        relative_metric.value_namespace = name_space;
        relative_metric.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric.yfilter = yfilter;
    }
    if(value_path == "constant-metric")
    {
        constant_metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "relative-metric")
    {
        relative_metric.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-metric" || name == "constant-metric" || name == "metric-type" || name == "relative-metric")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destinations()
{

    yang_name = "destinations"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::~Destinations()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"}
{

    yang_name = "destination"; yang_parent_name = "destinations"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_data() const
{
    return destination_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::BackupBandwidth()
    :
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    class_type{YType::enumeration, "class-type"},
    dste_type{YType::enumeration, "dste-type"},
    limit_type{YType::enumeration, "limit-type"},
    pool_type{YType::enumeration, "pool-type"}
{

    yang_name = "backup-bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::~BackupBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_data() const
{
    return backup_bandwidth.is_set
	|| class_type.is_set
	|| dste_type.is_set
	|| limit_type.is_set
	|| pool_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(limit_type.yfilter)
	|| ydk::is_set(pool_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.yfilter)) leaf_name_data.push_back(limit_type.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
        limit_type.value_namespace = name_space;
        limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "limit-type")
    {
        limit_type.yfilter = yfilter;
    }
    if(value_path == "pool-type")
    {
        pool_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-bandwidth" || name == "class-type" || name == "dste-type" || name == "limit-type" || name == "pool-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(dste_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-or-pool-type" || name == "dste-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::BfdOverLsp()
    :
    bringup_timeout{YType::uint32, "bringup-timeout"},
    dampening_initial_wait{YType::uint32, "dampening-initial-wait"},
    dampening_maximum_wait{YType::uint32, "dampening-maximum-wait"},
    dampening_secondary_wait{YType::uint32, "dampening-secondary-wait"},
    enable{YType::empty, "enable"},
    encap_mode{YType::uint32, "encap-mode"},
    fast_detect{YType::enumeration, "fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    multiplier{YType::uint32, "multiplier"},
    periodic_ping_disable{YType::empty, "periodic-ping-disable"},
    periodic_ping_interval{YType::uint32, "periodic-ping-interval"}
{

    yang_name = "bfd-over-lsp"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_data() const
{
    return bringup_timeout.is_set
	|| dampening_initial_wait.is_set
	|| dampening_maximum_wait.is_set
	|| dampening_secondary_wait.is_set
	|| enable.is_set
	|| encap_mode.is_set
	|| fast_detect.is_set
	|| minimum_interval.is_set
	|| multiplier.is_set
	|| periodic_ping_disable.is_set
	|| periodic_ping_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bringup_timeout.yfilter)
	|| ydk::is_set(dampening_initial_wait.yfilter)
	|| ydk::is_set(dampening_maximum_wait.yfilter)
	|| ydk::is_set(dampening_secondary_wait.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encap_mode.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(periodic_ping_disable.yfilter)
	|| ydk::is_set(periodic_ping_interval.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bringup_timeout.is_set || is_set(bringup_timeout.yfilter)) leaf_name_data.push_back(bringup_timeout.get_name_leafdata());
    if (dampening_initial_wait.is_set || is_set(dampening_initial_wait.yfilter)) leaf_name_data.push_back(dampening_initial_wait.get_name_leafdata());
    if (dampening_maximum_wait.is_set || is_set(dampening_maximum_wait.yfilter)) leaf_name_data.push_back(dampening_maximum_wait.get_name_leafdata());
    if (dampening_secondary_wait.is_set || is_set(dampening_secondary_wait.yfilter)) leaf_name_data.push_back(dampening_secondary_wait.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encap_mode.is_set || is_set(encap_mode.yfilter)) leaf_name_data.push_back(encap_mode.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (periodic_ping_disable.is_set || is_set(periodic_ping_disable.yfilter)) leaf_name_data.push_back(periodic_ping_disable.get_name_leafdata());
    if (periodic_ping_interval.is_set || is_set(periodic_ping_interval.yfilter)) leaf_name_data.push_back(periodic_ping_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bringup-timeout")
    {
        bringup_timeout = value;
        bringup_timeout.value_namespace = name_space;
        bringup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait = value;
        dampening_initial_wait.value_namespace = name_space;
        dampening_initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait = value;
        dampening_maximum_wait.value_namespace = name_space;
        dampening_maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait = value;
        dampening_secondary_wait.value_namespace = name_space;
        dampening_secondary_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-mode")
    {
        encap_mode = value;
        encap_mode.value_namespace = name_space;
        encap_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable = value;
        periodic_ping_disable.value_namespace = name_space;
        periodic_ping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval = value;
        periodic_ping_interval.value_namespace = name_space;
        periodic_ping_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bringup-timeout")
    {
        bringup_timeout.yfilter = yfilter;
    }
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait.yfilter = yfilter;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait.yfilter = yfilter;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encap-mode")
    {
        encap_mode.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bringup-timeout" || name == "dampening-initial-wait" || name == "dampening-maximum-wait" || name == "dampening-secondary-wait" || name == "enable" || name == "encap-mode" || name == "fast-detect" || name == "minimum-interval" || name == "multiplier" || name == "periodic-ping-disable" || name == "periodic-ping-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::Bidirectional()
    :
    enabled{YType::empty, "enabled"}
    	,
    association_corouted_type(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>())
	,association_parameters(nullptr) // presence node
{
    association_corouted_type->parent = this;

    yang_name = "bidirectional"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::~Bidirectional()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_data() const
{
    return enabled.is_set
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_data())
	|| (association_parameters !=  nullptr && association_parameters->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_operation())
	|| (association_parameters !=  nullptr && association_parameters->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-corouted-type")
    {
        if(association_corouted_type == nullptr)
        {
            association_corouted_type = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>();
        }
        return association_corouted_type;
    }

    if(child_yang_name == "association-parameters")
    {
        if(association_parameters == nullptr)
        {
            association_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters>();
        }
        return association_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association_corouted_type != nullptr)
    {
        children["association-corouted-type"] = association_corouted_type;
    }

    if(association_parameters != nullptr)
    {
        children["association-parameters"] = association_parameters;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-corouted-type" || name == "association-parameters" || name == "enabled")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::AssociationCoroutedType()
    :
    enable{YType::empty, "enable"},
    wrap_protection_enable{YType::empty, "wrap-protection-enable"}
    	,
    fault_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>())
{
    fault_oam->parent = this;

    yang_name = "association-corouted-type"; yang_parent_name = "bidirectional"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::~AssociationCoroutedType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_data() const
{
    return enable.is_set
	|| wrap_protection_enable.is_set
	|| (fault_oam !=  nullptr && fault_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(wrap_protection_enable.yfilter)
	|| (fault_oam !=  nullptr && fault_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-corouted-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (wrap_protection_enable.is_set || is_set(wrap_protection_enable.yfilter)) leaf_name_data.push_back(wrap_protection_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-oam")
    {
        if(fault_oam == nullptr)
        {
            fault_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>();
        }
        return fault_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_oam != nullptr)
    {
        children["fault-oam"] = fault_oam;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable = value;
        wrap_protection_enable.value_namespace = name_space;
        wrap_protection_enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-oam" || name == "enable" || name == "wrap-protection-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::FaultOam()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "fault-oam"; yang_parent_name = "association-corouted-type"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::~FaultOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::AssociationParameters()
    :
    association_global_id{YType::uint32, "association-global-id"},
    association_id{YType::uint32, "association-id"},
    association_is_global_id_configured{YType::boolean, "association-is-global-id-configured"},
    association_source_address{YType::str, "association-source-address"}
{

    yang_name = "association-parameters"; yang_parent_name = "bidirectional"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::~AssociationParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_data() const
{
    return association_global_id.is_set
	|| association_id.is_set
	|| association_is_global_id_configured.is_set
	|| association_source_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_global_id.yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| ydk::is_set(association_is_global_id_configured.yfilter)
	|| ydk::is_set(association_source_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_global_id.is_set || is_set(association_global_id.yfilter)) leaf_name_data.push_back(association_global_id.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_is_global_id_configured.is_set || is_set(association_is_global_id_configured.yfilter)) leaf_name_data.push_back(association_is_global_id_configured.get_name_leafdata());
    if (association_source_address.is_set || is_set(association_source_address.yfilter)) leaf_name_data.push_back(association_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-global-id")
    {
        association_global_id = value;
        association_global_id.value_namespace = name_space;
        association_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured = value;
        association_is_global_id_configured.value_namespace = name_space;
        association_is_global_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-source-address")
    {
        association_source_address = value;
        association_source_address.value_namespace = name_space;
        association_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-global-id")
    {
        association_global_id.yfilter = yfilter;
    }
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured.yfilter = yfilter;
    }
    if(value_path == "association-source-address")
    {
        association_source_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-global-id" || name == "association-id" || name == "association-is-global-id-configured" || name == "association-source-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::BindingSegmentIdMpls()
    :
    label_value{YType::uint32, "label-value"},
    segment_id_type{YType::enumeration, "segment-id-type"}
{

    yang_name = "binding-segment-id-mpls"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::~BindingSegmentIdMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_data() const
{
    return label_value.is_set
	|| segment_id_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_value.yfilter)
	|| ydk::is_set(segment_id_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-segment-id-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-value" || name == "segment-id-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::~FastReroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::ForwardingAdjacency()
    :
    enable{YType::empty, "enable"},
    hold_time{YType::uint32, "hold-time"},
    include_ipv6{YType::empty, "include-ipv6"}
{

    yang_name = "forwarding-adjacency"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_data() const
{
    return enable.is_set
	|| hold_time.is_set
	|| include_ipv6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(include_ipv6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hold-time" || name == "include-ipv6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{

    yang_name = "logging"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| bfd_state_message.is_set
	|| insufficient_bw_message.is_set
	|| lsp_switch_over_change_message.is_set
	|| pcalc_failure_message.is_set
	|| record_route_messsage.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(bfd_state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(lsp_switch_over_change_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(record_route_messsage.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.yfilter)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.yfilter)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.yfilter)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
        bfd_state_message.value_namespace = name_space;
        bfd_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
        lsp_switch_over_change_message.value_namespace = name_space;
        lsp_switch_over_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
        record_route_messsage.value_namespace = name_space;
        record_route_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "bandwidth-change-message" || name == "bfd-state-message" || name == "insufficient-bw-message" || name == "lsp-switch-over-change-message" || name == "pcalc-failure-message" || name == "record-route-messsage" || name == "reoptimize-attempts-message" || name == "reoptimized-message" || name == "reroute-messsage" || name == "state-message")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtects()
{

    yang_name = "path-option-protects"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::~PathOptionProtects()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_data() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_operation() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-protect")
    {
        for(auto const & c : path_option_protect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect>();
        c->parent = this;
        path_option_protect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option_protect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-protect")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptionProtect()
    :
    protection{YType::enumeration, "protection"}
    	,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>())
{
    path_options->parent = this;

    yang_name = "path-option-protect"; yang_parent_name = "path-option-protects"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::~PathOptionProtect()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_data() const
{
    return protection.is_set
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection.yfilter)
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protect" <<"[protection='" <<protection <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>();
        }
        return path_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-options" || name == "protection")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOptions()
{

    yang_name = "path-options"; yang_parent_name = "path-option-protect"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    destination{YType::str, "destination"},
    igp_area{YType::int32, "igp-area"},
    igp_area_ip_address_id{YType::str, "igp-area-ip-address-id"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"},
    interface{YType::str, "interface"},
    lockdown{YType::enumeration, "lockdown"},
    output_label{YType::int32, "output-label"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_option_attribute_set_name{YType::str, "path-option-attribute-set-name"},
    path_property{YType::int32, "path-property"},
    path_type{YType::enumeration, "path-type"},
    pce{YType::enumeration, "pce"},
    pce_address{YType::str, "pce-address"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    segment_routing{YType::enumeration, "segment-routing"},
    verbatim{YType::enumeration, "verbatim"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| destination.is_set
	|| igp_area.is_set
	|| igp_area_ip_address_id.is_set
	|| igp_instance.is_set
	|| igp_type.is_set
	|| interface.is_set
	|| lockdown.is_set
	|| output_label.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_option_attribute_set_name.is_set
	|| path_property.is_set
	|| path_type.is_set
	|| pce.is_set
	|| pce_address.is_set
	|| protected_by_preference_level.is_set
	|| segment_routing.is_set
	|| verbatim.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_ip_address_id.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(path_option_attribute_set_name.yfilter)
	|| ydk::is_set(path_property.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(protected_by_preference_level.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_ip_address_id.is_set || is_set(igp_area_ip_address_id.yfilter)) leaf_name_data.push_back(igp_area_ip_address_id.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_option_attribute_set_name.is_set || is_set(path_option_attribute_set_name.yfilter)) leaf_name_data.push_back(path_option_attribute_set_name.get_name_leafdata());
    if (path_property.is_set || is_set(path_property.yfilter)) leaf_name_data.push_back(path_property.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.yfilter)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id = value;
        igp_area_ip_address_id.value_namespace = name_space;
        igp_area_ip_address_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name = value;
        path_option_attribute_set_name.value_namespace = name_space;
        path_option_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-property")
    {
        path_property = value;
        path_property.value_namespace = name_space;
        path_property.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
        protected_by_preference_level.value_namespace = name_space;
        protected_by_preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "path-property")
    {
        path_property.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "destination" || name == "igp-area" || name == "igp-area-ip-address-id" || name == "igp-instance" || name == "igp-type" || name == "interface" || name == "lockdown" || name == "output-label" || name == "path-id" || name == "path-name" || name == "path-option-attribute-set-name" || name == "path-property" || name == "path-type" || name == "pce" || name == "pce-address" || name == "protected-by-preference-level" || name == "segment-routing" || name == "verbatim")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::Pce()
    :
    delegation{YType::empty, "delegation"},
    enable{YType::empty, "enable"}
{

    yang_name = "pce"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::~Pce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_data() const
{
    return delegation.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delegation.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delegation.is_set || is_set(delegation.yfilter)) leaf_name_data.push_back(delegation.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delegation")
    {
        delegation = value;
        delegation.value_namespace = name_space;
        delegation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delegation")
    {
        delegation.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delegation" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{

    yang_name = "policy-classes"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::~PolicyClasses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_class.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Switching()
    :
    endpoint(nullptr) // presence node
	,transit(nullptr) // presence node
{

    yang_name = "switching"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::~Switching()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_data() const
{
    return (endpoint !=  nullptr && endpoint->has_data())
	|| (transit !=  nullptr && transit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_operation() const
{
    return is_set(yfilter)
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (transit !=  nullptr && transit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint>();
        }
        return endpoint;
    }

    if(child_yang_name == "transit")
    {
        if(transit == nullptr)
        {
            transit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit>();
        }
        return transit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(endpoint != nullptr)
    {
        children["endpoint"] = endpoint;
    }

    if(transit != nullptr)
    {
        children["transit"] = transit;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "endpoint" || name == "transit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::Endpoint()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{

    yang_name = "endpoint"; yang_parent_name = "switching"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::~Endpoint()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_data() const
{
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "encoding")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::Transit()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{

    yang_name = "transit"; yang_parent_name = "switching"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::~Transit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_data() const
{
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "encoding")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::TunnelPathSelection()
    :
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"},
    path_selection_hop_limit{YType::uint32, "path-selection-hop-limit"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(nullptr) // presence node
{

    yang_name = "tunnel-path-selection"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::~TunnelPathSelection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_data() const
{
    return path_selection_cost_limit.is_set
	|| path_selection_hop_limit.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_selection_cost_limit.yfilter)
	|| ydk::is_set(path_selection_hop_limit.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.yfilter)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());
    if (path_selection_hop_limit.is_set || is_set(path_selection_hop_limit.yfilter)) leaf_name_data.push_back(path_selection_hop_limit.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
        path_selection_cost_limit.value_namespace = name_space;
        path_selection_cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit = value;
        path_selection_hop_limit.value_namespace = name_space;
        path_selection_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit.yfilter = yfilter;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "path-selection-cost-limit" || name == "path-selection-hop-limit" || name == "tiebreaker")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{

    yang_name = "invalidation"; yang_parent_name = "tunnel-path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::~Invalidation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-action" || name == "path-invalidation-timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanSubConfiguration()
    :
    vlan_identifier(nullptr) // presence node
{

    yang_name = "vlan-sub-configuration"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::~VlanSubConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_data() const
{
    return (vlan_identifier !=  nullptr && vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_identifier !=  nullptr && vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-identifier")
    {
        if(vlan_identifier == nullptr)
        {
            vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier>();
        }
        return vlan_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_identifier != nullptr)
    {
        children["vlan-identifier"] = vlan_identifier;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-identifier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::VlanIdentifier()
    :
    first_tag{YType::uint32, "first-tag"},
    second_tag{YType::str, "second-tag"},
    vlan_type{YType::enumeration, "vlan-type"}
{

    yang_name = "vlan-identifier"; yang_parent_name = "vlan-sub-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::~VlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_data() const
{
    return first_tag.is_set
	|| second_tag.is_set
	|| vlan_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter)
	|| ydk::is_set(vlan_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_tag.is_set || is_set(first_tag.yfilter)) leaf_name_data.push_back(first_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-tag")
    {
        first_tag = value;
        first_tag.value_namespace = name_space;
        first_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-tag")
    {
        first_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-tag" || name == "second-tag" || name == "vlan-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanTrunkConfiguration()
    :
    tunneling_ethertype{YType::enumeration, "tunneling-ethertype"}
    	,
    native_vlan_identifier(nullptr) // presence node
{

    yang_name = "vlan-trunk-configuration"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::~VlanTrunkConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_data() const
{
    return tunneling_ethertype.is_set
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunneling_ethertype.yfilter)
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunneling_ethertype.is_set || is_set(tunneling_ethertype.yfilter)) leaf_name_data.push_back(tunneling_ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-vlan-identifier")
    {
        if(native_vlan_identifier == nullptr)
        {
            native_vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier>();
        }
        return native_vlan_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(native_vlan_identifier != nullptr)
    {
        children["native-vlan-identifier"] = native_vlan_identifier;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype = value;
        tunneling_ethertype.value_namespace = name_space;
        tunneling_ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native-vlan-identifier" || name == "tunneling-ethertype")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::NativeVlanIdentifier()
    :
    vlan_identifier{YType::uint32, "vlan-identifier"},
    vlan_type{YType::enumeration, "vlan-type"}
{

    yang_name = "native-vlan-identifier"; yang_parent_name = "vlan-trunk-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::~NativeVlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_data() const
{
    return vlan_identifier.is_set
	|| vlan_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_identifier.yfilter)
	|| ydk::is_set(vlan_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-vlan-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_identifier.is_set || is_set(vlan_identifier.yfilter)) leaf_name_data.push_back(vlan_identifier.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-identifier")
    {
        vlan_identifier = value;
        vlan_identifier.value_namespace = name_space;
        vlan_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-identifier")
    {
        vlan_identifier.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-identifier" || name == "vlan-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::Wanphy()
    :
    lan_mode{YType::enumeration, "lan-mode"},
    report_line_ais{YType::empty, "report-line-ais"},
    report_lof{YType::empty, "report-lof"},
    report_lop{YType::empty, "report-lop"},
    report_los{YType::empty, "report-los"},
    report_path_ais{YType::empty, "report-path-ais"},
    report_path_fe_ais{YType::empty, "report-path-fe-ais"},
    report_path_fe_plm{YType::empty, "report-path-fe-plm"},
    report_path_lcd{YType::empty, "report-path-lcd"},
    report_path_plm{YType::empty, "report-path-plm"},
    report_path_rdi{YType::empty, "report-path-rdi"},
    report_rdi{YType::empty, "report-rdi"},
    report_sd_ber{YType::empty, "report-sd-ber"},
    report_sf_ber{YType::empty, "report-sf-ber"},
    threshold_sd_ber{YType::uint32, "threshold-sd-ber"},
    threshold_sf_ber{YType::uint32, "threshold-sf-ber"},
    wan_mode{YType::enumeration, "wan-mode"}
{

    yang_name = "wanphy"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::~Wanphy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_data() const
{
    return lan_mode.is_set
	|| report_line_ais.is_set
	|| report_lof.is_set
	|| report_lop.is_set
	|| report_los.is_set
	|| report_path_ais.is_set
	|| report_path_fe_ais.is_set
	|| report_path_fe_plm.is_set
	|| report_path_lcd.is_set
	|| report_path_plm.is_set
	|| report_path_rdi.is_set
	|| report_rdi.is_set
	|| report_sd_ber.is_set
	|| report_sf_ber.is_set
	|| threshold_sd_ber.is_set
	|| threshold_sf_ber.is_set
	|| wan_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lan_mode.yfilter)
	|| ydk::is_set(report_line_ais.yfilter)
	|| ydk::is_set(report_lof.yfilter)
	|| ydk::is_set(report_lop.yfilter)
	|| ydk::is_set(report_los.yfilter)
	|| ydk::is_set(report_path_ais.yfilter)
	|| ydk::is_set(report_path_fe_ais.yfilter)
	|| ydk::is_set(report_path_fe_plm.yfilter)
	|| ydk::is_set(report_path_lcd.yfilter)
	|| ydk::is_set(report_path_plm.yfilter)
	|| ydk::is_set(report_path_rdi.yfilter)
	|| ydk::is_set(report_rdi.yfilter)
	|| ydk::is_set(report_sd_ber.yfilter)
	|| ydk::is_set(report_sf_ber.yfilter)
	|| ydk::is_set(threshold_sd_ber.yfilter)
	|| ydk::is_set(threshold_sf_ber.yfilter)
	|| ydk::is_set(wan_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-cfg:wanphy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lan_mode.is_set || is_set(lan_mode.yfilter)) leaf_name_data.push_back(lan_mode.get_name_leafdata());
    if (report_line_ais.is_set || is_set(report_line_ais.yfilter)) leaf_name_data.push_back(report_line_ais.get_name_leafdata());
    if (report_lof.is_set || is_set(report_lof.yfilter)) leaf_name_data.push_back(report_lof.get_name_leafdata());
    if (report_lop.is_set || is_set(report_lop.yfilter)) leaf_name_data.push_back(report_lop.get_name_leafdata());
    if (report_los.is_set || is_set(report_los.yfilter)) leaf_name_data.push_back(report_los.get_name_leafdata());
    if (report_path_ais.is_set || is_set(report_path_ais.yfilter)) leaf_name_data.push_back(report_path_ais.get_name_leafdata());
    if (report_path_fe_ais.is_set || is_set(report_path_fe_ais.yfilter)) leaf_name_data.push_back(report_path_fe_ais.get_name_leafdata());
    if (report_path_fe_plm.is_set || is_set(report_path_fe_plm.yfilter)) leaf_name_data.push_back(report_path_fe_plm.get_name_leafdata());
    if (report_path_lcd.is_set || is_set(report_path_lcd.yfilter)) leaf_name_data.push_back(report_path_lcd.get_name_leafdata());
    if (report_path_plm.is_set || is_set(report_path_plm.yfilter)) leaf_name_data.push_back(report_path_plm.get_name_leafdata());
    if (report_path_rdi.is_set || is_set(report_path_rdi.yfilter)) leaf_name_data.push_back(report_path_rdi.get_name_leafdata());
    if (report_rdi.is_set || is_set(report_rdi.yfilter)) leaf_name_data.push_back(report_rdi.get_name_leafdata());
    if (report_sd_ber.is_set || is_set(report_sd_ber.yfilter)) leaf_name_data.push_back(report_sd_ber.get_name_leafdata());
    if (report_sf_ber.is_set || is_set(report_sf_ber.yfilter)) leaf_name_data.push_back(report_sf_ber.get_name_leafdata());
    if (threshold_sd_ber.is_set || is_set(threshold_sd_ber.yfilter)) leaf_name_data.push_back(threshold_sd_ber.get_name_leafdata());
    if (threshold_sf_ber.is_set || is_set(threshold_sf_ber.yfilter)) leaf_name_data.push_back(threshold_sf_ber.get_name_leafdata());
    if (wan_mode.is_set || is_set(wan_mode.yfilter)) leaf_name_data.push_back(wan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Wanphy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lan-mode")
    {
        lan_mode = value;
        lan_mode.value_namespace = name_space;
        lan_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-line-ais")
    {
        report_line_ais = value;
        report_line_ais.value_namespace = name_space;
        report_line_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-lof")
    {
        report_lof = value;
        report_lof.value_namespace = name_space;
        report_lof.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-lop")
    {
        report_lop = value;
        report_lop.value_namespace = name_space;
        report_lop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-los")
    {
        report_los = value;
        report_los.value_namespace = name_space;
        report_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-ais")
    {
        report_path_ais = value;
        report_path_ais.value_namespace = name_space;
        report_path_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-fe-ais")
    {
        report_path_fe_ais = value;
        report_path_fe_ais.value_namespace = name_space;
        report_path_fe_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-fe-plm")
    {
        report_path_fe_plm = value;
        report_path_fe_plm.value_namespace = name_space;
        report_path_fe_plm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-lcd")
    {
        report_path_lcd = value;
        report_path_lcd.value_namespace = name_space;
        report_path_lcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-plm")
    {
        report_path_plm = value;
        report_path_plm.value_namespace = name_space;
        report_path_plm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-rdi")
    {
        report_path_rdi = value;
        report_path_rdi.value_namespace = name_space;
        report_path_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-rdi")
    {
        report_rdi = value;
        report_rdi.value_namespace = name_space;
        report_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-sd-ber")
    {
        report_sd_ber = value;
        report_sd_ber.value_namespace = name_space;
        report_sd_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-sf-ber")
    {
        report_sf_ber = value;
        report_sf_ber.value_namespace = name_space;
        report_sf_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-sd-ber")
    {
        threshold_sd_ber = value;
        threshold_sd_ber.value_namespace = name_space;
        threshold_sd_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-sf-ber")
    {
        threshold_sf_ber = value;
        threshold_sf_ber.value_namespace = name_space;
        threshold_sf_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-mode")
    {
        wan_mode = value;
        wan_mode.value_namespace = name_space;
        wan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Wanphy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lan-mode")
    {
        lan_mode.yfilter = yfilter;
    }
    if(value_path == "report-line-ais")
    {
        report_line_ais.yfilter = yfilter;
    }
    if(value_path == "report-lof")
    {
        report_lof.yfilter = yfilter;
    }
    if(value_path == "report-lop")
    {
        report_lop.yfilter = yfilter;
    }
    if(value_path == "report-los")
    {
        report_los.yfilter = yfilter;
    }
    if(value_path == "report-path-ais")
    {
        report_path_ais.yfilter = yfilter;
    }
    if(value_path == "report-path-fe-ais")
    {
        report_path_fe_ais.yfilter = yfilter;
    }
    if(value_path == "report-path-fe-plm")
    {
        report_path_fe_plm.yfilter = yfilter;
    }
    if(value_path == "report-path-lcd")
    {
        report_path_lcd.yfilter = yfilter;
    }
    if(value_path == "report-path-plm")
    {
        report_path_plm.yfilter = yfilter;
    }
    if(value_path == "report-path-rdi")
    {
        report_path_rdi.yfilter = yfilter;
    }
    if(value_path == "report-rdi")
    {
        report_rdi.yfilter = yfilter;
    }
    if(value_path == "report-sd-ber")
    {
        report_sd_ber.yfilter = yfilter;
    }
    if(value_path == "report-sf-ber")
    {
        report_sf_ber.yfilter = yfilter;
    }
    if(value_path == "threshold-sd-ber")
    {
        threshold_sd_ber.yfilter = yfilter;
    }
    if(value_path == "threshold-sf-ber")
    {
        threshold_sf_ber.yfilter = yfilter;
    }
    if(value_path == "wan-mode")
    {
        wan_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-mode" || name == "report-line-ais" || name == "report-lof" || name == "report-lop" || name == "report-los" || name == "report-path-ais" || name == "report-path-fe-ais" || name == "report-path-fe-plm" || name == "report-path-lcd" || name == "report-path-plm" || name == "report-path-rdi" || name == "report-rdi" || name == "report-sd-ber" || name == "report-sf-ber" || name == "threshold-sd-ber" || name == "threshold-sf-ber" || name == "wan-mode")
        return true;
    return false;
}

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9100 {37120, "0x9100"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9200 {37376, "0x9200"};


}
}

