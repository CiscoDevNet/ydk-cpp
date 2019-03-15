
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_128.hpp"
#include "Cisco_IOS_XE_native_129.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Isakmp::Client::Configuration::Group::Dns::Dns()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dns::~Dns()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::Firewall()
    :
    are_u_there{YType::empty, "are-u-there"},
    policy{YType::str, "policy"}
{

    yang_name = "firewall"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::~Firewall()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_data() const
{
    if (is_presence_container) return true;
    return are_u_there.is_set
	|| policy.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_u_there.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_u_there.is_set || is_set(are_u_there.yfilter)) leaf_name_data.push_back(are_u_there.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-u-there")
    {
        are_u_there = value;
        are_u_there.value_namespace = name_space;
        are_u_there.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-u-there")
    {
        are_u_there.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "are-u-there" || name == "policy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Key::~Key()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Wins::Wins()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "wins"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Wins::~Wins()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wins";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Wins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Wins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Firewall()
    :
    policy_name{YType::str, "policy-name"},
    optional{YType::enumeration, "optional"},
    required{YType::enumeration, "required"}
        ,
    policy(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy>())
{
    policy->parent = this;

    yang_name = "firewall"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Firewall::~Firewall()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| optional.is_set
	|| required.is_set
	|| (policy !=  nullptr && policy->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(optional.yfilter)
	|| ydk::is_set(required.yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (optional.is_set || is_set(optional.yfilter)) leaf_name_data.push_back(optional.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optional")
    {
        optional = value;
        optional.value_namespace = name_space;
        optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "optional")
    {
        optional.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "policy-name" || name == "optional" || name == "required")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::Policy()
    :
    check_presence{YType::empty, "check-presence"}
        ,
    central_policy_push(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush>())
{
    central_policy_push->parent = this;

    yang_name = "policy"; yang_parent_name = "firewall"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Firewall::Policy::~Policy()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_data() const
{
    if (is_presence_container) return true;
    return check_presence.is_set
	|| (central_policy_push !=  nullptr && central_policy_push->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check_presence.yfilter)
	|| (central_policy_push !=  nullptr && central_policy_push->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check_presence.is_set || is_set(check_presence.yfilter)) leaf_name_data.push_back(check_presence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "central-policy-push")
    {
        if(central_policy_push == nullptr)
        {
            central_policy_push = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush>();
        }
        return central_policy_push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(central_policy_push != nullptr)
    {
        _children["central-policy-push"] = central_policy_push;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check-presence")
    {
        check_presence = value;
        check_presence.value_namespace = name_space;
        check_presence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check-presence")
    {
        check_presence.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "central-policy-push" || name == "check-presence")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::CentralPolicyPush()
    :
    access_list(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList>())
{
    access_list->parent = this;

    yang_name = "central-policy-push"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::~CentralPolicyPush()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_data() const
{
    if (is_presence_container) return true;
    return (access_list !=  nullptr && access_list->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "central-policy-push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_list != nullptr)
    {
        _children["access-list"] = access_list;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::AccessList()
    :
    direction{YType::enumeration, "direction"},
    acl{YType::str, "acl"}
{

    yang_name = "access-list"; yang_parent_name = "central-policy-push"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::~AccessList()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| acl.is_set;
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "acl")
        return true;
    return false;
}

Native::Crypto::Isakmp::Default::Default()
    :
    policy{YType::empty, "policy"}
{

    yang_name = "default"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Default::~Default()
{
}

bool Native::Crypto::Isakmp::Default::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set;
}

bool Native::Crypto::Isakmp::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Isakmp::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Keepalive::Keepalive()
    :
    number{YType::uint16, "number"},
    retry_number{YType::uint8, "retry-number"},
    send{YType::enumeration, "send"}
{

    yang_name = "keepalive"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| retry_number.is_set
	|| send.is_set;
}

bool Native::Crypto::Isakmp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(retry_number.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Crypto::Isakmp::Keepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (retry_number.is_set || is_set(retry_number.yfilter)) leaf_name_data.push_back(retry_number.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-number")
    {
        retry_number = value;
        retry_number.value_namespace = name_space;
        retry_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "retry-number")
    {
        retry_number.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "retry-number" || name == "send")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::Key()
    :
    key_address(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress>())
    , key_host(std::make_shared<Native::Crypto::Isakmp::Key::KeyHost>())
{
    key_address->parent = this;
    key_host->parent = this;

    yang_name = "key"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::~Key()
{
}

bool Native::Crypto::Isakmp::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_address !=  nullptr && key_address->has_data())
	|| (key_host !=  nullptr && key_host->has_data());
}

bool Native::Crypto::Isakmp::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_address !=  nullptr && key_address->has_operation())
	|| (key_host !=  nullptr && key_host->has_operation());
}

std::string Native::Crypto::Isakmp::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-address")
    {
        if(key_address == nullptr)
        {
            key_address = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress>();
        }
        return key_address;
    }

    if(child_yang_name == "key-host")
    {
        if(key_host == nullptr)
        {
            key_host = std::make_shared<Native::Crypto::Isakmp::Key::KeyHost>();
        }
        return key_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_address != nullptr)
    {
        _children["key-address"] = key_address;
    }

    if(key_host != nullptr)
    {
        _children["key-host"] = key_host;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-address" || name == "key-host")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::KeyAddress()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
        ,
    addr4_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container>())
    , addr6_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container>())
{
    addr4_container->parent = this;
    addr6_container->parent = this;

    yang_name = "key-address"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::~KeyAddress()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set
	|| (addr4_container !=  nullptr && addr4_container->has_data())
	|| (addr6_container !=  nullptr && addr6_container->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (addr4_container !=  nullptr && addr4_container->has_operation())
	|| (addr6_container !=  nullptr && addr6_container->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr4-container")
    {
        if(addr4_container == nullptr)
        {
            addr4_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container>();
        }
        return addr4_container;
    }

    if(child_yang_name == "addr6-container")
    {
        if(addr6_container == nullptr)
        {
            addr6_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container>();
        }
        return addr6_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr4_container != nullptr)
    {
        _children["addr4-container"] = addr4_container;
    }

    if(addr6_container != nullptr)
    {
        _children["addr6-container"] = addr6_container;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr4-container" || name == "addr6-container" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::Addr4Container()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "addr4-container"; yang_parent_name = "key-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::~Addr4Container()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr4-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Addr6Container()
    :
    address(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address>())
{
    address->parent = this;

    yang_name = "addr6-container"; yang_parent_name = "key-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::~Addr6Container()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr6-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "address"; yang_parent_name = "addr6-container"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/addr6-container/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyHost::KeyHost()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
        ,
    host_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyHost::HostContainer>())
{
    host_container->parent = this;

    yang_name = "key-host"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyHost::~KeyHost()
{
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set
	|| (host_container !=  nullptr && host_container->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (host_container !=  nullptr && host_container->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-container")
    {
        if(host_container == nullptr)
        {
            host_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyHost::HostContainer>();
        }
        return host_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_container != nullptr)
    {
        _children["host-container"] = host_container;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::KeyHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-container" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyHost::HostContainer::HostContainer()
    :
    hostname{YType::str, "hostname"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "host-container"; yang_parent_name = "key-host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyHost::HostContainer::~HostContainer()
{
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Key::KeyHost::HostContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyHost::HostContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{

    yang_name = "nat"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Nat::~Nat()
{
}

bool Native::Crypto::Isakmp::Nat::has_data() const
{
    if (is_presence_container) return true;
    return keepalive.is_set;
}

bool Native::Crypto::Isakmp::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Isakmp::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Peer()
    :
    ipv4_addr(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr>())
    , ipv6_addr(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr>())
    , hostname(this, {"name"})
{
    ipv4_addr->parent = this;
    ipv6_addr->parent = this;

    yang_name = "peer"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::~Peer()
{
}

bool Native::Crypto::Isakmp::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (ipv4_addr !=  nullptr && ipv4_addr->has_data())
	|| (ipv6_addr !=  nullptr && ipv6_addr->has_data());
}

bool Native::Crypto::Isakmp::Peer::has_operation() const
{
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv4_addr !=  nullptr && ipv4_addr->has_operation())
	|| (ipv6_addr !=  nullptr && ipv6_addr->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr")
    {
        if(ipv4_addr == nullptr)
        {
            ipv4_addr = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr>();
        }
        return ipv4_addr;
    }

    if(child_yang_name == "ipv6-addr")
    {
        if(ipv6_addr == nullptr)
        {
            ipv6_addr = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr>();
        }
        return ipv6_addr;
    }

    if(child_yang_name == "hostname")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname>();
        ent_->parent = this;
        hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_addr != nullptr)
    {
        _children["ipv4-addr"] = ipv4_addr;
    }

    if(ipv6_addr != nullptr)
    {
        _children["ipv6-addr"] = ipv6_addr;
    }

    count_ = 0;
    for (auto ent_ : hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Ipv4Addr()
    :
    address(this, {"ipv4"})
{

    yang_name = "ipv4-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
        ,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set>())
{
    set->parent = this;

    yang_name = "address"; yang_parent_name = "ipv4-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv4" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_data() const
{
    if (is_presence_container) return true;
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_mode != nullptr)
    {
        _children["aggressive-mode"] = aggressive_mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint>())
    , password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_data() const
{
    if (is_presence_container) return true;
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_endpoint != nullptr)
    {
        _children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Ipv6Addr()
    :
    address(this, {"ipv6"})
{

    yang_name = "ipv6-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::~Ipv6Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
        ,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set>())
{
    set->parent = this;

    yang_name = "address"; yang_parent_name = "ipv6-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(ipv6, "ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv6" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_data() const
{
    if (is_presence_container) return true;
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_mode != nullptr)
    {
        _children["aggressive-mode"] = aggressive_mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint>())
    , password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_data() const
{
    if (is_presence_container) return true;
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_endpoint != nullptr)
    {
        _children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Hostname()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
        ,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set>())
{
    set->parent = this;

    yang_name = "hostname"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Hostname::~Hostname()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "name" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "hostname"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_data() const
{
    if (is_presence_container) return true;
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_mode != nullptr)
    {
        _children["aggressive-mode"] = aggressive_mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint>())
    , password(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_data() const
{
    if (is_presence_container) return true;
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_endpoint != nullptr)
    {
        _children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Policy()
    :
    number{YType::uint32, "number"},
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::uint32, "lifetime"}
        ,
    default_(std::make_shared<Native::Crypto::Isakmp::Policy::Default>())
    , encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>())
{
    default_->parent = this;
    encryption->parent = this;

    yang_name = "policy"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Policy::~Policy()
{
}

bool Native::Crypto::Isakmp::Policy::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Policy::Default>();
        }
        return default_;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "encryption" || name == "number" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default::Default()
    :
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::empty, "lifetime"}
        ,
    encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Default::Encryption>())
{
    encryption->parent = this;

    yang_name = "default"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Policy::Default::~Default()
{
}

bool Native::Crypto::Isakmp::Policy::Default::has_data() const
{
    if (is_presence_container) return true;
    return authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Default::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
        ,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Policy::Default::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Default::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Default::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Default::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aes != nullptr)
    {
        _children["aes"] = aes;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
        ,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Policy::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aes != nullptr)
    {
        _children["aes"] = aes;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Profile()
    :
    name{YType::str, "name"},
    accounting{YType::str, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    qos_group{YType::uint16, "qos-group"},
    virtual_template{YType::uint16, "virtual-template"},
    vrf{YType::str, "vrf"}
        ,
    default_(std::make_shared<Native::Crypto::Isakmp::Profile::Default>())
    , ca(std::make_shared<Native::Crypto::Isakmp::Profile::Ca>())
    , client(std::make_shared<Native::Crypto::Isakmp::Profile::Client>())
    , initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>())
    , isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>())
    , keepalive(std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>())
    , local_address(std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress>())
    , match(std::make_shared<Native::Crypto::Isakmp::Profile::Match>())
    , self_identity(std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>())
{
    default_->parent = this;
    ca->parent = this;
    client->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    keepalive->parent = this;
    local_address->parent = this;
    match->parent = this;
    self_identity->parent = this;

    yang_name = "profile"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Profile::~Profile()
{
}

bool Native::Crypto::Isakmp::Profile::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Profile::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Client>();
        }
        return client;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(ca != nullptr)
    {
        _children["ca"] = ca;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(initiate != nullptr)
    {
        _children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        _children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        _children["self-identity"] = self_identity;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ca" || name == "client" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "local-address" || name == "match" || name == "self-identity" || name == "name" || name == "accounting" || name == "description" || name == "keyring" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Default()
    :
    accounting{YType::empty, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    local_address{YType::empty, "local-address"},
    qos_group{YType::empty, "qos-group"},
    virtual_template{YType::empty, "virtual-template"},
    vrf{YType::empty, "vrf"}
        ,
    ca(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Ca>())
    , client(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client>())
    , initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Initiate>())
    , isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_>())
    , keepalive(nullptr) // presence node
    , match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match>())
    , self_identity(nullptr) // presence node
{
    ca->parent = this;
    client->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    match->parent = this;

    yang_name = "default"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::~Default()
{
}

bool Native::Crypto::Isakmp::Profile::Default::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| local_address.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client>();
        }
        return client;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ca != nullptr)
    {
        _children["ca"] = ca;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(initiate != nullptr)
    {
        _children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        _children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        _children["self-identity"] = self_identity;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ca" || name == "client" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "match" || name == "self-identity" || name == "accounting" || name == "description" || name == "keyring" || name == "local-address" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Ca::Ca()
    :
    trust_point{YType::str, "trust-point"}
{

    yang_name = "ca"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Ca::~Ca()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Ca::has_data() const
{
    if (is_presence_container) return true;
    return trust_point.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Ca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_point.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_point.is_set || is_set(trust_point.yfilter)) leaf_name_data.push_back(trust_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-point")
    {
        trust_point = value;
        trust_point.value_namespace = name_space;
        trust_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-point")
    {
        trust_point.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust-point")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Client()
    :
    authentication(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Authentication>())
    , configuration(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Configuration>())
    , pki(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Pki>())
{
    authentication->parent = this;
    configuration->parent = this;
    pki->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (pki !=  nullptr && pki->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Client::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (pki !=  nullptr && pki->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Pki>();
        }
        return pki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(pki != nullptr)
    {
        _children["pki"] = pki;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "configuration" || name == "pki")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Authentication::Authentication()
    :
    list{YType::empty, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Configuration::Configuration()
    :
    address{YType::enumeration, "address"},
    group{YType::str, "group"}
{

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| group.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::Pki()
    :
    authorization(nullptr) // presence node
{

    yang_name = "pki"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::~Pki()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::Authorization()
{

    yang_name = "authorization"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Initiate::Initiate()
    :
    mode(nullptr) // presence node
{

    yang_name = "initiate"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Initiate::~Initiate()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Initiate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Initiate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Initiate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Initiate::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Initiate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::Mode()
{

    yang_name = "mode"; yang_parent_name = "initiate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::~Mode()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Isakmp_()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization>())
{
    authorization->parent = this;

    yang_name = "isakmp"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::~Isakmp_()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::Authorization()
    :
    list{YType::empty, "list"}
{

    yang_name = "authorization"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Keepalive::Keepalive()
{

    yang_name = "keepalive"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Match()
    :
    certificate{YType::str, "certificate"}
        ,
    identity(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity>())
{
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::~Match()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_data() const
{
    if (is_presence_container) return true;
    return certificate.is_set
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Identity()
    :
    group{YType::str, "group"}
        ,
    ipv4_address(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address>())
    , address(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address>())
    , host(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host>())
    , user_fqdn(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn>())
{
    ipv4_address->parent = this;
    address->parent = this;
    host->parent = this;
    user_fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::~Identity()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (user_fqdn !=  nullptr && user_fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (user_fqdn !=  nullptr && user_fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address>();
        }
        return ipv4_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address>();
        }
        return address;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host>();
        }
        return host;
    }

    if(child_yang_name == "user-fqdn")
    {
        if(user_fqdn == nullptr)
        {
            user_fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn>();
        }
        return user_fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_address != nullptr)
    {
        _children["ipv4-address"] = ipv4_address;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(user_fqdn != nullptr)
    {
        _children["user-fqdn"] = user_fqdn;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "address" || name == "host" || name == "user-fqdn" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv4-address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::~Ipv4Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::Host()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName>())
    , domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "host"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::~Host()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_data() const
{
    if (is_presence_container) return true;
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain_name != nullptr)
    {
        _children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        _children["domain-match"] = domain_match;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::UserFqdn()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName>())
    , domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "user-fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::~UserFqdn()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_data() const
{
    if (is_presence_container) return true;
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain_name != nullptr)
    {
        _children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        _children["domain-match"] = domain_match;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::SelfIdentity::SelfIdentity()
{

    yang_name = "self-identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::SelfIdentity::~SelfIdentity()
{
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self-identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::SelfIdentity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::SelfIdentity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Ca::Ca()
    :
    trust_point{YType::str, "trust-point"}
{

    yang_name = "ca"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Ca::~Ca()
{
}

bool Native::Crypto::Isakmp::Profile::Ca::has_data() const
{
    if (is_presence_container) return true;
    return trust_point.is_set;
}

bool Native::Crypto::Isakmp::Profile::Ca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_point.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_point.is_set || is_set(trust_point.yfilter)) leaf_name_data.push_back(trust_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-point")
    {
        trust_point = value;
        trust_point.value_namespace = name_space;
        trust_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-point")
    {
        trust_point.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust-point")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Client()
    :
    authentication(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Authentication>())
    , configuration(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Configuration>())
    , pki(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki>())
{
    authentication->parent = this;
    configuration->parent = this;
    pki->parent = this;

    yang_name = "client"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Profile::Client::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (pki !=  nullptr && pki->has_data());
}

bool Native::Crypto::Isakmp::Profile::Client::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (pki !=  nullptr && pki->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki>();
        }
        return pki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(pki != nullptr)
    {
        _children["pki"] = pki;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "configuration" || name == "pki")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Authentication::Authentication()
    :
    list{YType::str, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Configuration::Configuration()
    :
    address{YType::enumeration, "address"},
    group{YType::str, "group"}
{

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| group.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Pki::Pki()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki::Authorization>())
{
    authorization->parent = this;

    yang_name = "pki"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::Pki::~Pki()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Client::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Client::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::Authorization()
    :
    list{YType::str, "list"}
{

    yang_name = "authorization"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Initiate::Initiate()
    :
    mode(nullptr) // presence node
{

    yang_name = "initiate"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Initiate::~Initiate()
{
}

bool Native::Crypto::Isakmp::Profile::Initiate::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Isakmp::Profile::Initiate::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Initiate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Initiate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Initiate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Isakmp::Profile::Initiate::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Initiate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Initiate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Initiate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Initiate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Initiate::Mode::Mode()
    :
    aggressive{YType::empty, "aggressive"}
{

    yang_name = "mode"; yang_parent_name = "initiate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Initiate::Mode::~Mode()
{
}

bool Native::Crypto::Isakmp::Profile::Initiate::Mode::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set;
}

bool Native::Crypto::Isakmp::Profile::Initiate::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Initiate::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Initiate::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Initiate::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Initiate::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Initiate::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Initiate::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Initiate::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Isakmp_::Isakmp_()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_::Authorization>())
{
    authorization->parent = this;

    yang_name = "isakmp"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Isakmp_::~Isakmp_()
{
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Isakmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Isakmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Isakmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Isakmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Isakmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Isakmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::Authorization()
    :
    list{YType::str, "list"}
{

    yang_name = "authorization"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Keepalive::Keepalive()
    :
    number{YType::uint16, "number"},
    retry{YType::uint8, "retry"}
{

    yang_name = "keepalive"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Profile::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| retry.is_set;
}

bool Native::Crypto::Isakmp::Profile::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(retry.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "retry")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::LocalAddress::LocalAddress()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    bind_ip_address(std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress>())
    , atm_subinterface(std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface>())
{
    bind_ip_address->parent = this;
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "local-address"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::LocalAddress::~LocalAddress()
{
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bind-ip-address")
    {
        if(bind_ip_address == nullptr)
        {
            bind_ip_address = std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress>();
        }
        return bind_ip_address;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bind_ip_address != nullptr)
    {
        _children["bind-ip-address"] = bind_ip_address;
    }

    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bind-ip-address" || name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::BindIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    vrf{YType::str, "vrf"}
{

    yang_name = "bind-ip-address"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::~BindIpAddress()
{
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::BindIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::LocalAddress::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Match()
    :
    certificate{YType::str, "certificate"}
        ,
    identity(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity>())
{
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::~Match()
{
}

bool Native::Crypto::Isakmp::Profile::Match::has_data() const
{
    if (is_presence_container) return true;
    return certificate.is_set
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Identity()
    :
    group{YType::str, "group"}
        ,
    address(this, {"ip", "mask"})
    , ipv6_address(this, {"ipv6"})
    , host(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host>())
    , user_fqdn(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn>())
{
    host->parent = this;
    user_fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::~Identity()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_address.len(); index++)
    {
        if(ipv6_address[index]->has_data())
            return true;
    }
    return group.is_set
	|| (host !=  nullptr && host->has_data())
	|| (user_fqdn !=  nullptr && user_fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_address.len(); index++)
    {
        if(ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (host !=  nullptr && host->has_operation())
	|| (user_fqdn !=  nullptr && user_fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-address")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address>();
        ent_->parent = this;
        ipv6_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host>();
        }
        return host;
    }

    if(child_yang_name == "user-fqdn")
    {
        if(user_fqdn == nullptr)
        {
            user_fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn>();
        }
        return user_fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(user_fqdn != nullptr)
    {
        _children["user-fqdn"] = user_fqdn;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ipv6-address" || name == "host" || name == "user-fqdn" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Address::Address()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Address::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mask.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::Ipv6Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv6-address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::~Ipv6Address()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    ADD_KEY_TOKEN(ipv6, "ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::Host()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName>())
    , domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "host"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::~Host()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_data() const
{
    if (is_presence_container) return true;
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain_name != nullptr)
    {
        _children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        _children["domain-match"] = domain_match;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::UserFqdn()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName>())
    , domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "user-fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::~UserFqdn()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_data() const
{
    if (is_presence_container) return true;
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain_name != nullptr)
    {
        _children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        _children["domain-match"] = domain_match;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::SelfIdentity()
    :
    user_fqdn{YType::str, "user-fqdn"}
        ,
    address(nullptr) // presence node
    , fqdn(nullptr) // presence node
{

    yang_name = "self-identity"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::SelfIdentity::~SelfIdentity()
{
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::has_data() const
{
    if (is_presence_container) return true;
    return user_fqdn.is_set
	|| (address !=  nullptr && address->has_data())
	|| (fqdn !=  nullptr && fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_fqdn.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (fqdn !=  nullptr && fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::SelfIdentity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self-identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::SelfIdentity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::SelfIdentity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity::Address>();
        }
        return address;
    }

    if(child_yang_name == "fqdn")
    {
        if(fqdn == nullptr)
        {
            fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn>();
        }
        return fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::SelfIdentity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(fqdn != nullptr)
    {
        _children["fqdn"] = fqdn;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "fqdn" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Address::Address()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "self-identity"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set;
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::Fqdn()
    :
    id{YType::str, "id"}
{

    yang_name = "fqdn"; yang_parent_name = "self-identity"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Crypto::Isakmp::Xauth::Xauth()
    :
    timeout{YType::uint8, "timeout"}
{

    yang_name = "xauth"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Xauth::~Xauth()
{
}

bool Native::Crypto::Isakmp::Xauth::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Crypto::Isakmp::Xauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Isakmp::Xauth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Xauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Xauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Xauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Xauth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Xauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Xauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Xauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::Logging::Logging()
    :
    ikev2{YType::empty, "ikev2"},
    session{YType::empty, "session"}
        ,
    ezvpn(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Logging::~Logging()
{
}

bool Native::Crypto::Logging::has_data() const
{
    if (is_presence_container) return true;
    return ikev2.is_set
	|| session.is_set
	|| (ezvpn !=  nullptr && ezvpn->has_data());
}

bool Native::Crypto::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ikev2.yfilter)
	|| ydk::is_set(session.yfilter)
	|| (ezvpn !=  nullptr && ezvpn->has_operation());
}

std::string Native::Crypto::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ikev2.is_set || is_set(ikev2.yfilter)) leaf_name_data.push_back(ikev2.get_name_leafdata());
    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ezvpn")
    {
        if(ezvpn == nullptr)
        {
            ezvpn = std::make_shared<Native::Crypto::Logging::Ezvpn>();
        }
        return ezvpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ezvpn != nullptr)
    {
        _children["ezvpn"] = ezvpn;
    }

    return _children;
}

void Native::Crypto::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ikev2")
    {
        ikev2 = value;
        ikev2.value_namespace = name_space;
        ikev2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ikev2")
    {
        ikev2.yfilter = yfilter;
    }
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
}

bool Native::Crypto::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ezvpn" || name == "ikev2" || name == "session")
        return true;
    return false;
}

Native::Crypto::Logging::Ezvpn::Ezvpn()
    :
    group{YType::str, "group"}
{

    yang_name = "ezvpn"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Logging::Ezvpn::~Ezvpn()
{
}

bool Native::Crypto::Logging::Ezvpn::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Crypto::Logging::Ezvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Logging::Ezvpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Logging::Ezvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ezvpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Logging::Ezvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Logging::Ezvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Logging::Ezvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Logging::Ezvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Logging::Ezvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Logging::Ezvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::CryptoMap::CryptoMap()
    :
    map(this, {"name", "sequence_number"})
{

    yang_name = "crypto-map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::CryptoMap::~CryptoMap()
{
}

bool Native::Crypto::CryptoMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::CryptoMap::has_operation() const
{
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        auto ent_ = std::make_shared<Native::Crypto::CryptoMap::Map>();
        ent_->parent = this;
        map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::CryptoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Map()
    :
    name{YType::str, "name"},
    sequence_number{YType::uint16, "sequence-number"},
    ipv6{YType::empty, "ipv6"},
    keying{YType::enumeration, "keying"},
    dynamic{YType::str, "dynamic"},
    profile{YType::str, "profile"},
    description{YType::str, "description"}
        ,
    default_(std::make_shared<Native::Crypto::CryptoMap::Map::Default>())
    , dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>())
    , match(std::make_shared<Native::Crypto::CryptoMap::Map::Match>())
    , qos(std::make_shared<Native::Crypto::CryptoMap::Map::Qos>())
    , reverse_route(nullptr) // presence node
    , set(std::make_shared<Native::Crypto::CryptoMap::Map::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "map"; yang_parent_name = "crypto-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::CryptoMap::Map::~Map()
{
}

bool Native::Crypto::CryptoMap::Map::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| sequence_number.is_set
	|| ipv6.is_set
	|| keying.is_set
	|| dynamic.is_set
	|| profile.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(keying.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:crypto-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(sequence_number, "sequence-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (keying.is_set || is_set(keying.yfilter)) leaf_name_data.push_back(keying.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::CryptoMap::Map::Default>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        _children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        _children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::CryptoMap::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keying")
    {
        keying = value;
        keying.value_namespace = name_space;
        keying.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "keying")
    {
        keying.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "name" || name == "sequence-number" || name == "ipv6" || name == "keying" || name == "dynamic" || name == "profile" || name == "description")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Default()
    :
    description{YType::empty, "description"}
        ,
    dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Dialer>())
    , match(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Match>())
    , qos(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Qos>())
    , reverse_route(nullptr) // presence node
    , set(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set>())
{
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::~Default()
{
}

bool Native::Crypto::CryptoMap::Map::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dialer != nullptr)
    {
        _children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        _children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "description")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Dialer::has_data() const
{
    if (is_presence_container) return true;
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Match::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Qos::has_data() const
{
    if (is_presence_container) return true;
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::CryptoMap::Map::Default::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default::ReverseRoute::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
        ,
    pfs(nullptr) // presence node
    , reverse_route(nullptr) // presence node
    , security_association(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Set::~Set()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfs != nullptr)
    {
        _children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        _children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        _children["security-association"] = security_association;
    }

    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::Pfs::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
        ,
    dummy(nullptr) // presence node
    , idle_time_container(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer>())
    , lifetime(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime>())
    , replay(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::has_data() const
{
    if (is_presence_container) return true;
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dummy != nullptr)
    {
        _children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        _children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::empty, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    if (is_presence_container) return true;
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_data() const
{
    if (is_presence_container) return true;
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Match::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Qos::has_data() const
{
    if (is_presence_container) return true;
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
        ,
    remote_peer_conatiner(std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_peer_conatiner != nullptr)
    {
        _children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return _children;
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer-conatiner" || name == "static")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::RemotePeerConatiner()
    :
    remote_peer{YType::str, "remote-peer"},
    gateway{YType::empty, "gateway"},
    static_{YType::empty, "static"}
{

    yang_name = "remote-peer-conatiner"; yang_parent_name = "reverse-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::~RemotePeerConatiner()
{
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_data() const
{
    if (is_presence_container) return true;
    return remote_peer.is_set
	|| gateway.is_set
	|| static_.is_set;
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_peer.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-peer-conatiner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_peer.is_set || is_set(remote_peer.yfilter)) leaf_name_data.push_back(remote_peer.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-peer")
    {
        remote_peer = value;
        remote_peer.value_namespace = name_space;
        remote_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-peer")
    {
        remote_peer.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer" || name == "gateway" || name == "static")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"}
        ,
    peer(std::make_shared<Native::Crypto::CryptoMap::Map::Set::Peer>())
    , pfs(nullptr) // presence node
    , reverse_route(std::make_shared<Native::Crypto::CryptoMap::Map::Set::ReverseRoute>())
    , security_association(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation>())
{
    peer->parent = this;
    reverse_route->parent = this;
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::~Set()
{
}

bool Native::Crypto::CryptoMap::Map::Set::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::CryptoMap::Map::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::CryptoMap::Map::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::CryptoMap::Map::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        _children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        _children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        _children["security-association"] = security_association;
    }

    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

void Native::Crypto::CryptoMap::Map::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::Peer::~Peer()
{
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::CryptoMap::Map::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"},
    gateway{YType::str, "gateway"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_data() const
{
    if (is_presence_container) return true;
    return distance.is_set
	|| tag.is_set
	|| gateway.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(gateway.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag" || name == "gateway")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
        ,
    dummy(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy>())
    , idle_time_container(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer>())
    , lifetime(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime>())
    , replay(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_data() const
{
    if (is_presence_container) return true;
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dummy != nullptr)
    {
        _children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        _children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_data() const
{
    if (is_presence_container) return true;
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::uint32, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    if (is_presence_container) return true;
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::MapIpv6Gdoi()
    :
    map(this, {"name"})
{

    yang_name = "map-ipv6-gdoi"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::MapIpv6Gdoi::~MapIpv6Gdoi()
{
}

bool Native::Crypto::MapIpv6Gdoi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::MapIpv6Gdoi::has_operation() const
{
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapIpv6Gdoi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-ipv6-gdoi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapIpv6Gdoi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        auto ent_ = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map>();
        ent_->parent = this;
        map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapIpv6Gdoi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::MapIpv6Gdoi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapIpv6Gdoi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapIpv6Gdoi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Map()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    gdoi{YType::enumeration, "gdoi"},
    activate{YType::empty, "activate"}
        ,
    default_(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default>())
    , match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Match>())
{
    default_->parent = this;
    match->parent = this;

    yang_name = "map"; yang_parent_name = "map-ipv6-gdoi"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::MapIpv6Gdoi::Map::~Map()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ipv6.is_set
	|| gdoi.is_set
	|| activate.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-ipv6-gdoi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapIpv6Gdoi::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapIpv6Gdoi::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapIpv6Gdoi::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Crypto::MapIpv6Gdoi::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "name" || name == "ipv6" || name == "gdoi" || name == "activate")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default::Default()
    :
    activate{YType::empty, "activate"}
        ,
    match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default::Match>())
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapIpv6Gdoi::Map::Default::~Default()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::has_data() const
{
    if (is_presence_container) return true;
    return activate.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activate.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapIpv6Gdoi::Map::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "activate")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapIpv6Gdoi::Map::Default::Match::~Match()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::Match::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapIpv6Gdoi::Map::Match::~Match()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapIpv6Gdoi::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapIpv6Gdoi::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapClient::MapClient()
    :
    map(this, {"name"})
{

    yang_name = "map-client"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::MapClient::~MapClient()
{
}

bool Native::Crypto::MapClient::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::MapClient::has_operation() const
{
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::MapClient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        auto ent_ = std::make_shared<Native::Crypto::MapClient::Map>();
        ent_->parent = this;
        map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::MapClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Map()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    isakmp_profile{YType::str, "isakmp-profile"},
    local_address{YType::str, "local-address"}
        ,
    client(std::make_shared<Native::Crypto::MapClient::Map::Client>())
    , isakmp(std::make_shared<Native::Crypto::MapClient::Map::Isakmp>())
    , redundancy(std::make_shared<Native::Crypto::MapClient::Map::Redundancy>())
{
    client->parent = this;
    isakmp->parent = this;
    redundancy->parent = this;

    yang_name = "map"; yang_parent_name = "map-client"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::MapClient::Map::~Map()
{
}

bool Native::Crypto::MapClient::Map::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ipv6.is_set
	|| isakmp_profile.is_set
	|| local_address.is_set
	|| (client !=  nullptr && client->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::Crypto::MapClient::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Crypto::MapClient::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapClient::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::MapClient::Map::Client>();
        }
        return client;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::MapClient::Map::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::MapClient::Map::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(isakmp != nullptr)
    {
        _children["isakmp"] = isakmp;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void Native::Crypto::MapClient::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "isakmp" || name == "redundancy" || name == "name" || name == "ipv6" || name == "isakmp-profile" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Client()
    :
    accounting(std::make_shared<Native::Crypto::MapClient::Map::Client::Accounting>())
    , authentication(std::make_shared<Native::Crypto::MapClient::Map::Client::Authentication>())
    , configuration(std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration>())
{
    accounting->parent = this;
    authentication->parent = this;
    configuration->parent = this;

    yang_name = "client"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Client::~Client()
{
}

bool Native::Crypto::MapClient::Map::Client::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::Crypto::MapClient::Map::Client::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::Crypto::MapClient::Map::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Crypto::MapClient::Map::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::MapClient::Map::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    return _children;
}

void Native::Crypto::MapClient::Map::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "configuration")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Accounting::Accounting()
    :
    list{YType::str, "list"}
{

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Client::Accounting::~Accounting()
{
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::MapClient::Map::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Authentication::Authentication()
    :
    list{YType::str, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::MapClient::Map::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Configuration::Configuration()
    :
    address(std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration::Address>())
{
    address->parent = this;

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::MapClient::Map::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Configuration::Address::Address()
    :
    initiate{YType::empty, "initiate"},
    respond{YType::empty, "respond"}
{

    yang_name = "address"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Client::Configuration::Address::~Address()
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_data() const
{
    if (is_presence_container) return true;
    return initiate.is_set
	|| respond.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initiate.yfilter)
	|| ydk::is_set(respond.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Configuration::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initiate.is_set || is_set(initiate.yfilter)) leaf_name_data.push_back(initiate.get_name_leafdata());
    if (respond.is_set || is_set(respond.yfilter)) leaf_name_data.push_back(respond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Client::Configuration::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Client::Configuration::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::MapClient::Map::Client::Configuration::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initiate")
    {
        initiate = value;
        initiate.value_namespace = name_space;
        initiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respond")
    {
        respond = value;
        respond.value_namespace = name_space;
        respond.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Configuration::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initiate")
    {
        initiate.yfilter = yfilter;
    }
    if(value_path == "respond")
    {
        respond.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiate" || name == "respond")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Isakmp::Isakmp()
    :
    authorization{YType::empty, "authorization"},
    list{YType::str, "list"}
{

    yang_name = "isakmp"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Isakmp::~Isakmp()
{
}

bool Native::Crypto::MapClient::Map::Isakmp::has_data() const
{
    if (is_presence_container) return true;
    return authorization.is_set
	|| list.is_set;
}

bool Native::Crypto::MapClient::Map::Isakmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::MapClient::Map::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Redundancy::Redundancy()
    :
    replay_interval(std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>())
{
    replay_interval->parent = this;

    yang_name = "redundancy"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Redundancy::~Redundancy()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return (replay_interval !=  nullptr && replay_interval->has_data());
}

bool Native::Crypto::MapClient::Map::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (replay_interval !=  nullptr && replay_interval->has_operation());
}

std::string Native::Crypto::MapClient::Map::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-interval")
    {
        if(replay_interval == nullptr)
        {
            replay_interval = std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>();
        }
        return replay_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replay_interval != nullptr)
    {
        _children["replay-interval"] = replay_interval;
    }

    return _children;
}

void Native::Crypto::MapClient::Map::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-interval")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::ReplayInterval()
    :
    inbound{YType::uint32, "inbound"},
    outbound{YType::uint32, "outbound"}
{

    yang_name = "replay-interval"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::~ReplayInterval()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_data() const
{
    if (is_presence_container) return true;
    return inbound.is_set
	|| outbound.is_set;
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

Native::Crypto::Mib::Mib()
    :
    ipsec(std::make_shared<Native::Crypto::Mib::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "mib"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Mib::~Mib()
{
}

bool Native::Crypto::Mib::has_data() const
{
    if (is_presence_container) return true;
    return (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Mib::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Crypto::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Ipsec()
    :
    flowmib(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>())
{
    flowmib->parent = this;

    yang_name = "ipsec"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Mib::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Mib::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return (flowmib !=  nullptr && flowmib->has_data());
}

bool Native::Crypto::Mib::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| (flowmib !=  nullptr && flowmib->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Mib::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowmib")
    {
        if(flowmib == nullptr)
        {
            flowmib = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>();
        }
        return flowmib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Mib::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flowmib != nullptr)
    {
        _children["flowmib"] = flowmib;
    }

    return _children;
}

void Native::Crypto::Mib::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowmib")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::Flowmib()
    :
    history(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>())
{
    history->parent = this;

    yang_name = "flowmib"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Mib::Ipsec::Flowmib::~Flowmib()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Mib::Ipsec::Flowmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Mib::Ipsec::Flowmib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::History()
    :
    failure(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>())
    , tunnel(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>())
{
    failure->parent = this;
    tunnel->parent = this;

    yang_name = "history"; yang_parent_name = "flowmib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Mib::Ipsec::Flowmib::History::~History()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_data() const
{
    if (is_presence_container) return true;
    return (failure !=  nullptr && failure->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(failure != nullptr)
    {
        _children["failure"] = failure;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "tunnel")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::Failure()
    :
    size{YType::uint8, "size"}
{

    yang_name = "failure"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::~Failure()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::Tunnel()
    :
    size{YType::uint8, "size"}
{

    yang_name = "tunnel"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::~Tunnel()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Pki::Pki()
    :
    authenticate{YType::str, "authenticate"},
    enroll{YType::str, "enroll"}
        ,
    trustpoint(this, {"id"})
    , certificate(std::make_shared<Native::Crypto::Pki::Certificate>())
    , crl(std::make_shared<Native::Crypto::Pki::Crl>())
    , export_(this, {"name"})
    , import(this, {"name"})
    , profile(std::make_shared<Native::Crypto::Pki::Profile>())
    , server(std::make_shared<Native::Crypto::Pki::Server>())
    , pki_server_no_submode(std::make_shared<Native::Crypto::Pki::PkiServerNoSubmode>())
    , token(std::make_shared<Native::Crypto::Pki::Token>())
    , trustpool(std::make_shared<Native::Crypto::Pki::Trustpool>())
    , default_(std::make_shared<Native::Crypto::Pki::Default>())
{
    certificate->parent = this;
    crl->parent = this;
    profile->parent = this;
    server->parent = this;
    pki_server_no_submode->parent = this;
    token->parent = this;
    trustpool->parent = this;
    default_->parent = this;

    yang_name = "pki"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Pki::~Pki()
{
}

bool Native::Crypto::Pki::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trustpoint.len(); index++)
    {
        if(trustpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return authenticate.is_set
	|| enroll.is_set
	|| (certificate !=  nullptr && certificate->has_data())
	|| (crl !=  nullptr && crl->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (pki_server_no_submode !=  nullptr && pki_server_no_submode->has_data())
	|| (token !=  nullptr && token->has_data())
	|| (trustpool !=  nullptr && trustpool->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Pki::has_operation() const
{
    for (std::size_t index=0; index<trustpoint.len(); index++)
    {
        if(trustpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(enroll.yfilter)
	|| (certificate !=  nullptr && certificate->has_operation())
	|| (crl !=  nullptr && crl->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (pki_server_no_submode !=  nullptr && pki_server_no_submode->has_operation())
	|| (token !=  nullptr && token->has_operation())
	|| (trustpool !=  nullptr && trustpool->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Pki::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (enroll.is_set || is_set(enroll.yfilter)) leaf_name_data.push_back(enroll.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trustpoint")
    {
        auto ent_ = std::make_shared<Native::Crypto::Pki::Trustpoint>();
        ent_->parent = this;
        trustpoint.append(ent_);
        return ent_;
    }

    if(child_yang_name == "certificate")
    {
        if(certificate == nullptr)
        {
            certificate = std::make_shared<Native::Crypto::Pki::Certificate>();
        }
        return certificate;
    }

    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Pki::Crl>();
        }
        return crl;
    }

    if(child_yang_name == "export")
    {
        auto ent_ = std::make_shared<Native::Crypto::Pki::Export>();
        ent_->parent = this;
        export_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        auto ent_ = std::make_shared<Native::Crypto::Pki::Import>();
        ent_->parent = this;
        import.append(ent_);
        return ent_;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Crypto::Pki::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Pki::Server>();
        }
        return server;
    }

    if(child_yang_name == "pki-server-no-submode")
    {
        if(pki_server_no_submode == nullptr)
        {
            pki_server_no_submode = std::make_shared<Native::Crypto::Pki::PkiServerNoSubmode>();
        }
        return pki_server_no_submode;
    }

    if(child_yang_name == "token")
    {
        if(token == nullptr)
        {
            token = std::make_shared<Native::Crypto::Pki::Token>();
        }
        return token;
    }

    if(child_yang_name == "trustpool")
    {
        if(trustpool == nullptr)
        {
            trustpool = std::make_shared<Native::Crypto::Pki::Trustpool>();
        }
        return trustpool;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trustpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(certificate != nullptr)
    {
        _children["certificate"] = certificate;
    }

    if(crl != nullptr)
    {
        _children["crl"] = crl;
    }

    count_ = 0;
    for (auto ent_ : export_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : import.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(profile != nullptr)
    {
        _children["profile"] = profile;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(pki_server_no_submode != nullptr)
    {
        _children["pki-server-no-submode"] = pki_server_no_submode;
    }

    if(token != nullptr)
    {
        _children["token"] = token;
    }

    if(trustpool != nullptr)
    {
        _children["trustpool"] = trustpool;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enroll")
    {
        enroll = value;
        enroll.value_namespace = name_space;
        enroll.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "enroll")
    {
        enroll.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint" || name == "certificate" || name == "crl" || name == "export" || name == "import" || name == "profile" || name == "server" || name == "pki-server-no-submode" || name == "token" || name == "trustpool" || name == "default" || name == "authenticate" || name == "enroll")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::cisco_integrated_client_firewall {0, "cisco-integrated-client-firewall"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::cisco_security_agent {1, "cisco-security-agent"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::zonelabs_zonealarm {2, "zonelabs-zonealarm"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::zonelabs_zonealarmpro {3, "zonelabs-zonealarmpro"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::cisco_integrated_client_firewall {0, "cisco-integrated-client-firewall"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::cisco_security_agent {1, "cisco-security-agent"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::zonelabs_zonealarm {2, "zonelabs-zonealarm"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::zonelabs_zonealarmpro {3, "zonelabs-zonealarmpro"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Crypto::Isakmp::Keepalive::Send::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Isakmp::Keepalive::Send::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyAddress::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyAddress::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyHost::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyHost::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default::Client::Configuration::Address::respond {1, "respond"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::respond {1, "respond"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_isakmp {0, "ipsec-isakmp"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_manual {1, "ipsec-manual"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::gdoi {2, "gdoi"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ckm {3, "ckm"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::MapIpv6Gdoi::Map::Gdoi::fail_close {0, "fail-close"};


}
}

