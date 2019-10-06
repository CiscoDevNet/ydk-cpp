
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_lib_cfg_0.hpp"
#include "Cisco_IOS_XR_aaa_lib_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_cfg {

Aaa::Aaa()
    :
    default_taskgroup{YType::str, "Cisco-IOS-XR-aaa-locald-cfg:default-taskgroup"},
    intercept{YType::empty, "Cisco-IOS-XR-aaa-li-cfg:intercept"}
        ,
    accountings(std::make_shared<Aaa::Accountings>())
    , authorizations(std::make_shared<Aaa::Authorizations>())
    , accounting_update(nullptr) // presence node
    , banner(std::make_shared<Aaa::Banner>())
    , authentications(std::make_shared<Aaa::Authentications>())
    , password_policies(std::make_shared<Aaa::PasswordPolicies>())
    , server_groups(std::make_shared<Aaa::ServerGroups>())
    , usernames(std::make_shared<Aaa::Usernames>())
    , taskgroups(std::make_shared<Aaa::Taskgroups>())
    , usergroups(std::make_shared<Aaa::Usergroups>())
    , tacacs(std::make_shared<Aaa::Tacacs>())
    , aaa_subscriber(std::make_shared<Aaa::AaaSubscriber>())
    , aaa_mobile(std::make_shared<Aaa::AaaMobile>())
    , aaa_dot1x(std::make_shared<Aaa::AaaDot1x>())
    , radius_attribute(std::make_shared<Aaa::RadiusAttribute>())
    , radius(std::make_shared<Aaa::Radius>())
    , diameter(std::make_shared<Aaa::Diameter>())
{
    accountings->parent = this;
    authorizations->parent = this;
    banner->parent = this;
    authentications->parent = this;
    password_policies->parent = this;
    server_groups->parent = this;
    usernames->parent = this;
    taskgroups->parent = this;
    usergroups->parent = this;
    tacacs->parent = this;
    aaa_subscriber->parent = this;
    aaa_mobile->parent = this;
    aaa_dot1x->parent = this;
    radius_attribute->parent = this;
    radius->parent = this;
    diameter->parent = this;

    yang_name = "aaa"; yang_parent_name = "Cisco-IOS-XR-aaa-lib-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    if (is_presence_container) return true;
    return default_taskgroup.is_set
	|| intercept.is_set
	|| (accountings !=  nullptr && accountings->has_data())
	|| (authorizations !=  nullptr && authorizations->has_data())
	|| (accounting_update !=  nullptr && accounting_update->has_data())
	|| (banner !=  nullptr && banner->has_data())
	|| (authentications !=  nullptr && authentications->has_data())
	|| (password_policies !=  nullptr && password_policies->has_data())
	|| (server_groups !=  nullptr && server_groups->has_data())
	|| (usernames !=  nullptr && usernames->has_data())
	|| (taskgroups !=  nullptr && taskgroups->has_data())
	|| (usergroups !=  nullptr && usergroups->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (aaa_subscriber !=  nullptr && aaa_subscriber->has_data())
	|| (aaa_mobile !=  nullptr && aaa_mobile->has_data())
	|| (aaa_dot1x !=  nullptr && aaa_dot1x->has_data())
	|| (radius_attribute !=  nullptr && radius_attribute->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (diameter !=  nullptr && diameter->has_data());
}

bool Aaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_taskgroup.yfilter)
	|| ydk::is_set(intercept.yfilter)
	|| (accountings !=  nullptr && accountings->has_operation())
	|| (authorizations !=  nullptr && authorizations->has_operation())
	|| (accounting_update !=  nullptr && accounting_update->has_operation())
	|| (banner !=  nullptr && banner->has_operation())
	|| (authentications !=  nullptr && authentications->has_operation())
	|| (password_policies !=  nullptr && password_policies->has_operation())
	|| (server_groups !=  nullptr && server_groups->has_operation())
	|| (usernames !=  nullptr && usernames->has_operation())
	|| (taskgroups !=  nullptr && taskgroups->has_operation())
	|| (usergroups !=  nullptr && usergroups->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (aaa_subscriber !=  nullptr && aaa_subscriber->has_operation())
	|| (aaa_mobile !=  nullptr && aaa_mobile->has_operation())
	|| (aaa_dot1x !=  nullptr && aaa_dot1x->has_operation())
	|| (radius_attribute !=  nullptr && radius_attribute->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (diameter !=  nullptr && diameter->has_operation());
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_taskgroup.is_set || is_set(default_taskgroup.yfilter)) leaf_name_data.push_back(default_taskgroup.get_name_leafdata());
    if (intercept.is_set || is_set(intercept.yfilter)) leaf_name_data.push_back(intercept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accountings")
    {
        if(accountings == nullptr)
        {
            accountings = std::make_shared<Aaa::Accountings>();
        }
        return accountings;
    }

    if(child_yang_name == "authorizations")
    {
        if(authorizations == nullptr)
        {
            authorizations = std::make_shared<Aaa::Authorizations>();
        }
        return authorizations;
    }

    if(child_yang_name == "accounting-update")
    {
        if(accounting_update == nullptr)
        {
            accounting_update = std::make_shared<Aaa::AccountingUpdate>();
        }
        return accounting_update;
    }

    if(child_yang_name == "banner")
    {
        if(banner == nullptr)
        {
            banner = std::make_shared<Aaa::Banner>();
        }
        return banner;
    }

    if(child_yang_name == "authentications")
    {
        if(authentications == nullptr)
        {
            authentications = std::make_shared<Aaa::Authentications>();
        }
        return authentications;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-locald-cfg:password-policies")
    {
        if(password_policies == nullptr)
        {
            password_policies = std::make_shared<Aaa::PasswordPolicies>();
        }
        return password_policies;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-locald-cfg:server-groups")
    {
        if(server_groups == nullptr)
        {
            server_groups = std::make_shared<Aaa::ServerGroups>();
        }
        return server_groups;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-locald-cfg:usernames")
    {
        if(usernames == nullptr)
        {
            usernames = std::make_shared<Aaa::Usernames>();
        }
        return usernames;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-locald-cfg:taskgroups")
    {
        if(taskgroups == nullptr)
        {
            taskgroups = std::make_shared<Aaa::Taskgroups>();
        }
        return taskgroups;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-locald-cfg:usergroups")
    {
        if(usergroups == nullptr)
        {
            usergroups = std::make_shared<Aaa::Usergroups>();
        }
        return usergroups;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-tacacs-cfg:tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Aaa::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber")
    {
        if(aaa_subscriber == nullptr)
        {
            aaa_subscriber = std::make_shared<Aaa::AaaSubscriber>();
        }
        return aaa_subscriber;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile")
    {
        if(aaa_mobile == nullptr)
        {
            aaa_mobile = std::make_shared<Aaa::AaaMobile>();
        }
        return aaa_mobile;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x")
    {
        if(aaa_dot1x == nullptr)
        {
            aaa_dot1x = std::make_shared<Aaa::AaaDot1x>();
        }
        return aaa_dot1x;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute")
    {
        if(radius_attribute == nullptr)
        {
            radius_attribute = std::make_shared<Aaa::RadiusAttribute>();
        }
        return radius_attribute;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-protocol-radius-cfg:radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Aaa::Radius>();
        }
        return radius;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-diameter-cfg:diameter")
    {
        if(diameter == nullptr)
        {
            diameter = std::make_shared<Aaa::Diameter>();
        }
        return diameter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accountings != nullptr)
    {
        _children["accountings"] = accountings;
    }

    if(authorizations != nullptr)
    {
        _children["authorizations"] = authorizations;
    }

    if(accounting_update != nullptr)
    {
        _children["accounting-update"] = accounting_update;
    }

    if(banner != nullptr)
    {
        _children["banner"] = banner;
    }

    if(authentications != nullptr)
    {
        _children["authentications"] = authentications;
    }

    if(password_policies != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-locald-cfg:password-policies"] = password_policies;
    }

    if(server_groups != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-locald-cfg:server-groups"] = server_groups;
    }

    if(usernames != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-locald-cfg:usernames"] = usernames;
    }

    if(taskgroups != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-locald-cfg:taskgroups"] = taskgroups;
    }

    if(usergroups != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-locald-cfg:usergroups"] = usergroups;
    }

    if(tacacs != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-tacacs-cfg:tacacs"] = tacacs;
    }

    if(aaa_subscriber != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber"] = aaa_subscriber;
    }

    if(aaa_mobile != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile"] = aaa_mobile;
    }

    if(aaa_dot1x != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x"] = aaa_dot1x;
    }

    if(radius_attribute != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute"] = radius_attribute;
    }

    if(radius != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-protocol-radius-cfg:radius"] = radius;
    }

    if(diameter != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-diameter-cfg:diameter"] = diameter;
    }

    return _children;
}

void Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XR-aaa-locald-cfg:default-taskgroup")
    {
        default_taskgroup = value;
        default_taskgroup.value_namespace = name_space;
        default_taskgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-aaa-li-cfg:intercept")
    {
        intercept = value;
        intercept.value_namespace = name_space;
        intercept.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-taskgroup")
    {
        default_taskgroup.yfilter = yfilter;
    }
    if(value_path == "intercept")
    {
        intercept.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Aaa::clone_ptr() const
{
    return std::make_shared<Aaa>();
}

std::string Aaa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Aaa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Aaa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Aaa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accountings" || name == "authorizations" || name == "accounting-update" || name == "banner" || name == "authentications" || name == "password-policies" || name == "server-groups" || name == "usernames" || name == "taskgroups" || name == "usergroups" || name == "tacacs" || name == "aaa-subscriber" || name == "aaa-mobile" || name == "aaa-dot1x" || name == "radius-attribute" || name == "radius" || name == "diameter" || name == "default-taskgroup" || name == "intercept")
        return true;
    return false;
}

Aaa::Accountings::Accountings()
    :
    accounting(this, {"type", "listname"})
{

    yang_name = "accountings"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Accountings::~Accountings()
{
}

bool Aaa::Accountings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accounting.len(); index++)
    {
        if(accounting[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Accountings::has_operation() const
{
    for (std::size_t index=0; index<accounting.len(); index++)
    {
        if(accounting[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Accountings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Accountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accountings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Accountings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Accountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        auto ent_ = std::make_shared<Aaa::Accountings::Accounting>();
        ent_->parent = this;
        accounting.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Accountings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : accounting.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Accountings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Accountings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Accountings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Aaa::Accountings::Accounting::Accounting()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    rp_failover{YType::enumeration, "rp-failover"},
    broadcast{YType::enumeration, "broadcast"},
    type_xr{YType::enumeration, "type-xr"},
    method1{YType::enumeration, "method1"},
    method2{YType::enumeration, "method2"},
    method3{YType::enumeration, "method3"},
    method4{YType::enumeration, "method4"},
    server_group_name1{YType::str, "server-group-name1"},
    server_group_name2{YType::str, "server-group-name2"},
    server_group_name3{YType::str, "server-group-name3"},
    server_group_name4{YType::str, "server-group-name4"}
{

    yang_name = "accounting"; yang_parent_name = "accountings"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Accountings::Accounting::~Accounting()
{
}

bool Aaa::Accountings::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| listname.is_set
	|| rp_failover.is_set
	|| broadcast.is_set
	|| type_xr.is_set
	|| method1.is_set
	|| method2.is_set
	|| method3.is_set
	|| method4.is_set
	|| server_group_name1.is_set
	|| server_group_name2.is_set
	|| server_group_name3.is_set
	|| server_group_name4.is_set;
}

bool Aaa::Accountings::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(rp_failover.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(type_xr.yfilter)
	|| ydk::is_set(method1.yfilter)
	|| ydk::is_set(method2.yfilter)
	|| ydk::is_set(method3.yfilter)
	|| ydk::is_set(method4.yfilter)
	|| ydk::is_set(server_group_name1.yfilter)
	|| ydk::is_set(server_group_name2.yfilter)
	|| ydk::is_set(server_group_name3.yfilter)
	|| ydk::is_set(server_group_name4.yfilter);
}

std::string Aaa::Accountings::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/accountings/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Accountings::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Accountings::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (rp_failover.is_set || is_set(rp_failover.yfilter)) leaf_name_data.push_back(rp_failover.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (type_xr.is_set || is_set(type_xr.yfilter)) leaf_name_data.push_back(type_xr.get_name_leafdata());
    if (method1.is_set || is_set(method1.yfilter)) leaf_name_data.push_back(method1.get_name_leafdata());
    if (method2.is_set || is_set(method2.yfilter)) leaf_name_data.push_back(method2.get_name_leafdata());
    if (method3.is_set || is_set(method3.yfilter)) leaf_name_data.push_back(method3.get_name_leafdata());
    if (method4.is_set || is_set(method4.yfilter)) leaf_name_data.push_back(method4.get_name_leafdata());
    if (server_group_name1.is_set || is_set(server_group_name1.yfilter)) leaf_name_data.push_back(server_group_name1.get_name_leafdata());
    if (server_group_name2.is_set || is_set(server_group_name2.yfilter)) leaf_name_data.push_back(server_group_name2.get_name_leafdata());
    if (server_group_name3.is_set || is_set(server_group_name3.yfilter)) leaf_name_data.push_back(server_group_name3.get_name_leafdata());
    if (server_group_name4.is_set || is_set(server_group_name4.yfilter)) leaf_name_data.push_back(server_group_name4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Accountings::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Accountings::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Accountings::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-failover")
    {
        rp_failover = value;
        rp_failover.value_namespace = name_space;
        rp_failover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-xr")
    {
        type_xr = value;
        type_xr.value_namespace = name_space;
        type_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method1")
    {
        method1 = value;
        method1.value_namespace = name_space;
        method1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method2")
    {
        method2 = value;
        method2.value_namespace = name_space;
        method2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method3")
    {
        method3 = value;
        method3.value_namespace = name_space;
        method3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method4")
    {
        method4 = value;
        method4.value_namespace = name_space;
        method4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name1")
    {
        server_group_name1 = value;
        server_group_name1.value_namespace = name_space;
        server_group_name1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name2")
    {
        server_group_name2 = value;
        server_group_name2.value_namespace = name_space;
        server_group_name2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name3")
    {
        server_group_name3 = value;
        server_group_name3.value_namespace = name_space;
        server_group_name3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name4")
    {
        server_group_name4 = value;
        server_group_name4.value_namespace = name_space;
        server_group_name4.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Accountings::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "rp-failover")
    {
        rp_failover.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "type-xr")
    {
        type_xr.yfilter = yfilter;
    }
    if(value_path == "method1")
    {
        method1.yfilter = yfilter;
    }
    if(value_path == "method2")
    {
        method2.yfilter = yfilter;
    }
    if(value_path == "method3")
    {
        method3.yfilter = yfilter;
    }
    if(value_path == "method4")
    {
        method4.yfilter = yfilter;
    }
    if(value_path == "server-group-name1")
    {
        server_group_name1.yfilter = yfilter;
    }
    if(value_path == "server-group-name2")
    {
        server_group_name2.yfilter = yfilter;
    }
    if(value_path == "server-group-name3")
    {
        server_group_name3.yfilter = yfilter;
    }
    if(value_path == "server-group-name4")
    {
        server_group_name4.yfilter = yfilter;
    }
}

bool Aaa::Accountings::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "rp-failover" || name == "broadcast" || name == "type-xr" || name == "method1" || name == "method2" || name == "method3" || name == "method4" || name == "server-group-name1" || name == "server-group-name2" || name == "server-group-name3" || name == "server-group-name4")
        return true;
    return false;
}

Aaa::Authorizations::Authorizations()
    :
    authorization(this, {"type", "listname"})
{

    yang_name = "authorizations"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authorizations::~Authorizations()
{
}

bool Aaa::Authorizations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authorization.len(); index++)
    {
        if(authorization[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authorizations::has_operation() const
{
    for (std::size_t index=0; index<authorization.len(); index++)
    {
        if(authorization[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Authorizations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authorizations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authorizations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authorizations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        auto ent_ = std::make_shared<Aaa::Authorizations::Authorization>();
        ent_->parent = this;
        authorization.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authorizations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authorization.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Authorizations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authorizations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authorizations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Aaa::Authorizations::Authorization::Authorization()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    method1{YType::enumeration, "method1"},
    method2{YType::enumeration, "method2"},
    method3{YType::enumeration, "method3"},
    method4{YType::enumeration, "method4"},
    server_group_name1{YType::str, "server-group-name1"},
    server_group_name2{YType::str, "server-group-name2"},
    server_group_name3{YType::str, "server-group-name3"},
    server_group_name4{YType::str, "server-group-name4"}
{

    yang_name = "authorization"; yang_parent_name = "authorizations"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authorizations::Authorization::~Authorization()
{
}

bool Aaa::Authorizations::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| listname.is_set
	|| method1.is_set
	|| method2.is_set
	|| method3.is_set
	|| method4.is_set
	|| server_group_name1.is_set
	|| server_group_name2.is_set
	|| server_group_name3.is_set
	|| server_group_name4.is_set;
}

bool Aaa::Authorizations::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(method1.yfilter)
	|| ydk::is_set(method2.yfilter)
	|| ydk::is_set(method3.yfilter)
	|| ydk::is_set(method4.yfilter)
	|| ydk::is_set(server_group_name1.yfilter)
	|| ydk::is_set(server_group_name2.yfilter)
	|| ydk::is_set(server_group_name3.yfilter)
	|| ydk::is_set(server_group_name4.yfilter);
}

std::string Aaa::Authorizations::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/authorizations/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authorizations::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authorizations::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (method1.is_set || is_set(method1.yfilter)) leaf_name_data.push_back(method1.get_name_leafdata());
    if (method2.is_set || is_set(method2.yfilter)) leaf_name_data.push_back(method2.get_name_leafdata());
    if (method3.is_set || is_set(method3.yfilter)) leaf_name_data.push_back(method3.get_name_leafdata());
    if (method4.is_set || is_set(method4.yfilter)) leaf_name_data.push_back(method4.get_name_leafdata());
    if (server_group_name1.is_set || is_set(server_group_name1.yfilter)) leaf_name_data.push_back(server_group_name1.get_name_leafdata());
    if (server_group_name2.is_set || is_set(server_group_name2.yfilter)) leaf_name_data.push_back(server_group_name2.get_name_leafdata());
    if (server_group_name3.is_set || is_set(server_group_name3.yfilter)) leaf_name_data.push_back(server_group_name3.get_name_leafdata());
    if (server_group_name4.is_set || is_set(server_group_name4.yfilter)) leaf_name_data.push_back(server_group_name4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authorizations::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authorizations::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Authorizations::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method1")
    {
        method1 = value;
        method1.value_namespace = name_space;
        method1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method2")
    {
        method2 = value;
        method2.value_namespace = name_space;
        method2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method3")
    {
        method3 = value;
        method3.value_namespace = name_space;
        method3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method4")
    {
        method4 = value;
        method4.value_namespace = name_space;
        method4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name1")
    {
        server_group_name1 = value;
        server_group_name1.value_namespace = name_space;
        server_group_name1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name2")
    {
        server_group_name2 = value;
        server_group_name2.value_namespace = name_space;
        server_group_name2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name3")
    {
        server_group_name3 = value;
        server_group_name3.value_namespace = name_space;
        server_group_name3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name4")
    {
        server_group_name4 = value;
        server_group_name4.value_namespace = name_space;
        server_group_name4.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Authorizations::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "method1")
    {
        method1.yfilter = yfilter;
    }
    if(value_path == "method2")
    {
        method2.yfilter = yfilter;
    }
    if(value_path == "method3")
    {
        method3.yfilter = yfilter;
    }
    if(value_path == "method4")
    {
        method4.yfilter = yfilter;
    }
    if(value_path == "server-group-name1")
    {
        server_group_name1.yfilter = yfilter;
    }
    if(value_path == "server-group-name2")
    {
        server_group_name2.yfilter = yfilter;
    }
    if(value_path == "server-group-name3")
    {
        server_group_name3.yfilter = yfilter;
    }
    if(value_path == "server-group-name4")
    {
        server_group_name4.yfilter = yfilter;
    }
}

bool Aaa::Authorizations::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "method1" || name == "method2" || name == "method3" || name == "method4" || name == "server-group-name1" || name == "server-group-name2" || name == "server-group-name3" || name == "server-group-name4")
        return true;
    return false;
}

Aaa::AccountingUpdate::AccountingUpdate()
    :
    type{YType::enumeration, "type"},
    periodic_interval{YType::uint32, "periodic-interval"}
{

    yang_name = "accounting-update"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Aaa::AccountingUpdate::~AccountingUpdate()
{
}

bool Aaa::AccountingUpdate::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| periodic_interval.is_set;
}

bool Aaa::AccountingUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(periodic_interval.yfilter);
}

std::string Aaa::AccountingUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AccountingUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AccountingUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AccountingUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AccountingUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AccountingUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::AccountingUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
}

bool Aaa::AccountingUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "periodic-interval")
        return true;
    return false;
}

Aaa::Banner::Banner()
    :
    login{YType::str, "login"}
{

    yang_name = "banner"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Banner::~Banner()
{
}

bool Aaa::Banner::has_data() const
{
    if (is_presence_container) return true;
    return login.is_set;
}

bool Aaa::Banner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Aaa::Banner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Banner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "banner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Banner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Banner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Banner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Banner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Banner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Aaa::Banner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Aaa::Authentications::Authentications()
    :
    authentication(this, {"type", "listname"})
{

    yang_name = "authentications"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authentications::~Authentications()
{
}

bool Aaa::Authentications::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authentication.len(); index++)
    {
        if(authentication[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authentications::has_operation() const
{
    for (std::size_t index=0; index<authentication.len(); index++)
    {
        if(authentication[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Authentications::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authentications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authentications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authentications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        auto ent_ = std::make_shared<Aaa::Authentications::Authentication>();
        ent_->parent = this;
        authentication.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authentications::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authentication.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Authentications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authentications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authentications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Aaa::Authentications::Authentication::Authentication()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    method1{YType::enumeration, "method1"},
    method2{YType::enumeration, "method2"},
    method3{YType::enumeration, "method3"},
    method4{YType::enumeration, "method4"},
    server_group_name1{YType::str, "server-group-name1"},
    server_group_name2{YType::str, "server-group-name2"},
    server_group_name3{YType::str, "server-group-name3"},
    server_group_name4{YType::str, "server-group-name4"}
{

    yang_name = "authentication"; yang_parent_name = "authentications"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authentications::Authentication::~Authentication()
{
}

bool Aaa::Authentications::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| listname.is_set
	|| method1.is_set
	|| method2.is_set
	|| method3.is_set
	|| method4.is_set
	|| server_group_name1.is_set
	|| server_group_name2.is_set
	|| server_group_name3.is_set
	|| server_group_name4.is_set;
}

bool Aaa::Authentications::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(method1.yfilter)
	|| ydk::is_set(method2.yfilter)
	|| ydk::is_set(method3.yfilter)
	|| ydk::is_set(method4.yfilter)
	|| ydk::is_set(server_group_name1.yfilter)
	|| ydk::is_set(server_group_name2.yfilter)
	|| ydk::is_set(server_group_name3.yfilter)
	|| ydk::is_set(server_group_name4.yfilter);
}

std::string Aaa::Authentications::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/authentications/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authentications::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authentications::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (method1.is_set || is_set(method1.yfilter)) leaf_name_data.push_back(method1.get_name_leafdata());
    if (method2.is_set || is_set(method2.yfilter)) leaf_name_data.push_back(method2.get_name_leafdata());
    if (method3.is_set || is_set(method3.yfilter)) leaf_name_data.push_back(method3.get_name_leafdata());
    if (method4.is_set || is_set(method4.yfilter)) leaf_name_data.push_back(method4.get_name_leafdata());
    if (server_group_name1.is_set || is_set(server_group_name1.yfilter)) leaf_name_data.push_back(server_group_name1.get_name_leafdata());
    if (server_group_name2.is_set || is_set(server_group_name2.yfilter)) leaf_name_data.push_back(server_group_name2.get_name_leafdata());
    if (server_group_name3.is_set || is_set(server_group_name3.yfilter)) leaf_name_data.push_back(server_group_name3.get_name_leafdata());
    if (server_group_name4.is_set || is_set(server_group_name4.yfilter)) leaf_name_data.push_back(server_group_name4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authentications::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authentications::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Authentications::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method1")
    {
        method1 = value;
        method1.value_namespace = name_space;
        method1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method2")
    {
        method2 = value;
        method2.value_namespace = name_space;
        method2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method3")
    {
        method3 = value;
        method3.value_namespace = name_space;
        method3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method4")
    {
        method4 = value;
        method4.value_namespace = name_space;
        method4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name1")
    {
        server_group_name1 = value;
        server_group_name1.value_namespace = name_space;
        server_group_name1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name2")
    {
        server_group_name2 = value;
        server_group_name2.value_namespace = name_space;
        server_group_name2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name3")
    {
        server_group_name3 = value;
        server_group_name3.value_namespace = name_space;
        server_group_name3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-group-name4")
    {
        server_group_name4 = value;
        server_group_name4.value_namespace = name_space;
        server_group_name4.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Authentications::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "method1")
    {
        method1.yfilter = yfilter;
    }
    if(value_path == "method2")
    {
        method2.yfilter = yfilter;
    }
    if(value_path == "method3")
    {
        method3.yfilter = yfilter;
    }
    if(value_path == "method4")
    {
        method4.yfilter = yfilter;
    }
    if(value_path == "server-group-name1")
    {
        server_group_name1.yfilter = yfilter;
    }
    if(value_path == "server-group-name2")
    {
        server_group_name2.yfilter = yfilter;
    }
    if(value_path == "server-group-name3")
    {
        server_group_name3.yfilter = yfilter;
    }
    if(value_path == "server-group-name4")
    {
        server_group_name4.yfilter = yfilter;
    }
}

bool Aaa::Authentications::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "method1" || name == "method2" || name == "method3" || name == "method4" || name == "server-group-name1" || name == "server-group-name2" || name == "server-group-name3" || name == "server-group-name4")
        return true;
    return false;
}

Aaa::PasswordPolicies::PasswordPolicies()
    :
    password_policy(this, {"name"})
{

    yang_name = "password-policies"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::PasswordPolicies::~PasswordPolicies()
{
}

bool Aaa::PasswordPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<password_policy.len(); index++)
    {
        if(password_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::PasswordPolicies::has_operation() const
{
    for (std::size_t index=0; index<password_policy.len(); index++)
    {
        if(password_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::PasswordPolicies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::PasswordPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:password-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::PasswordPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::PasswordPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-policy")
    {
        auto ent_ = std::make_shared<Aaa::PasswordPolicies::PasswordPolicy>();
        ent_->parent = this;
        password_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::PasswordPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : password_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::PasswordPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::PasswordPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::PasswordPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-policy")
        return true;
    return false;
}

Aaa::PasswordPolicies::PasswordPolicy::PasswordPolicy()
    :
    name{YType::str, "name"},
    lower_case{YType::uint32, "lower-case"},
    upper_case{YType::uint32, "upper-case"},
    max_length{YType::uint32, "max-length"},
    min_char_change{YType::uint32, "min-char-change"},
    special_char{YType::uint32, "special-char"},
    numeric{YType::uint32, "numeric"},
    min_length{YType::uint32, "min-length"},
    authen_max_attempts{YType::uint32, "authen-max-attempts"}
        ,
    lifetime(std::make_shared<Aaa::PasswordPolicies::PasswordPolicy::Lifetime>())
    , lockout_time(std::make_shared<Aaa::PasswordPolicies::PasswordPolicy::LockoutTime>())
{
    lifetime->parent = this;
    lockout_time->parent = this;

    yang_name = "password-policy"; yang_parent_name = "password-policies"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::PasswordPolicies::PasswordPolicy::~PasswordPolicy()
{
}

bool Aaa::PasswordPolicies::PasswordPolicy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| lower_case.is_set
	|| upper_case.is_set
	|| max_length.is_set
	|| min_char_change.is_set
	|| special_char.is_set
	|| numeric.is_set
	|| min_length.is_set
	|| authen_max_attempts.is_set
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (lockout_time !=  nullptr && lockout_time->has_data());
}

bool Aaa::PasswordPolicies::PasswordPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(lower_case.yfilter)
	|| ydk::is_set(upper_case.yfilter)
	|| ydk::is_set(max_length.yfilter)
	|| ydk::is_set(min_char_change.yfilter)
	|| ydk::is_set(special_char.yfilter)
	|| ydk::is_set(numeric.yfilter)
	|| ydk::is_set(min_length.yfilter)
	|| ydk::is_set(authen_max_attempts.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (lockout_time !=  nullptr && lockout_time->has_operation());
}

std::string Aaa::PasswordPolicies::PasswordPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:password-policies/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::PasswordPolicies::PasswordPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::PasswordPolicies::PasswordPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (lower_case.is_set || is_set(lower_case.yfilter)) leaf_name_data.push_back(lower_case.get_name_leafdata());
    if (upper_case.is_set || is_set(upper_case.yfilter)) leaf_name_data.push_back(upper_case.get_name_leafdata());
    if (max_length.is_set || is_set(max_length.yfilter)) leaf_name_data.push_back(max_length.get_name_leafdata());
    if (min_char_change.is_set || is_set(min_char_change.yfilter)) leaf_name_data.push_back(min_char_change.get_name_leafdata());
    if (special_char.is_set || is_set(special_char.yfilter)) leaf_name_data.push_back(special_char.get_name_leafdata());
    if (numeric.is_set || is_set(numeric.yfilter)) leaf_name_data.push_back(numeric.get_name_leafdata());
    if (min_length.is_set || is_set(min_length.yfilter)) leaf_name_data.push_back(min_length.get_name_leafdata());
    if (authen_max_attempts.is_set || is_set(authen_max_attempts.yfilter)) leaf_name_data.push_back(authen_max_attempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::PasswordPolicies::PasswordPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Aaa::PasswordPolicies::PasswordPolicy::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "lockout-time")
    {
        if(lockout_time == nullptr)
        {
            lockout_time = std::make_shared<Aaa::PasswordPolicies::PasswordPolicy::LockoutTime>();
        }
        return lockout_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::PasswordPolicies::PasswordPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(lockout_time != nullptr)
    {
        _children["lockout-time"] = lockout_time;
    }

    return _children;
}

void Aaa::PasswordPolicies::PasswordPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-case")
    {
        lower_case = value;
        lower_case.value_namespace = name_space;
        lower_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-case")
    {
        upper_case = value;
        upper_case.value_namespace = name_space;
        upper_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-length")
    {
        max_length = value;
        max_length.value_namespace = name_space;
        max_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-char-change")
    {
        min_char_change = value;
        min_char_change.value_namespace = name_space;
        min_char_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-char")
    {
        special_char = value;
        special_char.value_namespace = name_space;
        special_char.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numeric")
    {
        numeric = value;
        numeric.value_namespace = name_space;
        numeric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-length")
    {
        min_length = value;
        min_length.value_namespace = name_space;
        min_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-max-attempts")
    {
        authen_max_attempts = value;
        authen_max_attempts.value_namespace = name_space;
        authen_max_attempts.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::PasswordPolicies::PasswordPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "lower-case")
    {
        lower_case.yfilter = yfilter;
    }
    if(value_path == "upper-case")
    {
        upper_case.yfilter = yfilter;
    }
    if(value_path == "max-length")
    {
        max_length.yfilter = yfilter;
    }
    if(value_path == "min-char-change")
    {
        min_char_change.yfilter = yfilter;
    }
    if(value_path == "special-char")
    {
        special_char.yfilter = yfilter;
    }
    if(value_path == "numeric")
    {
        numeric.yfilter = yfilter;
    }
    if(value_path == "min-length")
    {
        min_length.yfilter = yfilter;
    }
    if(value_path == "authen-max-attempts")
    {
        authen_max_attempts.yfilter = yfilter;
    }
}

bool Aaa::PasswordPolicies::PasswordPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "lockout-time" || name == "name" || name == "lower-case" || name == "upper-case" || name == "max-length" || name == "min-char-change" || name == "special-char" || name == "numeric" || name == "min-length" || name == "authen-max-attempts")
        return true;
    return false;
}

Aaa::PasswordPolicies::PasswordPolicy::Lifetime::Lifetime()
    :
    years{YType::uint32, "years"},
    months{YType::uint32, "months"},
    hours{YType::uint32, "hours"},
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"},
    days{YType::uint32, "days"}
{

    yang_name = "lifetime"; yang_parent_name = "password-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::PasswordPolicies::PasswordPolicy::Lifetime::~Lifetime()
{
}

bool Aaa::PasswordPolicies::PasswordPolicy::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return years.is_set
	|| months.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set
	|| days.is_set;
}

bool Aaa::PasswordPolicies::PasswordPolicy::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(years.yfilter)
	|| ydk::is_set(months.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(days.yfilter);
}

std::string Aaa::PasswordPolicies::PasswordPolicy::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::PasswordPolicies::PasswordPolicy::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (years.is_set || is_set(years.yfilter)) leaf_name_data.push_back(years.get_name_leafdata());
    if (months.is_set || is_set(months.yfilter)) leaf_name_data.push_back(months.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::PasswordPolicies::PasswordPolicy::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::PasswordPolicies::PasswordPolicy::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::PasswordPolicies::PasswordPolicy::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "years")
    {
        years = value;
        years.value_namespace = name_space;
        years.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "months")
    {
        months = value;
        months.value_namespace = name_space;
        months.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::PasswordPolicies::PasswordPolicy::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "years")
    {
        years.yfilter = yfilter;
    }
    if(value_path == "months")
    {
        months.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
}

bool Aaa::PasswordPolicies::PasswordPolicy::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "years" || name == "months" || name == "hours" || name == "minutes" || name == "seconds" || name == "days")
        return true;
    return false;
}

Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::LockoutTime()
    :
    hours{YType::uint32, "hours"},
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"},
    days{YType::uint32, "days"}
{

    yang_name = "lockout-time"; yang_parent_name = "password-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::~LockoutTime()
{
}

bool Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| minutes.is_set
	|| seconds.is_set
	|| days.is_set;
}

bool Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(days.yfilter);
}

std::string Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
}

bool Aaa::PasswordPolicies::PasswordPolicy::LockoutTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "minutes" || name == "seconds" || name == "days")
        return true;
    return false;
}

Aaa::ServerGroups::ServerGroups()
    :
    tacacs_server_groups(std::make_shared<Aaa::ServerGroups::TacacsServerGroups>())
    , radius_server_groups(std::make_shared<Aaa::ServerGroups::RadiusServerGroups>())
    , diameter_server_groups(std::make_shared<Aaa::ServerGroups::DiameterServerGroups>())
{
    tacacs_server_groups->parent = this;
    radius_server_groups->parent = this;
    diameter_server_groups->parent = this;

    yang_name = "server-groups"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::ServerGroups::~ServerGroups()
{
}

bool Aaa::ServerGroups::has_data() const
{
    if (is_presence_container) return true;
    return (tacacs_server_groups !=  nullptr && tacacs_server_groups->has_data())
	|| (radius_server_groups !=  nullptr && radius_server_groups->has_data())
	|| (diameter_server_groups !=  nullptr && diameter_server_groups->has_data());
}

bool Aaa::ServerGroups::has_operation() const
{
    return is_set(yfilter)
	|| (tacacs_server_groups !=  nullptr && tacacs_server_groups->has_operation())
	|| (radius_server_groups !=  nullptr && radius_server_groups->has_operation())
	|| (diameter_server_groups !=  nullptr && diameter_server_groups->has_operation());
}

std::string Aaa::ServerGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::ServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:server-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-aaa-tacacs-cfg:tacacs-server-groups")
    {
        if(tacacs_server_groups == nullptr)
        {
            tacacs_server_groups = std::make_shared<Aaa::ServerGroups::TacacsServerGroups>();
        }
        return tacacs_server_groups;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-protocol-radius-cfg:radius-server-groups")
    {
        if(radius_server_groups == nullptr)
        {
            radius_server_groups = std::make_shared<Aaa::ServerGroups::RadiusServerGroups>();
        }
        return radius_server_groups;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-diameter-cfg:diameter-server-groups")
    {
        if(diameter_server_groups == nullptr)
        {
            diameter_server_groups = std::make_shared<Aaa::ServerGroups::DiameterServerGroups>();
        }
        return diameter_server_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tacacs_server_groups != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-tacacs-cfg:tacacs-server-groups"] = tacacs_server_groups;
    }

    if(radius_server_groups != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-protocol-radius-cfg:radius-server-groups"] = radius_server_groups;
    }

    if(diameter_server_groups != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-diameter-cfg:diameter-server-groups"] = diameter_server_groups;
    }

    return _children;
}

void Aaa::ServerGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tacacs-server-groups" || name == "radius-server-groups" || name == "diameter-server-groups")
        return true;
    return false;
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroups()
    :
    tacacs_server_group(this, {"server_group_name"})
{

    yang_name = "tacacs-server-groups"; yang_parent_name = "server-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::ServerGroups::TacacsServerGroups::~TacacsServerGroups()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tacacs_server_group.len(); index++)
    {
        if(tacacs_server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::TacacsServerGroups::has_operation() const
{
    for (std::size_t index=0; index<tacacs_server_group.len(); index++)
    {
        if(tacacs_server_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::TacacsServerGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::ServerGroups::TacacsServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-tacacs-cfg:tacacs-server-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::TacacsServerGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::TacacsServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tacacs-server-group")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup>();
        ent_->parent = this;
        tacacs_server_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::TacacsServerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tacacs_server_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::TacacsServerGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::TacacsServerGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::TacacsServerGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tacacs-server-group")
        return true;
    return false;
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::TacacsServerGroup()
    :
    server_group_name{YType::str, "server-group-name"},
    vrf{YType::str, "vrf"}
        ,
    servers(std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers>())
    , private_servers(std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers>())
{
    servers->parent = this;
    private_servers->parent = this;

    yang_name = "tacacs-server-group"; yang_parent_name = "tacacs-server-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::~TacacsServerGroup()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::has_data() const
{
    if (is_presence_container) return true;
    return server_group_name.is_set
	|| vrf.is_set
	|| (servers !=  nullptr && servers->has_data())
	|| (private_servers !=  nullptr && private_servers->has_data());
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_group_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (servers !=  nullptr && servers->has_operation())
	|| (private_servers !=  nullptr && private_servers->has_operation());
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs-server-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-server-group";
    ADD_KEY_TOKEN(server_group_name, "server-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.yfilter)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "servers")
    {
        if(servers == nullptr)
        {
            servers = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers>();
        }
        return servers;
    }

    if(child_yang_name == "private-servers")
    {
        if(private_servers == nullptr)
        {
            private_servers = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers>();
        }
        return private_servers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(servers != nullptr)
    {
        _children["servers"] = servers;
    }

    if(private_servers != nullptr)
    {
        _children["private-servers"] = private_servers;
    }

    return _children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
        server_group_name.value_namespace = name_space;
        server_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servers" || name == "private-servers" || name == "server-group-name" || name == "vrf")
        return true;
    return false;
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Servers()
    :
    server(this, {"ordering_index", "ip_address"})
{

    yang_name = "servers"; yang_parent_name = "tacacs-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::~Servers()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::Server()
    :
    ordering_index{YType::uint32, "ordering-index"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "server"; yang_parent_name = "servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::~Server()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| ip_address.is_set;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ordering-index" || name == "ip-address")
        return true;
    return false;
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServers()
    :
    private_server(this, {"ordering_index", "ip_address", "port_number"})
{

    yang_name = "private-servers"; yang_parent_name = "tacacs-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::~PrivateServers()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<private_server.len(); index++)
    {
        if(private_server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::has_operation() const
{
    for (std::size_t index=0; index<private_server.len(); index++)
    {
        if(private_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "private-server")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer>();
        ent_->parent = this;
        private_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : private_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "private-server")
        return true;
    return false;
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::PrivateServer()
    :
    ordering_index{YType::uint32, "ordering-index"},
    ip_address{YType::str, "ip-address"},
    port_number{YType::uint32, "port-number"},
    key{YType::str, "key"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "private-server"; yang_parent_name = "private-servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::~PrivateServer()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| ip_address.is_set
	|| port_number.is_set
	|| key.is_set
	|| timeout.is_set;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-server";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(port_number, "port-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ordering-index" || name == "ip-address" || name == "port-number" || name == "key" || name == "timeout")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroups()
    :
    radius_server_group(this, {"server_group_name"})
{

    yang_name = "radius-server-groups"; yang_parent_name = "server-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::ServerGroups::RadiusServerGroups::~RadiusServerGroups()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<radius_server_group.len(); index++)
    {
        if(radius_server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::RadiusServerGroups::has_operation() const
{
    for (std::size_t index=0; index<radius_server_group.len(); index++)
    {
        if(radius_server_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::ServerGroups::RadiusServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-cfg:radius-server-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius-server-group")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup>();
        ent_->parent = this;
        radius_server_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : radius_server_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::RadiusServerGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::RadiusServerGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius-server-group")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::RadiusServerGroup()
    :
    server_group_name{YType::str, "server-group-name"},
    dead_time{YType::uint32, "dead-time"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"}
        ,
    accounting(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting>())
    , servers(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers>())
    , private_servers(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers>())
    , server_group_throttle(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle>())
    , load_balance(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance>())
    , authorization(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization>())
{
    accounting->parent = this;
    servers->parent = this;
    private_servers->parent = this;
    server_group_throttle->parent = this;
    load_balance->parent = this;
    authorization->parent = this;

    yang_name = "radius-server-group"; yang_parent_name = "radius-server-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::~RadiusServerGroup()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::has_data() const
{
    if (is_presence_container) return true;
    return server_group_name.is_set
	|| dead_time.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (servers !=  nullptr && servers->has_data())
	|| (private_servers !=  nullptr && private_servers->has_data())
	|| (server_group_throttle !=  nullptr && server_group_throttle->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (authorization !=  nullptr && authorization->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_group_name.yfilter)
	|| ydk::is_set(dead_time.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (servers !=  nullptr && servers->has_operation())
	|| (private_servers !=  nullptr && private_servers->has_operation())
	|| (server_group_throttle !=  nullptr && server_group_throttle->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius-server-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server-group";
    ADD_KEY_TOKEN(server_group_name, "server-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.yfilter)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.yfilter)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "servers")
    {
        if(servers == nullptr)
        {
            servers = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers>();
        }
        return servers;
    }

    if(child_yang_name == "private-servers")
    {
        if(private_servers == nullptr)
        {
            private_servers = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers>();
        }
        return private_servers;
    }

    if(child_yang_name == "server-group-throttle")
    {
        if(server_group_throttle == nullptr)
        {
            server_group_throttle = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle>();
        }
        return server_group_throttle;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(servers != nullptr)
    {
        _children["servers"] = servers;
    }

    if(private_servers != nullptr)
    {
        _children["private-servers"] = private_servers;
    }

    if(server_group_throttle != nullptr)
    {
        _children["server-group-throttle"] = server_group_throttle;
    }

    if(load_balance != nullptr)
    {
        _children["load-balance"] = load_balance;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
        server_group_name.value_namespace = name_space;
        server_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-time")
    {
        dead_time = value;
        dead_time.value_namespace = name_space;
        dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
    if(value_path == "dead-time")
    {
        dead_time.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "servers" || name == "private-servers" || name == "server-group-throttle" || name == "load-balance" || name == "authorization" || name == "server-group-name" || name == "dead-time" || name == "source-interface" || name == "vrf")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Accounting()
    :
    request(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request>())
    , reply(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply>())
{
    request->parent = this;
    reply->parent = this;

    yang_name = "accounting"; yang_parent_name = "radius-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::~Accounting()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (request !=  nullptr && request->has_data())
	|| (reply !=  nullptr && reply->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (request !=  nullptr && request->has_operation())
	|| (reply !=  nullptr && reply->has_operation());
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request>();
        }
        return request;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply>();
        }
        return reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(reply != nullptr)
    {
        _children["reply"] = reply;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "reply")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::Request()
    :
    action{YType::enumeration, "action"},
    attribute_list_name{YType::str, "attribute-list-name"}
{

    yang_name = "request"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::~Request()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(attribute_list_name.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.yfilter)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
        attribute_list_name.value_namespace = name_space;
        attribute_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "attribute-list-name")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::Reply()
    :
    action{YType::enumeration, "action"},
    attribute_list_name{YType::str, "attribute-list-name"}
{

    yang_name = "reply"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::~Reply()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(attribute_list_name.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.yfilter)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
        attribute_list_name.value_namespace = name_space;
        attribute_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "attribute-list-name")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Servers()
    :
    server(this, {"ordering_index", "ip_address", "auth_port_number", "acct_port_number"})
{

    yang_name = "servers"; yang_parent_name = "radius-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::~Servers()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::Server()
    :
    ordering_index{YType::uint32, "ordering-index"},
    ip_address{YType::str, "ip-address"},
    auth_port_number{YType::uint16, "auth-port-number"},
    acct_port_number{YType::uint16, "acct-port-number"}
{

    yang_name = "server"; yang_parent_name = "servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::~Server()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| ip_address.is_set
	|| auth_port_number.is_set
	|| acct_port_number.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(auth_port_number.yfilter)
	|| ydk::is_set(acct_port_number.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(auth_port_number, "auth-port-number");
    ADD_KEY_TOKEN(acct_port_number, "acct-port-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.yfilter)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (acct_port_number.is_set || is_set(acct_port_number.yfilter)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
        auth_port_number.value_namespace = name_space;
        auth_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
        acct_port_number.value_namespace = name_space;
        acct_port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number.yfilter = yfilter;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ordering-index" || name == "ip-address" || name == "auth-port-number" || name == "acct-port-number")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServers()
    :
    private_server(this, {"ordering_index", "ip_address", "auth_port_number", "acct_port_number"})
{

    yang_name = "private-servers"; yang_parent_name = "radius-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::~PrivateServers()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<private_server.len(); index++)
    {
        if(private_server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::has_operation() const
{
    for (std::size_t index=0; index<private_server.len(); index++)
    {
        if(private_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "private-server")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer>();
        ent_->parent = this;
        private_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : private_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "private-server")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::PrivateServer()
    :
    ordering_index{YType::uint32, "ordering-index"},
    ip_address{YType::str, "ip-address"},
    auth_port_number{YType::uint16, "auth-port-number"},
    acct_port_number{YType::uint16, "acct-port-number"},
    private_timeout{YType::uint32, "private-timeout"},
    ignore_accounting_port{YType::boolean, "ignore-accounting-port"},
    private_retransmit{YType::uint32, "private-retransmit"},
    idle_time{YType::uint32, "idle-time"},
    private_key{YType::str, "private-key"},
    username{YType::str, "username"},
    ignore_auth_port{YType::boolean, "ignore-auth-port"}
{

    yang_name = "private-server"; yang_parent_name = "private-servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::~PrivateServer()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| ip_address.is_set
	|| auth_port_number.is_set
	|| acct_port_number.is_set
	|| private_timeout.is_set
	|| ignore_accounting_port.is_set
	|| private_retransmit.is_set
	|| idle_time.is_set
	|| private_key.is_set
	|| username.is_set
	|| ignore_auth_port.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(auth_port_number.yfilter)
	|| ydk::is_set(acct_port_number.yfilter)
	|| ydk::is_set(private_timeout.yfilter)
	|| ydk::is_set(ignore_accounting_port.yfilter)
	|| ydk::is_set(private_retransmit.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(private_key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(ignore_auth_port.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-server";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(auth_port_number, "auth-port-number");
    ADD_KEY_TOKEN(acct_port_number, "acct-port-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.yfilter)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (acct_port_number.is_set || is_set(acct_port_number.yfilter)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (private_timeout.is_set || is_set(private_timeout.yfilter)) leaf_name_data.push_back(private_timeout.get_name_leafdata());
    if (ignore_accounting_port.is_set || is_set(ignore_accounting_port.yfilter)) leaf_name_data.push_back(ignore_accounting_port.get_name_leafdata());
    if (private_retransmit.is_set || is_set(private_retransmit.yfilter)) leaf_name_data.push_back(private_retransmit.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (private_key.is_set || is_set(private_key.yfilter)) leaf_name_data.push_back(private_key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (ignore_auth_port.is_set || is_set(ignore_auth_port.yfilter)) leaf_name_data.push_back(ignore_auth_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
        auth_port_number.value_namespace = name_space;
        auth_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
        acct_port_number.value_namespace = name_space;
        acct_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-timeout")
    {
        private_timeout = value;
        private_timeout.value_namespace = name_space;
        private_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port = value;
        ignore_accounting_port.value_namespace = name_space;
        ignore_accounting_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-retransmit")
    {
        private_retransmit = value;
        private_retransmit.value_namespace = name_space;
        private_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-key")
    {
        private_key = value;
        private_key.value_namespace = name_space;
        private_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port = value;
        ignore_auth_port.value_namespace = name_space;
        ignore_auth_port.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number.yfilter = yfilter;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number.yfilter = yfilter;
    }
    if(value_path == "private-timeout")
    {
        private_timeout.yfilter = yfilter;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port.yfilter = yfilter;
    }
    if(value_path == "private-retransmit")
    {
        private_retransmit.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "private-key")
    {
        private_key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ordering-index" || name == "ip-address" || name == "auth-port-number" || name == "acct-port-number" || name == "private-timeout" || name == "ignore-accounting-port" || name == "private-retransmit" || name == "idle-time" || name == "private-key" || name == "username" || name == "ignore-auth-port")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::ServerGroupThrottle()
    :
    access{YType::uint32, "access"},
    accounting{YType::uint32, "accounting"},
    access_timeout{YType::uint32, "access-timeout"}
{

    yang_name = "server-group-throttle"; yang_parent_name = "radius-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::~ServerGroupThrottle()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::has_data() const
{
    if (is_presence_container) return true;
    return access.is_set
	|| accounting.is_set
	|| access_timeout.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(access_timeout.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (access_timeout.is_set || is_set(access_timeout.yfilter)) leaf_name_data.push_back(access_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-timeout")
    {
        access_timeout = value;
        access_timeout.value_namespace = name_space;
        access_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "access-timeout")
    {
        access_timeout.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "access-timeout")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::LoadBalance()
    :
    method(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method>())
{
    method->parent = this;

    yang_name = "load-balance"; yang_parent_name = "radius-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::~LoadBalance()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return (method !=  nullptr && method->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method != nullptr)
    {
        _children["method"] = method;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Method()
    :
    name(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name>())
{
    name->parent = this;

    yang_name = "method"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::~Method()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::has_data() const
{
    if (is_presence_container) return true;
    return (name !=  nullptr && name->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::has_operation() const
{
    return is_set(yfilter)
	|| (name !=  nullptr && name->has_operation());
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name != nullptr)
    {
        _children["name"] = name;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::Name()
    :
    least_outstanding{YType::uint32, "least-outstanding"},
    batch_size{YType::uint32, "batch-size"},
    ignore_preferred_server{YType::boolean, "ignore-preferred-server"}
{

    yang_name = "name"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::~Name()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::has_data() const
{
    if (is_presence_container) return true;
    return least_outstanding.is_set
	|| batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(least_outstanding.yfilter)
	|| ydk::is_set(batch_size.yfilter)
	|| ydk::is_set(ignore_preferred_server.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (least_outstanding.is_set || is_set(least_outstanding.yfilter)) leaf_name_data.push_back(least_outstanding.get_name_leafdata());
    if (batch_size.is_set || is_set(batch_size.yfilter)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.yfilter)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "least-outstanding")
    {
        least_outstanding = value;
        least_outstanding.value_namespace = name_space;
        least_outstanding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "batch-size")
    {
        batch_size = value;
        batch_size.value_namespace = name_space;
        batch_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
        ignore_preferred_server.value_namespace = name_space;
        ignore_preferred_server.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "least-outstanding")
    {
        least_outstanding.yfilter = yfilter;
    }
    if(value_path == "batch-size")
    {
        batch_size.yfilter = yfilter;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "least-outstanding" || name == "batch-size" || name == "ignore-preferred-server")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Authorization()
    :
    request(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request>())
    , reply(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply>())
{
    request->parent = this;
    reply->parent = this;

    yang_name = "authorization"; yang_parent_name = "radius-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::~Authorization()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return (request !=  nullptr && request->has_data())
	|| (reply !=  nullptr && reply->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (request !=  nullptr && request->has_operation())
	|| (reply !=  nullptr && reply->has_operation());
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request>();
        }
        return request;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply>();
        }
        return reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(reply != nullptr)
    {
        _children["reply"] = reply;
    }

    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "reply")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::Request()
    :
    action{YType::enumeration, "action"},
    attribute_list_name{YType::str, "attribute-list-name"}
{

    yang_name = "request"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::~Request()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(attribute_list_name.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.yfilter)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
        attribute_list_name.value_namespace = name_space;
        attribute_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "attribute-list-name")
        return true;
    return false;
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::Reply()
    :
    action{YType::enumeration, "action"},
    attribute_list_name{YType::str, "attribute-list-name"}
{

    yang_name = "reply"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::~Reply()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(attribute_list_name.yfilter);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.yfilter)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
        attribute_list_name.value_namespace = name_space;
        attribute_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "attribute-list-name")
        return true;
    return false;
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroups()
    :
    diameter_server_group(this, {"server_group_name"})
{

    yang_name = "diameter-server-groups"; yang_parent_name = "server-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::ServerGroups::DiameterServerGroups::~DiameterServerGroups()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diameter_server_group.len(); index++)
    {
        if(diameter_server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::DiameterServerGroups::has_operation() const
{
    for (std::size_t index=0; index<diameter_server_group.len(); index++)
    {
        if(diameter_server_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::DiameterServerGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::ServerGroups::DiameterServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-diameter-cfg:diameter-server-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::DiameterServerGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::DiameterServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diameter-server-group")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup>();
        ent_->parent = this;
        diameter_server_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::DiameterServerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diameter_server_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::DiameterServerGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::DiameterServerGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::DiameterServerGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter-server-group")
        return true;
    return false;
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::DiameterServerGroup()
    :
    server_group_name{YType::str, "server-group-name"}
        ,
    servers(std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers>())
{
    servers->parent = this;

    yang_name = "diameter-server-group"; yang_parent_name = "diameter-server-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::~DiameterServerGroup()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::has_data() const
{
    if (is_presence_container) return true;
    return server_group_name.is_set
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_group_name.yfilter)
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/Cisco-IOS-XR-aaa-diameter-cfg:diameter-server-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diameter-server-group";
    ADD_KEY_TOKEN(server_group_name, "server-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.yfilter)) leaf_name_data.push_back(server_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "servers")
    {
        if(servers == nullptr)
        {
            servers = std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers>();
        }
        return servers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(servers != nullptr)
    {
        _children["servers"] = servers;
    }

    return _children;
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
        server_group_name.value_namespace = name_space;
        server_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servers" || name == "server-group-name")
        return true;
    return false;
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Servers()
    :
    server(this, {"ordering_index", "peer_name"})
{

    yang_name = "servers"; yang_parent_name = "diameter-server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::~Servers()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        auto ent_ = std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::Server()
    :
    ordering_index{YType::uint32, "ordering-index"},
    peer_name{YType::str, "peer-name"}
{

    yang_name = "server"; yang_parent_name = "servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::~Server()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| peer_name.is_set;
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(peer_name.yfilter);
}

std::string Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(peer_name, "peer-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (peer_name.is_set || is_set(peer_name.yfilter)) leaf_name_data.push_back(peer_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-name")
    {
        peer_name = value;
        peer_name.value_namespace = name_space;
        peer_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "peer-name")
    {
        peer_name.yfilter = yfilter;
    }
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ordering-index" || name == "peer-name")
        return true;
    return false;
}

Aaa::Usernames::Usernames()
    :
    username(this, {"ordering_index", "name"})
{

    yang_name = "usernames"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Usernames::~Usernames()
{
}

bool Aaa::Usernames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usernames::has_operation() const
{
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Usernames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Usernames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:usernames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        auto ent_ = std::make_shared<Aaa::Usernames::Username>();
        ent_->parent = this;
        username.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usernames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : username.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Usernames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Usernames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Usernames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Aaa::Usernames::Username::Username()
    :
    ordering_index{YType::uint32, "ordering-index"},
    name{YType::str, "name"},
    secret{YType::str, "secret"},
    password{YType::str, "password"}
        ,
    password_policy(std::make_shared<Aaa::Usernames::Username::PasswordPolicy>())
    , usergroup_under_usernames(std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>())
{
    password_policy->parent = this;
    usergroup_under_usernames->parent = this;

    yang_name = "username"; yang_parent_name = "usernames"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Usernames::Username::~Username()
{
}

bool Aaa::Usernames::Username::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| name.is_set
	|| secret.is_set
	|| password.is_set
	|| (password_policy !=  nullptr && password_policy->has_data())
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_data());
}

bool Aaa::Usernames::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(password.yfilter)
	|| (password_policy !=  nullptr && password_policy->has_operation())
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_operation());
}

std::string Aaa::Usernames::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:usernames/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Usernames::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usernames::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-policy")
    {
        if(password_policy == nullptr)
        {
            password_policy = std::make_shared<Aaa::Usernames::Username::PasswordPolicy>();
        }
        return password_policy;
    }

    if(child_yang_name == "usergroup-under-usernames")
    {
        if(usergroup_under_usernames == nullptr)
        {
            usergroup_under_usernames = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>();
        }
        return usergroup_under_usernames;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usernames::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password_policy != nullptr)
    {
        _children["password-policy"] = password_policy;
    }

    if(usergroup_under_usernames != nullptr)
    {
        _children["usergroup-under-usernames"] = usergroup_under_usernames;
    }

    return _children;
}

void Aaa::Usernames::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usernames::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Aaa::Usernames::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-policy" || name == "usergroup-under-usernames" || name == "ordering-index" || name == "name" || name == "secret" || name == "password")
        return true;
    return false;
}

Aaa::Usernames::Username::PasswordPolicy::PasswordPolicy()
    :
    name{YType::str, "name"},
    password{YType::str, "password"}
{

    yang_name = "password-policy"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Usernames::Username::PasswordPolicy::~PasswordPolicy()
{
}

bool Aaa::Usernames::Username::PasswordPolicy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set;
}

bool Aaa::Usernames::Username::PasswordPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Aaa::Usernames::Username::PasswordPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::Username::PasswordPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usernames::Username::PasswordPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usernames::Username::PasswordPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Usernames::Username::PasswordPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usernames::Username::PasswordPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Aaa::Usernames::Username::PasswordPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password")
        return true;
    return false;
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsernames()
    :
    usergroup_under_username(this, {"name"})
{

    yang_name = "usergroup-under-usernames"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Usernames::Username::UsergroupUnderUsernames::~UsergroupUnderUsernames()
{
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usergroup_under_username.len(); index++)
    {
        if(usergroup_under_username[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::has_operation() const
{
    for (std::size_t index=0; index<usergroup_under_username.len(); index++)
    {
        if(usergroup_under_username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Usernames::Username::UsergroupUnderUsernames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-usernames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::Username::UsergroupUnderUsernames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usergroup-under-username")
    {
        auto ent_ = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername>();
        ent_->parent = this;
        usergroup_under_username.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usernames::Username::UsergroupUnderUsernames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usergroup_under_username.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usergroup-under-username")
        return true;
    return false;
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::UsergroupUnderUsername()
    :
    name{YType::str, "name"}
{

    yang_name = "usergroup-under-username"; yang_parent_name = "usergroup-under-usernames"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::~UsergroupUnderUsername()
{
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-username";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Aaa::Taskgroups::Taskgroups()
    :
    taskgroup(this, {"name"})
{

    yang_name = "taskgroups"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Taskgroups::~Taskgroups()
{
}

bool Aaa::Taskgroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<taskgroup.len(); index++)
    {
        if(taskgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::has_operation() const
{
    for (std::size_t index=0; index<taskgroup.len(); index++)
    {
        if(taskgroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Taskgroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Taskgroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:taskgroups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Taskgroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Taskgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "taskgroup")
    {
        auto ent_ = std::make_shared<Aaa::Taskgroups::Taskgroup>();
        ent_->parent = this;
        taskgroup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Taskgroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : taskgroup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Taskgroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Taskgroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Taskgroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "taskgroup")
        return true;
    return false;
}

Aaa::Taskgroups::Taskgroup::Taskgroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
        ,
    taskgroup_under_taskgroups(std::make_shared<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups>())
    , tasks(std::make_shared<Aaa::Taskgroups::Taskgroup::Tasks>())
{
    taskgroup_under_taskgroups->parent = this;
    tasks->parent = this;

    yang_name = "taskgroup"; yang_parent_name = "taskgroups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Taskgroups::Taskgroup::~Taskgroup()
{
}

bool Aaa::Taskgroups::Taskgroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| (taskgroup_under_taskgroups !=  nullptr && taskgroup_under_taskgroups->has_data())
	|| (tasks !=  nullptr && tasks->has_data());
}

bool Aaa::Taskgroups::Taskgroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (taskgroup_under_taskgroups !=  nullptr && taskgroup_under_taskgroups->has_operation())
	|| (tasks !=  nullptr && tasks->has_operation());
}

std::string Aaa::Taskgroups::Taskgroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:taskgroups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Taskgroups::Taskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Taskgroups::Taskgroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Taskgroups::Taskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "taskgroup-under-taskgroups")
    {
        if(taskgroup_under_taskgroups == nullptr)
        {
            taskgroup_under_taskgroups = std::make_shared<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups>();
        }
        return taskgroup_under_taskgroups;
    }

    if(child_yang_name == "tasks")
    {
        if(tasks == nullptr)
        {
            tasks = std::make_shared<Aaa::Taskgroups::Taskgroup::Tasks>();
        }
        return tasks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Taskgroups::Taskgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(taskgroup_under_taskgroups != nullptr)
    {
        _children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups;
    }

    if(tasks != nullptr)
    {
        _children["tasks"] = tasks;
    }

    return _children;
}

void Aaa::Taskgroups::Taskgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Taskgroups::Taskgroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Aaa::Taskgroups::Taskgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "taskgroup-under-taskgroups" || name == "tasks" || name == "name" || name == "description")
        return true;
    return false;
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroups()
    :
    taskgroup_under_taskgroup(this, {"name"})
{

    yang_name = "taskgroup-under-taskgroups"; yang_parent_name = "taskgroup"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::~TaskgroupUnderTaskgroups()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<taskgroup_under_taskgroup.len(); index++)
    {
        if(taskgroup_under_taskgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::has_operation() const
{
    for (std::size_t index=0; index<taskgroup_under_taskgroup.len(); index++)
    {
        if(taskgroup_under_taskgroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-taskgroups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "taskgroup-under-taskgroup")
    {
        auto ent_ = std::make_shared<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup>();
        ent_->parent = this;
        taskgroup_under_taskgroup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : taskgroup_under_taskgroup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "taskgroup-under-taskgroup")
        return true;
    return false;
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::TaskgroupUnderTaskgroup()
    :
    name{YType::str, "name"}
{

    yang_name = "taskgroup-under-taskgroup"; yang_parent_name = "taskgroup-under-taskgroups"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::~TaskgroupUnderTaskgroup()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-taskgroup";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Aaa::Taskgroups::Taskgroup::Tasks::Tasks()
    :
    task(this, {"type", "task_id"})
{

    yang_name = "tasks"; yang_parent_name = "taskgroup"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Taskgroups::Taskgroup::Tasks::~Tasks()
{
}

bool Aaa::Taskgroups::Taskgroup::Tasks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<task.len(); index++)
    {
        if(task[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::Tasks::has_operation() const
{
    for (std::size_t index=0; index<task.len(); index++)
    {
        if(task[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Taskgroups::Taskgroup::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Taskgroups::Taskgroup::Tasks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Taskgroups::Taskgroup::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "task")
    {
        auto ent_ = std::make_shared<Aaa::Taskgroups::Taskgroup::Tasks::Task>();
        ent_->parent = this;
        task.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Taskgroups::Taskgroup::Tasks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : task.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Taskgroups::Taskgroup::Tasks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Taskgroups::Taskgroup::Tasks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Taskgroups::Taskgroup::Tasks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "task")
        return true;
    return false;
}

Aaa::Taskgroups::Taskgroup::Tasks::Task::Task()
    :
    type{YType::enumeration, "type"},
    task_id{YType::str, "task-id"}
{

    yang_name = "task"; yang_parent_name = "tasks"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Taskgroups::Taskgroup::Tasks::Task::~Task()
{
}

bool Aaa::Taskgroups::Taskgroup::Tasks::Task::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| task_id.is_set;
}

bool Aaa::Taskgroups::Taskgroup::Tasks::Task::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(task_id.yfilter);
}

std::string Aaa::Taskgroups::Taskgroup::Tasks::Task::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(task_id, "task-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Taskgroups::Taskgroup::Tasks::Task::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.yfilter)) leaf_name_data.push_back(task_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Taskgroups::Taskgroup::Tasks::Task::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Taskgroups::Taskgroup::Tasks::Task::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Taskgroups::Taskgroup::Tasks::Task::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-id")
    {
        task_id = value;
        task_id.value_namespace = name_space;
        task_id.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Taskgroups::Taskgroup::Tasks::Task::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "task-id")
    {
        task_id.yfilter = yfilter;
    }
}

bool Aaa::Taskgroups::Taskgroup::Tasks::Task::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "task-id")
        return true;
    return false;
}

Aaa::Usergroups::Usergroups()
    :
    usergroup(this, {"name"})
{

    yang_name = "usergroups"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Usergroups::~Usergroups()
{
}

bool Aaa::Usergroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usergroup.len(); index++)
    {
        if(usergroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::has_operation() const
{
    for (std::size_t index=0; index<usergroup.len(); index++)
    {
        if(usergroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Usergroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Usergroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:usergroups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usergroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usergroup")
    {
        auto ent_ = std::make_shared<Aaa::Usergroups::Usergroup>();
        ent_->parent = this;
        usergroup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usergroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usergroup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Usergroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Usergroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Usergroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usergroup")
        return true;
    return false;
}

Aaa::Usergroups::Usergroup::Usergroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
        ,
    taskgroup_under_usergroups(std::make_shared<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups>())
    , usergroup_under_usergroups(std::make_shared<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups>())
{
    taskgroup_under_usergroups->parent = this;
    usergroup_under_usergroups->parent = this;

    yang_name = "usergroup"; yang_parent_name = "usergroups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Usergroups::Usergroup::~Usergroup()
{
}

bool Aaa::Usergroups::Usergroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| (taskgroup_under_usergroups !=  nullptr && taskgroup_under_usergroups->has_data())
	|| (usergroup_under_usergroups !=  nullptr && usergroup_under_usergroups->has_data());
}

bool Aaa::Usergroups::Usergroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (taskgroup_under_usergroups !=  nullptr && taskgroup_under_usergroups->has_operation())
	|| (usergroup_under_usergroups !=  nullptr && usergroup_under_usergroups->has_operation());
}

std::string Aaa::Usergroups::Usergroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:usergroups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Usergroups::Usergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usergroups::Usergroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usergroups::Usergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "taskgroup-under-usergroups")
    {
        if(taskgroup_under_usergroups == nullptr)
        {
            taskgroup_under_usergroups = std::make_shared<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups>();
        }
        return taskgroup_under_usergroups;
    }

    if(child_yang_name == "usergroup-under-usergroups")
    {
        if(usergroup_under_usergroups == nullptr)
        {
            usergroup_under_usergroups = std::make_shared<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups>();
        }
        return usergroup_under_usergroups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usergroups::Usergroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(taskgroup_under_usergroups != nullptr)
    {
        _children["taskgroup-under-usergroups"] = taskgroup_under_usergroups;
    }

    if(usergroup_under_usergroups != nullptr)
    {
        _children["usergroup-under-usergroups"] = usergroup_under_usergroups;
    }

    return _children;
}

void Aaa::Usergroups::Usergroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usergroups::Usergroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Aaa::Usergroups::Usergroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "taskgroup-under-usergroups" || name == "usergroup-under-usergroups" || name == "name" || name == "description")
        return true;
    return false;
}

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroups()
    :
    taskgroup_under_usergroup(this, {"name"})
{

    yang_name = "taskgroup-under-usergroups"; yang_parent_name = "usergroup"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::~TaskgroupUnderUsergroups()
{
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<taskgroup_under_usergroup.len(); index++)
    {
        if(taskgroup_under_usergroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::has_operation() const
{
    for (std::size_t index=0; index<taskgroup_under_usergroup.len(); index++)
    {
        if(taskgroup_under_usergroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-usergroups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "taskgroup-under-usergroup")
    {
        auto ent_ = std::make_shared<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup>();
        ent_->parent = this;
        taskgroup_under_usergroup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : taskgroup_under_usergroup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "taskgroup-under-usergroup")
        return true;
    return false;
}

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::TaskgroupUnderUsergroup()
    :
    name{YType::str, "name"}
{

    yang_name = "taskgroup-under-usergroup"; yang_parent_name = "taskgroup-under-usergroups"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::~TaskgroupUnderUsergroup()
{
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-usergroup";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroups()
    :
    usergroup_under_usergroup(this, {"name"})
{

    yang_name = "usergroup-under-usergroups"; yang_parent_name = "usergroup"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::~UsergroupUnderUsergroups()
{
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usergroup_under_usergroup.len(); index++)
    {
        if(usergroup_under_usergroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::has_operation() const
{
    for (std::size_t index=0; index<usergroup_under_usergroup.len(); index++)
    {
        if(usergroup_under_usergroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-usergroups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usergroup-under-usergroup")
    {
        auto ent_ = std::make_shared<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup>();
        ent_->parent = this;
        usergroup_under_usergroup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usergroup_under_usergroup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usergroup-under-usergroup")
        return true;
    return false;
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::UsergroupUnderUsergroup()
    :
    name{YType::str, "name"}
{

    yang_name = "usergroup-under-usergroup"; yang_parent_name = "usergroup-under-usergroups"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::~UsergroupUnderUsergroup()
{
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-usergroup";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Aaa::Tacacs::Tacacs()
    :
    key{YType::str, "key"},
    timeout{YType::uint32, "timeout"},
    single_connect{YType::boolean, "single-connect"}
        ,
    ipv6(std::make_shared<Aaa::Tacacs::Ipv6>())
    , hosts(std::make_shared<Aaa::Tacacs::Hosts>())
    , ipv4(std::make_shared<Aaa::Tacacs::Ipv4>())
    , vrfs(std::make_shared<Aaa::Tacacs::Vrfs>())
{
    ipv6->parent = this;
    hosts->parent = this;
    ipv4->parent = this;
    vrfs->parent = this;

    yang_name = "tacacs"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Tacacs::~Tacacs()
{
}

bool Aaa::Tacacs::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| timeout.is_set
	|| single_connect.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Aaa::Tacacs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(single_connect.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Aaa::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-tacacs-cfg:tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.yfilter)) leaf_name_data.push_back(single_connect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Aaa::Tacacs::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Aaa::Tacacs::Hosts>();
        }
        return hosts;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Aaa::Tacacs::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Aaa::Tacacs::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void Aaa::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
        single_connect.value_namespace = name_space;
        single_connect.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "single-connect")
    {
        single_connect.yfilter = yfilter;
    }
}

bool Aaa::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "hosts" || name == "ipv4" || name == "vrfs" || name == "key" || name == "timeout" || name == "single-connect")
        return true;
    return false;
}

Aaa::Tacacs::Ipv6::Ipv6()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "ipv6"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Tacacs::Ipv6::~Ipv6()
{
}

bool Aaa::Tacacs::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set;
}

bool Aaa::Tacacs::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Aaa::Tacacs::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Tacacs::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Tacacs::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Tacacs::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Tacacs::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Tacacs::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Tacacs::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Aaa::Tacacs::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Aaa::Tacacs::Hosts::Hosts()
    :
    host(this, {"ordering_index", "ip_address", "port_number"})
{

    yang_name = "hosts"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Tacacs::Hosts::~Hosts()
{
}

bool Aaa::Tacacs::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Tacacs::Hosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Tacacs::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Tacacs::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Tacacs::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Aaa::Tacacs::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Tacacs::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Tacacs::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Tacacs::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Tacacs::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Aaa::Tacacs::Hosts::Host::Host()
    :
    ordering_index{YType::uint32, "ordering-index"},
    ip_address{YType::str, "ip-address"},
    port_number{YType::uint32, "port-number"},
    key{YType::str, "key"},
    timeout{YType::uint32, "timeout"},
    single_connect{YType::boolean, "single-connect"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Tacacs::Hosts::Host::~Host()
{
}

bool Aaa::Tacacs::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| ip_address.is_set
	|| port_number.is_set
	|| key.is_set
	|| timeout.is_set
	|| single_connect.is_set;
}

bool Aaa::Tacacs::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(single_connect.yfilter);
}

std::string Aaa::Tacacs::Hosts::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/hosts/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Tacacs::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(port_number, "port-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Tacacs::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.yfilter)) leaf_name_data.push_back(single_connect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Tacacs::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Tacacs::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Tacacs::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
        single_connect.value_namespace = name_space;
        single_connect.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Tacacs::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "single-connect")
    {
        single_connect.yfilter = yfilter;
    }
}

bool Aaa::Tacacs::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ordering-index" || name == "ip-address" || name == "port-number" || name == "key" || name == "timeout" || name == "single-connect")
        return true;
    return false;
}

Aaa::Tacacs::Ipv4::Ipv4()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "ipv4"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Tacacs::Ipv4::~Ipv4()
{
}

bool Aaa::Tacacs::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set;
}

bool Aaa::Tacacs::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Aaa::Tacacs::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Tacacs::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Tacacs::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Tacacs::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Tacacs::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Tacacs::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Tacacs::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Aaa::Tacacs::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Aaa::Tacacs::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Tacacs::Vrfs::~Vrfs()
{
}

bool Aaa::Tacacs::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Tacacs::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Tacacs::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Tacacs::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Tacacs::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Aaa::Tacacs::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Tacacs::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Tacacs::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Tacacs::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Tacacs::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Aaa::Tacacs::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    source_interface{YType::str, "source-interface"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Tacacs::Vrfs::Vrf::~Vrf()
{
}

bool Aaa::Tacacs::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| source_interface.is_set;
}

bool Aaa::Tacacs::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Aaa::Tacacs::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Tacacs::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Tacacs::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Tacacs::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Tacacs::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Tacacs::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Tacacs::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Aaa::Tacacs::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "source-interface")
        return true;
    return false;
}

Aaa::AaaSubscriber::AaaSubscriber()
    :
    policy_if_authors(std::make_shared<Aaa::AaaSubscriber::PolicyIfAuthors>())
    , accountings(std::make_shared<Aaa::AaaSubscriber::Accountings>())
    , service_accounting(std::make_shared<Aaa::AaaSubscriber::ServiceAccounting>())
    , prepaid_authors(std::make_shared<Aaa::AaaSubscriber::PrepaidAuthors>())
    , authorizations(std::make_shared<Aaa::AaaSubscriber::Authorizations>())
    , authentications(std::make_shared<Aaa::AaaSubscriber::Authentications>())
{
    policy_if_authors->parent = this;
    accountings->parent = this;
    service_accounting->parent = this;
    prepaid_authors->parent = this;
    authorizations->parent = this;
    authentications->parent = this;

    yang_name = "aaa-subscriber"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::~AaaSubscriber()
{
}

bool Aaa::AaaSubscriber::has_data() const
{
    if (is_presence_container) return true;
    return (policy_if_authors !=  nullptr && policy_if_authors->has_data())
	|| (accountings !=  nullptr && accountings->has_data())
	|| (service_accounting !=  nullptr && service_accounting->has_data())
	|| (prepaid_authors !=  nullptr && prepaid_authors->has_data())
	|| (authorizations !=  nullptr && authorizations->has_data())
	|| (authentications !=  nullptr && authentications->has_data());
}

bool Aaa::AaaSubscriber::has_operation() const
{
    return is_set(yfilter)
	|| (policy_if_authors !=  nullptr && policy_if_authors->has_operation())
	|| (accountings !=  nullptr && accountings->has_operation())
	|| (service_accounting !=  nullptr && service_accounting->has_operation())
	|| (prepaid_authors !=  nullptr && prepaid_authors->has_operation())
	|| (authorizations !=  nullptr && authorizations->has_operation())
	|| (authentications !=  nullptr && authentications->has_operation());
}

std::string Aaa::AaaSubscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-if-authors")
    {
        if(policy_if_authors == nullptr)
        {
            policy_if_authors = std::make_shared<Aaa::AaaSubscriber::PolicyIfAuthors>();
        }
        return policy_if_authors;
    }

    if(child_yang_name == "accountings")
    {
        if(accountings == nullptr)
        {
            accountings = std::make_shared<Aaa::AaaSubscriber::Accountings>();
        }
        return accountings;
    }

    if(child_yang_name == "service-accounting")
    {
        if(service_accounting == nullptr)
        {
            service_accounting = std::make_shared<Aaa::AaaSubscriber::ServiceAccounting>();
        }
        return service_accounting;
    }

    if(child_yang_name == "prepaid-authors")
    {
        if(prepaid_authors == nullptr)
        {
            prepaid_authors = std::make_shared<Aaa::AaaSubscriber::PrepaidAuthors>();
        }
        return prepaid_authors;
    }

    if(child_yang_name == "authorizations")
    {
        if(authorizations == nullptr)
        {
            authorizations = std::make_shared<Aaa::AaaSubscriber::Authorizations>();
        }
        return authorizations;
    }

    if(child_yang_name == "authentications")
    {
        if(authentications == nullptr)
        {
            authentications = std::make_shared<Aaa::AaaSubscriber::Authentications>();
        }
        return authentications;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_if_authors != nullptr)
    {
        _children["policy-if-authors"] = policy_if_authors;
    }

    if(accountings != nullptr)
    {
        _children["accountings"] = accountings;
    }

    if(service_accounting != nullptr)
    {
        _children["service-accounting"] = service_accounting;
    }

    if(prepaid_authors != nullptr)
    {
        _children["prepaid-authors"] = prepaid_authors;
    }

    if(authorizations != nullptr)
    {
        _children["authorizations"] = authorizations;
    }

    if(authentications != nullptr)
    {
        _children["authentications"] = authentications;
    }

    return _children;
}

void Aaa::AaaSubscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaSubscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaSubscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-if-authors" || name == "accountings" || name == "service-accounting" || name == "prepaid-authors" || name == "authorizations" || name == "authentications")
        return true;
    return false;
}

Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthors()
    :
    policy_if_author(this, {"type", "listname"})
{

    yang_name = "policy-if-authors"; yang_parent_name = "aaa-subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::PolicyIfAuthors::~PolicyIfAuthors()
{
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_if_author.len(); index++)
    {
        if(policy_if_author[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::has_operation() const
{
    for (std::size_t index=0; index<policy_if_author.len(); index++)
    {
        if(policy_if_author[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::AaaSubscriber::PolicyIfAuthors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::PolicyIfAuthors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-if-authors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::PolicyIfAuthors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::PolicyIfAuthors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-if-author")
    {
        auto ent_ = std::make_shared<Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor>();
        ent_->parent = this;
        policy_if_author.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::PolicyIfAuthors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_if_author.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::AaaSubscriber::PolicyIfAuthors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaSubscriber::PolicyIfAuthors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-if-author")
        return true;
    return false;
}

Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::PolicyIfAuthor()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{

    yang_name = "policy-if-author"; yang_parent_name = "policy-if-authors"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::~PolicyIfAuthor()
{
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| listname.is_set;
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(server_group_name.yfilter);
}

std::string Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/policy-if-authors/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-if-author";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

void Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "method" || name == "server-group-name")
        return true;
    return false;
}

Aaa::AaaSubscriber::Accountings::Accountings()
    :
    accounting(this, {"type", "listname"})
{

    yang_name = "accountings"; yang_parent_name = "aaa-subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::Accountings::~Accountings()
{
}

bool Aaa::AaaSubscriber::Accountings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accounting.len(); index++)
    {
        if(accounting[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::Accountings::has_operation() const
{
    for (std::size_t index=0; index<accounting.len(); index++)
    {
        if(accounting[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::AaaSubscriber::Accountings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::Accountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accountings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::Accountings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::Accountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        auto ent_ = std::make_shared<Aaa::AaaSubscriber::Accountings::Accounting>();
        ent_->parent = this;
        accounting.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::Accountings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : accounting.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::AaaSubscriber::Accountings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaSubscriber::Accountings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaSubscriber::Accountings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Aaa::AaaSubscriber::Accountings::Accounting::Accounting()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    broadcast{YType::enumeration, "broadcast"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{

    yang_name = "accounting"; yang_parent_name = "accountings"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::Accountings::Accounting::~Accounting()
{
}

bool Aaa::AaaSubscriber::Accountings::Accounting::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| listname.is_set
	|| broadcast.is_set;
}

bool Aaa::AaaSubscriber::Accountings::Accounting::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(server_group_name.yfilter);
}

std::string Aaa::AaaSubscriber::Accountings::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/accountings/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::Accountings::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::Accountings::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::Accountings::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::Accountings::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaSubscriber::Accountings::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

void Aaa::AaaSubscriber::Accountings::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::AaaSubscriber::Accountings::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "broadcast" || name == "method" || name == "server-group-name")
        return true;
    return false;
}

Aaa::AaaSubscriber::ServiceAccounting::ServiceAccounting()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "service-accounting"; yang_parent_name = "aaa-subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::ServiceAccounting::~ServiceAccounting()
{
}

bool Aaa::AaaSubscriber::ServiceAccounting::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Aaa::AaaSubscriber::ServiceAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Aaa::AaaSubscriber::ServiceAccounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::ServiceAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::ServiceAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaSubscriber::ServiceAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::AaaSubscriber::ServiceAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Aaa::AaaSubscriber::ServiceAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthors()
    :
    prepaid_author(this, {"type", "listname"})
{

    yang_name = "prepaid-authors"; yang_parent_name = "aaa-subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::PrepaidAuthors::~PrepaidAuthors()
{
}

bool Aaa::AaaSubscriber::PrepaidAuthors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prepaid_author.len(); index++)
    {
        if(prepaid_author[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::PrepaidAuthors::has_operation() const
{
    for (std::size_t index=0; index<prepaid_author.len(); index++)
    {
        if(prepaid_author[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::AaaSubscriber::PrepaidAuthors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::PrepaidAuthors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-authors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::PrepaidAuthors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::PrepaidAuthors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepaid-author")
    {
        auto ent_ = std::make_shared<Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor>();
        ent_->parent = this;
        prepaid_author.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::PrepaidAuthors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prepaid_author.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::AaaSubscriber::PrepaidAuthors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaSubscriber::PrepaidAuthors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaSubscriber::PrepaidAuthors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepaid-author")
        return true;
    return false;
}

Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::PrepaidAuthor()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{

    yang_name = "prepaid-author"; yang_parent_name = "prepaid-authors"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::~PrepaidAuthor()
{
}

bool Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| listname.is_set;
}

bool Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(server_group_name.yfilter);
}

std::string Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/prepaid-authors/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-author";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

void Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "method" || name == "server-group-name")
        return true;
    return false;
}

Aaa::AaaSubscriber::Authorizations::Authorizations()
    :
    authorization(this, {"type", "listname"})
{

    yang_name = "authorizations"; yang_parent_name = "aaa-subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::Authorizations::~Authorizations()
{
}

bool Aaa::AaaSubscriber::Authorizations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authorization.len(); index++)
    {
        if(authorization[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::Authorizations::has_operation() const
{
    for (std::size_t index=0; index<authorization.len(); index++)
    {
        if(authorization[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::AaaSubscriber::Authorizations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::Authorizations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::Authorizations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::Authorizations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        auto ent_ = std::make_shared<Aaa::AaaSubscriber::Authorizations::Authorization>();
        ent_->parent = this;
        authorization.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::Authorizations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authorization.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::AaaSubscriber::Authorizations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaSubscriber::Authorizations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaSubscriber::Authorizations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Aaa::AaaSubscriber::Authorizations::Authorization::Authorization()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{

    yang_name = "authorization"; yang_parent_name = "authorizations"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::Authorizations::Authorization::~Authorization()
{
}

bool Aaa::AaaSubscriber::Authorizations::Authorization::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| listname.is_set;
}

bool Aaa::AaaSubscriber::Authorizations::Authorization::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(server_group_name.yfilter);
}

std::string Aaa::AaaSubscriber::Authorizations::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/authorizations/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::Authorizations::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::Authorizations::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::Authorizations::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::Authorizations::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaSubscriber::Authorizations::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

void Aaa::AaaSubscriber::Authorizations::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::AaaSubscriber::Authorizations::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "method" || name == "server-group-name")
        return true;
    return false;
}

Aaa::AaaSubscriber::Authentications::Authentications()
    :
    authentication(this, {"type", "listname"})
{

    yang_name = "authentications"; yang_parent_name = "aaa-subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::Authentications::~Authentications()
{
}

bool Aaa::AaaSubscriber::Authentications::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authentication.len(); index++)
    {
        if(authentication[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::Authentications::has_operation() const
{
    for (std::size_t index=0; index<authentication.len(); index++)
    {
        if(authentication[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::AaaSubscriber::Authentications::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::Authentications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::Authentications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::Authentications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        auto ent_ = std::make_shared<Aaa::AaaSubscriber::Authentications::Authentication>();
        ent_->parent = this;
        authentication.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::Authentications::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authentication.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::AaaSubscriber::Authentications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaSubscriber::Authentications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaSubscriber::Authentications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Aaa::AaaSubscriber::Authentications::Authentication::Authentication()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{

    yang_name = "authentication"; yang_parent_name = "authentications"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaSubscriber::Authentications::Authentication::~Authentication()
{
}

bool Aaa::AaaSubscriber::Authentications::Authentication::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| listname.is_set;
}

bool Aaa::AaaSubscriber::Authentications::Authentication::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(server_group_name.yfilter);
}

std::string Aaa::AaaSubscriber::Authentications::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/authentications/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaSubscriber::Authentications::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaSubscriber::Authentications::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaSubscriber::Authentications::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaSubscriber::Authentications::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaSubscriber::Authentications::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

void Aaa::AaaSubscriber::Authentications::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::AaaSubscriber::Authentications::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "method" || name == "server-group-name")
        return true;
    return false;
}

Aaa::AaaMobile::AaaMobile()
    :
    mobiles(std::make_shared<Aaa::AaaMobile::Mobiles>())
{
    mobiles->parent = this;

    yang_name = "aaa-mobile"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaMobile::~AaaMobile()
{
}

bool Aaa::AaaMobile::has_data() const
{
    if (is_presence_container) return true;
    return (mobiles !=  nullptr && mobiles->has_data());
}

bool Aaa::AaaMobile::has_operation() const
{
    return is_set(yfilter)
	|| (mobiles !=  nullptr && mobiles->has_operation());
}

std::string Aaa::AaaMobile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaMobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobiles")
    {
        if(mobiles == nullptr)
        {
            mobiles = std::make_shared<Aaa::AaaMobile::Mobiles>();
        }
        return mobiles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaMobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobiles != nullptr)
    {
        _children["mobiles"] = mobiles;
    }

    return _children;
}

void Aaa::AaaMobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaMobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaMobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobiles")
        return true;
    return false;
}

Aaa::AaaMobile::Mobiles::Mobiles()
    :
    mobile(this, {"listname"})
{

    yang_name = "mobiles"; yang_parent_name = "aaa-mobile"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaMobile::Mobiles::~Mobiles()
{
}

bool Aaa::AaaMobile::Mobiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mobile.len(); index++)
    {
        if(mobile[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaMobile::Mobiles::has_operation() const
{
    for (std::size_t index=0; index<mobile.len(); index++)
    {
        if(mobile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::AaaMobile::Mobiles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaMobile::Mobiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaMobile::Mobiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaMobile::Mobiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobile")
    {
        auto ent_ = std::make_shared<Aaa::AaaMobile::Mobiles::Mobile>();
        ent_->parent = this;
        mobile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaMobile::Mobiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mobile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::AaaMobile::Mobiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaMobile::Mobiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaMobile::Mobiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobile")
        return true;
    return false;
}

Aaa::AaaMobile::Mobiles::Mobile::Mobile()
    :
    listname{YType::str, "listname"},
    broadcast{YType::enumeration, "broadcast"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{

    yang_name = "mobile"; yang_parent_name = "mobiles"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaMobile::Mobiles::Mobile::~Mobile()
{
}

bool Aaa::AaaMobile::Mobiles::Mobile::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| broadcast.is_set;
}

bool Aaa::AaaMobile::Mobiles::Mobile::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(server_group_name.yfilter);
}

std::string Aaa::AaaMobile::Mobiles::Mobile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile/mobiles/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaMobile::Mobiles::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaMobile::Mobiles::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaMobile::Mobiles::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaMobile::Mobiles::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaMobile::Mobiles::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

void Aaa::AaaMobile::Mobiles::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::AaaMobile::Mobiles::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listname" || name == "broadcast" || name == "method" || name == "server-group-name")
        return true;
    return false;
}

Aaa::AaaDot1x::AaaDot1x()
    :
    authentications(std::make_shared<Aaa::AaaDot1x::Authentications>())
{
    authentications->parent = this;

    yang_name = "aaa-dot1x"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaDot1x::~AaaDot1x()
{
}

bool Aaa::AaaDot1x::has_data() const
{
    if (is_presence_container) return true;
    return (authentications !=  nullptr && authentications->has_data());
}

bool Aaa::AaaDot1x::has_operation() const
{
    return is_set(yfilter)
	|| (authentications !=  nullptr && authentications->has_operation());
}

std::string Aaa::AaaDot1x::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaDot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaDot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaDot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentications")
    {
        if(authentications == nullptr)
        {
            authentications = std::make_shared<Aaa::AaaDot1x::Authentications>();
        }
        return authentications;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaDot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentications != nullptr)
    {
        _children["authentications"] = authentications;
    }

    return _children;
}

void Aaa::AaaDot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaDot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaDot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentications")
        return true;
    return false;
}

Aaa::AaaDot1x::Authentications::Authentications()
    :
    authentication(this, {"type", "listname"})
{

    yang_name = "authentications"; yang_parent_name = "aaa-dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaDot1x::Authentications::~Authentications()
{
}

bool Aaa::AaaDot1x::Authentications::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authentication.len(); index++)
    {
        if(authentication[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaDot1x::Authentications::has_operation() const
{
    for (std::size_t index=0; index<authentication.len(); index++)
    {
        if(authentication[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::AaaDot1x::Authentications::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaDot1x::Authentications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaDot1x::Authentications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaDot1x::Authentications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        auto ent_ = std::make_shared<Aaa::AaaDot1x::Authentications::Authentication>();
        ent_->parent = this;
        authentication.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaDot1x::Authentications::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authentication.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::AaaDot1x::Authentications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::AaaDot1x::Authentications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::AaaDot1x::Authentications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Aaa::AaaDot1x::Authentications::Authentication::Authentication()
    :
    type{YType::str, "type"},
    listname{YType::str, "listname"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{

    yang_name = "authentication"; yang_parent_name = "authentications"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::AaaDot1x::Authentications::Authentication::~Authentication()
{
}

bool Aaa::AaaDot1x::Authentications::Authentication::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| listname.is_set;
}

bool Aaa::AaaDot1x::Authentications::Authentication::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(listname.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(server_group_name.yfilter);
}

std::string Aaa::AaaDot1x::Authentications::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x/authentications/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::AaaDot1x::Authentications::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(listname, "listname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::AaaDot1x::Authentications::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (listname.is_set || is_set(listname.yfilter)) leaf_name_data.push_back(listname.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::AaaDot1x::Authentications::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::AaaDot1x::Authentications::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::AaaDot1x::Authentications::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listname")
    {
        listname = value;
        listname.value_namespace = name_space;
        listname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

void Aaa::AaaDot1x::Authentications::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "listname")
    {
        listname.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
}

bool Aaa::AaaDot1x::Authentications::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "listname" || name == "method" || name == "server-group-name")
        return true;
    return false;
}

Aaa::RadiusAttribute::RadiusAttribute()
    :
    nas_port_id(std::make_shared<Aaa::RadiusAttribute::NasPortId>())
    , calling_station(std::make_shared<Aaa::RadiusAttribute::CallingStation>())
    , called_station(std::make_shared<Aaa::RadiusAttribute::CalledStation>())
    , nas_port(std::make_shared<Aaa::RadiusAttribute::NasPort>())
    , format_others(std::make_shared<Aaa::RadiusAttribute::FormatOthers>())
{
    nas_port_id->parent = this;
    calling_station->parent = this;
    called_station->parent = this;
    nas_port->parent = this;
    format_others->parent = this;

    yang_name = "radius-attribute"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::~RadiusAttribute()
{
}

bool Aaa::RadiusAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (nas_port_id !=  nullptr && nas_port_id->has_data())
	|| (calling_station !=  nullptr && calling_station->has_data())
	|| (called_station !=  nullptr && called_station->has_data())
	|| (nas_port !=  nullptr && nas_port->has_data())
	|| (format_others !=  nullptr && format_others->has_data());
}

bool Aaa::RadiusAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (nas_port_id !=  nullptr && nas_port_id->has_operation())
	|| (calling_station !=  nullptr && calling_station->has_operation())
	|| (called_station !=  nullptr && called_station->has_operation())
	|| (nas_port !=  nullptr && nas_port->has_operation())
	|| (format_others !=  nullptr && format_others->has_operation());
}

std::string Aaa::RadiusAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nas-port-id")
    {
        if(nas_port_id == nullptr)
        {
            nas_port_id = std::make_shared<Aaa::RadiusAttribute::NasPortId>();
        }
        return nas_port_id;
    }

    if(child_yang_name == "calling-station")
    {
        if(calling_station == nullptr)
        {
            calling_station = std::make_shared<Aaa::RadiusAttribute::CallingStation>();
        }
        return calling_station;
    }

    if(child_yang_name == "called-station")
    {
        if(called_station == nullptr)
        {
            called_station = std::make_shared<Aaa::RadiusAttribute::CalledStation>();
        }
        return called_station;
    }

    if(child_yang_name == "nas-port")
    {
        if(nas_port == nullptr)
        {
            nas_port = std::make_shared<Aaa::RadiusAttribute::NasPort>();
        }
        return nas_port;
    }

    if(child_yang_name == "format-others")
    {
        if(format_others == nullptr)
        {
            format_others = std::make_shared<Aaa::RadiusAttribute::FormatOthers>();
        }
        return format_others;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nas_port_id != nullptr)
    {
        _children["nas-port-id"] = nas_port_id;
    }

    if(calling_station != nullptr)
    {
        _children["calling-station"] = calling_station;
    }

    if(called_station != nullptr)
    {
        _children["called-station"] = called_station;
    }

    if(nas_port != nullptr)
    {
        _children["nas-port"] = nas_port;
    }

    if(format_others != nullptr)
    {
        _children["format-others"] = format_others;
    }

    return _children;
}

void Aaa::RadiusAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-id" || name == "calling-station" || name == "called-station" || name == "nas-port" || name == "format-others")
        return true;
    return false;
}

Aaa::RadiusAttribute::NasPortId::NasPortId()
    :
    formats(std::make_shared<Aaa::RadiusAttribute::NasPortId::Formats>())
{
    formats->parent = this;

    yang_name = "nas-port-id"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::NasPortId::~NasPortId()
{
}

bool Aaa::RadiusAttribute::NasPortId::has_data() const
{
    if (is_presence_container) return true;
    return (formats !=  nullptr && formats->has_data());
}

bool Aaa::RadiusAttribute::NasPortId::has_operation() const
{
    return is_set(yfilter)
	|| (formats !=  nullptr && formats->has_operation());
}

std::string Aaa::RadiusAttribute::NasPortId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::NasPortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::NasPortId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::NasPortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "formats")
    {
        if(formats == nullptr)
        {
            formats = std::make_shared<Aaa::RadiusAttribute::NasPortId::Formats>();
        }
        return formats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::NasPortId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(formats != nullptr)
    {
        _children["formats"] = formats;
    }

    return _children;
}

void Aaa::RadiusAttribute::NasPortId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::NasPortId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::NasPortId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "formats")
        return true;
    return false;
}

Aaa::RadiusAttribute::NasPortId::Formats::Formats()
    :
    format(this, {"type"})
{

    yang_name = "formats"; yang_parent_name = "nas-port-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::NasPortId::Formats::~Formats()
{
}

bool Aaa::RadiusAttribute::NasPortId::Formats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<format.len(); index++)
    {
        if(format[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::NasPortId::Formats::has_operation() const
{
    for (std::size_t index=0; index<format.len(); index++)
    {
        if(format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::RadiusAttribute::NasPortId::Formats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::NasPortId::Formats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::NasPortId::Formats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::NasPortId::Formats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        auto ent_ = std::make_shared<Aaa::RadiusAttribute::NasPortId::Formats::Format>();
        ent_->parent = this;
        format.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::NasPortId::Formats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : format.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::RadiusAttribute::NasPortId::Formats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::NasPortId::Formats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::NasPortId::Formats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Aaa::RadiusAttribute::NasPortId::Formats::Format::Format()
    :
    type{YType::uint32, "type"},
    format_name{YType::str, "format-name"}
{

    yang_name = "format"; yang_parent_name = "formats"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::NasPortId::Formats::Format::~Format()
{
}

bool Aaa::RadiusAttribute::NasPortId::Formats::Format::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| format_name.is_set;
}

bool Aaa::RadiusAttribute::NasPortId::Formats::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string Aaa::RadiusAttribute::NasPortId::Formats::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port-id/formats/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::NasPortId::Formats::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::NasPortId::Formats::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::NasPortId::Formats::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::NasPortId::Formats::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::RadiusAttribute::NasPortId::Formats::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::RadiusAttribute::NasPortId::Formats::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool Aaa::RadiusAttribute::NasPortId::Formats::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "format-name")
        return true;
    return false;
}

Aaa::RadiusAttribute::CallingStation::CallingStation()
    :
    formats(std::make_shared<Aaa::RadiusAttribute::CallingStation::Formats>())
{
    formats->parent = this;

    yang_name = "calling-station"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::CallingStation::~CallingStation()
{
}

bool Aaa::RadiusAttribute::CallingStation::has_data() const
{
    if (is_presence_container) return true;
    return (formats !=  nullptr && formats->has_data());
}

bool Aaa::RadiusAttribute::CallingStation::has_operation() const
{
    return is_set(yfilter)
	|| (formats !=  nullptr && formats->has_operation());
}

std::string Aaa::RadiusAttribute::CallingStation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::CallingStation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::CallingStation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::CallingStation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "formats")
    {
        if(formats == nullptr)
        {
            formats = std::make_shared<Aaa::RadiusAttribute::CallingStation::Formats>();
        }
        return formats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::CallingStation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(formats != nullptr)
    {
        _children["formats"] = formats;
    }

    return _children;
}

void Aaa::RadiusAttribute::CallingStation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::CallingStation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::CallingStation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "formats")
        return true;
    return false;
}

Aaa::RadiusAttribute::CallingStation::Formats::Formats()
    :
    format(this, {"type"})
{

    yang_name = "formats"; yang_parent_name = "calling-station"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::CallingStation::Formats::~Formats()
{
}

bool Aaa::RadiusAttribute::CallingStation::Formats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<format.len(); index++)
    {
        if(format[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::CallingStation::Formats::has_operation() const
{
    for (std::size_t index=0; index<format.len(); index++)
    {
        if(format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::RadiusAttribute::CallingStation::Formats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/calling-station/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::CallingStation::Formats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::CallingStation::Formats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::CallingStation::Formats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        auto ent_ = std::make_shared<Aaa::RadiusAttribute::CallingStation::Formats::Format>();
        ent_->parent = this;
        format.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::CallingStation::Formats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : format.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::RadiusAttribute::CallingStation::Formats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::CallingStation::Formats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::CallingStation::Formats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Aaa::RadiusAttribute::CallingStation::Formats::Format::Format()
    :
    type{YType::uint32, "type"},
    format_name{YType::str, "format-name"}
{

    yang_name = "format"; yang_parent_name = "formats"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::CallingStation::Formats::Format::~Format()
{
}

bool Aaa::RadiusAttribute::CallingStation::Formats::Format::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| format_name.is_set;
}

bool Aaa::RadiusAttribute::CallingStation::Formats::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string Aaa::RadiusAttribute::CallingStation::Formats::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/calling-station/formats/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::CallingStation::Formats::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::CallingStation::Formats::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::CallingStation::Formats::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::CallingStation::Formats::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::RadiusAttribute::CallingStation::Formats::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::RadiusAttribute::CallingStation::Formats::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool Aaa::RadiusAttribute::CallingStation::Formats::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "format-name")
        return true;
    return false;
}

Aaa::RadiusAttribute::CalledStation::CalledStation()
    :
    formats(std::make_shared<Aaa::RadiusAttribute::CalledStation::Formats>())
{
    formats->parent = this;

    yang_name = "called-station"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::CalledStation::~CalledStation()
{
}

bool Aaa::RadiusAttribute::CalledStation::has_data() const
{
    if (is_presence_container) return true;
    return (formats !=  nullptr && formats->has_data());
}

bool Aaa::RadiusAttribute::CalledStation::has_operation() const
{
    return is_set(yfilter)
	|| (formats !=  nullptr && formats->has_operation());
}

std::string Aaa::RadiusAttribute::CalledStation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::CalledStation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "called-station";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::CalledStation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::CalledStation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "formats")
    {
        if(formats == nullptr)
        {
            formats = std::make_shared<Aaa::RadiusAttribute::CalledStation::Formats>();
        }
        return formats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::CalledStation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(formats != nullptr)
    {
        _children["formats"] = formats;
    }

    return _children;
}

void Aaa::RadiusAttribute::CalledStation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::CalledStation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::CalledStation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "formats")
        return true;
    return false;
}

Aaa::RadiusAttribute::CalledStation::Formats::Formats()
    :
    format(this, {"type"})
{

    yang_name = "formats"; yang_parent_name = "called-station"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::CalledStation::Formats::~Formats()
{
}

bool Aaa::RadiusAttribute::CalledStation::Formats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<format.len(); index++)
    {
        if(format[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::CalledStation::Formats::has_operation() const
{
    for (std::size_t index=0; index<format.len(); index++)
    {
        if(format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::RadiusAttribute::CalledStation::Formats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/called-station/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::CalledStation::Formats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::CalledStation::Formats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::CalledStation::Formats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        auto ent_ = std::make_shared<Aaa::RadiusAttribute::CalledStation::Formats::Format>();
        ent_->parent = this;
        format.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::CalledStation::Formats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : format.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::RadiusAttribute::CalledStation::Formats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::CalledStation::Formats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::CalledStation::Formats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Aaa::RadiusAttribute::CalledStation::Formats::Format::Format()
    :
    type{YType::uint32, "type"},
    format_name{YType::str, "format-name"}
{

    yang_name = "format"; yang_parent_name = "formats"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::CalledStation::Formats::Format::~Format()
{
}

bool Aaa::RadiusAttribute::CalledStation::Formats::Format::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| format_name.is_set;
}

bool Aaa::RadiusAttribute::CalledStation::Formats::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string Aaa::RadiusAttribute::CalledStation::Formats::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/called-station/formats/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::CalledStation::Formats::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::CalledStation::Formats::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::CalledStation::Formats::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::CalledStation::Formats::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::RadiusAttribute::CalledStation::Formats::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::RadiusAttribute::CalledStation::Formats::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool Aaa::RadiusAttribute::CalledStation::Formats::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "format-name")
        return true;
    return false;
}

Aaa::RadiusAttribute::NasPort::NasPort()
    :
    format_extendeds(std::make_shared<Aaa::RadiusAttribute::NasPort::FormatExtendeds>())
{
    format_extendeds->parent = this;

    yang_name = "nas-port"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::NasPort::~NasPort()
{
}

bool Aaa::RadiusAttribute::NasPort::has_data() const
{
    if (is_presence_container) return true;
    return (format_extendeds !=  nullptr && format_extendeds->has_data());
}

bool Aaa::RadiusAttribute::NasPort::has_operation() const
{
    return is_set(yfilter)
	|| (format_extendeds !=  nullptr && format_extendeds->has_operation());
}

std::string Aaa::RadiusAttribute::NasPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::NasPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-extendeds")
    {
        if(format_extendeds == nullptr)
        {
            format_extendeds = std::make_shared<Aaa::RadiusAttribute::NasPort::FormatExtendeds>();
        }
        return format_extendeds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::NasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format_extendeds != nullptr)
    {
        _children["format-extendeds"] = format_extendeds;
    }

    return _children;
}

void Aaa::RadiusAttribute::NasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::NasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::NasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-extendeds")
        return true;
    return false;
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtendeds()
    :
    format_extended(this, {"value_", "type"})
{

    yang_name = "format-extendeds"; yang_parent_name = "nas-port"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::~FormatExtendeds()
{
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<format_extended.len(); index++)
    {
        if(format_extended[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::has_operation() const
{
    for (std::size_t index=0; index<format_extended.len(); index++)
    {
        if(format_extended[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-extendeds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-extended")
    {
        auto ent_ = std::make_shared<Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended>();
        ent_->parent = this;
        format_extended.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : format_extended.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::RadiusAttribute::NasPort::FormatExtendeds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::NasPort::FormatExtendeds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-extended")
        return true;
    return false;
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::FormatExtended()
    :
    value_{YType::str, "value"},
    type{YType::uint32, "type"},
    format_identifier{YType::str, "format-identifier"}
{

    yang_name = "format-extended"; yang_parent_name = "format-extendeds"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::~FormatExtended()
{
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| type.is_set
	|| format_identifier.is_set;
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(format_identifier.yfilter);
}

std::string Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port/format-extendeds/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-extended";
    ADD_KEY_TOKEN(value_, "value");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format_identifier.is_set || is_set(format_identifier.yfilter)) leaf_name_data.push_back(format_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-identifier")
    {
        format_identifier = value;
        format_identifier.value_namespace = name_space;
        format_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "format-identifier")
    {
        format_identifier.yfilter = yfilter;
    }
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "type" || name == "format-identifier")
        return true;
    return false;
}

Aaa::RadiusAttribute::FormatOthers::FormatOthers()
    :
    format_other(this, {"nas_port_type_name"})
{

    yang_name = "format-others"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::FormatOthers::~FormatOthers()
{
}

bool Aaa::RadiusAttribute::FormatOthers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<format_other.len(); index++)
    {
        if(format_other[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::FormatOthers::has_operation() const
{
    for (std::size_t index=0; index<format_other.len(); index++)
    {
        if(format_other[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::RadiusAttribute::FormatOthers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::FormatOthers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-others";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::FormatOthers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::FormatOthers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-other")
    {
        auto ent_ = std::make_shared<Aaa::RadiusAttribute::FormatOthers::FormatOther>();
        ent_->parent = this;
        format_other.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::FormatOthers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : format_other.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::RadiusAttribute::FormatOthers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::RadiusAttribute::FormatOthers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::RadiusAttribute::FormatOthers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-other")
        return true;
    return false;
}

Aaa::RadiusAttribute::FormatOthers::FormatOther::FormatOther()
    :
    nas_port_type_name{YType::str, "nas-port-type-name"},
    attribute_config1{YType::str, "attribute-config1"},
    attribute_config2{YType::str, "attribute-config2"},
    attribute_config3{YType::str, "attribute-config3"},
    attribute_config4{YType::str, "attribute-config4"},
    attribute_config5{YType::str, "attribute-config5"},
    attribute_config6{YType::str, "attribute-config6"},
    attribute_config7{YType::str, "attribute-config7"},
    attribute_config8{YType::str, "attribute-config8"},
    attribute_config9{YType::str, "attribute-config9"},
    attribute_config10{YType::str, "attribute-config10"},
    attribute_config11{YType::str, "attribute-config11"},
    attribute_config12{YType::str, "attribute-config12"},
    attribute_config13{YType::str, "attribute-config13"},
    attribute_config14{YType::str, "attribute-config14"},
    attribute_config15{YType::str, "attribute-config15"},
    attribute_config16{YType::str, "attribute-config16"},
    attribute_config17{YType::str, "attribute-config17"},
    attribute_config18{YType::str, "attribute-config18"},
    attribute_config19{YType::uint32, "attribute-config19"}
{

    yang_name = "format-other"; yang_parent_name = "format-others"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::FormatOthers::FormatOther::~FormatOther()
{
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_data() const
{
    if (is_presence_container) return true;
    return nas_port_type_name.is_set
	|| attribute_config1.is_set
	|| attribute_config2.is_set
	|| attribute_config3.is_set
	|| attribute_config4.is_set
	|| attribute_config5.is_set
	|| attribute_config6.is_set
	|| attribute_config7.is_set
	|| attribute_config8.is_set
	|| attribute_config9.is_set
	|| attribute_config10.is_set
	|| attribute_config11.is_set
	|| attribute_config12.is_set
	|| attribute_config13.is_set
	|| attribute_config14.is_set
	|| attribute_config15.is_set
	|| attribute_config16.is_set
	|| attribute_config17.is_set
	|| attribute_config18.is_set
	|| attribute_config19.is_set;
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nas_port_type_name.yfilter)
	|| ydk::is_set(attribute_config1.yfilter)
	|| ydk::is_set(attribute_config2.yfilter)
	|| ydk::is_set(attribute_config3.yfilter)
	|| ydk::is_set(attribute_config4.yfilter)
	|| ydk::is_set(attribute_config5.yfilter)
	|| ydk::is_set(attribute_config6.yfilter)
	|| ydk::is_set(attribute_config7.yfilter)
	|| ydk::is_set(attribute_config8.yfilter)
	|| ydk::is_set(attribute_config9.yfilter)
	|| ydk::is_set(attribute_config10.yfilter)
	|| ydk::is_set(attribute_config11.yfilter)
	|| ydk::is_set(attribute_config12.yfilter)
	|| ydk::is_set(attribute_config13.yfilter)
	|| ydk::is_set(attribute_config14.yfilter)
	|| ydk::is_set(attribute_config15.yfilter)
	|| ydk::is_set(attribute_config16.yfilter)
	|| ydk::is_set(attribute_config17.yfilter)
	|| ydk::is_set(attribute_config18.yfilter)
	|| ydk::is_set(attribute_config19.yfilter);
}

std::string Aaa::RadiusAttribute::FormatOthers::FormatOther::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/format-others/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::FormatOthers::FormatOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-other";
    ADD_KEY_TOKEN(nas_port_type_name, "nas-port-type-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::FormatOthers::FormatOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type_name.is_set || is_set(nas_port_type_name.yfilter)) leaf_name_data.push_back(nas_port_type_name.get_name_leafdata());
    if (attribute_config1.is_set || is_set(attribute_config1.yfilter)) leaf_name_data.push_back(attribute_config1.get_name_leafdata());
    if (attribute_config2.is_set || is_set(attribute_config2.yfilter)) leaf_name_data.push_back(attribute_config2.get_name_leafdata());
    if (attribute_config3.is_set || is_set(attribute_config3.yfilter)) leaf_name_data.push_back(attribute_config3.get_name_leafdata());
    if (attribute_config4.is_set || is_set(attribute_config4.yfilter)) leaf_name_data.push_back(attribute_config4.get_name_leafdata());
    if (attribute_config5.is_set || is_set(attribute_config5.yfilter)) leaf_name_data.push_back(attribute_config5.get_name_leafdata());
    if (attribute_config6.is_set || is_set(attribute_config6.yfilter)) leaf_name_data.push_back(attribute_config6.get_name_leafdata());
    if (attribute_config7.is_set || is_set(attribute_config7.yfilter)) leaf_name_data.push_back(attribute_config7.get_name_leafdata());
    if (attribute_config8.is_set || is_set(attribute_config8.yfilter)) leaf_name_data.push_back(attribute_config8.get_name_leafdata());
    if (attribute_config9.is_set || is_set(attribute_config9.yfilter)) leaf_name_data.push_back(attribute_config9.get_name_leafdata());
    if (attribute_config10.is_set || is_set(attribute_config10.yfilter)) leaf_name_data.push_back(attribute_config10.get_name_leafdata());
    if (attribute_config11.is_set || is_set(attribute_config11.yfilter)) leaf_name_data.push_back(attribute_config11.get_name_leafdata());
    if (attribute_config12.is_set || is_set(attribute_config12.yfilter)) leaf_name_data.push_back(attribute_config12.get_name_leafdata());
    if (attribute_config13.is_set || is_set(attribute_config13.yfilter)) leaf_name_data.push_back(attribute_config13.get_name_leafdata());
    if (attribute_config14.is_set || is_set(attribute_config14.yfilter)) leaf_name_data.push_back(attribute_config14.get_name_leafdata());
    if (attribute_config15.is_set || is_set(attribute_config15.yfilter)) leaf_name_data.push_back(attribute_config15.get_name_leafdata());
    if (attribute_config16.is_set || is_set(attribute_config16.yfilter)) leaf_name_data.push_back(attribute_config16.get_name_leafdata());
    if (attribute_config17.is_set || is_set(attribute_config17.yfilter)) leaf_name_data.push_back(attribute_config17.get_name_leafdata());
    if (attribute_config18.is_set || is_set(attribute_config18.yfilter)) leaf_name_data.push_back(attribute_config18.get_name_leafdata());
    if (attribute_config19.is_set || is_set(attribute_config19.yfilter)) leaf_name_data.push_back(attribute_config19.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::RadiusAttribute::FormatOthers::FormatOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::RadiusAttribute::FormatOthers::FormatOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::RadiusAttribute::FormatOthers::FormatOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nas-port-type-name")
    {
        nas_port_type_name = value;
        nas_port_type_name.value_namespace = name_space;
        nas_port_type_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config1")
    {
        attribute_config1 = value;
        attribute_config1.value_namespace = name_space;
        attribute_config1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config2")
    {
        attribute_config2 = value;
        attribute_config2.value_namespace = name_space;
        attribute_config2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config3")
    {
        attribute_config3 = value;
        attribute_config3.value_namespace = name_space;
        attribute_config3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config4")
    {
        attribute_config4 = value;
        attribute_config4.value_namespace = name_space;
        attribute_config4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config5")
    {
        attribute_config5 = value;
        attribute_config5.value_namespace = name_space;
        attribute_config5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config6")
    {
        attribute_config6 = value;
        attribute_config6.value_namespace = name_space;
        attribute_config6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config7")
    {
        attribute_config7 = value;
        attribute_config7.value_namespace = name_space;
        attribute_config7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config8")
    {
        attribute_config8 = value;
        attribute_config8.value_namespace = name_space;
        attribute_config8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config9")
    {
        attribute_config9 = value;
        attribute_config9.value_namespace = name_space;
        attribute_config9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config10")
    {
        attribute_config10 = value;
        attribute_config10.value_namespace = name_space;
        attribute_config10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config11")
    {
        attribute_config11 = value;
        attribute_config11.value_namespace = name_space;
        attribute_config11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config12")
    {
        attribute_config12 = value;
        attribute_config12.value_namespace = name_space;
        attribute_config12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config13")
    {
        attribute_config13 = value;
        attribute_config13.value_namespace = name_space;
        attribute_config13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config14")
    {
        attribute_config14 = value;
        attribute_config14.value_namespace = name_space;
        attribute_config14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config15")
    {
        attribute_config15 = value;
        attribute_config15.value_namespace = name_space;
        attribute_config15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config16")
    {
        attribute_config16 = value;
        attribute_config16.value_namespace = name_space;
        attribute_config16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config17")
    {
        attribute_config17 = value;
        attribute_config17.value_namespace = name_space;
        attribute_config17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config18")
    {
        attribute_config18 = value;
        attribute_config18.value_namespace = name_space;
        attribute_config18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config19")
    {
        attribute_config19 = value;
        attribute_config19.value_namespace = name_space;
        attribute_config19.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::RadiusAttribute::FormatOthers::FormatOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nas-port-type-name")
    {
        nas_port_type_name.yfilter = yfilter;
    }
    if(value_path == "attribute-config1")
    {
        attribute_config1.yfilter = yfilter;
    }
    if(value_path == "attribute-config2")
    {
        attribute_config2.yfilter = yfilter;
    }
    if(value_path == "attribute-config3")
    {
        attribute_config3.yfilter = yfilter;
    }
    if(value_path == "attribute-config4")
    {
        attribute_config4.yfilter = yfilter;
    }
    if(value_path == "attribute-config5")
    {
        attribute_config5.yfilter = yfilter;
    }
    if(value_path == "attribute-config6")
    {
        attribute_config6.yfilter = yfilter;
    }
    if(value_path == "attribute-config7")
    {
        attribute_config7.yfilter = yfilter;
    }
    if(value_path == "attribute-config8")
    {
        attribute_config8.yfilter = yfilter;
    }
    if(value_path == "attribute-config9")
    {
        attribute_config9.yfilter = yfilter;
    }
    if(value_path == "attribute-config10")
    {
        attribute_config10.yfilter = yfilter;
    }
    if(value_path == "attribute-config11")
    {
        attribute_config11.yfilter = yfilter;
    }
    if(value_path == "attribute-config12")
    {
        attribute_config12.yfilter = yfilter;
    }
    if(value_path == "attribute-config13")
    {
        attribute_config13.yfilter = yfilter;
    }
    if(value_path == "attribute-config14")
    {
        attribute_config14.yfilter = yfilter;
    }
    if(value_path == "attribute-config15")
    {
        attribute_config15.yfilter = yfilter;
    }
    if(value_path == "attribute-config16")
    {
        attribute_config16.yfilter = yfilter;
    }
    if(value_path == "attribute-config17")
    {
        attribute_config17.yfilter = yfilter;
    }
    if(value_path == "attribute-config18")
    {
        attribute_config18.yfilter = yfilter;
    }
    if(value_path == "attribute-config19")
    {
        attribute_config19.yfilter = yfilter;
    }
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-type-name" || name == "attribute-config1" || name == "attribute-config2" || name == "attribute-config3" || name == "attribute-config4" || name == "attribute-config5" || name == "attribute-config6" || name == "attribute-config7" || name == "attribute-config8" || name == "attribute-config9" || name == "attribute-config10" || name == "attribute-config11" || name == "attribute-config12" || name == "attribute-config13" || name == "attribute-config14" || name == "attribute-config15" || name == "attribute-config16" || name == "attribute-config17" || name == "attribute-config18" || name == "attribute-config19")
        return true;
    return false;
}

Aaa::Radius::Radius()
    :
    retransmit{YType::uint32, "retransmit"},
    dead_time{YType::uint32, "dead-time"},
    key{YType::str, "key"},
    timeout{YType::uint32, "timeout"},
    ignore_accounting_port{YType::boolean, "ignore-accounting-port"},
    idle_time{YType::uint32, "idle-time"},
    username{YType::str, "username"},
    ignore_auth_port{YType::boolean, "ignore-auth-port"}
        ,
    hosts(std::make_shared<Aaa::Radius::Hosts>())
    , dead_criteria(std::make_shared<Aaa::Radius::DeadCriteria>())
    , disallow(std::make_shared<Aaa::Radius::Disallow>())
    , ipv6(std::make_shared<Aaa::Radius::Ipv6>())
    , dynamic_authorization(std::make_shared<Aaa::Radius::DynamicAuthorization>())
    , load_balance_options(std::make_shared<Aaa::Radius::LoadBalanceOptions>())
    , vrfs(std::make_shared<Aaa::Radius::Vrfs>())
    , throttle(std::make_shared<Aaa::Radius::Throttle>())
    , vsa(std::make_shared<Aaa::Radius::Vsa>())
    , ipv4(std::make_shared<Aaa::Radius::Ipv4>())
    , radius_attribute(std::make_shared<Aaa::Radius::RadiusAttribute>())
    , attributes(std::make_shared<Aaa::Radius::Attributes>())
    , source_port(std::make_shared<Aaa::Radius::SourcePort>())
{
    hosts->parent = this;
    dead_criteria->parent = this;
    disallow->parent = this;
    ipv6->parent = this;
    dynamic_authorization->parent = this;
    load_balance_options->parent = this;
    vrfs->parent = this;
    throttle->parent = this;
    vsa->parent = this;
    ipv4->parent = this;
    radius_attribute->parent = this;
    attributes->parent = this;
    source_port->parent = this;

    yang_name = "radius"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::~Radius()
{
}

bool Aaa::Radius::has_data() const
{
    if (is_presence_container) return true;
    return retransmit.is_set
	|| dead_time.is_set
	|| key.is_set
	|| timeout.is_set
	|| ignore_accounting_port.is_set
	|| idle_time.is_set
	|| username.is_set
	|| ignore_auth_port.is_set
	|| (hosts !=  nullptr && hosts->has_data())
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (disallow !=  nullptr && disallow->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_data())
	|| (load_balance_options !=  nullptr && load_balance_options->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (throttle !=  nullptr && throttle->has_data())
	|| (vsa !=  nullptr && vsa->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (radius_attribute !=  nullptr && radius_attribute->has_data())
	|| (attributes !=  nullptr && attributes->has_data())
	|| (source_port !=  nullptr && source_port->has_data());
}

bool Aaa::Radius::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(dead_time.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(ignore_accounting_port.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(ignore_auth_port.yfilter)
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (disallow !=  nullptr && disallow->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_operation())
	|| (load_balance_options !=  nullptr && load_balance_options->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation())
	|| (vsa !=  nullptr && vsa->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (radius_attribute !=  nullptr && radius_attribute->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (source_port !=  nullptr && source_port->has_operation());
}

std::string Aaa::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-cfg:radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.yfilter)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (ignore_accounting_port.is_set || is_set(ignore_accounting_port.yfilter)) leaf_name_data.push_back(ignore_accounting_port.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (ignore_auth_port.is_set || is_set(ignore_auth_port.yfilter)) leaf_name_data.push_back(ignore_auth_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Aaa::Radius::Hosts>();
        }
        return hosts;
    }

    if(child_yang_name == "dead-criteria")
    {
        if(dead_criteria == nullptr)
        {
            dead_criteria = std::make_shared<Aaa::Radius::DeadCriteria>();
        }
        return dead_criteria;
    }

    if(child_yang_name == "disallow")
    {
        if(disallow == nullptr)
        {
            disallow = std::make_shared<Aaa::Radius::Disallow>();
        }
        return disallow;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Aaa::Radius::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "dynamic-authorization")
    {
        if(dynamic_authorization == nullptr)
        {
            dynamic_authorization = std::make_shared<Aaa::Radius::DynamicAuthorization>();
        }
        return dynamic_authorization;
    }

    if(child_yang_name == "load-balance-options")
    {
        if(load_balance_options == nullptr)
        {
            load_balance_options = std::make_shared<Aaa::Radius::LoadBalanceOptions>();
        }
        return load_balance_options;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Aaa::Radius::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Aaa::Radius::Throttle>();
        }
        return throttle;
    }

    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Aaa::Radius::Vsa>();
        }
        return vsa;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Aaa::Radius::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "radius-attribute")
    {
        if(radius_attribute == nullptr)
        {
            radius_attribute = std::make_shared<Aaa::Radius::RadiusAttribute>();
        }
        return radius_attribute;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Aaa::Radius::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "source-port")
    {
        if(source_port == nullptr)
        {
            source_port = std::make_shared<Aaa::Radius::SourcePort>();
        }
        return source_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    if(dead_criteria != nullptr)
    {
        _children["dead-criteria"] = dead_criteria;
    }

    if(disallow != nullptr)
    {
        _children["disallow"] = disallow;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(dynamic_authorization != nullptr)
    {
        _children["dynamic-authorization"] = dynamic_authorization;
    }

    if(load_balance_options != nullptr)
    {
        _children["load-balance-options"] = load_balance_options;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(throttle != nullptr)
    {
        _children["throttle"] = throttle;
    }

    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(radius_attribute != nullptr)
    {
        _children["radius-attribute"] = radius_attribute;
    }

    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(source_port != nullptr)
    {
        _children["source-port"] = source_port;
    }

    return _children;
}

void Aaa::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-time")
    {
        dead_time = value;
        dead_time.value_namespace = name_space;
        dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port = value;
        ignore_accounting_port.value_namespace = name_space;
        ignore_accounting_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port = value;
        ignore_auth_port.value_namespace = name_space;
        ignore_auth_port.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "dead-time")
    {
        dead_time.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port.yfilter = yfilter;
    }
}

bool Aaa::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hosts" || name == "dead-criteria" || name == "disallow" || name == "ipv6" || name == "dynamic-authorization" || name == "load-balance-options" || name == "vrfs" || name == "throttle" || name == "vsa" || name == "ipv4" || name == "radius-attribute" || name == "attributes" || name == "source-port" || name == "retransmit" || name == "dead-time" || name == "key" || name == "timeout" || name == "ignore-accounting-port" || name == "idle-time" || name == "username" || name == "ignore-auth-port")
        return true;
    return false;
}

Aaa::Radius::Hosts::Hosts()
    :
    host(this, {"ordering_index", "ip_address", "auth_port_number", "acct_port_number"})
{

    yang_name = "hosts"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Hosts::~Hosts()
{
}

bool Aaa::Radius::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Radius::Hosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Aaa::Radius::Hosts::Host::Host()
    :
    ordering_index{YType::uint32, "ordering-index"},
    ip_address{YType::str, "ip-address"},
    auth_port_number{YType::uint16, "auth-port-number"},
    acct_port_number{YType::uint16, "acct-port-number"},
    host_retransmit{YType::uint32, "host-retransmit"},
    host_timeout{YType::uint32, "host-timeout"},
    host_key{YType::str, "host-key"},
    ignore_accounting_port{YType::boolean, "ignore-accounting-port"},
    idle_time{YType::uint32, "idle-time"},
    username{YType::str, "username"},
    ignore_auth_port{YType::boolean, "ignore-auth-port"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Hosts::Host::~Host()
{
}

bool Aaa::Radius::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return ordering_index.is_set
	|| ip_address.is_set
	|| auth_port_number.is_set
	|| acct_port_number.is_set
	|| host_retransmit.is_set
	|| host_timeout.is_set
	|| host_key.is_set
	|| ignore_accounting_port.is_set
	|| idle_time.is_set
	|| username.is_set
	|| ignore_auth_port.is_set;
}

bool Aaa::Radius::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_index.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(auth_port_number.yfilter)
	|| ydk::is_set(acct_port_number.yfilter)
	|| ydk::is_set(host_retransmit.yfilter)
	|| ydk::is_set(host_timeout.yfilter)
	|| ydk::is_set(host_key.yfilter)
	|| ydk::is_set(ignore_accounting_port.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(ignore_auth_port.yfilter);
}

std::string Aaa::Radius::Hosts::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/hosts/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(ordering_index, "ordering-index");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(auth_port_number, "auth-port-number");
    ADD_KEY_TOKEN(acct_port_number, "acct-port-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.yfilter)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.yfilter)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (acct_port_number.is_set || is_set(acct_port_number.yfilter)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (host_retransmit.is_set || is_set(host_retransmit.yfilter)) leaf_name_data.push_back(host_retransmit.get_name_leafdata());
    if (host_timeout.is_set || is_set(host_timeout.yfilter)) leaf_name_data.push_back(host_timeout.get_name_leafdata());
    if (host_key.is_set || is_set(host_key.yfilter)) leaf_name_data.push_back(host_key.get_name_leafdata());
    if (ignore_accounting_port.is_set || is_set(ignore_accounting_port.yfilter)) leaf_name_data.push_back(ignore_accounting_port.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (ignore_auth_port.is_set || is_set(ignore_auth_port.yfilter)) leaf_name_data.push_back(ignore_auth_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
        ordering_index.value_namespace = name_space;
        ordering_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
        auth_port_number.value_namespace = name_space;
        auth_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
        acct_port_number.value_namespace = name_space;
        acct_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-retransmit")
    {
        host_retransmit = value;
        host_retransmit.value_namespace = name_space;
        host_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-timeout")
    {
        host_timeout = value;
        host_timeout.value_namespace = name_space;
        host_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-key")
    {
        host_key = value;
        host_key.value_namespace = name_space;
        host_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port = value;
        ignore_accounting_port.value_namespace = name_space;
        ignore_accounting_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port = value;
        ignore_auth_port.value_namespace = name_space;
        ignore_auth_port.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-index")
    {
        ordering_index.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number.yfilter = yfilter;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number.yfilter = yfilter;
    }
    if(value_path == "host-retransmit")
    {
        host_retransmit.yfilter = yfilter;
    }
    if(value_path == "host-timeout")
    {
        host_timeout.yfilter = yfilter;
    }
    if(value_path == "host-key")
    {
        host_key.yfilter = yfilter;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port.yfilter = yfilter;
    }
}

bool Aaa::Radius::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ordering-index" || name == "ip-address" || name == "auth-port-number" || name == "acct-port-number" || name == "host-retransmit" || name == "host-timeout" || name == "host-key" || name == "ignore-accounting-port" || name == "idle-time" || name == "username" || name == "ignore-auth-port")
        return true;
    return false;
}

Aaa::Radius::DeadCriteria::DeadCriteria()
    :
    tries{YType::uint32, "tries"},
    time{YType::uint32, "time"}
{

    yang_name = "dead-criteria"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::DeadCriteria::~DeadCriteria()
{
}

bool Aaa::Radius::DeadCriteria::has_data() const
{
    if (is_presence_container) return true;
    return tries.is_set
	|| time.is_set;
}

bool Aaa::Radius::DeadCriteria::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tries.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Aaa::Radius::DeadCriteria::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::DeadCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-criteria";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::DeadCriteria::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tries.is_set || is_set(tries.yfilter)) leaf_name_data.push_back(tries.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::DeadCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::DeadCriteria::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tries")
    {
        tries = value;
        tries.value_namespace = name_space;
        tries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::DeadCriteria::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tries")
    {
        tries.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Aaa::Radius::DeadCriteria::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tries" || name == "time")
        return true;
    return false;
}

Aaa::Radius::Disallow::Disallow()
    :
    null_username{YType::uint32, "null-username"}
{

    yang_name = "disallow"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Disallow::~Disallow()
{
}

bool Aaa::Radius::Disallow::has_data() const
{
    if (is_presence_container) return true;
    return null_username.is_set;
}

bool Aaa::Radius::Disallow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null_username.yfilter);
}

std::string Aaa::Radius::Disallow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Disallow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disallow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Disallow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_username.is_set || is_set(null_username.yfilter)) leaf_name_data.push_back(null_username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Disallow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Disallow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Disallow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null-username")
    {
        null_username = value;
        null_username.value_namespace = name_space;
        null_username.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Disallow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null-username")
    {
        null_username.yfilter = yfilter;
    }
}

bool Aaa::Radius::Disallow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null-username")
        return true;
    return false;
}

Aaa::Radius::Ipv6::Ipv6()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "ipv6"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Ipv6::~Ipv6()
{
}

bool Aaa::Radius::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set;
}

bool Aaa::Radius::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Aaa::Radius::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Aaa::Radius::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Aaa::Radius::DynamicAuthorization::DynamicAuthorization()
    :
    ignore{YType::enumeration, "ignore"},
    port{YType::uint32, "port"},
    authentication_type{YType::enumeration, "authentication-type"},
    server_key{YType::str, "server-key"}
        ,
    clients(std::make_shared<Aaa::Radius::DynamicAuthorization::Clients>())
{
    clients->parent = this;

    yang_name = "dynamic-authorization"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::DynamicAuthorization::~DynamicAuthorization()
{
}

bool Aaa::Radius::DynamicAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| port.is_set
	|| authentication_type.is_set
	|| server_key.is_set
	|| (clients !=  nullptr && clients->has_data());
}

bool Aaa::Radius::DynamicAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(server_key.yfilter)
	|| (clients !=  nullptr && clients->has_operation());
}

std::string Aaa::Radius::DynamicAuthorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::DynamicAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::DynamicAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.yfilter)) leaf_name_data.push_back(server_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::DynamicAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Aaa::Radius::DynamicAuthorization::Clients>();
        }
        return clients;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::DynamicAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clients != nullptr)
    {
        _children["clients"] = clients;
    }

    return _children;
}

void Aaa::Radius::DynamicAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-key")
    {
        server_key = value;
        server_key.value_namespace = name_space;
        server_key.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::DynamicAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "server-key")
    {
        server_key.yfilter = yfilter;
    }
}

bool Aaa::Radius::DynamicAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "ignore" || name == "port" || name == "authentication-type" || name == "server-key")
        return true;
    return false;
}

Aaa::Radius::DynamicAuthorization::Clients::Clients()
    :
    client(this, {"ip_address"})
    , client_vrf_name(this, {"vrf_name", "ip_address"})
{

    yang_name = "clients"; yang_parent_name = "dynamic-authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::DynamicAuthorization::Clients::~Clients()
{
}

bool Aaa::Radius::DynamicAuthorization::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<client_vrf_name.len(); index++)
    {
        if(client_vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::DynamicAuthorization::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<client_vrf_name.len(); index++)
    {
        if(client_vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Radius::DynamicAuthorization::Clients::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/dynamic-authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::DynamicAuthorization::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::DynamicAuthorization::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::DynamicAuthorization::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Aaa::Radius::DynamicAuthorization::Clients::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    if(child_yang_name == "client-vrf-name")
    {
        auto ent_ = std::make_shared<Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName>();
        ent_->parent = this;
        client_vrf_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::DynamicAuthorization::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : client_vrf_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::DynamicAuthorization::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::DynamicAuthorization::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::DynamicAuthorization::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "client-vrf-name")
        return true;
    return false;
}

Aaa::Radius::DynamicAuthorization::Clients::Client::Client()
    :
    ip_address{YType::str, "ip-address"},
    server_key{YType::str, "server-key"}
{

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::DynamicAuthorization::Clients::Client::~Client()
{
}

bool Aaa::Radius::DynamicAuthorization::Clients::Client::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| server_key.is_set;
}

bool Aaa::Radius::DynamicAuthorization::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(server_key.yfilter);
}

std::string Aaa::Radius::DynamicAuthorization::Clients::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/dynamic-authorization/clients/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::DynamicAuthorization::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::DynamicAuthorization::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.yfilter)) leaf_name_data.push_back(server_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::DynamicAuthorization::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::DynamicAuthorization::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::DynamicAuthorization::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-key")
    {
        server_key = value;
        server_key.value_namespace = name_space;
        server_key.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::DynamicAuthorization::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "server-key")
    {
        server_key.yfilter = yfilter;
    }
}

bool Aaa::Radius::DynamicAuthorization::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "server-key")
        return true;
    return false;
}

Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::ClientVrfName()
    :
    vrf_name{YType::str, "vrf-name"},
    ip_address{YType::str, "ip-address"},
    server_key{YType::str, "server-key"}
{

    yang_name = "client-vrf-name"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::~ClientVrfName()
{
}

bool Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| ip_address.is_set
	|| server_key.is_set;
}

bool Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(server_key.yfilter);
}

std::string Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/dynamic-authorization/clients/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-vrf-name";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.yfilter)) leaf_name_data.push_back(server_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-key")
    {
        server_key = value;
        server_key.value_namespace = name_space;
        server_key.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "server-key")
    {
        server_key.yfilter = yfilter;
    }
}

bool Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "ip-address" || name == "server-key")
        return true;
    return false;
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceOptions()
    :
    load_balance_method(std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod>())
{
    load_balance_method->parent = this;

    yang_name = "load-balance-options"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::LoadBalanceOptions::~LoadBalanceOptions()
{
}

bool Aaa::Radius::LoadBalanceOptions::has_data() const
{
    if (is_presence_container) return true;
    return (load_balance_method !=  nullptr && load_balance_method->has_data());
}

bool Aaa::Radius::LoadBalanceOptions::has_operation() const
{
    return is_set(yfilter)
	|| (load_balance_method !=  nullptr && load_balance_method->has_operation());
}

std::string Aaa::Radius::LoadBalanceOptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::LoadBalanceOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::LoadBalanceOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::LoadBalanceOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance-method")
    {
        if(load_balance_method == nullptr)
        {
            load_balance_method = std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod>();
        }
        return load_balance_method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::LoadBalanceOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(load_balance_method != nullptr)
    {
        _children["load-balance-method"] = load_balance_method;
    }

    return _children;
}

void Aaa::Radius::LoadBalanceOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::LoadBalanceOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::LoadBalanceOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-method")
        return true;
    return false;
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::LoadBalanceMethod()
    :
    batch_size(std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize>())
{
    batch_size->parent = this;

    yang_name = "load-balance-method"; yang_parent_name = "load-balance-options"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::~LoadBalanceMethod()
{
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::has_data() const
{
    if (is_presence_container) return true;
    return (batch_size !=  nullptr && batch_size->has_data());
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::has_operation() const
{
    return is_set(yfilter)
	|| (batch_size !=  nullptr && batch_size->has_operation());
}

std::string Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/load-balance-options/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "batch-size")
    {
        if(batch_size == nullptr)
        {
            batch_size = std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize>();
        }
        return batch_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(batch_size != nullptr)
    {
        _children["batch-size"] = batch_size;
    }

    return _children;
}

void Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batch-size")
        return true;
    return false;
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::BatchSize()
    :
    batch_size{YType::uint32, "batch-size"},
    ignore_preferred_server{YType::boolean, "ignore-preferred-server"}
{

    yang_name = "batch-size"; yang_parent_name = "load-balance-method"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::~BatchSize()
{
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::has_data() const
{
    if (is_presence_container) return true;
    return batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batch_size.yfilter)
	|| ydk::is_set(ignore_preferred_server.yfilter);
}

std::string Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/load-balance-options/load-balance-method/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "batch-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.yfilter)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.yfilter)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
        batch_size.value_namespace = name_space;
        batch_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
        ignore_preferred_server.value_namespace = name_space;
        ignore_preferred_server.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batch-size")
    {
        batch_size.yfilter = yfilter;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server.yfilter = yfilter;
    }
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batch-size" || name == "ignore-preferred-server")
        return true;
    return false;
}

Aaa::Radius::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Vrfs::~Vrfs()
{
}

bool Aaa::Radius::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Radius::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Aaa::Radius::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    source_interface{YType::str, "source-interface"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Vrfs::Vrf::~Vrf()
{
}

bool Aaa::Radius::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| source_interface.is_set;
}

bool Aaa::Radius::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Aaa::Radius::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Aaa::Radius::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "source-interface")
        return true;
    return false;
}

Aaa::Radius::Throttle::Throttle()
    :
    access{YType::uint32, "access"},
    accounting{YType::uint32, "accounting"},
    access_timeout{YType::uint32, "access-timeout"}
{

    yang_name = "throttle"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Throttle::~Throttle()
{
}

bool Aaa::Radius::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return access.is_set
	|| accounting.is_set
	|| access_timeout.is_set;
}

bool Aaa::Radius::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(access_timeout.yfilter);
}

std::string Aaa::Radius::Throttle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (access_timeout.is_set || is_set(access_timeout.yfilter)) leaf_name_data.push_back(access_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-timeout")
    {
        access_timeout = value;
        access_timeout.value_namespace = name_space;
        access_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "access-timeout")
    {
        access_timeout.yfilter = yfilter;
    }
}

bool Aaa::Radius::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "access-timeout")
        return true;
    return false;
}

Aaa::Radius::Vsa::Vsa()
    :
    attribute(std::make_shared<Aaa::Radius::Vsa::Attribute>())
{
    attribute->parent = this;

    yang_name = "vsa"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Vsa::~Vsa()
{
}

bool Aaa::Radius::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return (attribute !=  nullptr && attribute->has_data());
}

bool Aaa::Radius::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Aaa::Radius::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Aaa::Radius::Vsa::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Aaa::Radius::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Aaa::Radius::Vsa::Attribute::Attribute()
    :
    ignore(std::make_shared<Aaa::Radius::Vsa::Attribute::Ignore>())
{
    ignore->parent = this;

    yang_name = "attribute"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Vsa::Attribute::~Attribute()
{
}

bool Aaa::Radius::Vsa::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return (ignore !=  nullptr && ignore->has_data());
}

bool Aaa::Radius::Vsa::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Aaa::Radius::Vsa::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Vsa::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Vsa::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Vsa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Aaa::Radius::Vsa::Attribute::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Vsa::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Aaa::Radius::Vsa::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::Vsa::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::Vsa::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Aaa::Radius::Vsa::Attribute::Ignore::Ignore()
    :
    unknown{YType::empty, "unknown"}
{

    yang_name = "ignore"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Vsa::Attribute::Ignore::~Ignore()
{
}

bool Aaa::Radius::Vsa::Attribute::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return unknown.is_set;
}

bool Aaa::Radius::Vsa::Attribute::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter);
}

std::string Aaa::Radius::Vsa::Attribute::Ignore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/vsa/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Vsa::Attribute::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Vsa::Attribute::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Vsa::Attribute::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Vsa::Attribute::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Vsa::Attribute::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Vsa::Attribute::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Aaa::Radius::Vsa::Attribute::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown")
        return true;
    return false;
}

Aaa::Radius::Ipv4::Ipv4()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "ipv4"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Ipv4::~Ipv4()
{
}

bool Aaa::Radius::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set;
}

bool Aaa::Radius::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Aaa::Radius::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Aaa::Radius::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Aaa::Radius::RadiusAttribute::RadiusAttribute()
    :
    filter_id_11(std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11>())
    , acct_multi_session_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId>())
    , acct_session_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId>())
{
    filter_id_11->parent = this;
    acct_multi_session_id->parent = this;
    acct_session_id->parent = this;

    yang_name = "radius-attribute"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::RadiusAttribute::~RadiusAttribute()
{
}

bool Aaa::Radius::RadiusAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (filter_id_11 !=  nullptr && filter_id_11->has_data())
	|| (acct_multi_session_id !=  nullptr && acct_multi_session_id->has_data())
	|| (acct_session_id !=  nullptr && acct_session_id->has_data());
}

bool Aaa::Radius::RadiusAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (filter_id_11 !=  nullptr && filter_id_11->has_operation())
	|| (acct_multi_session_id !=  nullptr && acct_multi_session_id->has_operation())
	|| (acct_session_id !=  nullptr && acct_session_id->has_operation());
}

std::string Aaa::Radius::RadiusAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::RadiusAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::RadiusAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::RadiusAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-id-11")
    {
        if(filter_id_11 == nullptr)
        {
            filter_id_11 = std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11>();
        }
        return filter_id_11;
    }

    if(child_yang_name == "acct-multi-session-id")
    {
        if(acct_multi_session_id == nullptr)
        {
            acct_multi_session_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId>();
        }
        return acct_multi_session_id;
    }

    if(child_yang_name == "acct-session-id")
    {
        if(acct_session_id == nullptr)
        {
            acct_session_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId>();
        }
        return acct_session_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::RadiusAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filter_id_11 != nullptr)
    {
        _children["filter-id-11"] = filter_id_11;
    }

    if(acct_multi_session_id != nullptr)
    {
        _children["acct-multi-session-id"] = acct_multi_session_id;
    }

    if(acct_session_id != nullptr)
    {
        _children["acct-session-id"] = acct_session_id;
    }

    return _children;
}

void Aaa::Radius::RadiusAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::RadiusAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::RadiusAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-id-11" || name == "acct-multi-session-id" || name == "acct-session-id")
        return true;
    return false;
}

Aaa::Radius::RadiusAttribute::FilterId11::FilterId11()
    :
    defaults(std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11::Defaults>())
{
    defaults->parent = this;

    yang_name = "filter-id-11"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::RadiusAttribute::FilterId11::~FilterId11()
{
}

bool Aaa::Radius::RadiusAttribute::FilterId11::has_data() const
{
    if (is_presence_container) return true;
    return (defaults !=  nullptr && defaults->has_data());
}

bool Aaa::Radius::RadiusAttribute::FilterId11::has_operation() const
{
    return is_set(yfilter)
	|| (defaults !=  nullptr && defaults->has_operation());
}

std::string Aaa::Radius::RadiusAttribute::FilterId11::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::RadiusAttribute::FilterId11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-id-11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::RadiusAttribute::FilterId11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::RadiusAttribute::FilterId11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "defaults")
    {
        if(defaults == nullptr)
        {
            defaults = std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11::Defaults>();
        }
        return defaults;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::RadiusAttribute::FilterId11::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(defaults != nullptr)
    {
        _children["defaults"] = defaults;
    }

    return _children;
}

void Aaa::Radius::RadiusAttribute::FilterId11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::RadiusAttribute::FilterId11::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::RadiusAttribute::FilterId11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaults")
        return true;
    return false;
}

Aaa::Radius::RadiusAttribute::FilterId11::Defaults::Defaults()
    :
    direction{YType::enumeration, "direction"}
{

    yang_name = "defaults"; yang_parent_name = "filter-id-11"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::RadiusAttribute::FilterId11::Defaults::~Defaults()
{
}

bool Aaa::Radius::RadiusAttribute::FilterId11::Defaults::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set;
}

bool Aaa::Radius::RadiusAttribute::FilterId11::Defaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/filter-id-11/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::RadiusAttribute::FilterId11::Defaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::RadiusAttribute::FilterId11::Defaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Aaa::Radius::RadiusAttribute::FilterId11::Defaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction")
        return true;
    return false;
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::AcctMultiSessionId()
    :
    include_parent_session_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId>())
{
    include_parent_session_id->parent = this;

    yang_name = "acct-multi-session-id"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::~AcctMultiSessionId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::has_data() const
{
    if (is_presence_container) return true;
    return (include_parent_session_id !=  nullptr && include_parent_session_id->has_data());
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::has_operation() const
{
    return is_set(yfilter)
	|| (include_parent_session_id !=  nullptr && include_parent_session_id->has_operation());
}

std::string Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-multi-session-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-parent-session-id")
    {
        if(include_parent_session_id == nullptr)
        {
            include_parent_session_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId>();
        }
        return include_parent_session_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(include_parent_session_id != nullptr)
    {
        _children["include-parent-session-id"] = include_parent_session_id;
    }

    return _children;
}

void Aaa::Radius::RadiusAttribute::AcctMultiSessionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::RadiusAttribute::AcctMultiSessionId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-parent-session-id")
        return true;
    return false;
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::IncludeParentSessionId()
    :
    config{YType::enumeration, "config"}
{

    yang_name = "include-parent-session-id"; yang_parent_name = "acct-multi-session-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::~IncludeParentSessionId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::has_data() const
{
    if (is_presence_container) return true;
    return config.is_set;
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter);
}

std::string Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/acct-multi-session-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-parent-session-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Aaa::Radius::RadiusAttribute::AcctSessionId::AcctSessionId()
    :
    prepend_nas_port_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId>())
{
    prepend_nas_port_id->parent = this;

    yang_name = "acct-session-id"; yang_parent_name = "radius-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::RadiusAttribute::AcctSessionId::~AcctSessionId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::has_data() const
{
    if (is_presence_container) return true;
    return (prepend_nas_port_id !=  nullptr && prepend_nas_port_id->has_data());
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::has_operation() const
{
    return is_set(yfilter)
	|| (prepend_nas_port_id !=  nullptr && prepend_nas_port_id->has_operation());
}

std::string Aaa::Radius::RadiusAttribute::AcctSessionId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::RadiusAttribute::AcctSessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-session-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::RadiusAttribute::AcctSessionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::RadiusAttribute::AcctSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-nas-port-id")
    {
        if(prepend_nas_port_id == nullptr)
        {
            prepend_nas_port_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId>();
        }
        return prepend_nas_port_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::RadiusAttribute::AcctSessionId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prepend_nas_port_id != nullptr)
    {
        _children["prepend-nas-port-id"] = prepend_nas_port_id;
    }

    return _children;
}

void Aaa::Radius::RadiusAttribute::AcctSessionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::RadiusAttribute::AcctSessionId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-nas-port-id")
        return true;
    return false;
}

Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::PrependNasPortId()
    :
    config{YType::enumeration, "config"}
{

    yang_name = "prepend-nas-port-id"; yang_parent_name = "acct-session-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::~PrependNasPortId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::has_data() const
{
    if (is_presence_container) return true;
    return config.is_set;
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter);
}

std::string Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/acct-session-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-nas-port-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attributes()
    :
    attribute(this, {"attribute_list_name"})
{

    yang_name = "attributes"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Attributes::~Attributes()
{
}

bool Aaa::Radius::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Radius::Attributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Attributes::Attribute>();
        ent_->parent = this;
        attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attribute::Attribute()
    :
    attribute_list_name{YType::str, "attribute-list-name"},
    attribute{YType::str, "attribute"}
        ,
    vendor_ids(std::make_shared<Aaa::Radius::Attributes::Attribute::VendorIds>())
{
    vendor_ids->parent = this;

    yang_name = "attribute"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::Attributes::Attribute::~Attribute()
{
}

bool Aaa::Radius::Attributes::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return attribute_list_name.is_set
	|| attribute.is_set
	|| (vendor_ids !=  nullptr && vendor_ids->has_data());
}

bool Aaa::Radius::Attributes::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_list_name.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vendor_ids !=  nullptr && vendor_ids->has_operation());
}

std::string Aaa::Radius::Attributes::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    ADD_KEY_TOKEN(attribute_list_name, "attribute-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_list_name.is_set || is_set(attribute_list_name.yfilter)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vendor-ids")
    {
        if(vendor_ids == nullptr)
        {
            vendor_ids = std::make_shared<Aaa::Radius::Attributes::Attribute::VendorIds>();
        }
        return vendor_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vendor_ids != nullptr)
    {
        _children["vendor-ids"] = vendor_ids;
    }

    return _children;
}

void Aaa::Radius::Attributes::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
        attribute_list_name.value_namespace = name_space;
        attribute_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Attributes::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-list-name")
    {
        attribute_list_name.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Aaa::Radius::Attributes::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor-ids" || name == "attribute-list-name" || name == "attribute")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorIds()
    :
    vendor_id(this, {"vendor_id"})
{

    yang_name = "vendor-ids"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Radius::Attributes::Attribute::VendorIds::~VendorIds()
{
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vendor_id.len(); index++)
    {
        if(vendor_id[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::has_operation() const
{
    for (std::size_t index=0; index<vendor_id.len(); index++)
    {
        if(vendor_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Radius::Attributes::Attribute::VendorIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::Attribute::VendorIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::Attribute::VendorIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vendor-id")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Attributes::Attribute::VendorIds::VendorId>();
        ent_->parent = this;
        vendor_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::Attribute::VendorIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vendor_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Attributes::Attribute::VendorIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Radius::Attributes::Attribute::VendorIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor-id")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorId()
    :
    vendor_id{YType::uint32, "vendor-id"}
        ,
    vendor_type(this, {"vendor_type"})
{

    yang_name = "vendor-id"; yang_parent_name = "vendor-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::~VendorId()
{
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vendor_type.len(); index++)
    {
        if(vendor_type[index]->has_data())
            return true;
    }
    return vendor_id.is_set;
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::has_operation() const
{
    for (std::size_t index=0; index<vendor_type.len(); index++)
    {
        if(vendor_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vendor_id.yfilter);
}

std::string Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id";
    ADD_KEY_TOKEN(vendor_id, "vendor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor_id.is_set || is_set(vendor_id.yfilter)) leaf_name_data.push_back(vendor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vendor-type")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType>();
        ent_->parent = this;
        vendor_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vendor_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor-id")
    {
        vendor_id = value;
        vendor_id.value_namespace = name_space;
        vendor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor-id")
    {
        vendor_id.yfilter = yfilter;
    }
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor-type" || name == "vendor-id")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::VendorType()
    :
    vendor_type{YType::uint32, "vendor-type"}
        ,
    attribute_name(this, {"attribute_name"})
{

    yang_name = "vendor-type"; yang_parent_name = "vendor-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::~VendorType()
{
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_name.len(); index++)
    {
        if(attribute_name[index]->has_data())
            return true;
    }
    return vendor_type.is_set;
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::has_operation() const
{
    for (std::size_t index=0; index<attribute_name.len(); index++)
    {
        if(attribute_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vendor_type.yfilter);
}

std::string Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-type";
    ADD_KEY_TOKEN(vendor_type, "vendor-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-name")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName>();
        ent_->parent = this;
        attribute_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name" || name == "vendor-type")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeName()
    :
    attribute_name{YType::str, "attribute-name"}
        ,
    attribute_name_absent(this, {"attribute_name_absent"})
{

    yang_name = "attribute-name"; yang_parent_name = "vendor-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::~AttributeName()
{
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_name_absent.len(); index++)
    {
        if(attribute_name_absent[index]->has_data())
            return true;
    }
    return attribute_name.is_set;
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::has_operation() const
{
    for (std::size_t index=0; index<attribute_name_absent.len(); index++)
    {
        if(attribute_name_absent[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attribute_name.yfilter);
}

std::string Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name";
    ADD_KEY_TOKEN(attribute_name, "attribute-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_name.is_set || is_set(attribute_name.yfilter)) leaf_name_data.push_back(attribute_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-name-absent")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent>();
        ent_->parent = this;
        attribute_name_absent.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_name_absent.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-name")
    {
        attribute_name = value;
        attribute_name.value_namespace = name_space;
        attribute_name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-name")
    {
        attribute_name.yfilter = yfilter;
    }
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name-absent" || name == "attribute-name")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNameAbsent()
    :
    attribute_name_absent{YType::uint32, "attribute-name-absent"}
        ,
    attribute_name_present(this, {"attribute_name_present"})
{

    yang_name = "attribute-name-absent"; yang_parent_name = "attribute-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::~AttributeNameAbsent()
{
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_name_present.len(); index++)
    {
        if(attribute_name_present[index]->has_data())
            return true;
    }
    return attribute_name_absent.is_set;
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::has_operation() const
{
    for (std::size_t index=0; index<attribute_name_present.len(); index++)
    {
        if(attribute_name_present[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attribute_name_absent.yfilter);
}

std::string Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name-absent";
    ADD_KEY_TOKEN(attribute_name_absent, "attribute-name-absent");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_name_absent.is_set || is_set(attribute_name_absent.yfilter)) leaf_name_data.push_back(attribute_name_absent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-name-present")
    {
        auto ent_ = std::make_shared<Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent>();
        ent_->parent = this;
        attribute_name_present.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_name_present.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-name-absent")
    {
        attribute_name_absent = value;
        attribute_name_absent.value_namespace = name_space;
        attribute_name_absent.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-name-absent")
    {
        attribute_name_absent.yfilter = yfilter;
    }
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name-present" || name == "attribute-name-absent")
        return true;
    return false;
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::AttributeNamePresent()
    :
    attribute_name_present{YType::uint32, "attribute-name-present"}
{

    yang_name = "attribute-name-present"; yang_parent_name = "attribute-name-absent"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::~AttributeNamePresent()
{
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::has_data() const
{
    if (is_presence_container) return true;
    return attribute_name_present.is_set;
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_name_present.yfilter);
}

std::string Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name-present";
    ADD_KEY_TOKEN(attribute_name_present, "attribute-name-present");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_name_present.is_set || is_set(attribute_name_present.yfilter)) leaf_name_data.push_back(attribute_name_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-name-present")
    {
        attribute_name_present = value;
        attribute_name_present.value_namespace = name_space;
        attribute_name_present.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-name-present")
    {
        attribute_name_present.yfilter = yfilter;
    }
}

bool Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name-present")
        return true;
    return false;
}

Aaa::Radius::SourcePort::SourcePort()
    :
    extended{YType::empty, "extended"}
{

    yang_name = "source-port"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Radius::SourcePort::~SourcePort()
{
}

bool Aaa::Radius::SourcePort::has_data() const
{
    if (is_presence_container) return true;
    return extended.is_set;
}

bool Aaa::Radius::SourcePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Aaa::Radius::SourcePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Radius::SourcePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Radius::SourcePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Radius::SourcePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Radius::SourcePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Radius::SourcePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Radius::SourcePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Aaa::Radius::SourcePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Aaa::Diameter::Diameter()
    :
    source_interface{YType::str, "source-interface"}
        ,
    gy(std::make_shared<Aaa::Diameter::Gy>())
    , origin(std::make_shared<Aaa::Diameter::Origin>())
    , nas(std::make_shared<Aaa::Diameter::Nas>())
    , diameter_tls(std::make_shared<Aaa::Diameter::DiameterTls>())
    , peers(std::make_shared<Aaa::Diameter::Peers>())
    , diams(std::make_shared<Aaa::Diameter::Diams>())
    , gx(std::make_shared<Aaa::Diameter::Gx>())
    , services(std::make_shared<Aaa::Diameter::Services>())
    , diameter_timer(std::make_shared<Aaa::Diameter::DiameterTimer>())
    , vendor(std::make_shared<Aaa::Diameter::Vendor>())
{
    gy->parent = this;
    origin->parent = this;
    nas->parent = this;
    diameter_tls->parent = this;
    peers->parent = this;
    diams->parent = this;
    gx->parent = this;
    services->parent = this;
    diameter_timer->parent = this;
    vendor->parent = this;

    yang_name = "diameter"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::~Diameter()
{
}

bool Aaa::Diameter::has_data() const
{
    if (is_presence_container) return true;
    return source_interface.is_set
	|| (gy !=  nullptr && gy->has_data())
	|| (origin !=  nullptr && origin->has_data())
	|| (nas !=  nullptr && nas->has_data())
	|| (diameter_tls !=  nullptr && diameter_tls->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (diams !=  nullptr && diams->has_data())
	|| (gx !=  nullptr && gx->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (diameter_timer !=  nullptr && diameter_timer->has_data())
	|| (vendor !=  nullptr && vendor->has_data());
}

bool Aaa::Diameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (gy !=  nullptr && gy->has_operation())
	|| (origin !=  nullptr && origin->has_operation())
	|| (nas !=  nullptr && nas->has_operation())
	|| (diameter_tls !=  nullptr && diameter_tls->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (diams !=  nullptr && diams->has_operation())
	|| (gx !=  nullptr && gx->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (diameter_timer !=  nullptr && diameter_timer->has_operation())
	|| (vendor !=  nullptr && vendor->has_operation());
}

std::string Aaa::Diameter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-diameter-cfg:diameter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gy")
    {
        if(gy == nullptr)
        {
            gy = std::make_shared<Aaa::Diameter::Gy>();
        }
        return gy;
    }

    if(child_yang_name == "origin")
    {
        if(origin == nullptr)
        {
            origin = std::make_shared<Aaa::Diameter::Origin>();
        }
        return origin;
    }

    if(child_yang_name == "nas")
    {
        if(nas == nullptr)
        {
            nas = std::make_shared<Aaa::Diameter::Nas>();
        }
        return nas;
    }

    if(child_yang_name == "diameter-tls")
    {
        if(diameter_tls == nullptr)
        {
            diameter_tls = std::make_shared<Aaa::Diameter::DiameterTls>();
        }
        return diameter_tls;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Aaa::Diameter::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "diams")
    {
        if(diams == nullptr)
        {
            diams = std::make_shared<Aaa::Diameter::Diams>();
        }
        return diams;
    }

    if(child_yang_name == "gx")
    {
        if(gx == nullptr)
        {
            gx = std::make_shared<Aaa::Diameter::Gx>();
        }
        return gx;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Aaa::Diameter::Services>();
        }
        return services;
    }

    if(child_yang_name == "diameter-timer")
    {
        if(diameter_timer == nullptr)
        {
            diameter_timer = std::make_shared<Aaa::Diameter::DiameterTimer>();
        }
        return diameter_timer;
    }

    if(child_yang_name == "vendor")
    {
        if(vendor == nullptr)
        {
            vendor = std::make_shared<Aaa::Diameter::Vendor>();
        }
        return vendor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gy != nullptr)
    {
        _children["gy"] = gy;
    }

    if(origin != nullptr)
    {
        _children["origin"] = origin;
    }

    if(nas != nullptr)
    {
        _children["nas"] = nas;
    }

    if(diameter_tls != nullptr)
    {
        _children["diameter-tls"] = diameter_tls;
    }

    if(peers != nullptr)
    {
        _children["peers"] = peers;
    }

    if(diams != nullptr)
    {
        _children["diams"] = diams;
    }

    if(gx != nullptr)
    {
        _children["gx"] = gx;
    }

    if(services != nullptr)
    {
        _children["services"] = services;
    }

    if(diameter_timer != nullptr)
    {
        _children["diameter-timer"] = diameter_timer;
    }

    if(vendor != nullptr)
    {
        _children["vendor"] = vendor;
    }

    return _children;
}

void Aaa::Diameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Aaa::Diameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gy" || name == "origin" || name == "nas" || name == "diameter-tls" || name == "peers" || name == "diams" || name == "gx" || name == "services" || name == "diameter-timer" || name == "vendor" || name == "source-interface")
        return true;
    return false;
}

Aaa::Diameter::Gy::Gy()
    :
    retransmit{YType::uint32, "retransmit"},
    dest_host{YType::str, "dest-host"},
    tx_timer{YType::uint32, "tx-timer"}
{

    yang_name = "gy"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Gy::~Gy()
{
}

bool Aaa::Diameter::Gy::has_data() const
{
    if (is_presence_container) return true;
    return retransmit.is_set
	|| dest_host.is_set
	|| tx_timer.is_set;
}

bool Aaa::Diameter::Gy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(dest_host.yfilter)
	|| ydk::is_set(tx_timer.yfilter);
}

std::string Aaa::Diameter::Gy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Gy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Gy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (dest_host.is_set || is_set(dest_host.yfilter)) leaf_name_data.push_back(dest_host.get_name_leafdata());
    if (tx_timer.is_set || is_set(tx_timer.yfilter)) leaf_name_data.push_back(tx_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Gy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Gy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Gy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-host")
    {
        dest_host = value;
        dest_host.value_namespace = name_space;
        dest_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-timer")
    {
        tx_timer = value;
        tx_timer.value_namespace = name_space;
        tx_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Gy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "dest-host")
    {
        dest_host.yfilter = yfilter;
    }
    if(value_path == "tx-timer")
    {
        tx_timer.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Gy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmit" || name == "dest-host" || name == "tx-timer")
        return true;
    return false;
}

Aaa::Diameter::Origin::Origin()
    :
    realm{YType::str, "realm"},
    host{YType::str, "host"}
{

    yang_name = "origin"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Origin::~Origin()
{
}

bool Aaa::Diameter::Origin::has_data() const
{
    if (is_presence_container) return true;
    return realm.is_set
	|| host.is_set;
}

bool Aaa::Diameter::Origin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Aaa::Diameter::Origin::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Origin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Origin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Origin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Origin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Origin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "realm" || name == "host")
        return true;
    return false;
}

Aaa::Diameter::Nas::Nas()
    :
    dest_host{YType::str, "dest-host"}
{

    yang_name = "nas"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Nas::~Nas()
{
}

bool Aaa::Diameter::Nas::has_data() const
{
    if (is_presence_container) return true;
    return dest_host.is_set;
}

bool Aaa::Diameter::Nas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_host.yfilter);
}

std::string Aaa::Diameter::Nas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Nas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Nas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_host.is_set || is_set(dest_host.yfilter)) leaf_name_data.push_back(dest_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Nas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Nas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Nas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-host")
    {
        dest_host = value;
        dest_host.value_namespace = name_space;
        dest_host.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Nas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-host")
    {
        dest_host.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Nas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-host")
        return true;
    return false;
}

Aaa::Diameter::DiameterTls::DiameterTls()
    :
    trustpoint{YType::str, "trustpoint"}
{

    yang_name = "diameter-tls"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::DiameterTls::~DiameterTls()
{
}

bool Aaa::Diameter::DiameterTls::has_data() const
{
    if (is_presence_container) return true;
    return trustpoint.is_set;
}

bool Aaa::Diameter::DiameterTls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Aaa::Diameter::DiameterTls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::DiameterTls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diameter-tls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::DiameterTls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::DiameterTls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::DiameterTls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::DiameterTls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::DiameterTls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Aaa::Diameter::DiameterTls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Aaa::Diameter::Peers::Peers()
    :
    peer(this, {"peer_name"})
{

    yang_name = "peers"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Peers::~Peers()
{
}

bool Aaa::Diameter::Peers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Diameter::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Aaa::Diameter::Peers::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Diameter::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Diameter::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Diameter::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Aaa::Diameter::Peers::Peer::Peer()
    :
    peer_name{YType::str, "peer-name"},
    host_destination{YType::str, "host-destination"},
    ipv4_address{YType::str, "ipv4-address"},
    realm_destination{YType::str, "realm-destination"},
    tcp_transport{YType::uint32, "tcp-transport"},
    source_interface{YType::str, "source-interface"},
    ipv6_address{YType::str, "ipv6-address"},
    tls_transport{YType::uint32, "tls-transport"},
    vrf_ip{YType::str, "vrf-ip"}
        ,
    peer_timer(std::make_shared<Aaa::Diameter::Peers::Peer::PeerTimer>())
    , peer_type(std::make_shared<Aaa::Diameter::Peers::Peer::PeerType>())
{
    peer_timer->parent = this;
    peer_type->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Peers::Peer::~Peer()
{
}

bool Aaa::Diameter::Peers::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_name.is_set
	|| host_destination.is_set
	|| ipv4_address.is_set
	|| realm_destination.is_set
	|| tcp_transport.is_set
	|| source_interface.is_set
	|| ipv6_address.is_set
	|| tls_transport.is_set
	|| vrf_ip.is_set
	|| (peer_timer !=  nullptr && peer_timer->has_data())
	|| (peer_type !=  nullptr && peer_type->has_data());
}

bool Aaa::Diameter::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_name.yfilter)
	|| ydk::is_set(host_destination.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(realm_destination.yfilter)
	|| ydk::is_set(tcp_transport.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(tls_transport.yfilter)
	|| ydk::is_set(vrf_ip.yfilter)
	|| (peer_timer !=  nullptr && peer_timer->has_operation())
	|| (peer_type !=  nullptr && peer_type->has_operation());
}

std::string Aaa::Diameter::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    ADD_KEY_TOKEN(peer_name, "peer-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_name.is_set || is_set(peer_name.yfilter)) leaf_name_data.push_back(peer_name.get_name_leafdata());
    if (host_destination.is_set || is_set(host_destination.yfilter)) leaf_name_data.push_back(host_destination.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (realm_destination.is_set || is_set(realm_destination.yfilter)) leaf_name_data.push_back(realm_destination.get_name_leafdata());
    if (tcp_transport.is_set || is_set(tcp_transport.yfilter)) leaf_name_data.push_back(tcp_transport.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (tls_transport.is_set || is_set(tls_transport.yfilter)) leaf_name_data.push_back(tls_transport.get_name_leafdata());
    if (vrf_ip.is_set || is_set(vrf_ip.yfilter)) leaf_name_data.push_back(vrf_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-timer")
    {
        if(peer_timer == nullptr)
        {
            peer_timer = std::make_shared<Aaa::Diameter::Peers::Peer::PeerTimer>();
        }
        return peer_timer;
    }

    if(child_yang_name == "peer-type")
    {
        if(peer_type == nullptr)
        {
            peer_type = std::make_shared<Aaa::Diameter::Peers::Peer::PeerType>();
        }
        return peer_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_timer != nullptr)
    {
        _children["peer-timer"] = peer_timer;
    }

    if(peer_type != nullptr)
    {
        _children["peer-type"] = peer_type;
    }

    return _children;
}

void Aaa::Diameter::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-name")
    {
        peer_name = value;
        peer_name.value_namespace = name_space;
        peer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-destination")
    {
        host_destination = value;
        host_destination.value_namespace = name_space;
        host_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm-destination")
    {
        realm_destination = value;
        realm_destination.value_namespace = name_space;
        realm_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-transport")
    {
        tcp_transport = value;
        tcp_transport.value_namespace = name_space;
        tcp_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls-transport")
    {
        tls_transport = value;
        tls_transport.value_namespace = name_space;
        tls_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-ip")
    {
        vrf_ip = value;
        vrf_ip.value_namespace = name_space;
        vrf_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-name")
    {
        peer_name.yfilter = yfilter;
    }
    if(value_path == "host-destination")
    {
        host_destination.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "realm-destination")
    {
        realm_destination.yfilter = yfilter;
    }
    if(value_path == "tcp-transport")
    {
        tcp_transport.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "tls-transport")
    {
        tls_transport.yfilter = yfilter;
    }
    if(value_path == "vrf-ip")
    {
        vrf_ip.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-timer" || name == "peer-type" || name == "peer-name" || name == "host-destination" || name == "ipv4-address" || name == "realm-destination" || name == "tcp-transport" || name == "source-interface" || name == "ipv6-address" || name == "tls-transport" || name == "vrf-ip")
        return true;
    return false;
}

Aaa::Diameter::Peers::Peer::PeerTimer::PeerTimer()
    :
    transaction{YType::uint32, "transaction"},
    connection{YType::uint32, "connection"},
    watchdog{YType::uint32, "watchdog"}
{

    yang_name = "peer-timer"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Diameter::Peers::Peer::PeerTimer::~PeerTimer()
{
}

bool Aaa::Diameter::Peers::Peer::PeerTimer::has_data() const
{
    if (is_presence_container) return true;
    return transaction.is_set
	|| connection.is_set
	|| watchdog.is_set;
}

bool Aaa::Diameter::Peers::Peer::PeerTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transaction.yfilter)
	|| ydk::is_set(connection.yfilter)
	|| ydk::is_set(watchdog.yfilter);
}

std::string Aaa::Diameter::Peers::Peer::PeerTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Peers::Peer::PeerTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction.is_set || is_set(transaction.yfilter)) leaf_name_data.push_back(transaction.get_name_leafdata());
    if (connection.is_set || is_set(connection.yfilter)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.yfilter)) leaf_name_data.push_back(watchdog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Peers::Peer::PeerTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Peers::Peer::PeerTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Peers::Peer::PeerTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transaction")
    {
        transaction = value;
        transaction.value_namespace = name_space;
        transaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection")
    {
        connection = value;
        connection.value_namespace = name_space;
        connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
        watchdog.value_namespace = name_space;
        watchdog.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Peers::Peer::PeerTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transaction")
    {
        transaction.yfilter = yfilter;
    }
    if(value_path == "connection")
    {
        connection.yfilter = yfilter;
    }
    if(value_path == "watchdog")
    {
        watchdog.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Peers::Peer::PeerTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transaction" || name == "connection" || name == "watchdog")
        return true;
    return false;
}

Aaa::Diameter::Peers::Peer::PeerType::PeerType()
    :
    server{YType::boolean, "server"}
{

    yang_name = "peer-type"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Diameter::Peers::Peer::PeerType::~PeerType()
{
}

bool Aaa::Diameter::Peers::Peer::PeerType::has_data() const
{
    if (is_presence_container) return true;
    return server.is_set;
}

bool Aaa::Diameter::Peers::Peer::PeerType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Aaa::Diameter::Peers::Peer::PeerType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Peers::Peer::PeerType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Peers::Peer::PeerType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Peers::Peer::PeerType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Peers::Peer::PeerType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Peers::Peer::PeerType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Peers::Peer::PeerType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Aaa::Diameter::Diams::Diams()
    :
    diam(this, {"list_id"})
{

    yang_name = "diams"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Diams::~Diams()
{
}

bool Aaa::Diameter::Diams::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diam.len(); index++)
    {
        if(diam[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::Diams::has_operation() const
{
    for (std::size_t index=0; index<diam.len(); index++)
    {
        if(diam[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Diameter::Diams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Diams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diams";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Diams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Diams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diam")
    {
        auto ent_ = std::make_shared<Aaa::Diameter::Diams::Diam>();
        ent_->parent = this;
        diam.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Diams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diam.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Diameter::Diams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Diameter::Diams::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Diameter::Diams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diam")
        return true;
    return false;
}

Aaa::Diameter::Diams::Diam::Diam()
    :
    list_id{YType::uint32, "list-id"}
        ,
    diam_attr_defs(std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs>())
{
    diam_attr_defs->parent = this;

    yang_name = "diam"; yang_parent_name = "diams"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Diams::Diam::~Diam()
{
}

bool Aaa::Diameter::Diams::Diam::has_data() const
{
    if (is_presence_container) return true;
    return list_id.is_set
	|| (diam_attr_defs !=  nullptr && diam_attr_defs->has_data());
}

bool Aaa::Diameter::Diams::Diam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list_id.yfilter)
	|| (diam_attr_defs !=  nullptr && diam_attr_defs->has_operation());
}

std::string Aaa::Diameter::Diams::Diam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/diams/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Diams::Diam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam";
    ADD_KEY_TOKEN(list_id, "list-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Diams::Diam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list_id.is_set || is_set(list_id.yfilter)) leaf_name_data.push_back(list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Diams::Diam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diam-attr-defs")
    {
        if(diam_attr_defs == nullptr)
        {
            diam_attr_defs = std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs>();
        }
        return diam_attr_defs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Diams::Diam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(diam_attr_defs != nullptr)
    {
        _children["diam-attr-defs"] = diam_attr_defs;
    }

    return _children;
}

void Aaa::Diameter::Diams::Diam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list-id")
    {
        list_id = value;
        list_id.value_namespace = name_space;
        list_id.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Diams::Diam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list-id")
    {
        list_id.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Diams::Diam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diam-attr-defs" || name == "list-id")
        return true;
    return false;
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDefs()
    :
    diam_attr_def(this, {"vendor_id", "attribute_id"})
{

    yang_name = "diam-attr-defs"; yang_parent_name = "diam"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::~DiamAttrDefs()
{
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diam_attr_def.len(); index++)
    {
        if(diam_attr_def[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::has_operation() const
{
    for (std::size_t index=0; index<diam_attr_def.len(); index++)
    {
        if(diam_attr_def[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam-attr-defs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diam-attr-def")
    {
        auto ent_ = std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef>();
        ent_->parent = this;
        diam_attr_def.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diam_attr_def.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diam-attr-def")
        return true;
    return false;
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrDef()
    :
    vendor_id{YType::uint32, "vendor-id"},
    attribute_id{YType::uint32, "attribute-id"}
        ,
    diam_attr_value(std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue>())
{
    diam_attr_value->parent = this;

    yang_name = "diam-attr-def"; yang_parent_name = "diam-attr-defs"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::~DiamAttrDef()
{
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::has_data() const
{
    if (is_presence_container) return true;
    return vendor_id.is_set
	|| attribute_id.is_set
	|| (diam_attr_value !=  nullptr && diam_attr_value->has_data());
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor_id.yfilter)
	|| ydk::is_set(attribute_id.yfilter)
	|| (diam_attr_value !=  nullptr && diam_attr_value->has_operation());
}

std::string Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam-attr-def";
    ADD_KEY_TOKEN(vendor_id, "vendor-id");
    ADD_KEY_TOKEN(attribute_id, "attribute-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor_id.is_set || is_set(vendor_id.yfilter)) leaf_name_data.push_back(vendor_id.get_name_leafdata());
    if (attribute_id.is_set || is_set(attribute_id.yfilter)) leaf_name_data.push_back(attribute_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diam-attr-value")
    {
        if(diam_attr_value == nullptr)
        {
            diam_attr_value = std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue>();
        }
        return diam_attr_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(diam_attr_value != nullptr)
    {
        _children["diam-attr-value"] = diam_attr_value;
    }

    return _children;
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor-id")
    {
        vendor_id = value;
        vendor_id.value_namespace = name_space;
        vendor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-id")
    {
        attribute_id = value;
        attribute_id.value_namespace = name_space;
        attribute_id.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor-id")
    {
        vendor_id.yfilter = yfilter;
    }
    if(value_path == "attribute-id")
    {
        attribute_id.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diam-attr-value" || name == "vendor-id" || name == "attribute-id")
        return true;
    return false;
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::DiamAttrValue()
    :
    type_string{YType::str, "type-string"},
    type_ipv4_address{YType::str, "type-ipv4-address"},
    type_binary{YType::str, "type-binary"},
    type_boolean{YType::uint32, "type-boolean"},
    type_enum{YType::uint32, "type-enum"},
    type_grouped{YType::uint32, "type-grouped"},
    type_ulong{YType::uint32, "type-ulong"},
    type_identity{YType::str, "type-identity"},
    data_type{YType::uint32, "data-type"},
    type_ulonglong{YType::uint32, "type-ulonglong"},
    type_utc{YType::uint32, "type-utc"},
    mandatory{YType::uint32, "mandatory"}
{

    yang_name = "diam-attr-value"; yang_parent_name = "diam-attr-def"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::~DiamAttrValue()
{
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::has_data() const
{
    if (is_presence_container) return true;
    return type_string.is_set
	|| type_ipv4_address.is_set
	|| type_binary.is_set
	|| type_boolean.is_set
	|| type_enum.is_set
	|| type_grouped.is_set
	|| type_ulong.is_set
	|| type_identity.is_set
	|| data_type.is_set
	|| type_ulonglong.is_set
	|| type_utc.is_set
	|| mandatory.is_set;
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_string.yfilter)
	|| ydk::is_set(type_ipv4_address.yfilter)
	|| ydk::is_set(type_binary.yfilter)
	|| ydk::is_set(type_boolean.yfilter)
	|| ydk::is_set(type_enum.yfilter)
	|| ydk::is_set(type_grouped.yfilter)
	|| ydk::is_set(type_ulong.yfilter)
	|| ydk::is_set(type_identity.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(type_ulonglong.yfilter)
	|| ydk::is_set(type_utc.yfilter)
	|| ydk::is_set(mandatory.yfilter);
}

std::string Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam-attr-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_string.is_set || is_set(type_string.yfilter)) leaf_name_data.push_back(type_string.get_name_leafdata());
    if (type_ipv4_address.is_set || is_set(type_ipv4_address.yfilter)) leaf_name_data.push_back(type_ipv4_address.get_name_leafdata());
    if (type_binary.is_set || is_set(type_binary.yfilter)) leaf_name_data.push_back(type_binary.get_name_leafdata());
    if (type_boolean.is_set || is_set(type_boolean.yfilter)) leaf_name_data.push_back(type_boolean.get_name_leafdata());
    if (type_enum.is_set || is_set(type_enum.yfilter)) leaf_name_data.push_back(type_enum.get_name_leafdata());
    if (type_grouped.is_set || is_set(type_grouped.yfilter)) leaf_name_data.push_back(type_grouped.get_name_leafdata());
    if (type_ulong.is_set || is_set(type_ulong.yfilter)) leaf_name_data.push_back(type_ulong.get_name_leafdata());
    if (type_identity.is_set || is_set(type_identity.yfilter)) leaf_name_data.push_back(type_identity.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (type_ulonglong.is_set || is_set(type_ulonglong.yfilter)) leaf_name_data.push_back(type_ulonglong.get_name_leafdata());
    if (type_utc.is_set || is_set(type_utc.yfilter)) leaf_name_data.push_back(type_utc.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-string")
    {
        type_string = value;
        type_string.value_namespace = name_space;
        type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-ipv4-address")
    {
        type_ipv4_address = value;
        type_ipv4_address.value_namespace = name_space;
        type_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-binary")
    {
        type_binary = value;
        type_binary.value_namespace = name_space;
        type_binary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-boolean")
    {
        type_boolean = value;
        type_boolean.value_namespace = name_space;
        type_boolean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-enum")
    {
        type_enum = value;
        type_enum.value_namespace = name_space;
        type_enum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-grouped")
    {
        type_grouped = value;
        type_grouped.value_namespace = name_space;
        type_grouped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-ulong")
    {
        type_ulong = value;
        type_ulong.value_namespace = name_space;
        type_ulong.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-identity")
    {
        type_identity = value;
        type_identity.value_namespace = name_space;
        type_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-ulonglong")
    {
        type_ulonglong = value;
        type_ulonglong.value_namespace = name_space;
        type_ulonglong.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-utc")
    {
        type_utc = value;
        type_utc.value_namespace = name_space;
        type_utc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-string")
    {
        type_string.yfilter = yfilter;
    }
    if(value_path == "type-ipv4-address")
    {
        type_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "type-binary")
    {
        type_binary.yfilter = yfilter;
    }
    if(value_path == "type-boolean")
    {
        type_boolean.yfilter = yfilter;
    }
    if(value_path == "type-enum")
    {
        type_enum.yfilter = yfilter;
    }
    if(value_path == "type-grouped")
    {
        type_grouped.yfilter = yfilter;
    }
    if(value_path == "type-ulong")
    {
        type_ulong.yfilter = yfilter;
    }
    if(value_path == "type-identity")
    {
        type_identity.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "type-ulonglong")
    {
        type_ulonglong.yfilter = yfilter;
    }
    if(value_path == "type-utc")
    {
        type_utc.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-string" || name == "type-ipv4-address" || name == "type-binary" || name == "type-boolean" || name == "type-enum" || name == "type-grouped" || name == "type-ulong" || name == "type-identity" || name == "data-type" || name == "type-ulonglong" || name == "type-utc" || name == "mandatory")
        return true;
    return false;
}

Aaa::Diameter::Gx::Gx()
    :
    retransmit{YType::uint32, "retransmit"},
    dest_host{YType::str, "dest-host"},
    tx_timer{YType::uint32, "tx-timer"}
{

    yang_name = "gx"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Gx::~Gx()
{
}

bool Aaa::Diameter::Gx::has_data() const
{
    if (is_presence_container) return true;
    return retransmit.is_set
	|| dest_host.is_set
	|| tx_timer.is_set;
}

bool Aaa::Diameter::Gx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(dest_host.yfilter)
	|| ydk::is_set(tx_timer.yfilter);
}

std::string Aaa::Diameter::Gx::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Gx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Gx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (dest_host.is_set || is_set(dest_host.yfilter)) leaf_name_data.push_back(dest_host.get_name_leafdata());
    if (tx_timer.is_set || is_set(tx_timer.yfilter)) leaf_name_data.push_back(tx_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Gx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Gx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Gx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-host")
    {
        dest_host = value;
        dest_host.value_namespace = name_space;
        dest_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-timer")
    {
        tx_timer = value;
        tx_timer.value_namespace = name_space;
        tx_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Gx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "dest-host")
    {
        dest_host.yfilter = yfilter;
    }
    if(value_path == "tx-timer")
    {
        tx_timer.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Gx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmit" || name == "dest-host" || name == "tx-timer")
        return true;
    return false;
}

Aaa::Diameter::Services::Services()
    :
    service(this, {"service_name"})
{

    yang_name = "services"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Services::~Services()
{
}

bool Aaa::Diameter::Services::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::Services::has_operation() const
{
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Diameter::Services::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        auto ent_ = std::make_shared<Aaa::Diameter::Services::Service>();
        ent_->parent = this;
        service.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Diameter::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Diameter::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Diameter::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Aaa::Diameter::Services::Service::Service()
    :
    service_name{YType::str, "service-name"},
    monitoring_key{YType::str, "monitoring-key"}
{

    yang_name = "service"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Services::Service::~Service()
{
}

bool Aaa::Diameter::Services::Service::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set
	|| monitoring_key.is_set;
}

bool Aaa::Diameter::Services::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(monitoring_key.yfilter);
}

std::string Aaa::Diameter::Services::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/services/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Services::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    ADD_KEY_TOKEN(service_name, "service-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Services::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (monitoring_key.is_set || is_set(monitoring_key.yfilter)) leaf_name_data.push_back(monitoring_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Services::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Services::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Services::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoring-key")
    {
        monitoring_key = value;
        monitoring_key.value_namespace = name_space;
        monitoring_key.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Services::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "monitoring-key")
    {
        monitoring_key.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Services::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name" || name == "monitoring-key")
        return true;
    return false;
}


}
}

