
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_11.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "cert"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "local" || name == "name-mangler" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::Eap()
{

    yang_name = "eap"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "local" || name == "name-mangler" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::Psk()
{

    yang_name = "psk"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "local" || name == "name-mangler" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::User()
    :
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap>())
	,cert(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert>())
	,eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap>())
	,psk(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk>())
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(cert != nullptr)
    {
        children["cert"] = cert;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(psk != nullptr)
    {
        children["psk"] = psk;
    }

    return children;
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
{

    yang_name = "anyconnect-eap"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "local" || name == "name-mangler" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::Cert()
{

    yang_name = "cert"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::~Cert()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "cert"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "local" || name == "name-mangler" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::Eap()
    :
    cached{YType::empty, "cached"}
{

    yang_name = "eap"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "local" || name == "name-mangler" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::Psk()
    :
    cached{YType::empty, "cached"}
{

    yang_name = "psk"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "local" || name == "name-mangler" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Authentication()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local>())
	,remote(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote>())
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
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
	,pre_share(nullptr) // presence node
{

    yang_name = "local"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        children["pre-share"] = pre_share;
    }

    return children;
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
	,md5(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5>())
	,mschapv2(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2>())
{
    gtc->parent = this;
    md5->parent = this;
    mschapv2->parent = this;

    yang_name = "eap"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gtc != nullptr)
    {
        children["gtc"] = gtc;
    }

    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(mschapv2 != nullptr)
    {
        children["mschapv2"] = mschapv2;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "pre-share"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,eap(nullptr) // presence node
	,pre_share(nullptr) // presence node
{
    anyconnect_eap->parent = this;

    yang_name = "remote"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::~Remote()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        children["pre-share"] = pre_share;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    return children;
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

    yang_name = "aggregate"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::~Aggregate()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "eap"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "pre-share"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::ConfigExchange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::ConfigExchange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    query{YType::enumeration, "query"},
    retry{YType::uint8, "retry"}
{

    yang_name = "dpd"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Dpd::~Dpd()
{
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_data() const
{
    return interval.is_set
	|| query.is_set
	|| retry.is_set;
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(retry.yfilter);
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
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Dpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Dpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Dpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Dpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "query" || name == "retry")
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Identity::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Identity::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::InitialContact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::InitialContact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{

    yang_name = "keyring"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Keyring::~Keyring()
{
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_data() const
{
    for (std::size_t index=0; index<aaa.size(); index++)
    {
        if(aaa[index]->has_data())
            return true;
    }
    return local.is_set;
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_operation() const
{
    for (std::size_t index=0; index<aaa.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        for(auto const & c : aaa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring::Aaa>();
        c->parent = this;
        aaa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aaa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    path_buffer << "aaa" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    certificate{YType::empty, "certificate"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_data() const
{
    return certificate.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Match()
    :
    certificate{YType::str, "certificate"}
    	,
    address(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address>())
	,fvrf(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Fvrf>())
	,identity(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity>())
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(fvrf != nullptr)
    {
        children["fvrf"] = fvrf;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
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
    interface{YType::str, "interface"},
    ip{YType::str, "ip"}
{

    yang_name = "local"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Address::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_data() const
{
    return interface.is_set
	|| ip.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(ip.yfilter);
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

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Address::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Address::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Address::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Address::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Fvrf::Fvrf()
    :
    any{YType::empty, "any"},
    name{YType::str, "name"}
{

    yang_name = "fvrf"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Fvrf::~Fvrf()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_data() const
{
    return any.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(name.yfilter);
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

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Fvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Fvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Fvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Fvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "name")
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
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
	,email(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email>())
	,fqdn(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn>())
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(email != nullptr)
    {
        children["email"] = email;
    }

    if(fqdn != nullptr)
    {
        children["fqdn"] = fqdn;
    }

    return children;
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
{

    yang_name = "address"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
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
    for (std::size_t index=0; index<ipv4.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    path_buffer << "ipv4" <<"[ipv4-address='" <<ipv4_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    domain{YType::str, "domain"},
    name{YType::str, "name"}
{

    yang_name = "email"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::~Email()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_data() const
{
    return domain.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(name.yfilter);
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

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::Fqdn()
    :
    domain{YType::str, "domain"},
    name{YType::str, "name"}
{

    yang_name = "fqdn"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_data() const
{
    return domain.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(name.yfilter);
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

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "name")
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "reconnect"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    mode{YType::enumeration, "mode"},
    number{YType::uint16, "number"}
{

    yang_name = "virtual-template"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::VirtualTemplate::~VirtualTemplate()
{
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_data() const
{
    return mode.is_set
	|| number.is_set;
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(number.yfilter);
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

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "number")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Proposal()
    :
    name{YType::str, "name"}
    	,
    encryption(std::make_shared<Native::Crypto::Ikev2::Proposal::Encryption>())
	,group(std::make_shared<Native::Crypto::Ikev2::Proposal::Group>())
	,integrity(std::make_shared<Native::Crypto::Ikev2::Proposal::Integrity>())
	,prf(std::make_shared<Native::Crypto::Ikev2::Proposal::Prf>())
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
    path_buffer << "proposal" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(integrity != nullptr)
    {
        children["integrity"] = integrity;
    }

    if(prf != nullptr)
    {
        children["prf"] = prf;
    }

    return children;
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
    aes_cbc_128{YType::empty, "aes-cbc-128"},
    aes_cbc_192{YType::empty, "aes-cbc-192"},
    aes_cbc_256{YType::empty, "aes-cbc-256"},
    aes_gcm_128{YType::empty, "aes-gcm-128"},
    aes_gcm_256{YType::empty, "aes-gcm-256"},
    des{YType::empty, "des"},
    en_3des{YType::empty, "en-3des"}
{

    yang_name = "encryption"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Proposal::Encryption::~Encryption()
{
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_data() const
{
    return aes_cbc_128.is_set
	|| aes_cbc_192.is_set
	|| aes_cbc_256.is_set
	|| aes_gcm_128.is_set
	|| aes_gcm_256.is_set
	|| des.is_set
	|| en_3des.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes_cbc_128.yfilter)
	|| ydk::is_set(aes_cbc_192.yfilter)
	|| ydk::is_set(aes_cbc_256.yfilter)
	|| ydk::is_set(aes_gcm_128.yfilter)
	|| ydk::is_set(aes_gcm_256.yfilter)
	|| ydk::is_set(des.yfilter)
	|| ydk::is_set(en_3des.yfilter);
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

    if (aes_cbc_128.is_set || is_set(aes_cbc_128.yfilter)) leaf_name_data.push_back(aes_cbc_128.get_name_leafdata());
    if (aes_cbc_192.is_set || is_set(aes_cbc_192.yfilter)) leaf_name_data.push_back(aes_cbc_192.get_name_leafdata());
    if (aes_cbc_256.is_set || is_set(aes_cbc_256.yfilter)) leaf_name_data.push_back(aes_cbc_256.get_name_leafdata());
    if (aes_gcm_128.is_set || is_set(aes_gcm_128.yfilter)) leaf_name_data.push_back(aes_gcm_128.get_name_leafdata());
    if (aes_gcm_256.is_set || is_set(aes_gcm_256.yfilter)) leaf_name_data.push_back(aes_gcm_256.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());
    if (en_3des.is_set || is_set(en_3des.yfilter)) leaf_name_data.push_back(en_3des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "en-3des")
    {
        en_3des = value;
        en_3des.value_namespace = name_space;
        en_3des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "en-3des")
    {
        en_3des.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc-128" || name == "aes-cbc-192" || name == "aes-cbc-256" || name == "aes-gcm-128" || name == "aes-gcm-256" || name == "des" || name == "en-3des")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Group::Group()
    :
    fifteen{YType::empty, "fifteen"},
    five{YType::empty, "five"},
    fourteen{YType::empty, "fourteen"},
    nineteen{YType::empty, "nineteen"},
    one{YType::empty, "one"},
    sixteen{YType::empty, "sixteen"},
    twenty{YType::empty, "twenty"},
    twenty_four{YType::empty, "twenty-four"},
    twenty_one{YType::empty, "twenty-one"},
    two{YType::empty, "two"}
{

    yang_name = "group"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Proposal::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Proposal::Group::has_data() const
{
    return fifteen.is_set
	|| five.is_set
	|| fourteen.is_set
	|| nineteen.is_set
	|| one.is_set
	|| sixteen.is_set
	|| twenty.is_set
	|| twenty_four.is_set
	|| twenty_one.is_set
	|| two.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fifteen.yfilter)
	|| ydk::is_set(five.yfilter)
	|| ydk::is_set(fourteen.yfilter)
	|| ydk::is_set(nineteen.yfilter)
	|| ydk::is_set(one.yfilter)
	|| ydk::is_set(sixteen.yfilter)
	|| ydk::is_set(twenty.yfilter)
	|| ydk::is_set(twenty_four.yfilter)
	|| ydk::is_set(twenty_one.yfilter)
	|| ydk::is_set(two.yfilter);
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

    if (fifteen.is_set || is_set(fifteen.yfilter)) leaf_name_data.push_back(fifteen.get_name_leafdata());
    if (five.is_set || is_set(five.yfilter)) leaf_name_data.push_back(five.get_name_leafdata());
    if (fourteen.is_set || is_set(fourteen.yfilter)) leaf_name_data.push_back(fourteen.get_name_leafdata());
    if (nineteen.is_set || is_set(nineteen.yfilter)) leaf_name_data.push_back(nineteen.get_name_leafdata());
    if (one.is_set || is_set(one.yfilter)) leaf_name_data.push_back(one.get_name_leafdata());
    if (sixteen.is_set || is_set(sixteen.yfilter)) leaf_name_data.push_back(sixteen.get_name_leafdata());
    if (twenty.is_set || is_set(twenty.yfilter)) leaf_name_data.push_back(twenty.get_name_leafdata());
    if (twenty_four.is_set || is_set(twenty_four.yfilter)) leaf_name_data.push_back(twenty_four.get_name_leafdata());
    if (twenty_one.is_set || is_set(twenty_one.yfilter)) leaf_name_data.push_back(twenty_one.get_name_leafdata());
    if (two.is_set || is_set(two.yfilter)) leaf_name_data.push_back(two.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fifteen")
    {
        fifteen = value;
        fifteen.value_namespace = name_space;
        fifteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "five")
    {
        five = value;
        five.value_namespace = name_space;
        five.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fourteen")
    {
        fourteen = value;
        fourteen.value_namespace = name_space;
        fourteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nineteen")
    {
        nineteen = value;
        nineteen.value_namespace = name_space;
        nineteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one")
    {
        one = value;
        one.value_namespace = name_space;
        one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sixteen")
    {
        sixteen = value;
        sixteen.value_namespace = name_space;
        sixteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty")
    {
        twenty = value;
        twenty.value_namespace = name_space;
        twenty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-four")
    {
        twenty_four = value;
        twenty_four.value_namespace = name_space;
        twenty_four.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-one")
    {
        twenty_one = value;
        twenty_one.value_namespace = name_space;
        twenty_one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two")
    {
        two = value;
        two.value_namespace = name_space;
        two.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fifteen")
    {
        fifteen.yfilter = yfilter;
    }
    if(value_path == "five")
    {
        five.yfilter = yfilter;
    }
    if(value_path == "fourteen")
    {
        fourteen.yfilter = yfilter;
    }
    if(value_path == "nineteen")
    {
        nineteen.yfilter = yfilter;
    }
    if(value_path == "one")
    {
        one.yfilter = yfilter;
    }
    if(value_path == "sixteen")
    {
        sixteen.yfilter = yfilter;
    }
    if(value_path == "twenty")
    {
        twenty.yfilter = yfilter;
    }
    if(value_path == "twenty-four")
    {
        twenty_four.yfilter = yfilter;
    }
    if(value_path == "twenty-one")
    {
        twenty_one.yfilter = yfilter;
    }
    if(value_path == "two")
    {
        two.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fifteen" || name == "five" || name == "fourteen" || name == "nineteen" || name == "one" || name == "sixteen" || name == "twenty" || name == "twenty-four" || name == "twenty-one" || name == "two")
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Integrity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Integrity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Prf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Prf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    active{YType::str, "active"},
    key{YType::uint8, "key"},
    value_{YType::str, "value"}
{

    yang_name = "reconnect"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Reconnect::has_data() const
{
    return active.is_set
	|| key.is_set
	|| value_.is_set;
}

bool Native::Crypto::Ikev2::Reconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(value_.yfilter);
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

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Reconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Reconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Reconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "key" || name == "value")
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
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

    yang_name = "client"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Redirect::Client::~Client()
{
}

bool Native::Crypto::Ikev2::Redirect::Client::has_data() const
{
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Redirect::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Redirect::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"},
    ipv4_deny{YType::enumeration, "ipv4-deny"},
    nat_transparency{YType::enumeration, "nat-transparency"}
    	,
    optional(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Ipsec::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transform_set.size(); index++)
    {
        if(transform_set[index]->has_data())
            return true;
    }
    return df_bit.is_set
	|| fragmentation.is_set
	|| ipv4_deny.is_set
	|| nat_transparency.is_set
	|| (optional !=  nullptr && optional->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::Ipsec::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transform_set.size(); index++)
    {
        if(transform_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(ipv4_deny.yfilter)
	|| ydk::is_set(nat_transparency.yfilter)
	|| (optional !=  nullptr && optional->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (ipv4_deny.is_set || is_set(ipv4_deny.yfilter)) leaf_name_data.push_back(ipv4_deny.get_name_leafdata());
    if (nat_transparency.is_set || is_set(nat_transparency.yfilter)) leaf_name_data.push_back(nat_transparency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optional")
    {
        if(optional == nullptr)
        {
            optional = std::make_shared<Native::Crypto::Ipsec::Optional>();
        }
        return optional;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ipsec::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "transform-set")
    {
        for(auto const & c : transform_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ipsec::TransformSet>();
        c->parent = this;
        transform_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optional != nullptr)
    {
        children["optional"] = optional;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    for (auto const & c : transform_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-deny")
    {
        ipv4_deny = value;
        ipv4_deny.value_namespace = name_space;
        ipv4_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency = value;
        nat_transparency.value_namespace = name_space;
        nat_transparency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "ipv4-deny")
    {
        ipv4_deny.yfilter = yfilter;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optional" || name == "profile" || name == "security-association" || name == "transform-set" || name == "df-bit" || name == "fragmentation" || name == "ipv4-deny" || name == "nat-transparency")
        return true;
    return false;
}

Native::Crypto::Ipsec::Optional::Optional()
    :
    retry{YType::uint32, "retry"}
{

    yang_name = "optional"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::Optional::~Optional()
{
}

bool Native::Crypto::Ipsec::Optional::has_data() const
{
    return retry.is_set;
}

bool Native::Crypto::Ipsec::Optional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter);
}

std::string Native::Crypto::Ipsec::Optional::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::Optional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Optional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Optional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Optional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Optional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Optional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Optional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Profile()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    responder_only{YType::empty, "responder-only"}
    	,
    default_(std::make_shared<Native::Crypto::Ipsec::Profile::Default_>())
	,dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>())
	,redundancy(std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>())
	,set(std::make_shared<Native::Crypto::Ipsec::Profile::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    redundancy->parent = this;
    set->parent = this;

    yang_name = "profile"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::Profile::~Profile()
{
}

bool Native::Crypto::Ipsec::Profile::has_data() const
{
    return name.is_set
	|| description.is_set
	|| responder_only.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Ipsec::Profile::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "redundancy" || name == "set" || name == "name" || name == "description" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Default_()
    :
    description{YType::empty, "description"},
    redundancy{YType::empty, "redundancy"},
    responder_only{YType::empty, "responder-only"}
    	,
    dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Dialer>())
	,set(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set>())
{
    dialer->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::~Default_()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::has_data() const
{
    return description.is_set
	|| redundancy.is_set
	|| responder_only.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "set" || name == "description" || name == "redundancy" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    mixed_mode{YType::empty, "mixed-mode"},
    transform_set{YType::empty, "transform-set"}
    	,
    pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation>())
	,security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy>())
{
    security_association->parent = this;
    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(mixed_mode.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        children["security-policy"] = security_policy;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "mixed-mode" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_operation() const
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

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::empty, "idle-time"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "security-policy"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_data() const
{
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Redundancy::Redundancy()
    :
    name{YType::str, "name"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "redundancy"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_data() const
{
    return name.is_set
	|| stateful.is_set;
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "stateful")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    mixed_mode{YType::empty, "mixed-mode"},
    transform_set{YType::str, "transform-set"}
    	,
    peer(std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>())
	,security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>())
	,security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>())
{
    peer->parent = this;
    reverse_route->parent = this;
    security_association->parent = this;
    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Set::has_data() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::has_operation() const
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
	|| ydk::is_set(mixed_mode.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        children["security-policy"] = security_policy;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

void Native::Crypto::Ipsec::Profile::Set::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "mixed-mode" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::Peer::~Peer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_operation() const
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

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "security-policy"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_data() const
{
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::SecurityAssociation()
    :
    ecn{YType::enumeration, "ecn"},
    idle_time{YType::uint32, "idle-time"}
    	,
    dummy(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_data() const
{
    return ecn.is_set
	|| idle_time.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::SecurityAssociation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "lifetime" || name == "replay" || name == "ecn" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Replay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ipsec::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::TransformSet()
    :
    tag{YType::str, "tag"},
    ah_hmac{YType::enumeration, "ah-hmac"},
    comp_lzs{YType::empty, "comp-lzs"},
    esp{YType::enumeration, "esp"},
    esp_hmac{YType::enumeration, "esp-hmac"},
    key_bit{YType::enumeration, "key-bit"}
    	,
    default_(std::make_shared<Native::Crypto::Ipsec::TransformSet::Default_>())
	,mode(std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode>())
{
    default_->parent = this;
    mode->parent = this;

    yang_name = "transform-set"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ipsec::TransformSet::~TransformSet()
{
}

bool Native::Crypto::Ipsec::TransformSet::has_data() const
{
    return tag.is_set
	|| ah_hmac.is_set
	|| comp_lzs.is_set
	|| esp.is_set
	|| esp_hmac.is_set
	|| key_bit.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Ipsec::TransformSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(ah_hmac.yfilter)
	|| ydk::is_set(comp_lzs.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(esp_hmac.yfilter)
	|| ydk::is_set(key_bit.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Ipsec::TransformSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::TransformSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transform-set" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (ah_hmac.is_set || is_set(ah_hmac.yfilter)) leaf_name_data.push_back(ah_hmac.get_name_leafdata());
    if (comp_lzs.is_set || is_set(comp_lzs.yfilter)) leaf_name_data.push_back(comp_lzs.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (esp_hmac.is_set || is_set(esp_hmac.yfilter)) leaf_name_data.push_back(esp_hmac.get_name_leafdata());
    if (key_bit.is_set || is_set(key_bit.yfilter)) leaf_name_data.push_back(key_bit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Ipsec::TransformSet::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Crypto::Ipsec::TransformSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ah-hmac")
    {
        ah_hmac = value;
        ah_hmac.value_namespace = name_space;
        ah_hmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comp-lzs")
    {
        comp_lzs = value;
        comp_lzs.value_namespace = name_space;
        comp_lzs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp-hmac")
    {
        esp_hmac = value;
        esp_hmac.value_namespace = name_space;
        esp_hmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-bit")
    {
        key_bit = value;
        key_bit.value_namespace = name_space;
        key_bit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ah-hmac")
    {
        ah_hmac.yfilter = yfilter;
    }
    if(value_path == "comp-lzs")
    {
        comp_lzs.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
    if(value_path == "esp-hmac")
    {
        esp_hmac.yfilter = yfilter;
    }
    if(value_path == "key-bit")
    {
        key_bit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "mode" || name == "tag" || name == "ah-hmac" || name == "comp-lzs" || name == "esp" || name == "esp-hmac" || name == "key-bit")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Default_::Default_()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "default"; yang_parent_name = "transform-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::TransformSet::Default_::~Default_()
{
}

bool Native::Crypto::Ipsec::TransformSet::Default_::has_data() const
{
    return mode.is_set;
}

bool Native::Crypto::Ipsec::TransformSet::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Crypto::Ipsec::TransformSet::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::TransformSet::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Mode::Mode()
    :
    tunnel{YType::empty, "tunnel"}
    	,
    transport(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "transform-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::TransformSet::Mode::~Mode()
{
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_data() const
{
    return tunnel.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Ipsec::TransformSet::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Ipsec::TransformSet::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "tunnel")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Mode::Transport::Transport()
    :
    require{YType::empty, "require"}
{

    yang_name = "transport"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ipsec::TransformSet::Mode::Transport::~Transport()
{
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_data() const
{
    return require.is_set;
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(require.yfilter);
}

std::string Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (require.is_set || is_set(require.yfilter)) leaf_name_data.push_back(require.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::TransformSet::Mode::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "require")
    {
        require = value;
        require.value_namespace = name_space;
        require.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Mode::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "require")
    {
        require.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "require")
        return true;
    return false;
}

Native::Crypto::Isakmp::Isakmp()
    :
    aggressive_mode{YType::enumeration, "aggressive-mode"},
    disconnect_revoked_peers{YType::empty, "disconnect-revoked-peers"},
    enable{YType::empty, "enable"},
    fragmentation{YType::empty, "fragmentation"},
    identity{YType::enumeration, "identity"},
    invalid_spi_recovery{YType::empty, "invalid-spi-recovery"}
    	,
    client(std::make_shared<Native::Crypto::Isakmp::Client>())
	,default_(std::make_shared<Native::Crypto::Isakmp::Default_>())
	,keepalive(std::make_shared<Native::Crypto::Isakmp::Keepalive>())
	,key(std::make_shared<Native::Crypto::Isakmp::Key>())
	,nat(std::make_shared<Native::Crypto::Isakmp::Nat>())
	,peer(std::make_shared<Native::Crypto::Isakmp::Peer>())
	,xauth(std::make_shared<Native::Crypto::Isakmp::Xauth>())
{
    client->parent = this;
    default_->parent = this;
    keepalive->parent = this;
    key->parent = this;
    nat->parent = this;
    peer->parent = this;
    xauth->parent = this;

    yang_name = "isakmp"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::~Isakmp()
{
}

bool Native::Crypto::Isakmp::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return aggressive_mode.is_set
	|| disconnect_revoked_peers.is_set
	|| enable.is_set
	|| fragmentation.is_set
	|| identity.is_set
	|| invalid_spi_recovery.is_set
	|| (client !=  nullptr && client->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (xauth !=  nullptr && xauth->has_data());
}

bool Native::Crypto::Isakmp::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggressive_mode.yfilter)
	|| ydk::is_set(disconnect_revoked_peers.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(invalid_spi_recovery.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (xauth !=  nullptr && xauth->has_operation());
}

std::string Native::Crypto::Isakmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive_mode.is_set || is_set(aggressive_mode.yfilter)) leaf_name_data.push_back(aggressive_mode.get_name_leafdata());
    if (disconnect_revoked_peers.is_set || is_set(disconnect_revoked_peers.yfilter)) leaf_name_data.push_back(disconnect_revoked_peers.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (invalid_spi_recovery.is_set || is_set(invalid_spi_recovery.yfilter)) leaf_name_data.push_back(invalid_spi_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Client>();
        }
        return client;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Key>();
        }
        return key;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Isakmp::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Isakmp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "xauth")
    {
        if(xauth == nullptr)
        {
            xauth = std::make_shared<Native::Crypto::Isakmp::Xauth>();
        }
        return xauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    if(xauth != nullptr)
    {
        children["xauth"] = xauth;
    }

    return children;
}

void Native::Crypto::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode = value;
        aggressive_mode.value_namespace = name_space;
        aggressive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers = value;
        disconnect_revoked_peers.value_namespace = name_space;
        disconnect_revoked_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery = value;
        invalid_spi_recovery.value_namespace = name_space;
        invalid_spi_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode.yfilter = yfilter;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "default" || name == "keepalive" || name == "key" || name == "nat" || name == "peer" || name == "policy" || name == "profile" || name == "xauth" || name == "aggressive-mode" || name == "disconnect-revoked-peers" || name == "enable" || name == "fragmentation" || name == "identity" || name == "invalid-spi-recovery")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Client()
    :
    configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration>())
{
    configuration->parent = this;

    yang_name = "client"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Client::has_data() const
{
    for (std::size_t index=0; index<firewall.size(); index++)
    {
        if(firewall[index]->has_data())
            return true;
    }
    return (configuration !=  nullptr && configuration->has_data());
}

bool Native::Crypto::Isakmp::Client::has_operation() const
{
    for (std::size_t index=0; index<firewall.size(); index++)
    {
        if(firewall[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::Crypto::Isakmp::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "firewall")
    {
        for(auto const & c : firewall)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Client::Firewall>();
        c->parent = this;
        firewall.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    for (auto const & c : firewall)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "firewall")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Configuration()
    :
    browser_proxy{YType::str, "browser-proxy"}
    	,
    address_pool(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>())
{
    address_pool->parent = this;

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return browser_proxy.is_set
	|| (address_pool !=  nullptr && address_pool->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| (address_pool !=  nullptr && address_pool->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-pool")
    {
        if(address_pool == nullptr)
        {
            address_pool = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>();
        }
        return address_pool;
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_pool != nullptr)
    {
        children["address-pool"] = address_pool;
    }

    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-pool" || name == "group" || name == "browser-proxy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::AddressPool()
    :
    local{YType::str, "local"}
{

    yang_name = "address-pool"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::~AddressPool()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_data() const
{
    return local.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Group()
    :
    name{YType::str, "name"},
    access_restrict{YType::str, "access-restrict"},
    acl{YType::str, "acl"},
    backup_gateway{YType::str, "backup-gateway"},
    browser_proxy{YType::str, "browser-proxy"},
    domain{YType::str, "domain"},
    group_lock{YType::empty, "group-lock"},
    include_local_lan{YType::empty, "include-local-lan"},
    max_logins{YType::uint8, "max-logins"},
    max_users{YType::uint32, "max-users"},
    netmask{YType::str, "netmask"},
    pfs{YType::empty, "pfs"},
    pool{YType::str, "pool"},
    save_password{YType::empty, "save-password"},
    smartcard_removal_disconnect{YType::empty, "smartcard-removal-disconnect"},
    split_dns{YType::str, "split-dns"}
    	,
    auto_update(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>())
	,configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>())
	,crypto(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>())
	,dhcp(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>())
	,dns(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>())
	,firewall(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>())
	,key(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>())
	,wins(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>())
{
    auto_update->parent = this;
    configuration->parent = this;
    crypto->parent = this;
    dhcp->parent = this;
    dns->parent = this;
    firewall->parent = this;
    key->parent = this;
    wins->parent = this;

    yang_name = "group"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::~Group()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_data() const
{
    return name.is_set
	|| access_restrict.is_set
	|| acl.is_set
	|| backup_gateway.is_set
	|| browser_proxy.is_set
	|| domain.is_set
	|| group_lock.is_set
	|| include_local_lan.is_set
	|| max_logins.is_set
	|| max_users.is_set
	|| netmask.is_set
	|| pfs.is_set
	|| pool.is_set
	|| save_password.is_set
	|| smartcard_removal_disconnect.is_set
	|| split_dns.is_set
	|| (auto_update !=  nullptr && auto_update->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (firewall !=  nullptr && firewall->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (wins !=  nullptr && wins->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_restrict.yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(backup_gateway.yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(group_lock.yfilter)
	|| ydk::is_set(include_local_lan.yfilter)
	|| ydk::is_set(max_logins.yfilter)
	|| ydk::is_set(max_users.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(pfs.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(save_password.yfilter)
	|| ydk::is_set(smartcard_removal_disconnect.yfilter)
	|| ydk::is_set(split_dns.yfilter)
	|| (auto_update !=  nullptr && auto_update->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (firewall !=  nullptr && firewall->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (wins !=  nullptr && wins->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_restrict.is_set || is_set(access_restrict.yfilter)) leaf_name_data.push_back(access_restrict.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (backup_gateway.is_set || is_set(backup_gateway.yfilter)) leaf_name_data.push_back(backup_gateway.get_name_leafdata());
    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (group_lock.is_set || is_set(group_lock.yfilter)) leaf_name_data.push_back(group_lock.get_name_leafdata());
    if (include_local_lan.is_set || is_set(include_local_lan.yfilter)) leaf_name_data.push_back(include_local_lan.get_name_leafdata());
    if (max_logins.is_set || is_set(max_logins.yfilter)) leaf_name_data.push_back(max_logins.get_name_leafdata());
    if (max_users.is_set || is_set(max_users.yfilter)) leaf_name_data.push_back(max_users.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (pfs.is_set || is_set(pfs.yfilter)) leaf_name_data.push_back(pfs.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (save_password.is_set || is_set(save_password.yfilter)) leaf_name_data.push_back(save_password.get_name_leafdata());
    if (smartcard_removal_disconnect.is_set || is_set(smartcard_removal_disconnect.yfilter)) leaf_name_data.push_back(smartcard_removal_disconnect.get_name_leafdata());
    if (split_dns.is_set || is_set(split_dns.yfilter)) leaf_name_data.push_back(split_dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-update")
    {
        if(auto_update == nullptr)
        {
            auto_update = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>();
        }
        return auto_update;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>();
        }
        return configuration;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>();
        }
        return crypto;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>();
        }
        return firewall;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>();
        }
        return key;
    }

    if(child_yang_name == "wins")
    {
        if(wins == nullptr)
        {
            wins = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>();
        }
        return wins;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_update != nullptr)
    {
        children["auto-update"] = auto_update;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(firewall != nullptr)
    {
        children["firewall"] = firewall;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(wins != nullptr)
    {
        children["wins"] = wins;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-restrict")
    {
        access_restrict = value;
        access_restrict.value_namespace = name_space;
        access_restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway = value;
        backup_gateway.value_namespace = name_space;
        backup_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-lock")
    {
        group_lock = value;
        group_lock.value_namespace = name_space;
        group_lock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan = value;
        include_local_lan.value_namespace = name_space;
        include_local_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-logins")
    {
        max_logins = value;
        max_logins.value_namespace = name_space;
        max_logins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-users")
    {
        max_users = value;
        max_users.value_namespace = name_space;
        max_users.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfs")
    {
        pfs = value;
        pfs.value_namespace = name_space;
        pfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "save-password")
    {
        save_password = value;
        save_password.value_namespace = name_space;
        save_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect = value;
        smartcard_removal_disconnect.value_namespace = name_space;
        smartcard_removal_disconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-dns")
    {
        split_dns = value;
        split_dns.value_namespace = name_space;
        split_dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-restrict")
    {
        access_restrict.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway.yfilter = yfilter;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "group-lock")
    {
        group_lock.yfilter = yfilter;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan.yfilter = yfilter;
    }
    if(value_path == "max-logins")
    {
        max_logins.yfilter = yfilter;
    }
    if(value_path == "max-users")
    {
        max_users.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "pfs")
    {
        pfs.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "save-password")
    {
        save_password.yfilter = yfilter;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect.yfilter = yfilter;
    }
    if(value_path == "split-dns")
    {
        split_dns.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-update" || name == "configuration" || name == "crypto" || name == "dhcp" || name == "dns" || name == "firewall" || name == "key" || name == "wins" || name == "name" || name == "access-restrict" || name == "acl" || name == "backup-gateway" || name == "browser-proxy" || name == "domain" || name == "group-lock" || name == "include-local-lan" || name == "max-logins" || name == "max-users" || name == "netmask" || name == "pfs" || name == "pool" || name == "save-password" || name == "smartcard-removal-disconnect" || name == "split-dns")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::AutoUpdate()
    :
    client{YType::str, "client"},
    rev{YType::str, "rev"},
    url{YType::str, "url"}
{

    yang_name = "auto-update"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::~AutoUpdate()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_data() const
{
    return client.is_set
	|| rev.is_set
	|| url.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "rev" || name == "url")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Configuration_()
    :
    url{YType::enumeration, "url"},
    version{YType::uint32, "version"}
{

    yang_name = "configuration"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::~Configuration_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_data() const
{
    return url.is_set
	|| version.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "version")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Crypto_()
    :
    aaa(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>())
{
    aaa->parent = this;

    yang_name = "crypto"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::~Crypto_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_data() const
{
    return (aaa !=  nullptr && aaa->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_operation() const
{
    return is_set(yfilter)
	|| (aaa !=  nullptr && aaa->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>();
        }
        return aaa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Aaa()
    :
    attribute(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>())
{
    attribute->parent = this;

    yang_name = "aaa"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::~Aaa()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::Attribute()
    :
    list{YType::str, "list"}
{

    yang_name = "attribute"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::~Attribute()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::Dhcp()
    :
    giaddr{YType::str, "giaddr"},
    server{YType::str, "server"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "dhcp"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::~Dhcp()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_data() const
{
    return giaddr.is_set
	|| server.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(giaddr.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (giaddr.is_set || is_set(giaddr.yfilter)) leaf_name_data.push_back(giaddr.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "giaddr")
    {
        giaddr = value;
        giaddr.value_namespace = name_space;
        giaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "giaddr")
    {
        giaddr.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "giaddr" || name == "server" || name == "timeout")
        return true;
    return false;
}

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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    path_buffer << "firewall" <<"[policy-name='" <<policy_name <<"']";
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(central_policy_push != nullptr)
    {
        children["central-policy-push"] = central_policy_push;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    return children;
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
    acl{YType::str, "acl"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "access-list"; yang_parent_name = "central-policy-push"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::~AccessList()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_data() const
{
    return acl.is_set
	|| direction.is_set;
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(direction.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "direction")
        return true;
    return false;
}

Native::Crypto::Isakmp::Default_::Default_()
    :
    policy{YType::empty, "policy"}
{

    yang_name = "default"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Default_::~Default_()
{
}

bool Native::Crypto::Isakmp::Default_::has_data() const
{
    return policy.is_set;
}

bool Native::Crypto::Isakmp::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Isakmp::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Default_::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,key_host(std::make_shared<Native::Crypto::Isakmp::Key::KeyHost>())
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_address != nullptr)
    {
        children["key-address"] = key_address;
    }

    if(key_host != nullptr)
    {
        children["key-host"] = key_host;
    }

    return children;
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
	,addr6_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container>())
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr4_container != nullptr)
    {
        children["addr4-container"] = addr4_container;
    }

    if(addr6_container != nullptr)
    {
        children["addr6-container"] = addr6_container;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_container != nullptr)
    {
        children["host-container"] = host_container;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,ipv6_addr(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr>())
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
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (ipv4_addr !=  nullptr && ipv4_addr->has_data())
	|| (ipv6_addr !=  nullptr && ipv6_addr->has_data());
}

bool Native::Crypto::Isakmp::Peer::has_operation() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostname")
    {
        for(auto const & c : hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname>();
        c->parent = this;
        hostname.push_back(c);
        return c;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hostname)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv4_addr != nullptr)
    {
        children["ipv4-addr"] = ipv4_addr;
    }

    if(ipv6_addr != nullptr)
    {
        children["ipv6-addr"] = ipv6_addr;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Hostname()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    vrf{YType::str, "vrf"}
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
    return name.is_set
	|| description.is_set
	|| vrf.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vrf.yfilter)
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
    path_buffer << "hostname" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "name" || name == "description" || name == "vrf")
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_mode != nullptr)
    {
        children["aggressive-mode"] = aggressive_mode;
    }

    return children;
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
	,password(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password>())
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_endpoint != nullptr)
    {
        children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Crypto::Isakmp::Peer::Ipv4Addr::Ipv4Addr()
{

    yang_name = "ipv4-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    description{YType::str, "description"},
    vrf{YType::str, "vrf"}
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
    return ipv4.is_set
	|| description.is_set
	|| vrf.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vrf.yfilter)
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
    path_buffer << "address" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv4" || name == "description" || name == "vrf")
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_mode != nullptr)
    {
        children["aggressive-mode"] = aggressive_mode;
    }

    return children;
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
	,password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password>())
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_endpoint != nullptr)
    {
        children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{

    yang_name = "ipv6-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::~Ipv6Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    description{YType::str, "description"},
    vrf{YType::str, "vrf"}
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
    return ipv6.is_set
	|| description.is_set
	|| vrf.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vrf.yfilter)
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
    path_buffer << "address" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv6" || name == "description" || name == "vrf")
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_mode != nullptr)
    {
        children["aggressive-mode"] = aggressive_mode;
    }

    return children;
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
	,password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password>())
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

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_endpoint != nullptr)
    {
        children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Encryption::Y_6 {1, "6"};

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

const Enum::YLeaf Native::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::drop {1, "drop"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::jump {2, "jump"};

const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::spi_matching {0, "spi-matching"};
const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::udp_encapsulation {1, "udp-encapsulation"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_md5_hmac {0, "ah-md5-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha_hmac {1, "ah-sha-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha256_hmac {2, "ah-sha256-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha384_hmac {3, "ah-sha384-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha512_hmac {4, "ah-sha512-hmac"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_3des {0, "esp-3des"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_aes {1, "esp-aes"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_des {2, "esp-des"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_gcm {3, "esp-gcm"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_gmac {4, "esp-gmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_null {5, "esp-null"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_seal {6, "esp-seal"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_md5_hmac {0, "esp-md5-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha_hmac {1, "esp-sha-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha256_hmac {2, "esp-sha256-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha384_hmac {3, "esp-sha384-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha512_hmac {4, "esp-sha512-hmac"};

const Enum::YLeaf Native::Crypto::Isakmp::AggressiveMode::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Isakmp::Identity::address {0, "address"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::dn {1, "dn"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::hostname {2, "hostname"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tmpsys__COLON__ {14, "tmpsys:"};

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

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};


}
}

