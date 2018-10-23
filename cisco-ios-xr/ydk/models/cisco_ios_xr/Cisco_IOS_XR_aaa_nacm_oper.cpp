
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_nacm_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_nacm_oper {

AaaNacm::AaaNacm()
    :
    counters(std::make_shared<AaaNacm::Counters>())
    , users(std::make_shared<AaaNacm::Users>())
    , summary(std::make_shared<AaaNacm::Summary>())
    , rules(std::make_shared<AaaNacm::Rules>())
    , groups(std::make_shared<AaaNacm::Groups>())
{
    counters->parent = this;
    users->parent = this;
    summary->parent = this;
    rules->parent = this;
    groups->parent = this;

    yang_name = "aaa-nacm"; yang_parent_name = "Cisco-IOS-XR-aaa-nacm-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

AaaNacm::~AaaNacm()
{
}

bool AaaNacm::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data())
	|| (users !=  nullptr && users->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (rules !=  nullptr && rules->has_data())
	|| (groups !=  nullptr && groups->has_data());
}

bool AaaNacm::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (users !=  nullptr && users->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (rules !=  nullptr && rules->has_operation())
	|| (groups !=  nullptr && groups->has_operation());
}

std::string AaaNacm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<AaaNacm::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "users")
    {
        if(users == nullptr)
        {
            users = std::make_shared<AaaNacm::Users>();
        }
        return users;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<AaaNacm::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<AaaNacm::Rules>();
        }
        return rules;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<AaaNacm::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(users != nullptr)
    {
        _children["users"] = users;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(rules != nullptr)
    {
        _children["rules"] = rules;
    }

    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    return _children;
}

void AaaNacm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AaaNacm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> AaaNacm::clone_ptr() const
{
    return std::make_shared<AaaNacm>();
}

std::string AaaNacm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AaaNacm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AaaNacm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AaaNacm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AaaNacm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "users" || name == "summary" || name == "rules" || name == "groups")
        return true;
    return false;
}

AaaNacm::Counters::Counters()
    :
    denied_operations{YType::int32, "denied-operations"},
    denied_data_writes{YType::int32, "denied-data-writes"},
    denied_notifications{YType::int32, "denied-notifications"}
{

    yang_name = "counters"; yang_parent_name = "aaa-nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Counters::~Counters()
{
}

bool AaaNacm::Counters::has_data() const
{
    if (is_presence_container) return true;
    return denied_operations.is_set
	|| denied_data_writes.is_set
	|| denied_notifications.is_set;
}

bool AaaNacm::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(denied_operations.yfilter)
	|| ydk::is_set(denied_data_writes.yfilter)
	|| ydk::is_set(denied_notifications.yfilter);
}

std::string AaaNacm::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (denied_operations.is_set || is_set(denied_operations.yfilter)) leaf_name_data.push_back(denied_operations.get_name_leafdata());
    if (denied_data_writes.is_set || is_set(denied_data_writes.yfilter)) leaf_name_data.push_back(denied_data_writes.get_name_leafdata());
    if (denied_notifications.is_set || is_set(denied_notifications.yfilter)) leaf_name_data.push_back(denied_notifications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaNacm::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "denied-operations")
    {
        denied_operations = value;
        denied_operations.value_namespace = name_space;
        denied_operations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-data-writes")
    {
        denied_data_writes = value;
        denied_data_writes.value_namespace = name_space;
        denied_data_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-notifications")
    {
        denied_notifications = value;
        denied_notifications.value_namespace = name_space;
        denied_notifications.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "denied-operations")
    {
        denied_operations.yfilter = yfilter;
    }
    if(value_path == "denied-data-writes")
    {
        denied_data_writes.yfilter = yfilter;
    }
    if(value_path == "denied-notifications")
    {
        denied_notifications.yfilter = yfilter;
    }
}

bool AaaNacm::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "denied-operations" || name == "denied-data-writes" || name == "denied-notifications")
        return true;
    return false;
}

AaaNacm::Users::Users()
    :
    user(this, {"user"})
{

    yang_name = "users"; yang_parent_name = "aaa-nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Users::~Users()
{
}

bool AaaNacm::Users::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool AaaNacm::Users::has_operation() const
{
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AaaNacm::Users::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Users::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        auto ent_ = std::make_shared<AaaNacm::Users::User>();
        ent_->parent = this;
        user.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Users::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaNacm::Users::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AaaNacm::Users::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AaaNacm::Users::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

AaaNacm::Users::User::User()
    :
    user{YType::str, "user"},
    user_name{YType::str, "user-name"}
        ,
    group_name(this, {})
{

    yang_name = "user"; yang_parent_name = "users"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Users::User::~User()
{
}

bool AaaNacm::Users::User::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_name.len(); index++)
    {
        if(group_name[index]->has_data())
            return true;
    }
    return user.is_set
	|| user_name.is_set;
}

bool AaaNacm::Users::User::has_operation() const
{
    for (std::size_t index=0; index<group_name.len(); index++)
    {
        if(group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(user_name.yfilter);
}

std::string AaaNacm::Users::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/users/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    ADD_KEY_TOKEN(user, "user");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Users::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-name")
    {
        auto ent_ = std::make_shared<AaaNacm::Users::User::GroupName>();
        ent_->parent = this;
        group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Users::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaNacm::Users::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Users::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
}

bool AaaNacm::Users::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "user" || name == "user-name")
        return true;
    return false;
}

AaaNacm::Users::User::GroupName::GroupName()
    :
    name{YType::str, "name"}
{

    yang_name = "group-name"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

AaaNacm::Users::User::GroupName::~GroupName()
{
}

bool AaaNacm::Users::User::GroupName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool AaaNacm::Users::User::GroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string AaaNacm::Users::User::GroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Users::User::GroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Users::User::GroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Users::User::GroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaNacm::Users::User::GroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Users::User::GroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool AaaNacm::Users::User::GroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

AaaNacm::Summary::Summary()
    :
    groups{YType::int32, "groups"},
    users{YType::int32, "users"},
    rulelist{YType::int32, "rulelist"},
    rules{YType::int32, "rules"},
    read_default{YType::str, "read-default"},
    write_default{YType::str, "write-default"},
    exec_default{YType::str, "exec-default"},
    enable_nacm{YType::str, "enable-nacm"},
    enable_external_groups{YType::str, "enable-external-groups"}
{

    yang_name = "summary"; yang_parent_name = "aaa-nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Summary::~Summary()
{
}

bool AaaNacm::Summary::has_data() const
{
    if (is_presence_container) return true;
    return groups.is_set
	|| users.is_set
	|| rulelist.is_set
	|| rules.is_set
	|| read_default.is_set
	|| write_default.is_set
	|| exec_default.is_set
	|| enable_nacm.is_set
	|| enable_external_groups.is_set;
}

bool AaaNacm::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(users.yfilter)
	|| ydk::is_set(rulelist.yfilter)
	|| ydk::is_set(rules.yfilter)
	|| ydk::is_set(read_default.yfilter)
	|| ydk::is_set(write_default.yfilter)
	|| ydk::is_set(exec_default.yfilter)
	|| ydk::is_set(enable_nacm.yfilter)
	|| ydk::is_set(enable_external_groups.yfilter);
}

std::string AaaNacm::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (users.is_set || is_set(users.yfilter)) leaf_name_data.push_back(users.get_name_leafdata());
    if (rulelist.is_set || is_set(rulelist.yfilter)) leaf_name_data.push_back(rulelist.get_name_leafdata());
    if (rules.is_set || is_set(rules.yfilter)) leaf_name_data.push_back(rules.get_name_leafdata());
    if (read_default.is_set || is_set(read_default.yfilter)) leaf_name_data.push_back(read_default.get_name_leafdata());
    if (write_default.is_set || is_set(write_default.yfilter)) leaf_name_data.push_back(write_default.get_name_leafdata());
    if (exec_default.is_set || is_set(exec_default.yfilter)) leaf_name_data.push_back(exec_default.get_name_leafdata());
    if (enable_nacm.is_set || is_set(enable_nacm.yfilter)) leaf_name_data.push_back(enable_nacm.get_name_leafdata());
    if (enable_external_groups.is_set || is_set(enable_external_groups.yfilter)) leaf_name_data.push_back(enable_external_groups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaNacm::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "users")
    {
        users = value;
        users.value_namespace = name_space;
        users.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rulelist")
    {
        rulelist = value;
        rulelist.value_namespace = name_space;
        rulelist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rules")
    {
        rules = value;
        rules.value_namespace = name_space;
        rules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-default")
    {
        read_default = value;
        read_default.value_namespace = name_space;
        read_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-default")
    {
        write_default = value;
        write_default.value_namespace = name_space;
        write_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-default")
    {
        exec_default = value;
        exec_default.value_namespace = name_space;
        exec_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-nacm")
    {
        enable_nacm = value;
        enable_nacm.value_namespace = name_space;
        enable_nacm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-external-groups")
    {
        enable_external_groups = value;
        enable_external_groups.value_namespace = name_space;
        enable_external_groups.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "users")
    {
        users.yfilter = yfilter;
    }
    if(value_path == "rulelist")
    {
        rulelist.yfilter = yfilter;
    }
    if(value_path == "rules")
    {
        rules.yfilter = yfilter;
    }
    if(value_path == "read-default")
    {
        read_default.yfilter = yfilter;
    }
    if(value_path == "write-default")
    {
        write_default.yfilter = yfilter;
    }
    if(value_path == "exec-default")
    {
        exec_default.yfilter = yfilter;
    }
    if(value_path == "enable-nacm")
    {
        enable_nacm.yfilter = yfilter;
    }
    if(value_path == "enable-external-groups")
    {
        enable_external_groups.yfilter = yfilter;
    }
}

bool AaaNacm::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "users" || name == "rulelist" || name == "rules" || name == "read-default" || name == "write-default" || name == "exec-default" || name == "enable-nacm" || name == "enable-external-groups")
        return true;
    return false;
}

AaaNacm::Rules::Rules()
    :
    rule(this, {})
{

    yang_name = "rules"; yang_parent_name = "aaa-nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Rules::~Rules()
{
}

bool AaaNacm::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool AaaNacm::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AaaNacm::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        auto ent_ = std::make_shared<AaaNacm::Rules::Rule>();
        ent_->parent = this;
        rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaNacm::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AaaNacm::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AaaNacm::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

AaaNacm::Rules::Rule::Rule()
    :
    ordering_index{YType::str, "ordering-index"},
    rulelist_name{YType::str, "rulelist-name"}
        ,
    rulelist_rules(std::make_shared<AaaNacm::Rules::Rule::RulelistRules>())
{
    rulelist_rules->parent = this;

    yang_name = "rule"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Rules::Rule::~Rule()
{
}

bool AaaNacm::Rules::Rule::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| rulelist_name.is_set
	|| (rulelist_rules !=  nullptr && rulelist_rules->has_data());
}

bool AaaNacm::Rules::Rule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(rulelist_name.yfilter)
	|| (rulelist_rules !=  nullptr && rulelist_rules->has_operation());
}

std::string AaaNacm::Rules::Rule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Rules::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (rulelist_name.is_set || is_set(rulelist_name.yfilter)) leaf_name_data.push_back(rulelist_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulelist-rules")
    {
        if(rulelist_rules == nullptr)
        {
            rulelist_rules = std::make_shared<AaaNacm::Rules::Rule::RulelistRules>();
        }
        return rulelist_rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rulelist_rules != nullptr)
    {
        _children["rulelist-rules"] = rulelist_rules;
    }

    return _children;
}

void AaaNacm::Rules::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rulelist-name")
    {
        rulelist_name = value;
        rulelist_name.value_namespace = name_space;
        rulelist_name.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Rules::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "rulelist-name")
    {
        rulelist_name.yfilter = yfilter;
    }
}

bool AaaNacm::Rules::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulelist-rules" || name == "ordering-index" || name == "rulelist-name")
        return true;
    return false;
}

AaaNacm::Rules::Rule::RulelistRules::RulelistRules()
    :
    rulelist_rule(this, {"rule"})
{

    yang_name = "rulelist-rules"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Rules::Rule::RulelistRules::~RulelistRules()
{
}

bool AaaNacm::Rules::Rule::RulelistRules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulelist_rule.len(); index++)
    {
        if(rulelist_rule[index]->has_data())
            return true;
    }
    return false;
}

bool AaaNacm::Rules::Rule::RulelistRules::has_operation() const
{
    for (std::size_t index=0; index<rulelist_rule.len(); index++)
    {
        if(rulelist_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AaaNacm::Rules::Rule::RulelistRules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/rules/rule/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Rules::Rule::RulelistRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulelist-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Rules::Rule::RulelistRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Rules::Rule::RulelistRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulelist-rule")
    {
        auto ent_ = std::make_shared<AaaNacm::Rules::Rule::RulelistRules::RulelistRule>();
        ent_->parent = this;
        rulelist_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Rules::Rule::RulelistRules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulelist_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaNacm::Rules::Rule::RulelistRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AaaNacm::Rules::Rule::RulelistRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AaaNacm::Rules::Rule::RulelistRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulelist-rule")
        return true;
    return false;
}

AaaNacm::Rules::Rule::RulelistRules::RulelistRule::RulelistRule()
    :
    rule{YType::str, "rule"},
    rule_name{YType::str, "rule-name"},
    rule_index{YType::str, "rule-index"},
    rulelist_index{YType::str, "rulelist-index"},
    module_name{YType::str, "module-name"},
    action{YType::str, "action"},
    rule_type{YType::str, "rule-type"},
    comment{YType::str, "comment"},
    access_operations{YType::str, "access-operations"},
    rule_value{YType::str, "rule-value"},
    hit_count{YType::int32, "hit-count"}
{

    yang_name = "rulelist-rule"; yang_parent_name = "rulelist-rules"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Rules::Rule::RulelistRules::RulelistRule::~RulelistRule()
{
}

bool AaaNacm::Rules::Rule::RulelistRules::RulelistRule::has_data() const
{
    if (is_presence_container) return true;
    return rule.is_set
	|| rule_name.is_set
	|| rule_index.is_set
	|| rulelist_index.is_set
	|| module_name.is_set
	|| action.is_set
	|| rule_type.is_set
	|| comment.is_set
	|| access_operations.is_set
	|| rule_value.is_set
	|| hit_count.is_set;
}

bool AaaNacm::Rules::Rule::RulelistRules::RulelistRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule.yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(rule_index.yfilter)
	|| ydk::is_set(rulelist_index.yfilter)
	|| ydk::is_set(module_name.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(rule_type.yfilter)
	|| ydk::is_set(comment.yfilter)
	|| ydk::is_set(access_operations.yfilter)
	|| ydk::is_set(rule_value.yfilter)
	|| ydk::is_set(hit_count.yfilter);
}

std::string AaaNacm::Rules::Rule::RulelistRules::RulelistRule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/rules/rule/rulelist-rules/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Rules::Rule::RulelistRules::RulelistRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulelist-rule";
    ADD_KEY_TOKEN(rule, "rule");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Rules::Rule::RulelistRules::RulelistRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule.is_set || is_set(rule.yfilter)) leaf_name_data.push_back(rule.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_index.is_set || is_set(rule_index.yfilter)) leaf_name_data.push_back(rule_index.get_name_leafdata());
    if (rulelist_index.is_set || is_set(rulelist_index.yfilter)) leaf_name_data.push_back(rulelist_index.get_name_leafdata());
    if (module_name.is_set || is_set(module_name.yfilter)) leaf_name_data.push_back(module_name.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (rule_type.is_set || is_set(rule_type.yfilter)) leaf_name_data.push_back(rule_type.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (access_operations.is_set || is_set(access_operations.yfilter)) leaf_name_data.push_back(access_operations.get_name_leafdata());
    if (rule_value.is_set || is_set(rule_value.yfilter)) leaf_name_data.push_back(rule_value.get_name_leafdata());
    if (hit_count.is_set || is_set(hit_count.yfilter)) leaf_name_data.push_back(hit_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Rules::Rule::RulelistRules::RulelistRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Rules::Rule::RulelistRules::RulelistRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaNacm::Rules::Rule::RulelistRules::RulelistRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule")
    {
        rule = value;
        rule.value_namespace = name_space;
        rule.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-index")
    {
        rule_index = value;
        rule_index.value_namespace = name_space;
        rule_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rulelist-index")
    {
        rulelist_index = value;
        rulelist_index.value_namespace = name_space;
        rulelist_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-name")
    {
        module_name = value;
        module_name.value_namespace = name_space;
        module_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-type")
    {
        rule_type = value;
        rule_type.value_namespace = name_space;
        rule_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-operations")
    {
        access_operations = value;
        access_operations.value_namespace = name_space;
        access_operations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-value")
    {
        rule_value = value;
        rule_value.value_namespace = name_space;
        rule_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hit-count")
    {
        hit_count = value;
        hit_count.value_namespace = name_space;
        hit_count.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Rules::Rule::RulelistRules::RulelistRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule")
    {
        rule.yfilter = yfilter;
    }
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "rule-index")
    {
        rule_index.yfilter = yfilter;
    }
    if(value_path == "rulelist-index")
    {
        rulelist_index.yfilter = yfilter;
    }
    if(value_path == "module-name")
    {
        module_name.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "rule-type")
    {
        rule_type.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
    if(value_path == "access-operations")
    {
        access_operations.yfilter = yfilter;
    }
    if(value_path == "rule-value")
    {
        rule_value.yfilter = yfilter;
    }
    if(value_path == "hit-count")
    {
        hit_count.yfilter = yfilter;
    }
}

bool AaaNacm::Rules::Rule::RulelistRules::RulelistRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule" || name == "rule-name" || name == "rule-index" || name == "rulelist-index" || name == "module-name" || name == "action" || name == "rule-type" || name == "comment" || name == "access-operations" || name == "rule-value" || name == "hit-count")
        return true;
    return false;
}

AaaNacm::Groups::Groups()
    :
    group(this, {"group"})
{

    yang_name = "groups"; yang_parent_name = "aaa-nacm"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Groups::~Groups()
{
}

bool AaaNacm::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool AaaNacm::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AaaNacm::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<AaaNacm::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaNacm::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AaaNacm::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AaaNacm::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

AaaNacm::Groups::Group::Group()
    :
    group{YType::str, "group"},
    group_name{YType::str, "group-name"}
        ,
    user_name(this, {})
    , rule_name(this, {})
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaNacm::Groups::Group::~Group()
{
}

bool AaaNacm::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user_name.len(); index++)
    {
        if(user_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rule_name.len(); index++)
    {
        if(rule_name[index]->has_data())
            return true;
    }
    return group.is_set
	|| group_name.is_set;
}

bool AaaNacm::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<user_name.len(); index++)
    {
        if(user_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rule_name.len(); index++)
    {
        if(rule_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string AaaNacm::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-nacm-oper:aaa-nacm/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaNacm::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user-name")
    {
        auto ent_ = std::make_shared<AaaNacm::Groups::Group::UserName>();
        ent_->parent = this;
        user_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rule-name")
    {
        auto ent_ = std::make_shared<AaaNacm::Groups::Group::RuleName>();
        ent_->parent = this;
        rule_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rule_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaNacm::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool AaaNacm::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name" || name == "rule-name" || name == "group" || name == "group-name")
        return true;
    return false;
}

AaaNacm::Groups::Group::UserName::UserName()
    :
    name{YType::str, "name"}
{

    yang_name = "user-name"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

AaaNacm::Groups::Group::UserName::~UserName()
{
}

bool AaaNacm::Groups::Group::UserName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool AaaNacm::Groups::Group::UserName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string AaaNacm::Groups::Group::UserName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Groups::Group::UserName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Groups::Group::UserName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Groups::Group::UserName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaNacm::Groups::Group::UserName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Groups::Group::UserName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool AaaNacm::Groups::Group::UserName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

AaaNacm::Groups::Group::RuleName::RuleName()
    :
    name{YType::str, "name"}
{

    yang_name = "rule-name"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

AaaNacm::Groups::Group::RuleName::~RuleName()
{
}

bool AaaNacm::Groups::Group::RuleName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool AaaNacm::Groups::Group::RuleName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string AaaNacm::Groups::Group::RuleName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaNacm::Groups::Group::RuleName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaNacm::Groups::Group::RuleName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaNacm::Groups::Group::RuleName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaNacm::Groups::Group::RuleName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void AaaNacm::Groups::Group::RuleName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool AaaNacm::Groups::Group::RuleName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}


}
}

