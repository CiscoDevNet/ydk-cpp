
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_locald_admin_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_locald_admin_cfg {

Aaa::Aaa()
    :
    usernames(std::make_shared<Aaa::Usernames>())
{
    usernames->parent = this;

    yang_name = "aaa"; yang_parent_name = "Cisco-IOS-XR-aaa-locald-admin-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    return (usernames !=  nullptr && usernames->has_data());
}

bool Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (usernames !=  nullptr && usernames->has_operation());
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-admin-cfg:aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usernames")
    {
        if(usernames == nullptr)
        {
            usernames = std::make_shared<Aaa::Usernames>();
        }
        return usernames;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(usernames != nullptr)
    {
        children["usernames"] = usernames;
    }

    return children;
}

void Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Aaa::clone_ptr() const
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
    if(name == "usernames")
        return true;
    return false;
}

Aaa::Usernames::Usernames()
{

    yang_name = "usernames"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Aaa::Usernames::~Usernames()
{
}

bool Aaa::Usernames::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usernames::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Usernames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-admin-cfg:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Usernames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usernames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aaa::Usernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        auto c = std::make_shared<Aaa::Usernames::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Usernames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : username)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    name{YType::str, "name"}
    	,
    usergroup_under_usernames(std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>())
	,secret(std::make_shared<Aaa::Usernames::Username::Secret>())
{
    usergroup_under_usernames->parent = this;
    secret->parent = this;

    yang_name = "username"; yang_parent_name = "usernames"; is_top_level_class = false; has_list_ancestor = false;
}

Aaa::Usernames::Username::~Username()
{
}

bool Aaa::Usernames::Username::has_data() const
{
    return name.is_set
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Aaa::Usernames::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Aaa::Usernames::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-admin-cfg:aaa/usernames/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Usernames::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usergroup-under-usernames")
    {
        if(usergroup_under_usernames == nullptr)
        {
            usergroup_under_usernames = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>();
        }
        return usergroup_under_usernames;
    }

    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Aaa::Usernames::Username::Secret>();
        }
        return secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Usernames::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(usergroup_under_usernames != nullptr)
    {
        children["usergroup-under-usernames"] = usergroup_under_usernames;
    }

    if(secret != nullptr)
    {
        children["secret"] = secret;
    }

    return children;
}

void Aaa::Usernames::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usernames::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Aaa::Usernames::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usergroup-under-usernames" || name == "secret" || name == "name")
        return true;
    return false;
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsernames()
{

    yang_name = "usergroup-under-usernames"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Aaa::Usernames::Username::UsergroupUnderUsernames::~UsergroupUnderUsernames()
{
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::has_data() const
{
    for (std::size_t index=0; index<usergroup_under_username.size(); index++)
    {
        if(usergroup_under_username[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::has_operation() const
{
    for (std::size_t index=0; index<usergroup_under_username.size(); index++)
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

std::shared_ptr<Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usergroup-under-username")
    {
        auto c = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername>();
        c->parent = this;
        usergroup_under_username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Usernames::Username::UsergroupUnderUsernames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : usergroup_under_username)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "usergroup-under-username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

Aaa::Usernames::Username::Secret::Secret()
    :
    type{YType::enumeration, "type"},
    secret5{YType::str, "secret5"},
    secret8{YType::str, "secret8"},
    secret9{YType::str, "secret9"}
{

    yang_name = "secret"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Aaa::Usernames::Username::Secret::~Secret()
{
}

bool Aaa::Usernames::Username::Secret::has_data() const
{
    return type.is_set
	|| secret5.is_set
	|| secret8.is_set
	|| secret9.is_set;
}

bool Aaa::Usernames::Username::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret5.yfilter)
	|| ydk::is_set(secret8.yfilter)
	|| ydk::is_set(secret9.yfilter);
}

std::string Aaa::Usernames::Username::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Usernames::Username::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret5.is_set || is_set(secret5.yfilter)) leaf_name_data.push_back(secret5.get_name_leafdata());
    if (secret8.is_set || is_set(secret8.yfilter)) leaf_name_data.push_back(secret8.get_name_leafdata());
    if (secret9.is_set || is_set(secret9.yfilter)) leaf_name_data.push_back(secret9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Usernames::Username::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Aaa::Usernames::Username::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret5")
    {
        secret5 = value;
        secret5.value_namespace = name_space;
        secret5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret8")
    {
        secret8 = value;
        secret8.value_namespace = name_space;
        secret8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret9")
    {
        secret9 = value;
        secret9.value_namespace = name_space;
        secret9.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Usernames::Username::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret5")
    {
        secret5.yfilter = yfilter;
    }
    if(value_path == "secret8")
    {
        secret8.yfilter = yfilter;
    }
    if(value_path == "secret9")
    {
        secret9.yfilter = yfilter;
    }
}

bool Aaa::Usernames::Username::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret5" || name == "secret8" || name == "secret9")
        return true;
    return false;
}

const Enum::YLeaf AaaAdminPassword::type5 {5, "type5"};
const Enum::YLeaf AaaAdminPassword::type8 {8, "type8"};
const Enum::YLeaf AaaAdminPassword::type9 {9, "type9"};


}
}

