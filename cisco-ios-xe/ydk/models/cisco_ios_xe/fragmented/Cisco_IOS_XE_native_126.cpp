
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_126.hpp"
#include "Cisco_IOS_XE_native_127.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "cert"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::Eap()
    :
    list(this, {"name"})
{

    yang_name = "eap"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::Psk()
    :
    list(this, {"name"})
{

    yang_name = "psk"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::User()
    :
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap>())
    , cert(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert>())
    , eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap>())
    , psk(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk>())
{
    anyconnect_eap->parent = this;
    cert->parent = this;
    eap->parent = this;
    psk->parent = this;

    yang_name = "user"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::~User()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_data() const
{
    if (is_presence_container) return true;
    return (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (cert !=  nullptr && cert->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk !=  nullptr && psk->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_operation() const
{
    return is_set(yfilter)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (cert !=  nullptr && cert->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk !=  nullptr && psk->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "cert")
    {
        if(cert == nullptr)
        {
            cert = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert>();
        }
        return cert;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk>();
        }
        return psk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(anyconnect_eap != nullptr)
    {
        _children["anyconnect-eap"] = anyconnect_eap;
    }

    if(cert != nullptr)
    {
        _children["cert"] = cert;
    }

    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    if(psk != nullptr)
    {
        _children["psk"] = psk;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "cert" || name == "eap" || name == "psk")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::AnyconnectEap()
    :
    cached{YType::empty, "cached"}
        ,
    list(this, {"name"})
{

    yang_name = "anyconnect-eap"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cached")
    {
        cached.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "cached")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::Cert()
    :
    list(this, {"name"})
{

    yang_name = "cert"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::~Cert()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "cert"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::Eap()
    :
    cached{YType::empty, "cached"}
        ,
    list(this, {"name"})
{

    yang_name = "eap"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cached")
    {
        cached.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "cached")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::Psk()
    :
    cached{YType::empty, "cached"}
        ,
    list(this, {"name"})
{

    yang_name = "psk"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cached")
    {
        cached.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "cached")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Authentication()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local>())
    , remote(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "authentication"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::~Authentication()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Local()
    :
    ecdsa_sig{YType::empty, "ecdsa-sig"},
    rsa_sig{YType::empty, "rsa-sig"}
        ,
    eap(nullptr) // presence node
    , pre_share(nullptr) // presence node
{

    yang_name = "local"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_data() const
{
    if (is_presence_container) return true;
    return ecdsa_sig.is_set
	|| rsa_sig.is_set
	|| (eap !=  nullptr && eap->has_data())
	|| (pre_share !=  nullptr && pre_share->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecdsa_sig.yfilter)
	|| ydk::is_set(rsa_sig.yfilter)
	|| (eap !=  nullptr && eap->has_operation())
	|| (pre_share !=  nullptr && pre_share->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecdsa_sig.is_set || is_set(ecdsa_sig.yfilter)) leaf_name_data.push_back(ecdsa_sig.get_name_leafdata());
    if (rsa_sig.is_set || is_set(rsa_sig.yfilter)) leaf_name_data.push_back(rsa_sig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "pre-share")
    {
        if(pre_share == nullptr)
        {
            pre_share = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare>();
        }
        return pre_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        _children["pre-share"] = pre_share;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig = value;
        ecdsa_sig.value_namespace = name_space;
        ecdsa_sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig = value;
        rsa_sig.value_namespace = name_space;
        rsa_sig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig.yfilter = yfilter;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap" || name == "pre-share" || name == "ecdsa-sig" || name == "rsa-sig")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Eap()
    :
    gtc(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc>())
    , md5(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5>())
    , mschapv2(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2>())
{
    gtc->parent = this;
    md5->parent = this;
    mschapv2->parent = this;

    yang_name = "eap"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_data() const
{
    if (is_presence_container) return true;
    return (gtc !=  nullptr && gtc->has_data())
	|| (md5 !=  nullptr && md5->has_data())
	|| (mschapv2 !=  nullptr && mschapv2->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_operation() const
{
    return is_set(yfilter)
	|| (gtc !=  nullptr && gtc->has_operation())
	|| (md5 !=  nullptr && md5->has_operation())
	|| (mschapv2 !=  nullptr && mschapv2->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtc")
    {
        if(gtc == nullptr)
        {
            gtc = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc>();
        }
        return gtc;
    }

    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "mschapv2")
    {
        if(mschapv2 == nullptr)
        {
            mschapv2 = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2>();
        }
        return mschapv2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gtc != nullptr)
    {
        _children["gtc"] = gtc;
    }

    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(mschapv2 != nullptr)
    {
        _children["mschapv2"] = mschapv2;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gtc" || name == "md5" || name == "mschapv2")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Gtc()
    :
    username{YType::str, "username"}
        ,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password>())
{
    password->parent = this;

    yang_name = "gtc"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::~Gtc()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "gtc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Md5()
    :
    username{YType::str, "username"}
        ,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password>())
{
    password->parent = this;

    yang_name = "md5"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::~Md5()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Mschapv2()
    :
    username{YType::str, "username"}
        ,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password>())
{
    password->parent = this;

    yang_name = "mschapv2"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::~Mschapv2()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mschapv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "mschapv2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::PreShare()
    :
    key(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key>())
{
    key->parent = this;

    yang_name = "pre-share"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_data() const
{
    if (is_presence_container) return true;
    return (key !=  nullptr && key->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "pre-share"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::~Key()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Remote()
    :
    ecdsa_sig{YType::empty, "ecdsa-sig"},
    rsa_sig{YType::empty, "rsa-sig"}
        ,
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap>())
    , eap(nullptr) // presence node
    , pre_share(nullptr) // presence node
{
    anyconnect_eap->parent = this;

    yang_name = "remote"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::~Remote()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_data() const
{
    if (is_presence_container) return true;
    return ecdsa_sig.is_set
	|| rsa_sig.is_set
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (pre_share !=  nullptr && pre_share->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecdsa_sig.yfilter)
	|| ydk::is_set(rsa_sig.yfilter)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (pre_share !=  nullptr && pre_share->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecdsa_sig.is_set || is_set(ecdsa_sig.yfilter)) leaf_name_data.push_back(ecdsa_sig.get_name_leafdata());
    if (rsa_sig.is_set || is_set(rsa_sig.yfilter)) leaf_name_data.push_back(rsa_sig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "pre-share")
    {
        if(pre_share == nullptr)
        {
            pre_share = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare>();
        }
        return pre_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(anyconnect_eap != nullptr)
    {
        _children["anyconnect-eap"] = anyconnect_eap;
    }

    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        _children["pre-share"] = pre_share;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig = value;
        ecdsa_sig.value_namespace = name_space;
        ecdsa_sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig = value;
        rsa_sig.value_namespace = name_space;
        rsa_sig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig.yfilter = yfilter;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "eap" || name == "pre-share" || name == "ecdsa-sig" || name == "rsa-sig")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::AnyconnectEap()
    :
    aggregate(nullptr) // presence node
{

    yang_name = "anyconnect-eap"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_data() const
{
    if (is_presence_container) return true;
    return (aggregate !=  nullptr && aggregate->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate !=  nullptr && aggregate->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate>();
        }
        return aggregate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregate != nullptr)
    {
        _children["aggregate"] = aggregate;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::Aggregate()
    :
    cert_request{YType::empty, "cert-request"}
{

    yang_name = "aggregate"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::~Aggregate()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_data() const
{
    if (is_presence_container) return true;
    return cert_request.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cert_request.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cert_request.is_set || is_set(cert_request.yfilter)) leaf_name_data.push_back(cert_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cert-request")
    {
        cert_request = value;
        cert_request.value_namespace = name_space;
        cert_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cert-request")
    {
        cert_request.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cert-request")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::Eap()
    :
    query_identity{YType::empty, "query-identity"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "eap"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_data() const
{
    if (is_presence_container) return true;
    return query_identity.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_identity.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_identity.is_set || is_set(query_identity.yfilter)) leaf_name_data.push_back(query_identity.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-identity")
    {
        query_identity = value;
        query_identity.value_namespace = name_space;
        query_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-identity")
    {
        query_identity.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-identity" || name == "timeout")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::PreShare()
    :
    key(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key>())
{
    key->parent = this;

    yang_name = "pre-share"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_data() const
{
    if (is_presence_container) return true;
    return (key !=  nullptr && key->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "pre-share"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::~Key()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::ConfigExchange::ConfigExchange()
    :
    request{YType::empty, "request"},
    set{YType::enumeration, "set"}
{

    yang_name = "config-exchange"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::ConfigExchange::~ConfigExchange()
{
}

bool Native::Crypto::Ikev2::Profile::ConfigExchange::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set
	|| set.is_set;
}

bool Native::Crypto::Ikev2::Profile::ConfigExchange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(set.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::ConfigExchange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-exchange";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::ConfigExchange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (set.is_set || is_set(set.yfilter)) leaf_name_data.push_back(set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::ConfigExchange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::ConfigExchange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::ConfigExchange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set")
    {
        set = value;
        set.value_namespace = name_space;
        set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::ConfigExchange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "set")
    {
        set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::ConfigExchange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "set")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Dpd::Dpd()
    :
    interval{YType::uint16, "interval"},
    retry{YType::uint8, "retry"},
    query{YType::enumeration, "query"}
{

    yang_name = "dpd"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Dpd::~Dpd()
{
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| retry.is_set
	|| query.is_set;
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(query.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Dpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Dpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Dpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Dpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Dpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Dpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "retry" || name == "query")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Identity::Identity()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Identity::Local>())
{
    local->parent = this;

    yang_name = "identity"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Identity::~Identity()
{
}

bool Native::Crypto::Ikev2::Profile::Identity::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Ikev2::Profile::Identity::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Profile::Identity::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Identity::Local::Local()
    :
    address{YType::str, "address"},
    dn{YType::empty, "dn"},
    email{YType::str, "email"},
    fqdn{YType::str, "fqdn"},
    key_id{YType::str, "key-id"}
{

    yang_name = "local"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Identity::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Identity::Local::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| dn.is_set
	|| email.is_set
	|| fqdn.is_set
	|| key_id.is_set;
}

bool Native::Crypto::Ikev2::Profile::Identity::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(key_id.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Identity::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Identity::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Identity::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Identity::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Identity::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Identity::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Identity::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "dn" || name == "email" || name == "fqdn" || name == "key-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::InitialContact::InitialContact()
    :
    force{YType::empty, "force"}
{

    yang_name = "initial-contact"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::InitialContact::~InitialContact()
{
}

bool Native::Crypto::Ikev2::Profile::InitialContact::has_data() const
{
    if (is_presence_container) return true;
    return force.is_set;
}

bool Native::Crypto::Ikev2::Profile::InitialContact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::InitialContact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initial-contact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::InitialContact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::InitialContact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::InitialContact::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::InitialContact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::InitialContact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::InitialContact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Keyring::Keyring()
    :
    local{YType::str, "local"}
        ,
    aaa(this, {"name"})
{

    yang_name = "keyring"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Keyring::~Keyring()
{
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aaa.len(); index++)
    {
        if(aaa[index]->has_data())
            return true;
    }
    return local.is_set;
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_operation() const
{
    for (std::size_t index=0; index<aaa.len(); index++)
    {
        if(aaa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring::Aaa>();
        ent_->parent = this;
        aaa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aaa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::Aaa()
    :
    name{YType::str, "name"},
    name_mangler{YType::str, "name-mangler"}
        ,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password>())
{
    password->parent = this;

    yang_name = "aaa"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::~Aaa()
{
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Lifetime::Lifetime()
    :
    seconds{YType::uint32, "seconds"},
    certificate{YType::empty, "certificate"}
{

    yang_name = "lifetime"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| certificate.is_set;
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(certificate.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Match()
    :
    certificate{YType::str, "certificate"}
        ,
    address(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address>())
    , fvrf(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Fvrf>())
    , identity(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity>())
{
    address->parent = this;
    fvrf->parent = this;
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::~Match()
{
}

bool Native::Crypto::Ikev2::Profile::Match::has_data() const
{
    if (is_presence_container) return true;
    return certificate.is_set
	|| (address !=  nullptr && address->has_data())
	|| (fvrf !=  nullptr && fvrf->has_data())
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (fvrf !=  nullptr && fvrf->has_operation())
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address>();
        }
        return address;
    }

    if(child_yang_name == "fvrf")
    {
        if(fvrf == nullptr)
        {
            fvrf = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Fvrf>();
        }
        return fvrf;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(fvrf != nullptr)
    {
        _children["fvrf"] = fvrf;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "fvrf" || name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Address::Address()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address::Local>())
{
    local->parent = this;

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Address::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Address::Local::Local()
    :
    ip{YType::str, "ip"},
    interface{YType::str, "interface"}
{

    yang_name = "local"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Address::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| interface.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Address::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Address::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Address::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Address::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Address::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Address::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Fvrf::Fvrf()
    :
    name{YType::str, "name"},
    any{YType::empty, "any"}
{

    yang_name = "fvrf"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Fvrf::~Fvrf()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| any.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Fvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fvrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Fvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Fvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Fvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Fvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Fvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "any")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Identity()
    :
    remote(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote>())
{
    remote->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Identity::~Identity()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::has_data() const
{
    if (is_presence_container) return true;
    return (remote !=  nullptr && remote->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Remote()
    :
    any{YType::empty, "any"},
    key_id{YType::str, "key-id"}
        ,
    address(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address>())
    , email(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email>())
    , fqdn(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn>())
{
    address->parent = this;
    email->parent = this;
    fqdn->parent = this;

    yang_name = "remote"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::~Remote()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| key_id.is_set
	|| (address !=  nullptr && address->has_data())
	|| (email !=  nullptr && email->has_data())
	|| (fqdn !=  nullptr && fqdn->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (email !=  nullptr && email->has_operation())
	|| (fqdn !=  nullptr && fqdn->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address>();
        }
        return address;
    }

    if(child_yang_name == "email")
    {
        if(email == nullptr)
        {
            email = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email>();
        }
        return email;
    }

    if(child_yang_name == "fqdn")
    {
        if(fqdn == nullptr)
        {
            fqdn = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn>();
        }
        return fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(email != nullptr)
    {
        _children["email"] = email;
    }

    if(fqdn != nullptr)
    {
        _children["fqdn"] = fqdn;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "email" || name == "fqdn" || name == "any" || name == "key-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Address()
    :
    ipv6_prefix{YType::str, "ipv6-prefix"}
        ,
    ipv4(this, {"ipv4_address"})
{

    yang_name = "address"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (auto const & leaf : ipv6_prefix.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ipv6_prefix.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_prefix_name_datas = ipv6_prefix.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_prefix_name_datas.begin(), ipv6_prefix_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.append(value);
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6-prefix")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv4_mask.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_address, "ipv4-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv4-mask")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::Email()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "email"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::~Email()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "email";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::Fqdn()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "fqdn"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{

    yang_name = "nat"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Nat::~Nat()
{
}

bool Native::Crypto::Ikev2::Profile::Nat::has_data() const
{
    if (is_presence_container) return true;
    return keepalive.is_set;
}

bool Native::Crypto::Ikev2::Profile::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Pki::Pki()
    :
    trustpoint{YType::str, "trustpoint"},
    use{YType::enumeration, "use"}
{

    yang_name = "pki"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Pki::~Pki()
{
}

bool Native::Crypto::Ikev2::Profile::Pki::has_data() const
{
    if (is_presence_container) return true;
    return trustpoint.is_set
	|| use.is_set;
}

bool Native::Crypto::Ikev2::Profile::Pki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint" || name == "use")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Reconnect::Reconnect()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "reconnect"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ikev2::Profile::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Reconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Reconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Reconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Reconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Redirect::Redirect()
    :
    gateway(std::make_shared<Native::Crypto::Ikev2::Profile::Redirect::Gateway>())
{
    gateway->parent = this;

    yang_name = "redirect"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Redirect::~Redirect()
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return (gateway !=  nullptr && gateway->has_data());
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Crypto::Ikev2::Profile::Redirect::Gateway>();
        }
        return gateway;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gateway != nullptr)
    {
        _children["gateway"] = gateway;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Redirect::Gateway::Gateway()
    :
    auth{YType::empty, "auth"}
{

    yang_name = "gateway"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Redirect::Gateway::~Gateway()
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_data() const
{
    if (is_presence_container) return true;
    return auth.is_set;
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Redirect::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Redirect::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::VirtualTemplate::VirtualTemplate()
    :
    number{YType::uint16, "number"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "virtual-template"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::VirtualTemplate::~VirtualTemplate()
{
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mode.is_set;
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::VirtualTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::VirtualTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mode")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Proposal()
    :
    name{YType::str, "name"}
        ,
    encryption(std::make_shared<Native::Crypto::Ikev2::Proposal::Encryption>())
    , group(std::make_shared<Native::Crypto::Ikev2::Proposal::Group>())
    , integrity(std::make_shared<Native::Crypto::Ikev2::Proposal::Integrity>())
    , prf(std::make_shared<Native::Crypto::Ikev2::Proposal::Prf>())
{
    encryption->parent = this;
    group->parent = this;
    integrity->parent = this;
    prf->parent = this;

    yang_name = "proposal"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Proposal::~Proposal()
{
}

bool Native::Crypto::Ikev2::Proposal::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (encryption !=  nullptr && encryption->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (integrity !=  nullptr && integrity->has_data())
	|| (prf !=  nullptr && prf->has_data());
}

bool Native::Crypto::Ikev2::Proposal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (integrity !=  nullptr && integrity->has_operation())
	|| (prf !=  nullptr && prf->has_operation());
}

std::string Native::Crypto::Ikev2::Proposal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Proposal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Proposal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Ikev2::Proposal::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Ikev2::Proposal::Group>();
        }
        return group;
    }

    if(child_yang_name == "integrity")
    {
        if(integrity == nullptr)
        {
            integrity = std::make_shared<Native::Crypto::Ikev2::Proposal::Integrity>();
        }
        return integrity;
    }

    if(child_yang_name == "prf")
    {
        if(prf == nullptr)
        {
            prf = std::make_shared<Native::Crypto::Ikev2::Proposal::Prf>();
        }
        return prf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Proposal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    if(group != nullptr)
    {
        _children["group"] = group;
    }

    if(integrity != nullptr)
    {
        _children["integrity"] = integrity;
    }

    if(prf != nullptr)
    {
        _children["prf"] = prf;
    }

    return _children;
}

void Native::Crypto::Ikev2::Proposal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "group" || name == "integrity" || name == "prf" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Encryption::Encryption()
    :
    en_3des{YType::empty, "en-3des"},
    aes_cbc_128{YType::empty, "aes-cbc-128"},
    aes_cbc_192{YType::empty, "aes-cbc-192"},
    aes_cbc_256{YType::empty, "aes-cbc-256"},
    aes_gcm_128{YType::empty, "aes-gcm-128"},
    aes_gcm_256{YType::empty, "aes-gcm-256"},
    des{YType::empty, "des"}
{

    yang_name = "encryption"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Proposal::Encryption::~Encryption()
{
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return en_3des.is_set
	|| aes_cbc_128.is_set
	|| aes_cbc_192.is_set
	|| aes_cbc_256.is_set
	|| aes_gcm_128.is_set
	|| aes_gcm_256.is_set
	|| des.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(en_3des.yfilter)
	|| ydk::is_set(aes_cbc_128.yfilter)
	|| ydk::is_set(aes_cbc_192.yfilter)
	|| ydk::is_set(aes_cbc_256.yfilter)
	|| ydk::is_set(aes_gcm_128.yfilter)
	|| ydk::is_set(aes_gcm_256.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (en_3des.is_set || is_set(en_3des.yfilter)) leaf_name_data.push_back(en_3des.get_name_leafdata());
    if (aes_cbc_128.is_set || is_set(aes_cbc_128.yfilter)) leaf_name_data.push_back(aes_cbc_128.get_name_leafdata());
    if (aes_cbc_192.is_set || is_set(aes_cbc_192.yfilter)) leaf_name_data.push_back(aes_cbc_192.get_name_leafdata());
    if (aes_cbc_256.is_set || is_set(aes_cbc_256.yfilter)) leaf_name_data.push_back(aes_cbc_256.get_name_leafdata());
    if (aes_gcm_128.is_set || is_set(aes_gcm_128.yfilter)) leaf_name_data.push_back(aes_gcm_128.get_name_leafdata());
    if (aes_gcm_256.is_set || is_set(aes_gcm_256.yfilter)) leaf_name_data.push_back(aes_gcm_256.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Proposal::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Proposal::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "en-3des")
    {
        en_3des = value;
        en_3des.value_namespace = name_space;
        en_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-128")
    {
        aes_cbc_128 = value;
        aes_cbc_128.value_namespace = name_space;
        aes_cbc_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-192")
    {
        aes_cbc_192 = value;
        aes_cbc_192.value_namespace = name_space;
        aes_cbc_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-256")
    {
        aes_cbc_256 = value;
        aes_cbc_256.value_namespace = name_space;
        aes_cbc_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-gcm-128")
    {
        aes_gcm_128 = value;
        aes_gcm_128.value_namespace = name_space;
        aes_gcm_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-gcm-256")
    {
        aes_gcm_256 = value;
        aes_gcm_256.value_namespace = name_space;
        aes_gcm_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "en-3des")
    {
        en_3des.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-128")
    {
        aes_cbc_128.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-192")
    {
        aes_cbc_192.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-256")
    {
        aes_cbc_256.yfilter = yfilter;
    }
    if(value_path == "aes-gcm-128")
    {
        aes_gcm_128.yfilter = yfilter;
    }
    if(value_path == "aes-gcm-256")
    {
        aes_gcm_256.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "en-3des" || name == "aes-cbc-128" || name == "aes-cbc-192" || name == "aes-cbc-256" || name == "aes-gcm-128" || name == "aes-gcm-256" || name == "des")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Group::Group()
    :
    one{YType::empty, "one"},
    fourteen{YType::empty, "fourteen"},
    fifteen{YType::empty, "fifteen"},
    sixteen{YType::empty, "sixteen"},
    nineteen{YType::empty, "nineteen"},
    two{YType::empty, "two"},
    twenty{YType::empty, "twenty"},
    twenty_one{YType::empty, "twenty-one"},
    twenty_four{YType::empty, "twenty-four"},
    five{YType::empty, "five"}
{

    yang_name = "group"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Proposal::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Proposal::Group::has_data() const
{
    if (is_presence_container) return true;
    return one.is_set
	|| fourteen.is_set
	|| fifteen.is_set
	|| sixteen.is_set
	|| nineteen.is_set
	|| two.is_set
	|| twenty.is_set
	|| twenty_one.is_set
	|| twenty_four.is_set
	|| five.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one.yfilter)
	|| ydk::is_set(fourteen.yfilter)
	|| ydk::is_set(fifteen.yfilter)
	|| ydk::is_set(sixteen.yfilter)
	|| ydk::is_set(nineteen.yfilter)
	|| ydk::is_set(two.yfilter)
	|| ydk::is_set(twenty.yfilter)
	|| ydk::is_set(twenty_one.yfilter)
	|| ydk::is_set(twenty_four.yfilter)
	|| ydk::is_set(five.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one.is_set || is_set(one.yfilter)) leaf_name_data.push_back(one.get_name_leafdata());
    if (fourteen.is_set || is_set(fourteen.yfilter)) leaf_name_data.push_back(fourteen.get_name_leafdata());
    if (fifteen.is_set || is_set(fifteen.yfilter)) leaf_name_data.push_back(fifteen.get_name_leafdata());
    if (sixteen.is_set || is_set(sixteen.yfilter)) leaf_name_data.push_back(sixteen.get_name_leafdata());
    if (nineteen.is_set || is_set(nineteen.yfilter)) leaf_name_data.push_back(nineteen.get_name_leafdata());
    if (two.is_set || is_set(two.yfilter)) leaf_name_data.push_back(two.get_name_leafdata());
    if (twenty.is_set || is_set(twenty.yfilter)) leaf_name_data.push_back(twenty.get_name_leafdata());
    if (twenty_one.is_set || is_set(twenty_one.yfilter)) leaf_name_data.push_back(twenty_one.get_name_leafdata());
    if (twenty_four.is_set || is_set(twenty_four.yfilter)) leaf_name_data.push_back(twenty_four.get_name_leafdata());
    if (five.is_set || is_set(five.yfilter)) leaf_name_data.push_back(five.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Proposal::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Proposal::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Proposal::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "one")
    {
        one = value;
        one.value_namespace = name_space;
        one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fourteen")
    {
        fourteen = value;
        fourteen.value_namespace = name_space;
        fourteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fifteen")
    {
        fifteen = value;
        fifteen.value_namespace = name_space;
        fifteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sixteen")
    {
        sixteen = value;
        sixteen.value_namespace = name_space;
        sixteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nineteen")
    {
        nineteen = value;
        nineteen.value_namespace = name_space;
        nineteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two")
    {
        two = value;
        two.value_namespace = name_space;
        two.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty")
    {
        twenty = value;
        twenty.value_namespace = name_space;
        twenty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-one")
    {
        twenty_one = value;
        twenty_one.value_namespace = name_space;
        twenty_one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-four")
    {
        twenty_four = value;
        twenty_four.value_namespace = name_space;
        twenty_four.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "five")
    {
        five = value;
        five.value_namespace = name_space;
        five.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "one")
    {
        one.yfilter = yfilter;
    }
    if(value_path == "fourteen")
    {
        fourteen.yfilter = yfilter;
    }
    if(value_path == "fifteen")
    {
        fifteen.yfilter = yfilter;
    }
    if(value_path == "sixteen")
    {
        sixteen.yfilter = yfilter;
    }
    if(value_path == "nineteen")
    {
        nineteen.yfilter = yfilter;
    }
    if(value_path == "two")
    {
        two.yfilter = yfilter;
    }
    if(value_path == "twenty")
    {
        twenty.yfilter = yfilter;
    }
    if(value_path == "twenty-one")
    {
        twenty_one.yfilter = yfilter;
    }
    if(value_path == "twenty-four")
    {
        twenty_four.yfilter = yfilter;
    }
    if(value_path == "five")
    {
        five.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "fourteen" || name == "fifteen" || name == "sixteen" || name == "nineteen" || name == "two" || name == "twenty" || name == "twenty-one" || name == "twenty-four" || name == "five")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Integrity::Integrity()
    :
    md5{YType::empty, "md5"},
    sha1{YType::empty, "sha1"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "integrity"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Proposal::Integrity::~Integrity()
{
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha1.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Integrity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Integrity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Proposal::Integrity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Proposal::Integrity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Proposal::Integrity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Integrity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Prf::Prf()
    :
    md5{YType::empty, "md5"},
    sha1{YType::empty, "sha1"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "prf"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Proposal::Prf::~Prf()
{
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha1.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Prf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Prf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Proposal::Prf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Proposal::Prf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Proposal::Prf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Prf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Ikev2::Reconnect::Reconnect()
    :
    key(this, {"key_index"})
{

    yang_name = "reconnect"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Reconnect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Reconnect::has_operation() const
{
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Reconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Reconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Reconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Reconnect::Key>();
        ent_->parent = this;
        key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Reconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Reconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Reconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Reconnect::Key::Key()
    :
    key_index{YType::uint8, "key-index"},
    active{YType::empty, "active"},
    key_value{YType::str, "key-value"}
{

    yang_name = "key"; yang_parent_name = "reconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Reconnect::Key::~Key()
{
}

bool Native::Crypto::Ikev2::Reconnect::Key::has_data() const
{
    if (is_presence_container) return true;
    return key_index.is_set
	|| active.is_set
	|| key_value.is_set;
}

bool Native::Crypto::Ikev2::Reconnect::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_index.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(key_value.yfilter);
}

std::string Native::Crypto::Ikev2::Reconnect::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/reconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Reconnect::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    ADD_KEY_TOKEN(key_index, "key-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Reconnect::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_index.is_set || is_set(key_index.yfilter)) leaf_name_data.push_back(key_index.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (key_value.is_set || is_set(key_value.yfilter)) leaf_name_data.push_back(key_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Reconnect::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Reconnect::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Reconnect::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-index")
    {
        key_index = value;
        key_index.value_namespace = name_space;
        key_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-value")
    {
        key_value = value;
        key_value.value_namespace = name_space;
        key_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Reconnect::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-index")
    {
        key_index.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "key-value")
    {
        key_value.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Reconnect::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-index" || name == "active" || name == "key-value")
        return true;
    return false;
}

Native::Crypto::Ikev2::Redirect::Redirect()
    :
    gateway{YType::enumeration, "gateway"}
        ,
    client(nullptr) // presence node
{

    yang_name = "redirect"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Redirect::~Redirect()
{
}

bool Native::Crypto::Ikev2::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return gateway.is_set
	|| (client !=  nullptr && client->has_data());
}

bool Native::Crypto::Ikev2::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Crypto::Ikev2::Redirect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Redirect::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    return _children;
}

void Native::Crypto::Ikev2::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "gateway")
        return true;
    return false;
}

Native::Crypto::Ikev2::Redirect::Client::Client()
    :
    max_redirects{YType::uint8, "max-redirects"}
{

    yang_name = "client"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Ikev2::Redirect::Client::~Client()
{
}

bool Native::Crypto::Ikev2::Redirect::Client::has_data() const
{
    if (is_presence_container) return true;
    return max_redirects.is_set;
}

bool Native::Crypto::Ikev2::Redirect::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_redirects.yfilter);
}

std::string Native::Crypto::Ikev2::Redirect::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/redirect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Redirect::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Redirect::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_redirects.is_set || is_set(max_redirects.yfilter)) leaf_name_data.push_back(max_redirects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Redirect::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Redirect::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Redirect::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-redirects")
    {
        max_redirects = value;
        max_redirects.value_namespace = name_space;
        max_redirects.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Redirect::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-redirects")
    {
        max_redirects.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Redirect::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-redirects")
        return true;
    return false;
}

Native::Crypto::Gkm::Gkm()
    :
    group(this, {"name"})
{

    yang_name = "gkm"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Gkm::~Gkm()
{
}

bool Native::Crypto::Gkm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Gkm::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gkm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:gkm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Native::Crypto::Gkm::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::get_children() const
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

void Native::Crypto::Gkm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Group()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    passive{YType::empty, "passive"}
        ,
    client(std::make_shared<Native::Crypto::Gkm::Group::Client>())
    , identity(std::make_shared<Native::Crypto::Gkm::Group::Identity>())
    , server(std::make_shared<Native::Crypto::Gkm::Group::Server>())
    , default_(std::make_shared<Native::Crypto::Gkm::Group::Default>())
{
    client->parent = this;
    identity->parent = this;
    server->parent = this;
    default_->parent = this;

    yang_name = "group"; yang_parent_name = "gkm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Gkm::Group::~Group()
{
}

bool Native::Crypto::Gkm::Group::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ipv6.is_set
	|| passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gkm::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gkm::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:gkm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gkm::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gkm::Group::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gkm::Group::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gkm::Group::Server>();
        }
        return server;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "default" || name == "name" || name == "ipv6" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::str, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
        ,
    protocol(std::make_shared<Native::Crypto::Gkm::Group::Client::Protocol>())
    , recovery_check(std::make_shared<Native::Crypto::Gkm::Group::Client::RecoveryCheck>())
    , registration(std::make_shared<Native::Crypto::Gkm::Group::Client::Registration>())
    , rekey(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey>())
    , status(std::make_shared<Native::Crypto::Gkm::Group::Client::Status>())
{
    protocol->parent = this;
    recovery_check->parent = this;
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::~Client()
{
}

bool Native::Crypto::Gkm::Group::Client::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bypass_policy.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gkm::Group::Client::has_operation() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    auto transform_sets_name_datas = transform_sets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_sets_name_datas.begin(), transform_sets_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gkm::Group::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gkm::Group::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        _children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        _children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.append(value);
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Protocol::Protocol()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return gdoi.is_set
	|| gikev2.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::RecoveryCheck::RecoveryCheck()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Registration::Registration()
    :
    interface{YType::str, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Rekey()
    :
    encryption(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Encryption>())
    , hash(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Hash>())
{
    encryption->parent = this;
    hash->parent = this;

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        _children["hash"] = hash;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Encryption::Encryption()
    :
    rekey_3des_cbc{YType::empty, "rekey-3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return rekey_3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_3des_cbc.is_set || is_set(rekey_3des_cbc.yfilter)) leaf_name_data.push_back(rekey_3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc = value;
        rekey_3des_cbc.value_namespace = name_space;
        rekey_3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rekey-3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Hash::Hash()
    :
    sha{YType::empty, "sha"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_data() const
{
    if (is_presence_container) return true;
    return sha.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sha.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Status::Status()
    :
    active_sa(std::make_shared<Native::Crypto::Gkm::Group::Client::Status::ActiveSa>())
{
    active_sa->parent = this;

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::Status::~Status()
{
}

bool Native::Crypto::Gkm::Group::Client::Status::has_data() const
{
    if (is_presence_container) return true;
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gkm::Group::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gkm::Group::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_sa != nullptr)
    {
        _children["active-sa"] = active_sa;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Status::ActiveSa::ActiveSa()
    :
    track{YType::uint16, "track"}
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_data() const
{
    if (is_presence_container) return true;
    return track.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Identity::Identity()
    :
    number{YType::uint64, "number"}
        ,
    address(std::make_shared<Native::Crypto::Gkm::Group::Identity::Address>())
{
    address->parent = this;

    yang_name = "identity"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Identity::~Identity()
{
}

bool Native::Crypto::Gkm::Group::Identity::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Identity::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "number")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Identity::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Identity::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Server()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Address>())
    , hostname(std::make_shared<Native::Crypto::Gkm::Group::Server::Hostname>())
    , local(std::make_shared<Native::Crypto::Gkm::Group::Server::Local>())
{
    address->parent = this;
    hostname->parent = this;
    local->parent = this;

    yang_name = "server"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::~Server()
{
}

bool Native::Crypto::Gkm::Group::Server::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Gkm::Group::Server::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gkm::Group::Server::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Address::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Address::has_operation() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_name_datas = ipv4.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_name_datas.begin(), ipv4_name_datas.end());
    auto ipv6_name_datas = ipv6.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_name_datas.begin(), ipv6_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4.append(value);
    }
    if(value_path == "ipv6")
    {
        ipv6.append(value);
    }
}

void Native::Crypto::Gkm::Group::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Local()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
        ,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Address>())
    , authorization(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization>())
    , group(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_>())
    , identifier(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier>())
    , redundancy(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy>())
    , registration(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration>())
    , rekey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey>())
    , sa(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa>())
    , default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default>())
{
    address->parent = this;
    authorization->parent = this;
    group->parent = this;
    identifier->parent = this;
    redundancy->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;
    default_->parent = this;

    yang_name = "local"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::~Local()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::has_data() const
{
    if (is_presence_container) return true;
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa>();
        }
        return sa;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        _children["group"] = group;
    }

    if(identifier != nullptr)
    {
        _children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        _children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        _children["sa"] = sa;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "default" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Authorization()
    :
    identity{YType::str, "identity"}
        ,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::~Authorization()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Group_()
    :
    size(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_::Size>())
{
    size->parent = this;

    yang_name = "group"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Group_::~Group_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_data() const
{
    if (is_presence_container) return true;
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(size != nullptr)
    {
        _children["size"] = size;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Size()
    :
    large{YType::empty, "large"},
    medium{YType::empty, "medium"},
    small{YType::enumeration, "small"}
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Size::~Size()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_data() const
{
    if (is_presence_container) return true;
    return large.is_set
	|| medium.is_set
	|| small.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(large.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(small.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (large.is_set || is_set(large.yfilter)) leaf_name_data.push_back(large.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (small.is_set || is_set(small.yfilter)) leaf_name_data.push_back(small.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "large")
    {
        large = value;
        large.value_namespace = name_space;
        large.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small")
    {
        small = value;
        small.value_namespace = name_space;
        small.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "large")
    {
        large.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "small")
    {
        small.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "large" || name == "medium" || name == "small")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Identifier()
    :
    value_{YType::uint8, "value"}
        ,
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default>())
    , range(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Range>())
{
    default_->parent = this;
    range->parent = this;

    yang_name = "identifier"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::~Identifier()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default>();
        }
        return default_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Default()
    :
    value_{YType::uint8, "value"}
        ,
    range(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range>())
{
    range->parent = this;

    yang_name = "default"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::~Default()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::~Range()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::has_data() const
{
    if (is_presence_container) return true;
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::~Range()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_data() const
{
    if (is_presence_container) return true;
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Redundancy()
    :
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default>())
    , local(nullptr) // presence node
    , peer(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer>())
    , protocol(nullptr) // presence node
{
    default_->parent = this;
    peer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default>();
        }
        return default_;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Default()
    :
    local(nullptr) // presence node
    , peer(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer>())
    , protocol(nullptr) // presence node
{
    peer->parent = this;

    yang_name = "default"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::~Default()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::~Local_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::~Peer()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::~Local_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::~Peer()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Registration()
    :
    interface{YType::str, "interface"}
        ,
    periodic(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(crl != nullptr)
    {
        _children["crl"] = crl;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::str, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_data() const
{
    if (is_presence_container) return true;
    return trustpoint.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Rekey()
    :
    acknowledgement{YType::enumeration, "acknowledgement"}
        ,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Address>())
    , algorithm(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm>())
    , authentication(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication>())
    , lifetime(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime>())
    , retransmit(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit>())
    , sig_hash(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash>())
    , transport(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport>())
{
    address->parent = this;
    algorithm->parent = this;
    authentication->parent = this;
    lifetime->parent = this;
    retransmit->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        _children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::Algorithm()
    :
    a3des_cbc{YType::empty, "a3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return a3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des_cbc.is_set || is_set(a3des_cbc.yfilter)) leaf_name_data.push_back(a3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc = value;
        a3des_cbc.value_namespace = name_space;
        a3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Authentication()
    :
    mypubkey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey>())
{
    mypubkey->parent = this;

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (mypubkey !=  nullptr && mypubkey->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mypubkey !=  nullptr && mypubkey->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mypubkey")
    {
        if(mypubkey == nullptr)
        {
            mypubkey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey>();
        }
        return mypubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mypubkey != nullptr)
    {
        _children["mypubkey"] = mypubkey;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mypubkey")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::Mypubkey()
    :
    rsa{YType::str, "rsa"}
{

    yang_name = "mypubkey"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::~Mypubkey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_data() const
{
    if (is_presence_container) return true;
    return rsa.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mypubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa.is_set || is_set(rsa.yfilter)) leaf_name_data.push_back(rsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa")
    {
        rsa = value;
        rsa.value_namespace = name_space;
        rsa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa")
    {
        rsa.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::Retransmit()
    :
    seconds{YType::uint8, "seconds"},
    number{YType::uint8, "number"},
    periodic{YType::empty, "periodic"}
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| number.is_set
	|| periodic.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "number" || name == "periodic")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::SigHash()
    :
    algorithm{YType::enumeration, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
        ,
    d3p(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3p>())
    , ipsec(this, {"sequence"})
    , pair_wise_keying(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying>())
{
    d3p->parent = this;
    pair_wise_keying->parent = this;

    yang_name = "sa"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::~Sa()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3p>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec>();
        ent_->parent = this;
        ipsec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(d3p != nullptr)
    {
        _children["d3p"] = d3p;
    }

    count_ = 0;
    for (auto ent_ : ipsec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pair_wise_keying != nullptr)
    {
        _children["pair-wise-keying"] = pair_wise_keying;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::D3p()
    :
    window(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window>())
{
    window->parent = this;

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::~D3p()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::has_data() const
{
    if (is_presence_container) return true;
    return (window !=  nullptr && window->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(window != nullptr)
    {
        _children["window"] = window;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::Window()
    :
    msec{YType::uint32, "msec"},
    sec{YType::uint8, "sec"}
{

    yang_name = "window"; yang_parent_name = "d3p"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::~Window()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set
	|| sec.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "sec")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"},
    profile{YType::str, "profile"}
        ,
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default>())
    , match(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match>())
    , replay(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay>())
    , tag(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag>())
{
    default_->parent = this;
    match->parent = this;
    replay->parent = this;
    tag->parent = this;

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_children() const
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

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "replay" || name == "tag" || name == "sequence" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Default()
    :
    profile{YType::empty, "profile"}
        ,
    match(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match>())
    , replay(nullptr) // presence node
    , tag(nullptr) // presence node
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::~Default()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "replay" || name == "tag" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Match()
    :
    address(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::~Match()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::Address()
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::Replay()
{

    yang_name = "replay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::~Replay()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::Tag()
{

    yang_name = "tag"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::~Tag()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address>())
{
    address->parent = this;

    yang_name = "match"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::~Match()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Replay()
    :
    counter(nullptr) // presence node
    , time(nullptr) // presence node
{

    yang_name = "replay"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::~Replay()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_data() const
{
    if (is_presence_container) return true;
    return (counter !=  nullptr && counter->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(time != nullptr)
    {
        _children["time"] = time;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "time")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::Counter()
    :
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "counter"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::~Counter()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::Time()
    :
    window_size{YType::uint8, "window-size"}
{

    yang_name = "time"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::~Time()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Tag()
    :
    cts(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts>())
{
    cts->parent = this;

    yang_name = "tag"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::~Tag()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (cts !=  nullptr && cts->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (cts !=  nullptr && cts->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts>();
        }
        return cts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cts != nullptr)
    {
        _children["cts"] = cts;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{

    yang_name = "cts"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::~Cts()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::PairWiseKeying()
    :
    safety_limit{YType::uint8, "safety-limit"}
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_data() const
{
    if (is_presence_container) return true;
    return safety_limit.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(safety_limit.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (safety_limit.is_set || is_set(safety_limit.yfilter)) leaf_name_data.push_back(safety_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "safety-limit")
    {
        safety_limit = value;
        safety_limit.value_namespace = name_space;
        safety_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "safety-limit")
    {
        safety_limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "safety-limit")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Default()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::empty, "gikev2"}
        ,
    address(nullptr) // presence node
    , authorization(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Authorization>())
    , group(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Group_>())
    , identifier(nullptr) // presence node
    , redundancy(nullptr) // presence node
    , registration(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Registration>())
    , rekey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey>())
    , sa(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Sa>())
{
    authorization->parent = this;
    group->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;

    yang_name = "default"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::~Default()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::has_data() const
{
    if (is_presence_container) return true;
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        _children["group"] = group;
    }

    if(identifier != nullptr)
    {
        _children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        _children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        _children["sa"] = sa;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Address::Address()
{

    yang_name = "address"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Address::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Authorization()
    :
    identity{YType::empty, "identity"}
        ,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::~Authorization()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::Address()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Group_()
    :
    size(nullptr) // presence node
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Group_::~Group_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Group_::has_data() const
{
    if (is_presence_container) return true;
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(size != nullptr)
    {
        _children["size"] = size;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::Size()
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::~Size()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::Identifier()
{

    yang_name = "identifier"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::~Identifier()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::Redundancy()
{

    yang_name = "redundancy"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Registration()
    :
    interface{YType::str, "interface"}
        ,
    periodic(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(crl != nullptr)
    {
        _children["crl"] = crl;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::empty, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::has_data() const
{
    if (is_presence_container) return true;
    return trustpoint.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Rekey()
    :
    acknowledgement{YType::empty, "acknowledgement"}
        ,
    address(nullptr) // presence node
    , algorithm(nullptr) // presence node
    , authentication(nullptr) // presence node
    , lifetime(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime>())
    , retransmit(nullptr) // presence node
    , sig_hash(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash>())
    , transport(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport>())
{
    lifetime->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        _children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::ConfigExchange::Set::accept {0, "accept"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::ConfigExchange::Set::send {1, "send"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Dpd::Query::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Dpd::Query::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Pki::Use::sign {0, "sign"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Pki::Use::verify {1, "verify"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::VirtualTemplate::Mode::auto_ {0, "auto"};

const Enum::YLeaf Native::Crypto::Ikev2::Redirect::Gateway::auth {0, "auth"};
const Enum::YLeaf Native::Crypto::Ikev2::Redirect::Gateway::init {1, "init"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_12 {0, "12"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_16 {1, "16"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_8 {2, "8"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::any {0, "any"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::cisco {1, "cisco"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::interoperable {2, "interoperable"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha {0, "sha"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha256 {1, "sha256"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha384 {2, "sha384"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha512 {3, "sha512"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_64 {4, "64"};


}
}

