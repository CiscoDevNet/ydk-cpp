
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_aaa.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace tailf_aaa {

Aaa::Aaa()
    :
    authentication(std::make_shared<Aaa::Authentication>())
    , authorization(std::make_shared<Aaa::Authorization>())
    , ios(nullptr) // presence node
    , disaster_recovery(std::make_shared<Aaa::DisasterRecovery>())
    , privileged_access(std::make_shared<Aaa::PrivilegedAccess>())
    , accounting(std::make_shared<Aaa::Accounting>())
    , user_group(std::make_shared<Aaa::UserGroup>())
{
    authentication->parent = this;
    authorization->parent = this;
    disaster_recovery->parent = this;
    privileged_access->parent = this;
    accounting->parent = this;
    user_group->parent = this;

    yang_name = "aaa"; yang_parent_name = "tailf-aaa"; is_top_level_class = true; has_list_ancestor = false; 
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (ios !=  nullptr && ios->has_data())
	|| (disaster_recovery !=  nullptr && disaster_recovery->has_data())
	|| (privileged_access !=  nullptr && privileged_access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (user_group !=  nullptr && user_group->has_data());
}

bool Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (ios !=  nullptr && ios->has_operation())
	|| (disaster_recovery !=  nullptr && disaster_recovery->has_operation())
	|| (privileged_access !=  nullptr && privileged_access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (user_group !=  nullptr && user_group->has_operation());
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Aaa::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "ios")
    {
        if(ios == nullptr)
        {
            ios = std::make_shared<Aaa::Ios>();
        }
        return ios;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-aaa-disaster-recovery:disaster-recovery")
    {
        if(disaster_recovery == nullptr)
        {
            disaster_recovery = std::make_shared<Aaa::DisasterRecovery>();
        }
        return disaster_recovery;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-aaa-aaa-show:privileged-access")
    {
        if(privileged_access == nullptr)
        {
            privileged_access = std::make_shared<Aaa::PrivilegedAccess>();
        }
        return privileged_access;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-aaa-aaa-show:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-aaa-aaa-show:user-group")
    {
        if(user_group == nullptr)
        {
            user_group = std::make_shared<Aaa::UserGroup>();
        }
        return user_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(ios != nullptr)
    {
        _children["ios"] = ios;
    }

    if(disaster_recovery != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-aaa-disaster-recovery:disaster-recovery"] = disaster_recovery;
    }

    if(privileged_access != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-aaa-aaa-show:privileged-access"] = privileged_access;
    }

    if(accounting != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-aaa-aaa-show:accounting"] = accounting;
    }

    if(user_group != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-aaa-aaa-show:user-group"] = user_group;
    }

    return _children;
}

void Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(name == "authentication" || name == "authorization" || name == "ios" || name == "disaster-recovery" || name == "privileged-access" || name == "accounting" || name == "user-group")
        return true;
    return false;
}

Aaa::Authentication::Authentication()
    :
    users(std::make_shared<Aaa::Authentication::Users>())
    , groups(std::make_shared<Aaa::Authentication::Groups>())
{
    users->parent = this;
    groups->parent = this;

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authentication::~Authentication()
{
}

bool Aaa::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (users !=  nullptr && users->has_data())
	|| (groups !=  nullptr && groups->has_data());
}

bool Aaa::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (users !=  nullptr && users->has_operation())
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Aaa::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "users")
    {
        if(users == nullptr)
        {
            users = std::make_shared<Aaa::Authentication::Users>();
        }
        return users;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Aaa::Authentication::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(users != nullptr)
    {
        _children["users"] = users;
    }

    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    return _children;
}

void Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "users" || name == "groups")
        return true;
    return false;
}

Aaa::Authentication::Users::Users()
    :
    user(this, {"name"})
{

    yang_name = "users"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authentication::Users::~Users()
{
}

bool Aaa::Authentication::Users::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authentication::Users::has_operation() const
{
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Authentication::Users::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authentication::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authentication::Users::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authentication::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        auto ent_ = std::make_shared<Aaa::Authentication::Users::User>();
        ent_->parent = this;
        user.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authentication::Users::get_children() const
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

void Aaa::Authentication::Users::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authentication::Users::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authentication::Users::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

Aaa::Authentication::Users::User::User()
    :
    name{YType::str, "name"},
    uid{YType::int32, "uid"},
    gid{YType::int32, "gid"},
    password{YType::str, "password"},
    ssh_keydir{YType::str, "ssh_keydir"},
    homedir{YType::str, "homedir"}
{

    yang_name = "user"; yang_parent_name = "users"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authentication::Users::User::~User()
{
}

bool Aaa::Authentication::Users::User::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| uid.is_set
	|| gid.is_set
	|| password.is_set
	|| ssh_keydir.is_set
	|| homedir.is_set;
}

bool Aaa::Authentication::Users::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(uid.yfilter)
	|| ydk::is_set(gid.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(ssh_keydir.yfilter)
	|| ydk::is_set(homedir.yfilter);
}

std::string Aaa::Authentication::Users::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authentication/users/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authentication::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authentication::Users::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (uid.is_set || is_set(uid.yfilter)) leaf_name_data.push_back(uid.get_name_leafdata());
    if (gid.is_set || is_set(gid.yfilter)) leaf_name_data.push_back(gid.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (ssh_keydir.is_set || is_set(ssh_keydir.yfilter)) leaf_name_data.push_back(ssh_keydir.get_name_leafdata());
    if (homedir.is_set || is_set(homedir.yfilter)) leaf_name_data.push_back(homedir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authentication::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authentication::Users::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Authentication::Users::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uid")
    {
        uid = value;
        uid.value_namespace = name_space;
        uid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gid")
    {
        gid = value;
        gid.value_namespace = name_space;
        gid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssh_keydir")
    {
        ssh_keydir = value;
        ssh_keydir.value_namespace = name_space;
        ssh_keydir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "homedir")
    {
        homedir = value;
        homedir.value_namespace = name_space;
        homedir.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Authentication::Users::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "uid")
    {
        uid.yfilter = yfilter;
    }
    if(value_path == "gid")
    {
        gid.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "ssh_keydir")
    {
        ssh_keydir.yfilter = yfilter;
    }
    if(value_path == "homedir")
    {
        homedir.yfilter = yfilter;
    }
}

bool Aaa::Authentication::Users::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "uid" || name == "gid" || name == "password" || name == "ssh_keydir" || name == "homedir")
        return true;
    return false;
}

Aaa::Authentication::Groups::Groups()
    :
    group(this, {"name"})
{

    yang_name = "groups"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authentication::Groups::~Groups()
{
}

bool Aaa::Authentication::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authentication::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Authentication::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authentication::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authentication::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authentication::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Aaa::Authentication::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authentication::Groups::get_children() const
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

void Aaa::Authentication::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authentication::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authentication::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Aaa::Authentication::Groups::Group::Group()
    :
    name{YType::str, "name"},
    gid{YType::int32, "gid"},
    users{YType::str, "users"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authentication::Groups::Group::~Group()
{
}

bool Aaa::Authentication::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| gid.is_set
	|| users.is_set;
}

bool Aaa::Authentication::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(gid.yfilter)
	|| ydk::is_set(users.yfilter);
}

std::string Aaa::Authentication::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authentication/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authentication::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authentication::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (gid.is_set || is_set(gid.yfilter)) leaf_name_data.push_back(gid.get_name_leafdata());
    if (users.is_set || is_set(users.yfilter)) leaf_name_data.push_back(users.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authentication::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authentication::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Authentication::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gid")
    {
        gid = value;
        gid.value_namespace = name_space;
        gid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "users")
    {
        users = value;
        users.value_namespace = name_space;
        users.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Authentication::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "gid")
    {
        gid.yfilter = yfilter;
    }
    if(value_path == "users")
    {
        users.yfilter = yfilter;
    }
}

bool Aaa::Authentication::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "gid" || name == "users")
        return true;
    return false;
}

Aaa::Authorization::Authorization()
    :
    cmdrules(std::make_shared<Aaa::Authorization::Cmdrules>())
    , datarules(std::make_shared<Aaa::Authorization::Datarules>())
{
    cmdrules->parent = this;
    datarules->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authorization::~Authorization()
{
}

bool Aaa::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return (cmdrules !=  nullptr && cmdrules->has_data())
	|| (datarules !=  nullptr && datarules->has_data());
}

bool Aaa::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (cmdrules !=  nullptr && cmdrules->has_operation())
	|| (datarules !=  nullptr && datarules->has_operation());
}

std::string Aaa::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmdrules")
    {
        if(cmdrules == nullptr)
        {
            cmdrules = std::make_shared<Aaa::Authorization::Cmdrules>();
        }
        return cmdrules;
    }

    if(child_yang_name == "datarules")
    {
        if(datarules == nullptr)
        {
            datarules = std::make_shared<Aaa::Authorization::Datarules>();
        }
        return datarules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmdrules != nullptr)
    {
        _children["cmdrules"] = cmdrules;
    }

    if(datarules != nullptr)
    {
        _children["datarules"] = datarules;
    }

    return _children;
}

void Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmdrules" || name == "datarules")
        return true;
    return false;
}

Aaa::Authorization::Cmdrules::Cmdrules()
    :
    cmdrule(this, {"index_"})
{

    yang_name = "cmdrules"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authorization::Cmdrules::~Cmdrules()
{
}

bool Aaa::Authorization::Cmdrules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmdrule.len(); index++)
    {
        if(cmdrule[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authorization::Cmdrules::has_operation() const
{
    for (std::size_t index=0; index<cmdrule.len(); index++)
    {
        if(cmdrule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Authorization::Cmdrules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authorization::Cmdrules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmdrules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authorization::Cmdrules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authorization::Cmdrules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmdrule")
    {
        auto ent_ = std::make_shared<Aaa::Authorization::Cmdrules::Cmdrule>();
        ent_->parent = this;
        cmdrule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authorization::Cmdrules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmdrule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Authorization::Cmdrules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authorization::Cmdrules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authorization::Cmdrules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmdrule")
        return true;
    return false;
}

Aaa::Authorization::Cmdrules::Cmdrule::Cmdrule()
    :
    index_{YType::uint32, "index"},
    context{YType::str, "context"},
    command{YType::str, "command"},
    group{YType::str, "group"},
    ops{YType::enumeration, "ops"},
    action{YType::enumeration, "action"}
{

    yang_name = "cmdrule"; yang_parent_name = "cmdrules"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authorization::Cmdrules::Cmdrule::~Cmdrule()
{
}

bool Aaa::Authorization::Cmdrules::Cmdrule::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| context.is_set
	|| command.is_set
	|| group.is_set
	|| ops.is_set
	|| action.is_set;
}

bool Aaa::Authorization::Cmdrules::Cmdrule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(ops.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string Aaa::Authorization::Cmdrules::Cmdrule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authorization/cmdrules/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authorization::Cmdrules::Cmdrule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmdrule";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authorization::Cmdrules::Cmdrule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (ops.is_set || is_set(ops.yfilter)) leaf_name_data.push_back(ops.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authorization::Cmdrules::Cmdrule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authorization::Cmdrules::Cmdrule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Authorization::Cmdrules::Cmdrule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ops")
    {
        ops = value;
        ops.value_namespace = name_space;
        ops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Authorization::Cmdrules::Cmdrule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "ops")
    {
        ops.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Aaa::Authorization::Cmdrules::Cmdrule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "context" || name == "command" || name == "group" || name == "ops" || name == "action")
        return true;
    return false;
}

Aaa::Authorization::Datarules::Datarules()
    :
    datarule(this, {"index_"})
{

    yang_name = "datarules"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authorization::Datarules::~Datarules()
{
}

bool Aaa::Authorization::Datarules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<datarule.len(); index++)
    {
        if(datarule[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authorization::Datarules::has_operation() const
{
    for (std::size_t index=0; index<datarule.len(); index++)
    {
        if(datarule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Authorization::Datarules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authorization::Datarules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datarules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authorization::Datarules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authorization::Datarules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datarule")
    {
        auto ent_ = std::make_shared<Aaa::Authorization::Datarules::Datarule>();
        ent_->parent = this;
        datarule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authorization::Datarules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : datarule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Authorization::Datarules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Authorization::Datarules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Authorization::Datarules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datarule")
        return true;
    return false;
}

Aaa::Authorization::Datarules::Datarule::Datarule()
    :
    index_{YType::uint32, "index"},
    namespace_{YType::str, "namespace"},
    context{YType::str, "context"},
    keypath{YType::str, "keypath"},
    group{YType::str, "group"},
    ops{YType::enumeration, "ops"},
    action{YType::enumeration, "action"}
{

    yang_name = "datarule"; yang_parent_name = "datarules"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Authorization::Datarules::Datarule::~Datarule()
{
}

bool Aaa::Authorization::Datarules::Datarule::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| namespace_.is_set
	|| context.is_set
	|| keypath.is_set
	|| group.is_set
	|| ops.is_set
	|| action.is_set;
}

bool Aaa::Authorization::Datarules::Datarule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(namespace_.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(keypath.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(ops.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string Aaa::Authorization::Datarules::Datarule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/authorization/datarules/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Authorization::Datarules::Datarule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datarule";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Authorization::Datarules::Datarule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.yfilter)) leaf_name_data.push_back(namespace_.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (keypath.is_set || is_set(keypath.yfilter)) leaf_name_data.push_back(keypath.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (ops.is_set || is_set(ops.yfilter)) leaf_name_data.push_back(ops.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Authorization::Datarules::Datarule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Authorization::Datarules::Datarule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Authorization::Datarules::Datarule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
        namespace_.value_namespace = name_space;
        namespace_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keypath")
    {
        keypath = value;
        keypath.value_namespace = name_space;
        keypath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ops")
    {
        ops = value;
        ops.value_namespace = name_space;
        ops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Authorization::Datarules::Datarule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "namespace")
    {
        namespace_.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "keypath")
    {
        keypath.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "ops")
    {
        ops.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Aaa::Authorization::Datarules::Datarule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "namespace" || name == "context" || name == "keypath" || name == "group" || name == "ops" || name == "action")
        return true;
    return false;
}

Aaa::Ios::Ios()
    :
    level(this, {"nr"})
    , privilege(this, {"mode"})
{

    yang_name = "ios"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Aaa::Ios::~Ios()
{
}

bool Aaa::Ios::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<privilege.len(); index++)
    {
        if(privilege[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Ios::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<privilege.len(); index++)
    {
        if(privilege[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aaa::Ios::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Ios::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ios";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Ios::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Ios::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Aaa::Ios::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    if(child_yang_name == "privilege")
    {
        auto ent_ = std::make_shared<Aaa::Ios::Privilege>();
        ent_->parent = this;
        privilege.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Ios::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : privilege.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Ios::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Ios::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Ios::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "privilege")
        return true;
    return false;
}

Aaa::Ios::Level::Level()
    :
    nr{YType::int32, "nr"},
    secret{YType::str, "secret"},
    password{YType::str, "password"},
    prompt{YType::str, "prompt"}
{

    yang_name = "level"; yang_parent_name = "ios"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Ios::Level::~Level()
{
}

bool Aaa::Ios::Level::has_data() const
{
    if (is_presence_container) return true;
    return nr.is_set
	|| secret.is_set
	|| password.is_set
	|| prompt.is_set;
}

bool Aaa::Ios::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nr.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(prompt.yfilter);
}

std::string Aaa::Ios::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/ios/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Ios::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(nr, "nr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Ios::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.yfilter)) leaf_name_data.push_back(nr.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (prompt.is_set || is_set(prompt.yfilter)) leaf_name_data.push_back(prompt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Ios::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Ios::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Ios::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nr")
    {
        nr = value;
        nr.value_namespace = name_space;
        nr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prompt")
    {
        prompt = value;
        prompt.value_namespace = name_space;
        prompt.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Ios::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nr")
    {
        nr.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "prompt")
    {
        prompt.yfilter = yfilter;
    }
}

bool Aaa::Ios::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nr" || name == "secret" || name == "password" || name == "prompt")
        return true;
    return false;
}

Aaa::Ios::Privilege::Privilege()
    :
    mode{YType::str, "mode"}
        ,
    level(this, {"nr"})
{

    yang_name = "privilege"; yang_parent_name = "ios"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Ios::Privilege::~Privilege()
{
}

bool Aaa::Ios::Privilege::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return mode.is_set;
}

bool Aaa::Ios::Privilege::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Aaa::Ios::Privilege::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/ios/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Ios::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    ADD_KEY_TOKEN(mode, "mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Ios::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Ios::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Aaa::Ios::Privilege::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Ios::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Ios::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Ios::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Aaa::Ios::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "mode")
        return true;
    return false;
}

Aaa::Ios::Privilege::Level::Level()
    :
    nr{YType::int32, "nr"}
        ,
    command(this, {"name"})
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Ios::Privilege::Level::~Level()
{
}

bool Aaa::Ios::Privilege::Level::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command.len(); index++)
    {
        if(command[index]->has_data())
            return true;
    }
    return nr.is_set;
}

bool Aaa::Ios::Privilege::Level::has_operation() const
{
    for (std::size_t index=0; index<command.len(); index++)
    {
        if(command[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nr.yfilter);
}

std::string Aaa::Ios::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(nr, "nr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Ios::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.yfilter)) leaf_name_data.push_back(nr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Ios::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        auto ent_ = std::make_shared<Aaa::Ios::Privilege::Level::Command>();
        ent_->parent = this;
        command.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Ios::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Aaa::Ios::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nr")
    {
        nr = value;
        nr.value_namespace = name_space;
        nr.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Ios::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nr")
    {
        nr.yfilter = yfilter;
    }
}

bool Aaa::Ios::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "nr")
        return true;
    return false;
}

Aaa::Ios::Privilege::Level::Command::Command()
    :
    name{YType::str, "name"}
{

    yang_name = "command"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Aaa::Ios::Privilege::Level::Command::~Command()
{
}

bool Aaa::Ios::Privilege::Level::Command::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Aaa::Ios::Privilege::Level::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Aaa::Ios::Privilege::Level::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Ios::Privilege::Level::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Ios::Privilege::Level::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Ios::Privilege::Level::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Ios::Privilege::Level::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Ios::Privilege::Level::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Aaa::Ios::Privilege::Level::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Aaa::DisasterRecovery::DisasterRecovery()
    :
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "disaster-recovery"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::DisasterRecovery::~DisasterRecovery()
{
}

bool Aaa::DisasterRecovery::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| password.is_set;
}

bool Aaa::DisasterRecovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Aaa::DisasterRecovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::DisasterRecovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-aaa-disaster-recovery:disaster-recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::DisasterRecovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::DisasterRecovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::DisasterRecovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::DisasterRecovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::DisasterRecovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Aaa::DisasterRecovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
        return true;
    return false;
}

Aaa::PrivilegedAccess::PrivilegedAccess()
    :
    shell_access{YType::str, "shell-access"},
    first_user{YType::str, "first-user"},
    first_user_change{YType::str, "first-user-change"},
    current_disaster_recovery_user{YType::str, "current-disaster-recovery-user"}
{

    yang_name = "privileged-access"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::PrivilegedAccess::~PrivilegedAccess()
{
}

bool Aaa::PrivilegedAccess::has_data() const
{
    if (is_presence_container) return true;
    return shell_access.is_set
	|| first_user.is_set
	|| first_user_change.is_set
	|| current_disaster_recovery_user.is_set;
}

bool Aaa::PrivilegedAccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shell_access.yfilter)
	|| ydk::is_set(first_user.yfilter)
	|| ydk::is_set(first_user_change.yfilter)
	|| ydk::is_set(current_disaster_recovery_user.yfilter);
}

std::string Aaa::PrivilegedAccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::PrivilegedAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-aaa-aaa-show:privileged-access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::PrivilegedAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shell_access.is_set || is_set(shell_access.yfilter)) leaf_name_data.push_back(shell_access.get_name_leafdata());
    if (first_user.is_set || is_set(first_user.yfilter)) leaf_name_data.push_back(first_user.get_name_leafdata());
    if (first_user_change.is_set || is_set(first_user_change.yfilter)) leaf_name_data.push_back(first_user_change.get_name_leafdata());
    if (current_disaster_recovery_user.is_set || is_set(current_disaster_recovery_user.yfilter)) leaf_name_data.push_back(current_disaster_recovery_user.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::PrivilegedAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::PrivilegedAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::PrivilegedAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shell-access")
    {
        shell_access = value;
        shell_access.value_namespace = name_space;
        shell_access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-user")
    {
        first_user = value;
        first_user.value_namespace = name_space;
        first_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-user-change")
    {
        first_user_change = value;
        first_user_change.value_namespace = name_space;
        first_user_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-disaster-recovery-user")
    {
        current_disaster_recovery_user = value;
        current_disaster_recovery_user.value_namespace = name_space;
        current_disaster_recovery_user.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::PrivilegedAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shell-access")
    {
        shell_access.yfilter = yfilter;
    }
    if(value_path == "first-user")
    {
        first_user.yfilter = yfilter;
    }
    if(value_path == "first-user-change")
    {
        first_user_change.yfilter = yfilter;
    }
    if(value_path == "current-disaster-recovery-user")
    {
        current_disaster_recovery_user.yfilter = yfilter;
    }
}

bool Aaa::PrivilegedAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shell-access" || name == "first-user" || name == "first-user-change" || name == "current-disaster-recovery-user")
        return true;
    return false;
}

Aaa::Accounting::Accounting()
    :
    log_data{YType::str, "log-data"}
{

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Accounting::~Accounting()
{
}

bool Aaa::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return log_data.is_set;
}

bool Aaa::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_data.yfilter);
}

std::string Aaa::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-aaa-aaa-show:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_data.is_set || is_set(log_data.yfilter)) leaf_name_data.push_back(log_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-data")
    {
        log_data = value;
        log_data.value_namespace = name_space;
        log_data.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-data")
    {
        log_data.yfilter = yfilter;
    }
}

bool Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-data")
        return true;
    return false;
}

Aaa::UserGroup::UserGroup()
    :
    grp_data{YType::str, "grp-data"}
{

    yang_name = "user-group"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::UserGroup::~UserGroup()
{
}

bool Aaa::UserGroup::has_data() const
{
    if (is_presence_container) return true;
    return grp_data.is_set;
}

bool Aaa::UserGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grp_data.yfilter);
}

std::string Aaa::UserGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::UserGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-aaa-aaa-show:user-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::UserGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grp_data.is_set || is_set(grp_data.yfilter)) leaf_name_data.push_back(grp_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::UserGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::UserGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::UserGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grp-data")
    {
        grp_data = value;
        grp_data.value_namespace = name_space;
        grp_data.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::UserGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grp-data")
    {
        grp_data.yfilter = yfilter;
    }
}

bool Aaa::UserGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grp-data")
        return true;
    return false;
}

Alias::Alias()
    :
    name{YType::str, "name"},
    expansion{YType::str, "expansion"}
{

    yang_name = "alias"; yang_parent_name = "tailf-aaa"; is_top_level_class = true; has_list_ancestor = false; 
}

Alias::~Alias()
{
}

bool Alias::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| expansion.is_set;
}

bool Alias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expansion.yfilter);
}

std::string Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:alias";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expansion.is_set || is_set(expansion.yfilter)) leaf_name_data.push_back(expansion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Alias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expansion")
    {
        expansion = value;
        expansion.value_namespace = name_space;
        expansion.value_namespace_prefix = name_space_prefix;
    }
}

void Alias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expansion")
    {
        expansion.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Alias::clone_ptr() const
{
    return std::make_shared<Alias>();
}

std::string Alias::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Alias::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Alias::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Alias::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Alias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "expansion")
        return true;
    return false;
}

Session::Session()
    :
    complete_on_space{YType::boolean, "complete-on-space"},
    ignore_leading_space{YType::boolean, "ignore-leading-space"},
    idle_timeout{YType::uint64, "idle-timeout"},
    paginate{YType::boolean, "paginate"},
    history{YType::uint64, "history"},
    autowizard{YType::boolean, "autowizard"},
    show_defaults{YType::boolean, "show-defaults"},
    display_level{YType::uint64, "display-level"},
    prompt1{YType::str, "prompt1"},
    prompt2{YType::str, "prompt2"}
{

    yang_name = "session"; yang_parent_name = "tailf-aaa"; is_top_level_class = true; has_list_ancestor = false; is_presence_container = true;
}

Session::~Session()
{
}

bool Session::has_data() const
{
    if (is_presence_container) return true;
    return complete_on_space.is_set
	|| ignore_leading_space.is_set
	|| idle_timeout.is_set
	|| paginate.is_set
	|| history.is_set
	|| autowizard.is_set
	|| show_defaults.is_set
	|| display_level.is_set
	|| prompt1.is_set
	|| prompt2.is_set;
}

bool Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_on_space.yfilter)
	|| ydk::is_set(ignore_leading_space.yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| ydk::is_set(paginate.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(autowizard.yfilter)
	|| ydk::is_set(show_defaults.yfilter)
	|| ydk::is_set(display_level.yfilter)
	|| ydk::is_set(prompt1.yfilter)
	|| ydk::is_set(prompt2.yfilter);
}

std::string Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_on_space.is_set || is_set(complete_on_space.yfilter)) leaf_name_data.push_back(complete_on_space.get_name_leafdata());
    if (ignore_leading_space.is_set || is_set(ignore_leading_space.yfilter)) leaf_name_data.push_back(ignore_leading_space.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (paginate.is_set || is_set(paginate.yfilter)) leaf_name_data.push_back(paginate.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (autowizard.is_set || is_set(autowizard.yfilter)) leaf_name_data.push_back(autowizard.get_name_leafdata());
    if (show_defaults.is_set || is_set(show_defaults.yfilter)) leaf_name_data.push_back(show_defaults.get_name_leafdata());
    if (display_level.is_set || is_set(display_level.yfilter)) leaf_name_data.push_back(display_level.get_name_leafdata());
    if (prompt1.is_set || is_set(prompt1.yfilter)) leaf_name_data.push_back(prompt1.get_name_leafdata());
    if (prompt2.is_set || is_set(prompt2.yfilter)) leaf_name_data.push_back(prompt2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-on-space")
    {
        complete_on_space = value;
        complete_on_space.value_namespace = name_space;
        complete_on_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-leading-space")
    {
        ignore_leading_space = value;
        ignore_leading_space.value_namespace = name_space;
        ignore_leading_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paginate")
    {
        paginate = value;
        paginate.value_namespace = name_space;
        paginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autowizard")
    {
        autowizard = value;
        autowizard.value_namespace = name_space;
        autowizard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-defaults")
    {
        show_defaults = value;
        show_defaults.value_namespace = name_space;
        show_defaults.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-level")
    {
        display_level = value;
        display_level.value_namespace = name_space;
        display_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt1")
    {
        prompt1 = value;
        prompt1.value_namespace = name_space;
        prompt1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt2")
    {
        prompt2 = value;
        prompt2.value_namespace = name_space;
        prompt2.value_namespace_prefix = name_space_prefix;
    }
}

void Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-on-space")
    {
        complete_on_space.yfilter = yfilter;
    }
    if(value_path == "ignore-leading-space")
    {
        ignore_leading_space.yfilter = yfilter;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
    if(value_path == "paginate")
    {
        paginate.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "autowizard")
    {
        autowizard.yfilter = yfilter;
    }
    if(value_path == "show-defaults")
    {
        show_defaults.yfilter = yfilter;
    }
    if(value_path == "display-level")
    {
        display_level.yfilter = yfilter;
    }
    if(value_path == "prompt1")
    {
        prompt1.yfilter = yfilter;
    }
    if(value_path == "prompt2")
    {
        prompt2.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Session::clone_ptr() const
{
    return std::make_shared<Session>();
}

std::string Session::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Session::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Session::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Session::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-on-space" || name == "ignore-leading-space" || name == "idle-timeout" || name == "paginate" || name == "history" || name == "autowizard" || name == "show-defaults" || name == "display-level" || name == "prompt1" || name == "prompt2")
        return true;
    return false;
}

User::User()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
        ,
    alias(this, {"name"})
    , session(std::make_shared<User::Session>())
{
    session->parent = this;

    yang_name = "user"; yang_parent_name = "tailf-aaa"; is_top_level_class = true; has_list_ancestor = false; 
}

User::~User()
{
}

bool User::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alias.len(); index++)
    {
        if(alias[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (session !=  nullptr && session->has_data());
}

bool User::has_operation() const
{
    for (std::size_t index=0; index<alias.len(); index++)
    {
        if(alias[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:user";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alias")
    {
        auto ent_ = std::make_shared<User::Alias>();
        ent_->parent = this;
        alias.append(ent_);
        return ent_;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<User::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alias.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void User::set_filter(const std::string & value_path, YFilter yfilter)
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

std::shared_ptr<ydk::Entity> User::clone_ptr() const
{
    return std::make_shared<User>();
}

std::string User::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string User::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function User::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> User::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alias" || name == "session" || name == "name" || name == "description")
        return true;
    return false;
}

User::Alias::Alias()
    :
    name{YType::str, "name"},
    expansion{YType::str, "expansion"}
{

    yang_name = "alias"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

User::Alias::~Alias()
{
}

bool User::Alias::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| expansion.is_set;
}

bool User::Alias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expansion.yfilter);
}

std::string User::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > User::Alias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expansion.is_set || is_set(expansion.yfilter)) leaf_name_data.push_back(expansion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> User::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> User::Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void User::Alias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expansion")
    {
        expansion = value;
        expansion.value_namespace = name_space;
        expansion.value_namespace_prefix = name_space_prefix;
    }
}

void User::Alias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expansion")
    {
        expansion.yfilter = yfilter;
    }
}

bool User::Alias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "expansion")
        return true;
    return false;
}

User::Session::Session()
    :
    complete_on_space{YType::boolean, "complete-on-space"},
    ignore_leading_space{YType::boolean, "ignore-leading-space"},
    idle_timeout{YType::uint64, "idle-timeout"},
    paginate{YType::boolean, "paginate"},
    history{YType::uint64, "history"},
    autowizard{YType::boolean, "autowizard"},
    show_defaults{YType::boolean, "show-defaults"},
    display_level{YType::uint64, "display-level"},
    prompt1{YType::str, "prompt1"},
    prompt2{YType::str, "prompt2"}
{

    yang_name = "session"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

User::Session::~Session()
{
}

bool User::Session::has_data() const
{
    if (is_presence_container) return true;
    return complete_on_space.is_set
	|| ignore_leading_space.is_set
	|| idle_timeout.is_set
	|| paginate.is_set
	|| history.is_set
	|| autowizard.is_set
	|| show_defaults.is_set
	|| display_level.is_set
	|| prompt1.is_set
	|| prompt2.is_set;
}

bool User::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_on_space.yfilter)
	|| ydk::is_set(ignore_leading_space.yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| ydk::is_set(paginate.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(autowizard.yfilter)
	|| ydk::is_set(show_defaults.yfilter)
	|| ydk::is_set(display_level.yfilter)
	|| ydk::is_set(prompt1.yfilter)
	|| ydk::is_set(prompt2.yfilter);
}

std::string User::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > User::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_on_space.is_set || is_set(complete_on_space.yfilter)) leaf_name_data.push_back(complete_on_space.get_name_leafdata());
    if (ignore_leading_space.is_set || is_set(ignore_leading_space.yfilter)) leaf_name_data.push_back(ignore_leading_space.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (paginate.is_set || is_set(paginate.yfilter)) leaf_name_data.push_back(paginate.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (autowizard.is_set || is_set(autowizard.yfilter)) leaf_name_data.push_back(autowizard.get_name_leafdata());
    if (show_defaults.is_set || is_set(show_defaults.yfilter)) leaf_name_data.push_back(show_defaults.get_name_leafdata());
    if (display_level.is_set || is_set(display_level.yfilter)) leaf_name_data.push_back(display_level.get_name_leafdata());
    if (prompt1.is_set || is_set(prompt1.yfilter)) leaf_name_data.push_back(prompt1.get_name_leafdata());
    if (prompt2.is_set || is_set(prompt2.yfilter)) leaf_name_data.push_back(prompt2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> User::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> User::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void User::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-on-space")
    {
        complete_on_space = value;
        complete_on_space.value_namespace = name_space;
        complete_on_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-leading-space")
    {
        ignore_leading_space = value;
        ignore_leading_space.value_namespace = name_space;
        ignore_leading_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paginate")
    {
        paginate = value;
        paginate.value_namespace = name_space;
        paginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autowizard")
    {
        autowizard = value;
        autowizard.value_namespace = name_space;
        autowizard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-defaults")
    {
        show_defaults = value;
        show_defaults.value_namespace = name_space;
        show_defaults.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-level")
    {
        display_level = value;
        display_level.value_namespace = name_space;
        display_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt1")
    {
        prompt1 = value;
        prompt1.value_namespace = name_space;
        prompt1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt2")
    {
        prompt2 = value;
        prompt2.value_namespace = name_space;
        prompt2.value_namespace_prefix = name_space_prefix;
    }
}

void User::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-on-space")
    {
        complete_on_space.yfilter = yfilter;
    }
    if(value_path == "ignore-leading-space")
    {
        ignore_leading_space.yfilter = yfilter;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
    if(value_path == "paginate")
    {
        paginate.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "autowizard")
    {
        autowizard.yfilter = yfilter;
    }
    if(value_path == "show-defaults")
    {
        show_defaults.yfilter = yfilter;
    }
    if(value_path == "display-level")
    {
        display_level.yfilter = yfilter;
    }
    if(value_path == "prompt1")
    {
        prompt1.yfilter = yfilter;
    }
    if(value_path == "prompt2")
    {
        prompt2.yfilter = yfilter;
    }
}

bool User::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-on-space" || name == "ignore-leading-space" || name == "idle-timeout" || name == "paginate" || name == "history" || name == "autowizard" || name == "show-defaults" || name == "display-level" || name == "prompt1" || name == "prompt2")
        return true;
    return false;
}

const Enum::YLeaf DataOperationType::r {0, "r"};
const Enum::YLeaf DataOperationType::rx {1, "rx"};
const Enum::YLeaf DataOperationType::x {2, "x"};
const Enum::YLeaf DataOperationType::rw {3, "rw"};
const Enum::YLeaf DataOperationType::rwx {4, "rwx"};
const Enum::YLeaf DataOperationType::wx {5, "wx"};
const Enum::YLeaf DataOperationType::w {6, "w"};
const Enum::YLeaf DataOperationType::c {7, "c"};
const Enum::YLeaf DataOperationType::cr {8, "cr"};
const Enum::YLeaf DataOperationType::cu {9, "cu"};
const Enum::YLeaf DataOperationType::cd {10, "cd"};
const Enum::YLeaf DataOperationType::cx {11, "cx"};
const Enum::YLeaf DataOperationType::cru {12, "cru"};
const Enum::YLeaf DataOperationType::crd {13, "crd"};
const Enum::YLeaf DataOperationType::crx {14, "crx"};
const Enum::YLeaf DataOperationType::cud {15, "cud"};
const Enum::YLeaf DataOperationType::cux {16, "cux"};
const Enum::YLeaf DataOperationType::cdx {17, "cdx"};
const Enum::YLeaf DataOperationType::crud {18, "crud"};
const Enum::YLeaf DataOperationType::crux {19, "crux"};
const Enum::YLeaf DataOperationType::crdx {20, "crdx"};
const Enum::YLeaf DataOperationType::cudx {21, "cudx"};
const Enum::YLeaf DataOperationType::crudx {22, "crudx"};
const Enum::YLeaf DataOperationType::ru {23, "ru"};
const Enum::YLeaf DataOperationType::rd {24, "rd"};
const Enum::YLeaf DataOperationType::rud {25, "rud"};
const Enum::YLeaf DataOperationType::rux {26, "rux"};
const Enum::YLeaf DataOperationType::rdx {27, "rdx"};
const Enum::YLeaf DataOperationType::u {28, "u"};
const Enum::YLeaf DataOperationType::ud {29, "ud"};
const Enum::YLeaf DataOperationType::ux {30, "ux"};
const Enum::YLeaf DataOperationType::d {31, "d"};
const Enum::YLeaf DataOperationType::dx {32, "dx"};

const Enum::YLeaf BuiltinModes::exec {0, "exec"};
const Enum::YLeaf BuiltinModes::configure {1, "configure"};

const Enum::YLeaf BuiltinModes_::exec {0, "exec"};
const Enum::YLeaf BuiltinModes_::configure {1, "configure"};

const Enum::YLeaf CmdOperationType::r {0, "r"};
const Enum::YLeaf CmdOperationType::rx {1, "rx"};
const Enum::YLeaf CmdOperationType::x {2, "x"};

const Enum::YLeaf Action::accept {0, "accept"};
const Enum::YLeaf Action::reject {1, "reject"};
const Enum::YLeaf Action::accept_log {2, "accept_log"};


}
}

