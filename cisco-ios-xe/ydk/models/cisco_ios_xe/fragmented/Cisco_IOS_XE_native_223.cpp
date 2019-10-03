
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_223.hpp"
#include "Cisco_IOS_XE_native_224.hpp"
#include "Cisco_IOS_XE_native_225.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Event::Event()
    :
    manager(std::make_shared<Native::Event::Manager>())
{
    manager->parent = this;

    yang_name = "event"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::~Event()
{
}

bool Native::Event::has_data() const
{
    if (is_presence_container) return true;
    return (manager !=  nullptr && manager->has_data());
}

bool Native::Event::has_operation() const
{
    return is_set(yfilter)
	|| (manager !=  nullptr && manager->has_operation());
}

std::string Native::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-eem:manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Native::Event::Manager>();
        }
        return manager;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(manager != nullptr)
    {
        _children["Cisco-IOS-XE-eem:manager"] = manager;
    }

    return _children;
}

void Native::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manager")
        return true;
    return false;
}

Native::Event::Manager::Manager()
    :
    environment(this, {"name"})
    , directory(std::make_shared<Native::Event::Manager::Directory>())
    , session(std::make_shared<Native::Event::Manager::Session>())
    , applet(this, {"name"})
{
    directory->parent = this;
    session->parent = this;

    yang_name = "manager"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::~Manager()
{
}

bool Native::Event::Manager::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<environment.len(); index++)
    {
        if(environment[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<applet.len(); index++)
    {
        if(applet[index]->has_data())
            return true;
    }
    return (directory !=  nullptr && directory->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Event::Manager::has_operation() const
{
    for (std::size_t index=0; index<environment.len(); index++)
    {
        if(environment[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<applet.len(); index++)
    {
        if(applet[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (directory !=  nullptr && directory->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Event::Manager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eem:manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "environment")
    {
        auto ent_ = std::make_shared<Native::Event::Manager::Environment>();
        ent_->parent = this;
        environment.append(ent_);
        return ent_;
    }

    if(child_yang_name == "directory")
    {
        if(directory == nullptr)
        {
            directory = std::make_shared<Native::Event::Manager::Directory>();
        }
        return directory;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Event::Manager::Session>();
        }
        return session;
    }

    if(child_yang_name == "applet")
    {
        auto ent_ = std::make_shared<Native::Event::Manager::Applet>();
        ent_->parent = this;
        applet.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : environment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(directory != nullptr)
    {
        _children["directory"] = directory;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    count_ = 0;
    for (auto ent_ : applet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Event::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "environment" || name == "directory" || name == "session" || name == "applet")
        return true;
    return false;
}

Native::Event::Manager::Environment::Environment()
    :
    name{YType::str, "name"},
    value_{YType::str, "value"}
{

    yang_name = "environment"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Environment::~Environment()
{
}

bool Native::Event::Manager::Environment::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| value_.is_set;
}

bool Native::Event::Manager::Environment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Event::Manager::Environment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value")
        return true;
    return false;
}

Native::Event::Manager::Directory::Directory()
    :
    user(std::make_shared<Native::Event::Manager::Directory::User>())
{
    user->parent = this;

    yang_name = "directory"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Directory::~Directory()
{
}

bool Native::Event::Manager::Directory::has_data() const
{
    if (is_presence_container) return true;
    return (user !=  nullptr && user->has_data());
}

bool Native::Event::Manager::Directory::has_operation() const
{
    return is_set(yfilter)
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Event::Manager::Directory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Directory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Directory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Directory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Event::Manager::Directory::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Directory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Event::Manager::Directory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Directory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Directory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

Native::Event::Manager::Directory::User::User()
    :
    policy{YType::str, "policy"}
{

    yang_name = "user"; yang_parent_name = "directory"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Directory::User::~User()
{
}

bool Native::Event::Manager::Directory::User::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set;
}

bool Native::Event::Manager::Directory::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Event::Manager::Directory::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/directory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Directory::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Directory::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Directory::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Directory::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Directory::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Directory::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Directory::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Event::Manager::Session::Session()
    :
    cli(std::make_shared<Native::Event::Manager::Session::Cli>())
{
    cli->parent = this;

    yang_name = "session"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Session::~Session()
{
}

bool Native::Event::Manager::Session::has_data() const
{
    if (is_presence_container) return true;
    return (cli !=  nullptr && cli->has_data());
}

bool Native::Event::Manager::Session::has_operation() const
{
    return is_set(yfilter)
	|| (cli !=  nullptr && cli->has_operation());
}

std::string Native::Event::Manager::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<Native::Event::Manager::Session::Cli>();
        }
        return cli;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cli != nullptr)
    {
        _children["cli"] = cli;
    }

    return _children;
}

void Native::Event::Manager::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cli")
        return true;
    return false;
}

Native::Event::Manager::Session::Cli::Cli()
    :
    username(std::make_shared<Native::Event::Manager::Session::Cli::Username>())
{
    username->parent = this;

    yang_name = "cli"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Session::Cli::~Cli()
{
}

bool Native::Event::Manager::Session::Cli::has_data() const
{
    if (is_presence_container) return true;
    return (username !=  nullptr && username->has_data());
}

bool Native::Event::Manager::Session::Cli::has_operation() const
{
    return is_set(yfilter)
	|| (username !=  nullptr && username->has_operation());
}

std::string Native::Event::Manager::Session::Cli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Session::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        if(username == nullptr)
        {
            username = std::make_shared<Native::Event::Manager::Session::Cli::Username>();
        }
        return username;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Session::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(username != nullptr)
    {
        _children["username"] = username;
    }

    return _children;
}

void Native::Event::Manager::Session::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Session::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Session::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::Event::Manager::Session::Cli::Username::Username()
    :
    username_in_word(this, {"username_in_word"})
{

    yang_name = "username"; yang_parent_name = "cli"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Session::Cli::Username::~Username()
{
}

bool Native::Event::Manager::Session::Cli::Username::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<username_in_word.len(); index++)
    {
        if(username_in_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Session::Cli::Username::has_operation() const
{
    for (std::size_t index=0; index<username_in_word.len(); index++)
    {
        if(username_in_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Event::Manager::Session::Cli::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/cli/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::Cli::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::Cli::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Session::Cli::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username_in_word")
    {
        auto ent_ = std::make_shared<Native::Event::Manager::Session::Cli::Username::UsernameInWord>();
        ent_->parent = this;
        username_in_word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Session::Cli::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : username_in_word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Event::Manager::Session::Cli::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Session::Cli::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Session::Cli::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username_in_word")
        return true;
    return false;
}

Native::Event::Manager::Session::Cli::Username::UsernameInWord::UsernameInWord()
    :
    username_in_word{YType::str, "username_in_word"},
    privilege{YType::uint8, "privilege"}
{

    yang_name = "username_in_word"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Session::Cli::Username::UsernameInWord::~UsernameInWord()
{
}

bool Native::Event::Manager::Session::Cli::Username::UsernameInWord::has_data() const
{
    if (is_presence_container) return true;
    return username_in_word.is_set
	|| privilege.is_set;
}

bool Native::Event::Manager::Session::Cli::Username::UsernameInWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username_in_word.yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/cli/username/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username_in_word";
    ADD_KEY_TOKEN(username_in_word, "username_in_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username_in_word.is_set || is_set(username_in_word.yfilter)) leaf_name_data.push_back(username_in_word.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Session::Cli::Username::UsernameInWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username_in_word")
    {
        username_in_word = value;
        username_in_word.value_namespace = name_space;
        username_in_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Session::Cli::Username::UsernameInWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username_in_word")
    {
        username_in_word.yfilter = yfilter;
    }
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Session::Cli::Username::UsernameInWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username_in_word" || name == "privilege")
        return true;
    return false;
}

Native::Event::Manager::Applet::Applet()
    :
    name{YType::str, "name"},
    authorization{YType::enumeration, "authorization"},
    class_{YType::str, "class"},
    trap{YType::empty, "trap"},
    description{YType::str, "description"}
        ,
    event(std::make_shared<Native::Event::Manager::Applet::Event_>())
    , action(this, {"name"})
    , trigger(std::make_shared<Native::Event::Manager::Applet::Trigger>())
{
    event->parent = this;
    trigger->parent = this;

    yang_name = "applet"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Event::Manager::Applet::~Applet()
{
}

bool Native::Event::Manager::Applet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<action.len(); index++)
    {
        if(action[index]->has_data())
            return true;
    }
    return name.is_set
	|| authorization.is_set
	|| class_.is_set
	|| trap.is_set
	|| description.is_set
	|| (event !=  nullptr && event->has_data())
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Event::Manager::Applet::has_operation() const
{
    for (std::size_t index=0; index<action.len(); index++)
    {
        if(action[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(trap.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (event !=  nullptr && event->has_operation())
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Event::Manager::Applet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Applet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applet";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Event::Manager::Applet::Event_>();
        }
        return event;
    }

    if(child_yang_name == "action")
    {
        auto ent_ = std::make_shared<Native::Event::Manager::Applet::Action>();
        ent_->parent = this;
        action.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Event::Manager::Applet::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event != nullptr)
    {
        _children["event"] = event;
    }

    count_ = 0;
    for (auto ent_ : action.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(trigger != nullptr)
    {
        _children["trigger"] = trigger;
    }

    return _children;
}

void Native::Event::Manager::Applet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "action" || name == "trigger" || name == "name" || name == "authorization" || name == "class" || name == "trap" || name == "description")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Event_()
    :
    timer(std::make_shared<Native::Event::Manager::Applet::Event_::Timer>())
    , snmp_notification(std::make_shared<Native::Event::Manager::Applet::Event_::SnmpNotification>())
    , syslog(std::make_shared<Native::Event::Manager::Applet::Event_::Syslog>())
    , track(std::make_shared<Native::Event::Manager::Applet::Event_::Track>())
    , none(nullptr) // presence node
    , resource(std::make_shared<Native::Event::Manager::Applet::Event_::Resource>())
    , rpc(nullptr) // presence node
    , config(nullptr) // presence node
    , env(std::make_shared<Native::Event::Manager::Applet::Event_::Env>())
    , oir(nullptr) // presence node
    , rf(std::make_shared<Native::Event::Manager::Applet::Event_::Rf>())
{
    timer->parent = this;
    snmp_notification->parent = this;
    syslog->parent = this;
    track->parent = this;
    resource->parent = this;
    env->parent = this;
    rf->parent = this;

    yang_name = "event"; yang_parent_name = "applet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::~Event_()
{
}

bool Native::Event::Manager::Applet::Event_::has_data() const
{
    if (is_presence_container) return true;
    return (timer !=  nullptr && timer->has_data())
	|| (snmp_notification !=  nullptr && snmp_notification->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (none !=  nullptr && none->has_data())
	|| (resource !=  nullptr && resource->has_data())
	|| (rpc !=  nullptr && rpc->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (env !=  nullptr && env->has_data())
	|| (oir !=  nullptr && oir->has_data())
	|| (rf !=  nullptr && rf->has_data());
}

bool Native::Event::Manager::Applet::Event_::has_operation() const
{
    return is_set(yfilter)
	|| (timer !=  nullptr && timer->has_operation())
	|| (snmp_notification !=  nullptr && snmp_notification->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (none !=  nullptr && none->has_operation())
	|| (resource !=  nullptr && resource->has_operation())
	|| (rpc !=  nullptr && rpc->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (env !=  nullptr && env->has_operation())
	|| (oir !=  nullptr && oir->has_operation())
	|| (rf !=  nullptr && rf->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Event::Manager::Applet::Event_::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "snmp-notification")
    {
        if(snmp_notification == nullptr)
        {
            snmp_notification = std::make_shared<Native::Event::Manager::Applet::Event_::SnmpNotification>();
        }
        return snmp_notification;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Event::Manager::Applet::Event_::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Event::Manager::Applet::Event_::Track>();
        }
        return track;
    }

    if(child_yang_name == "none")
    {
        if(none == nullptr)
        {
            none = std::make_shared<Native::Event::Manager::Applet::Event_::None>();
        }
        return none;
    }

    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Native::Event::Manager::Applet::Event_::Resource>();
        }
        return resource;
    }

    if(child_yang_name == "rpc")
    {
        if(rpc == nullptr)
        {
            rpc = std::make_shared<Native::Event::Manager::Applet::Event_::Rpc>();
        }
        return rpc;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Event::Manager::Applet::Event_::Config>();
        }
        return config;
    }

    if(child_yang_name == "env")
    {
        if(env == nullptr)
        {
            env = std::make_shared<Native::Event::Manager::Applet::Event_::Env>();
        }
        return env;
    }

    if(child_yang_name == "oir")
    {
        if(oir == nullptr)
        {
            oir = std::make_shared<Native::Event::Manager::Applet::Event_::Oir>();
        }
        return oir;
    }

    if(child_yang_name == "rf")
    {
        if(rf == nullptr)
        {
            rf = std::make_shared<Native::Event::Manager::Applet::Event_::Rf>();
        }
        return rf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(snmp_notification != nullptr)
    {
        _children["snmp-notification"] = snmp_notification;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(none != nullptr)
    {
        _children["none"] = none;
    }

    if(resource != nullptr)
    {
        _children["resource"] = resource;
    }

    if(rpc != nullptr)
    {
        _children["rpc"] = rpc;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(env != nullptr)
    {
        _children["env"] = env;
    }

    if(oir != nullptr)
    {
        _children["oir"] = oir;
    }

    if(rf != nullptr)
    {
        _children["rf"] = rf;
    }

    return _children;
}

void Native::Event::Manager::Applet::Event_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer" || name == "snmp-notification" || name == "syslog" || name == "track" || name == "none" || name == "resource" || name == "rpc" || name == "config" || name == "env" || name == "oir" || name == "rf")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Timer()
    :
    absolute(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Absolute>())
    , countdown(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Countdown>())
    , cron(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Cron>())
    , watchdog(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog>())
{
    absolute->parent = this;
    countdown->parent = this;
    cron->parent = this;
    watchdog->parent = this;

    yang_name = "timer"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Timer::~Timer()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::has_data() const
{
    if (is_presence_container) return true;
    return (absolute !=  nullptr && absolute->has_data())
	|| (countdown !=  nullptr && countdown->has_data())
	|| (cron !=  nullptr && cron->has_data())
	|| (watchdog !=  nullptr && watchdog->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (countdown !=  nullptr && countdown->has_operation())
	|| (cron !=  nullptr && cron->has_operation())
	|| (watchdog !=  nullptr && watchdog->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "countdown")
    {
        if(countdown == nullptr)
        {
            countdown = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Countdown>();
        }
        return countdown;
    }

    if(child_yang_name == "cron")
    {
        if(cron == nullptr)
        {
            cron = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Cron>();
        }
        return cron;
    }

    if(child_yang_name == "watchdog")
    {
        if(watchdog == nullptr)
        {
            watchdog = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog>();
        }
        return watchdog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(absolute != nullptr)
    {
        _children["absolute"] = absolute;
    }

    if(countdown != nullptr)
    {
        _children["countdown"] = countdown;
    }

    if(cron != nullptr)
    {
        _children["cron"] = cron;
    }

    if(watchdog != nullptr)
    {
        _children["watchdog"] = watchdog;
    }

    return _children;
}

void Native::Event::Manager::Applet::Event_::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "countdown" || name == "cron" || name == "watchdog")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Absolute::Absolute()
    :
    maxrun{YType::uint32, "maxrun"},
    name{YType::str, "name"},
    ratelimit{YType::uint32, "ratelimit"},
    time{YType::uint32, "time"}
{

    yang_name = "absolute"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Timer::Absolute::~Absolute()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return maxrun.is_set
	|| name.is_set
	|| ratelimit.is_set
	|| time.is_set;
}

bool Native::Event::Manager::Applet::Event_::Timer::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Timer::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Timer::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Timer::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "name" || name == "ratelimit" || name == "time")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Countdown::Countdown()
    :
    maxrun{YType::uint32, "maxrun"},
    name{YType::str, "name"},
    ratelimit{YType::uint32, "ratelimit"},
    time{YType::uint32, "time"}
{

    yang_name = "countdown"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Timer::Countdown::~Countdown()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Countdown::has_data() const
{
    if (is_presence_container) return true;
    return maxrun.is_set
	|| name.is_set
	|| ratelimit.is_set
	|| time.is_set;
}

bool Native::Event::Manager::Applet::Event_::Timer::Countdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Countdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "countdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Countdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Timer::Countdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Timer::Countdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Timer::Countdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Countdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Countdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "name" || name == "ratelimit" || name == "time")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Cron::Cron()
    :
    maxrun{YType::uint32, "maxrun"},
    name{YType::str, "name"},
    ratelimit{YType::uint32, "ratelimit"},
    cron_entry{YType::str, "cron-entry"}
{

    yang_name = "cron"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Timer::Cron::~Cron()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Cron::has_data() const
{
    if (is_presence_container) return true;
    return maxrun.is_set
	|| name.is_set
	|| ratelimit.is_set
	|| cron_entry.is_set;
}

bool Native::Event::Manager::Applet::Event_::Timer::Cron::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(cron_entry.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Cron::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cron";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Cron::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (cron_entry.is_set || is_set(cron_entry.yfilter)) leaf_name_data.push_back(cron_entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Timer::Cron::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Timer::Cron::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Timer::Cron::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cron-entry")
    {
        cron_entry = value;
        cron_entry.value_namespace = name_space;
        cron_entry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Cron::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "cron-entry")
    {
        cron_entry.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Cron::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "name" || name == "ratelimit" || name == "cron-entry")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Watchdog()
    :
    maxrun{YType::uint32, "maxrun"},
    name{YType::str, "name"},
    ratelimit{YType::uint32, "ratelimit"},
    time{YType::uint32, "time"}
{

    yang_name = "watchdog"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::~Watchdog()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_data() const
{
    if (is_presence_container) return true;
    return maxrun.is_set
	|| name.is_set
	|| ratelimit.is_set
	|| time.is_set;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watchdog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "name" || name == "ratelimit" || name == "time")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::SnmpNotification::SnmpNotification()
    :
    oid{YType::str, "oid"},
    oid_val{YType::str, "oid-val"},
    op{YType::enumeration, "op"},
    src_ip_address{YType::str, "src-ip-address"},
    dest_ip_address{YType::str, "dest-ip-address"}
{

    yang_name = "snmp-notification"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::SnmpNotification::~SnmpNotification()
{
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| oid_val.is_set
	|| op.is_set
	|| src_ip_address.is_set
	|| dest_ip_address.is_set;
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(oid_val.yfilter)
	|| ydk::is_set(op.yfilter)
	|| ydk::is_set(src_ip_address.yfilter)
	|| ydk::is_set(dest_ip_address.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::SnmpNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::SnmpNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_val.is_set || is_set(oid_val.yfilter)) leaf_name_data.push_back(oid_val.get_name_leafdata());
    if (op.is_set || is_set(op.yfilter)) leaf_name_data.push_back(op.get_name_leafdata());
    if (src_ip_address.is_set || is_set(src_ip_address.yfilter)) leaf_name_data.push_back(src_ip_address.get_name_leafdata());
    if (dest_ip_address.is_set || is_set(dest_ip_address.yfilter)) leaf_name_data.push_back(dest_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::SnmpNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::SnmpNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::SnmpNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-val")
    {
        oid_val = value;
        oid_val.value_namespace = name_space;
        oid_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "op")
    {
        op = value;
        op.value_namespace = name_space;
        op.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ip-address")
    {
        src_ip_address = value;
        src_ip_address.value_namespace = name_space;
        src_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-ip-address")
    {
        dest_ip_address = value;
        dest_ip_address.value_namespace = name_space;
        dest_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::SnmpNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "oid-val")
    {
        oid_val.yfilter = yfilter;
    }
    if(value_path == "op")
    {
        op.yfilter = yfilter;
    }
    if(value_path == "src-ip-address")
    {
        src_ip_address.yfilter = yfilter;
    }
    if(value_path == "dest-ip-address")
    {
        dest_ip_address.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid" || name == "oid-val" || name == "op" || name == "src-ip-address" || name == "dest-ip-address")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Syslog::Syslog()
    :
    pattern{YType::str, "pattern"}
{

    yang_name = "syslog"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Syslog::~Syslog()
{
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return pattern.is_set;
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pattern.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pattern")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Track::Track()
    :
    track_object_number{YType::uint16, "track-object-number"},
    state{YType::enumeration, "state"}
{

    yang_name = "track"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Track::~Track()
{
}

bool Native::Event::Manager::Applet::Event_::Track::has_data() const
{
    if (is_presence_container) return true;
    return track_object_number.is_set
	|| state.is_set;
}

bool Native::Event::Manager::Applet::Event_::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track_object_number.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_object_number.is_set || is_set(track_object_number.yfilter)) leaf_name_data.push_back(track_object_number.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track-object-number")
    {
        track_object_number = value;
        track_object_number.value_namespace = name_space;
        track_object_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track-object-number")
    {
        track_object_number.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-object-number" || name == "state")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::None::None()
    :
    default_{YType::uint32, "default"},
    maxrun{YType::uint32, "maxrun"},
    ratelimit{YType::uint32, "ratelimit"},
    sync{YType::enumeration, "sync"}
{

    yang_name = "none"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Event::Manager::Applet::Event_::None::~None()
{
}

bool Native::Event::Manager::Applet::Event_::None::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| maxrun.is_set
	|| ratelimit.is_set
	|| sync.is_set;
}

bool Native::Event::Manager::Applet::Event_::None::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::None::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::None::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::None::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::None::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::None::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::None::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::None::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "maxrun" || name == "ratelimit" || name == "sync")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Resource::Resource()
    :
    policy{YType::str, "policy"},
    maxrun{YType::uint32, "maxrun"},
    ratelimit{YType::uint32, "ratelimit"}
{

    yang_name = "resource"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Resource::~Resource()
{
}

bool Native::Event::Manager::Applet::Event_::Resource::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set
	|| maxrun.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Resource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "maxrun" || name == "ratelimit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Rpc::Rpc()
    :
    default_{YType::uint32, "default"},
    maxrun{YType::uint32, "maxrun"},
    ratelimit{YType::uint32, "ratelimit"}
{

    yang_name = "rpc"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Event::Manager::Applet::Event_::Rpc::~Rpc()
{
}

bool Native::Event::Manager::Applet::Event_::Rpc::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| maxrun.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Rpc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Rpc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Rpc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Rpc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Rpc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Rpc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "maxrun" || name == "ratelimit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Config::Config()
    :
    maxrun{YType::uint32, "maxrun"},
    ratelimit{YType::uint32, "ratelimit"}
{

    yang_name = "config"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Event::Manager::Applet::Event_::Config::~Config()
{
}

bool Native::Event::Manager::Applet::Event_::Config::has_data() const
{
    if (is_presence_container) return true;
    return maxrun.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "ratelimit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Env::Env()
    :
    severity(std::make_shared<Native::Event::Manager::Applet::Event_::Env::Severity>())
{
    severity->parent = this;

    yang_name = "env"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Env::~Env()
{
}

bool Native::Event::Manager::Applet::Event_::Env::has_data() const
{
    if (is_presence_container) return true;
    return (severity !=  nullptr && severity->has_data());
}

bool Native::Event::Manager::Applet::Event_::Env::has_operation() const
{
    return is_set(yfilter)
	|| (severity !=  nullptr && severity->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Env::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Env::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Env::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "severity")
    {
        if(severity == nullptr)
        {
            severity = std::make_shared<Native::Event::Manager::Applet::Event_::Env::Severity>();
        }
        return severity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Env::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(severity != nullptr)
    {
        _children["severity"] = severity;
    }

    return _children;
}

void Native::Event::Manager::Applet::Event_::Env::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Env::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Env::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Env::Severity::Severity()
    :
    major_(nullptr) // presence node
    , minor(nullptr) // presence node
{

    yang_name = "severity"; yang_parent_name = "env"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Env::Severity::~Severity()
{
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::has_data() const
{
    if (is_presence_container) return true;
    return (major_ !=  nullptr && major_->has_data())
	|| (minor !=  nullptr && minor->has_data());
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::has_operation() const
{
    return is_set(yfilter)
	|| (major_ !=  nullptr && major_->has_operation())
	|| (minor !=  nullptr && minor->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Env::Severity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "severity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Env::Severity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Env::Severity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "major")
    {
        if(major_ == nullptr)
        {
            major_ = std::make_shared<Native::Event::Manager::Applet::Event_::Env::Severity::Major>();
        }
        return major_;
    }

    if(child_yang_name == "minor")
    {
        if(minor == nullptr)
        {
            minor = std::make_shared<Native::Event::Manager::Applet::Event_::Env::Severity::Minor>();
        }
        return minor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Env::Severity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(major_ != nullptr)
    {
        _children["major"] = major_;
    }

    if(minor != nullptr)
    {
        _children["minor"] = minor;
    }

    return _children;
}

void Native::Event::Manager::Applet::Event_::Env::Severity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Env::Severity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major" || name == "minor")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Env::Severity::Major::Major()
    :
    maxrun{YType::uint32, "maxrun"},
    ratelimit{YType::uint32, "ratelimit"}
{

    yang_name = "major"; yang_parent_name = "severity"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Event::Manager::Applet::Event_::Env::Severity::Major::~Major()
{
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::Major::has_data() const
{
    if (is_presence_container) return true;
    return maxrun.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::Major::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Env::Severity::Major::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Env::Severity::Major::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Env::Severity::Major::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Env::Severity::Major::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Env::Severity::Major::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Env::Severity::Major::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::Major::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "ratelimit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Env::Severity::Minor::Minor()
    :
    maxrun{YType::uint32, "maxrun"},
    ratelimit{YType::uint32, "ratelimit"}
{

    yang_name = "minor"; yang_parent_name = "severity"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Event::Manager::Applet::Event_::Env::Severity::Minor::~Minor()
{
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::Minor::has_data() const
{
    if (is_presence_container) return true;
    return maxrun.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::Minor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Env::Severity::Minor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Env::Severity::Minor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Env::Severity::Minor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Env::Severity::Minor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Env::Severity::Minor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Env::Severity::Minor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Env::Severity::Minor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "ratelimit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Oir::Oir()
    :
    event{YType::enumeration, "event"},
    maxrun{YType::uint32, "maxrun"}
{

    yang_name = "oir"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Event::Manager::Applet::Event_::Oir::~Oir()
{
}

bool Native::Event::Manager::Applet::Event_::Oir::has_data() const
{
    if (is_presence_container) return true;
    return event.is_set
	|| maxrun.is_set;
}

bool Native::Event::Manager::Applet::Event_::Oir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(maxrun.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Oir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Oir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Oir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Oir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Oir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Oir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Oir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "maxrun")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Rf::Rf()
    :
    event{YType::str, "event"},
    maxrun{YType::uint32, "maxrun"},
    ratelimit{YType::uint32, "ratelimit"}
{

    yang_name = "rf"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Event_::Rf::~Rf()
{
}

bool Native::Event::Manager::Applet::Event_::Rf::has_data() const
{
    if (is_presence_container) return true;
    return event.is_set
	|| maxrun.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Rf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(maxrun.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Rf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Rf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (maxrun.is_set || is_set(maxrun.yfilter)) leaf_name_data.push_back(maxrun.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Event_::Rf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Event_::Rf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Event_::Rf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxrun")
    {
        maxrun = value;
        maxrun.value_namespace = name_space;
        maxrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Rf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "maxrun")
    {
        maxrun.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Rf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "maxrun" || name == "ratelimit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Action()
    :
    name{YType::str, "name"},
    end{YType::empty, "end"},
    exit{YType::empty, "exit"}
        ,
    cli(std::make_shared<Native::Event::Manager::Applet::Action::Cli>())
    , if_(std::make_shared<Native::Event::Manager::Applet::Action::If>())
    , info(std::make_shared<Native::Event::Manager::Applet::Action::Info>())
    , regexp(std::make_shared<Native::Event::Manager::Applet::Action::Regexp>())
    , snmp_trap(nullptr) // presence node
    , string(std::make_shared<Native::Event::Manager::Applet::Action::String>())
    , syslog(std::make_shared<Native::Event::Manager::Applet::Action::Syslog>())
{
    cli->parent = this;
    if_->parent = this;
    info->parent = this;
    regexp->parent = this;
    string->parent = this;
    syslog->parent = this;

    yang_name = "action"; yang_parent_name = "applet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::~Action()
{
}

bool Native::Event::Manager::Applet::Action::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| end.is_set
	|| exit.is_set
	|| (cli !=  nullptr && cli->has_data())
	|| (if_ !=  nullptr && if_->has_data())
	|| (info !=  nullptr && info->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (snmp_trap !=  nullptr && snmp_trap->has_data())
	|| (string !=  nullptr && string->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Event::Manager::Applet::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(exit.yfilter)
	|| (cli !=  nullptr && cli->has_operation())
	|| (if_ !=  nullptr && if_->has_operation())
	|| (info !=  nullptr && info->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (snmp_trap !=  nullptr && snmp_trap->has_operation())
	|| (string !=  nullptr && string->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Event::Manager::Applet::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (exit.is_set || is_set(exit.yfilter)) leaf_name_data.push_back(exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<Native::Event::Manager::Applet::Action::Cli>();
        }
        return cli;
    }

    if(child_yang_name == "if")
    {
        if(if_ == nullptr)
        {
            if_ = std::make_shared<Native::Event::Manager::Applet::Action::If>();
        }
        return if_;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Native::Event::Manager::Applet::Action::Info>();
        }
        return info;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Event::Manager::Applet::Action::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "snmp-trap")
    {
        if(snmp_trap == nullptr)
        {
            snmp_trap = std::make_shared<Native::Event::Manager::Applet::Action::SnmpTrap>();
        }
        return snmp_trap;
    }

    if(child_yang_name == "string")
    {
        if(string == nullptr)
        {
            string = std::make_shared<Native::Event::Manager::Applet::Action::String>();
        }
        return string;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Event::Manager::Applet::Action::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cli != nullptr)
    {
        _children["cli"] = cli;
    }

    if(if_ != nullptr)
    {
        _children["if"] = if_;
    }

    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(regexp != nullptr)
    {
        _children["regexp"] = regexp;
    }

    if(snmp_trap != nullptr)
    {
        _children["snmp-trap"] = snmp_trap;
    }

    if(string != nullptr)
    {
        _children["string"] = string;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    return _children;
}

void Native::Event::Manager::Applet::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exit")
    {
        exit = value;
        exit.value_namespace = name_space;
        exit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "exit")
    {
        exit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cli" || name == "if" || name == "info" || name == "regexp" || name == "snmp-trap" || name == "string" || name == "syslog" || name == "name" || name == "end" || name == "exit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Cli::Cli()
    :
    command{YType::str, "command"}
{

    yang_name = "cli"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Cli::~Cli()
{
}

bool Native::Event::Manager::Applet::Action::Cli::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Event::Manager::Applet::Action::Cli::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::If::If()
    :
    string_op_1{YType::str, "string-op-1"},
    keyword{YType::enumeration, "keyword"},
    string_op_2{YType::str, "string-op-2"},
    goto_{YType::str, "goto"}
{

    yang_name = "if"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::If::~If()
{
}

bool Native::Event::Manager::Applet::Action::If::has_data() const
{
    if (is_presence_container) return true;
    return string_op_1.is_set
	|| keyword.is_set
	|| string_op_2.is_set
	|| goto_.is_set;
}

bool Native::Event::Manager::Applet::Action::If::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_op_1.yfilter)
	|| ydk::is_set(keyword.yfilter)
	|| ydk::is_set(string_op_2.yfilter)
	|| ydk::is_set(goto_.yfilter);
}

std::string Native::Event::Manager::Applet::Action::If::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::If::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_op_1.is_set || is_set(string_op_1.yfilter)) leaf_name_data.push_back(string_op_1.get_name_leafdata());
    if (keyword.is_set || is_set(keyword.yfilter)) leaf_name_data.push_back(keyword.get_name_leafdata());
    if (string_op_2.is_set || is_set(string_op_2.yfilter)) leaf_name_data.push_back(string_op_2.get_name_leafdata());
    if (goto_.is_set || is_set(goto_.yfilter)) leaf_name_data.push_back(goto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::If::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::If::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::If::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-op-1")
    {
        string_op_1 = value;
        string_op_1.value_namespace = name_space;
        string_op_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyword")
    {
        keyword = value;
        keyword.value_namespace = name_space;
        keyword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-op-2")
    {
        string_op_2 = value;
        string_op_2.value_namespace = name_space;
        string_op_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "goto")
    {
        goto_ = value;
        goto_.value_namespace = name_space;
        goto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::If::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-op-1")
    {
        string_op_1.yfilter = yfilter;
    }
    if(value_path == "keyword")
    {
        keyword.yfilter = yfilter;
    }
    if(value_path == "string-op-2")
    {
        string_op_2.yfilter = yfilter;
    }
    if(value_path == "goto")
    {
        goto_.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::If::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-op-1" || name == "keyword" || name == "string-op-2" || name == "goto")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Info()
    :
    type(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type>())
{
    type->parent = this;

    yang_name = "info"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Info::~Info()
{
}

bool Native::Event::Manager::Applet::Action::Info::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Event::Manager::Applet::Action::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Action::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Action::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Type()
    :
    snmp(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp>())
{
    snmp->parent = this;

    yang_name = "type"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Info::Type::~Type()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_data() const
{
    if (is_presence_container) return true;
    return (snmp !=  nullptr && snmp->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_operation() const
{
    return is_set(yfilter)
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Info::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Info::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    return _children;
}

void Native::Event::Manager::Applet::Action::Info::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Action::Info::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Snmp()
    :
    var(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var>())
    , trap(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap>())
{
    var->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::~Snmp()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (var !=  nullptr && var->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (var !=  nullptr && var->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var")
    {
        if(var == nullptr)
        {
            var = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var>();
        }
        return var;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(var != nullptr)
    {
        _children["var"] = var;
    }

    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    return _children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var" || name == "trap")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::Var()
    :
    variable_name{YType::str, "variable-name"},
    oid{YType::str, "oid"},
    oid_type{YType::enumeration, "oid-type"},
    oid_type_value{YType::str, "oid-type-value"}
{

    yang_name = "var"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::~Var()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_data() const
{
    if (is_presence_container) return true;
    return variable_name.is_set
	|| oid.is_set
	|| oid_type.is_set
	|| oid_type_value.is_set;
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(variable_name.yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(oid_type.yfilter)
	|| ydk::is_set(oid_type_value.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (variable_name.is_set || is_set(variable_name.yfilter)) leaf_name_data.push_back(variable_name.get_name_leafdata());
    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_type.is_set || is_set(oid_type.yfilter)) leaf_name_data.push_back(oid_type.get_name_leafdata());
    if (oid_type_value.is_set || is_set(oid_type_value.yfilter)) leaf_name_data.push_back(oid_type_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "variable-name")
    {
        variable_name = value;
        variable_name.value_namespace = name_space;
        variable_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-type")
    {
        oid_type = value;
        oid_type.value_namespace = name_space;
        oid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-type-value")
    {
        oid_type_value = value;
        oid_type_value.value_namespace = name_space;
        oid_type_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "variable-name")
    {
        variable_name.yfilter = yfilter;
    }
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "oid-type")
    {
        oid_type.yfilter = yfilter;
    }
    if(value_path == "oid-type-value")
    {
        oid_type_value.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variable-name" || name == "oid" || name == "oid-type" || name == "oid-type-value")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::Trap()
    :
    enterprise_oid{YType::str, "enterprise-oid"},
    generic_trapnum{YType::uint32, "generic-trapnum"},
    specific_trapnum{YType::uint32, "specific-trapnum"},
    trap_oid{YType::str, "trap-oid"},
    trap_var{YType::str, "trap-var"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::~Trap()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return enterprise_oid.is_set
	|| generic_trapnum.is_set
	|| specific_trapnum.is_set
	|| trap_oid.is_set
	|| trap_var.is_set;
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enterprise_oid.yfilter)
	|| ydk::is_set(generic_trapnum.yfilter)
	|| ydk::is_set(specific_trapnum.yfilter)
	|| ydk::is_set(trap_oid.yfilter)
	|| ydk::is_set(trap_var.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enterprise_oid.is_set || is_set(enterprise_oid.yfilter)) leaf_name_data.push_back(enterprise_oid.get_name_leafdata());
    if (generic_trapnum.is_set || is_set(generic_trapnum.yfilter)) leaf_name_data.push_back(generic_trapnum.get_name_leafdata());
    if (specific_trapnum.is_set || is_set(specific_trapnum.yfilter)) leaf_name_data.push_back(specific_trapnum.get_name_leafdata());
    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (trap_var.is_set || is_set(trap_var.yfilter)) leaf_name_data.push_back(trap_var.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enterprise-oid")
    {
        enterprise_oid = value;
        enterprise_oid.value_namespace = name_space;
        enterprise_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-trapnum")
    {
        generic_trapnum = value;
        generic_trapnum.value_namespace = name_space;
        generic_trapnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "specific-trapnum")
    {
        specific_trapnum = value;
        specific_trapnum.value_namespace = name_space;
        specific_trapnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-oid")
    {
        trap_oid = value;
        trap_oid.value_namespace = name_space;
        trap_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-var")
    {
        trap_var = value;
        trap_var.value_namespace = name_space;
        trap_var.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enterprise-oid")
    {
        enterprise_oid.yfilter = yfilter;
    }
    if(value_path == "generic-trapnum")
    {
        generic_trapnum.yfilter = yfilter;
    }
    if(value_path == "specific-trapnum")
    {
        specific_trapnum.yfilter = yfilter;
    }
    if(value_path == "trap-oid")
    {
        trap_oid.yfilter = yfilter;
    }
    if(value_path == "trap-var")
    {
        trap_var.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enterprise-oid" || name == "generic-trapnum" || name == "specific-trapnum" || name == "trap-oid" || name == "trap-var")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Regexp::Regexp()
    :
    string_pattern{YType::str, "string-pattern"},
    string_input{YType::str, "string-input"},
    string_match{YType::str, "string-match"},
    string_submatch1{YType::str, "string-submatch1"},
    string_submatch2{YType::str, "string-submatch2"},
    string_submatch3{YType::str, "string-submatch3"}
{

    yang_name = "regexp"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Regexp::~Regexp()
{
}

bool Native::Event::Manager::Applet::Action::Regexp::has_data() const
{
    if (is_presence_container) return true;
    return string_pattern.is_set
	|| string_input.is_set
	|| string_match.is_set
	|| string_submatch1.is_set
	|| string_submatch2.is_set
	|| string_submatch3.is_set;
}

bool Native::Event::Manager::Applet::Action::Regexp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_pattern.yfilter)
	|| ydk::is_set(string_input.yfilter)
	|| ydk::is_set(string_match.yfilter)
	|| ydk::is_set(string_submatch1.yfilter)
	|| ydk::is_set(string_submatch2.yfilter)
	|| ydk::is_set(string_submatch3.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Regexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_pattern.is_set || is_set(string_pattern.yfilter)) leaf_name_data.push_back(string_pattern.get_name_leafdata());
    if (string_input.is_set || is_set(string_input.yfilter)) leaf_name_data.push_back(string_input.get_name_leafdata());
    if (string_match.is_set || is_set(string_match.yfilter)) leaf_name_data.push_back(string_match.get_name_leafdata());
    if (string_submatch1.is_set || is_set(string_submatch1.yfilter)) leaf_name_data.push_back(string_submatch1.get_name_leafdata());
    if (string_submatch2.is_set || is_set(string_submatch2.yfilter)) leaf_name_data.push_back(string_submatch2.get_name_leafdata());
    if (string_submatch3.is_set || is_set(string_submatch3.yfilter)) leaf_name_data.push_back(string_submatch3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::Regexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-pattern")
    {
        string_pattern = value;
        string_pattern.value_namespace = name_space;
        string_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-input")
    {
        string_input = value;
        string_input.value_namespace = name_space;
        string_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-match")
    {
        string_match = value;
        string_match.value_namespace = name_space;
        string_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-submatch1")
    {
        string_submatch1 = value;
        string_submatch1.value_namespace = name_space;
        string_submatch1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-submatch2")
    {
        string_submatch2 = value;
        string_submatch2.value_namespace = name_space;
        string_submatch2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-submatch3")
    {
        string_submatch3 = value;
        string_submatch3.value_namespace = name_space;
        string_submatch3.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Regexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-pattern")
    {
        string_pattern.yfilter = yfilter;
    }
    if(value_path == "string-input")
    {
        string_input.yfilter = yfilter;
    }
    if(value_path == "string-match")
    {
        string_match.yfilter = yfilter;
    }
    if(value_path == "string-submatch1")
    {
        string_submatch1.yfilter = yfilter;
    }
    if(value_path == "string-submatch2")
    {
        string_submatch2.yfilter = yfilter;
    }
    if(value_path == "string-submatch3")
    {
        string_submatch3.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Regexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-pattern" || name == "string-input" || name == "string-match" || name == "string-submatch1" || name == "string-submatch2" || name == "string-submatch3")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::SnmpTrap::SnmpTrap()
    :
    intdata1{YType::int32, "intdata1"},
    intdata2{YType::int32, "intdata2"},
    strdata{YType::str, "strdata"}
{

    yang_name = "snmp-trap"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Event::Manager::Applet::Action::SnmpTrap::~SnmpTrap()
{
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_data() const
{
    if (is_presence_container) return true;
    return intdata1.is_set
	|| intdata2.is_set
	|| strdata.is_set;
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intdata1.yfilter)
	|| ydk::is_set(intdata2.yfilter)
	|| ydk::is_set(strdata.yfilter);
}

std::string Native::Event::Manager::Applet::Action::SnmpTrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::SnmpTrap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intdata1.is_set || is_set(intdata1.yfilter)) leaf_name_data.push_back(intdata1.get_name_leafdata());
    if (intdata2.is_set || is_set(intdata2.yfilter)) leaf_name_data.push_back(intdata2.get_name_leafdata());
    if (strdata.is_set || is_set(strdata.yfilter)) leaf_name_data.push_back(strdata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::SnmpTrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::SnmpTrap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::SnmpTrap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intdata1")
    {
        intdata1 = value;
        intdata1.value_namespace = name_space;
        intdata1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intdata2")
    {
        intdata2 = value;
        intdata2.value_namespace = name_space;
        intdata2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strdata")
    {
        strdata = value;
        strdata.value_namespace = name_space;
        strdata.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::SnmpTrap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intdata1")
    {
        intdata1.yfilter = yfilter;
    }
    if(value_path == "intdata2")
    {
        intdata2.yfilter = yfilter;
    }
    if(value_path == "strdata")
    {
        strdata.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intdata1" || name == "intdata2" || name == "strdata")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::String::String()
    :
    trim{YType::str, "trim"}
{

    yang_name = "string"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::String::~String()
{
}

bool Native::Event::Manager::Applet::Action::String::has_data() const
{
    if (is_presence_container) return true;
    return trim.is_set;
}

bool Native::Event::Manager::Applet::Action::String::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trim.yfilter);
}

std::string Native::Event::Manager::Applet::Action::String::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::String::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trim.is_set || is_set(trim.yfilter)) leaf_name_data.push_back(trim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::String::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::String::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::String::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trim")
    {
        trim = value;
        trim.value_namespace = name_space;
        trim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::String::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trim")
    {
        trim.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::String::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trim")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Syslog::Syslog()
    :
    facility{YType::str, "facility"},
    msg{YType::str, "msg"},
    priority{YType::str, "priority"}
{

    yang_name = "syslog"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Action::Syslog::~Syslog()
{
}

bool Native::Event::Manager::Applet::Action::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return facility.is_set
	|| msg.is_set
	|| priority.is_set;
}

bool Native::Event::Manager::Applet::Action::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(msg.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (msg.is_set || is_set(msg.yfilter)) leaf_name_data.push_back(msg.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Action::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Action::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Action::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg")
    {
        msg = value;
        msg.value_namespace = name_space;
        msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "msg")
    {
        msg.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "facility" || name == "msg" || name == "priority")
        return true;
    return false;
}

Native::Event::Manager::Applet::Trigger::Trigger()
{

    yang_name = "trigger"; yang_parent_name = "applet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Event::Manager::Applet::Trigger::~Trigger()
{
}

bool Native::Event::Manager::Applet::Trigger::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Event::Manager::Applet::Trigger::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Event::Manager::Applet::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Event::Manager::Applet::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Event::Manager::Applet::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Event::Manager::Applet::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Template::Template()
    :
    template_details(this, {"template_name"})
    , ip_camera_interface_template(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE>())
    , lap_interface_template(std::make_shared<Native::Template::LAPINTERFACETEMPLATE>())
    , ap_interface_template(std::make_shared<Native::Template::APINTERFACETEMPLATE>())
    , dmp_interface_template(nullptr) // presence node
    , ip_phone_interface_template(nullptr) // presence node
    , msp_camera_interface_template(std::make_shared<Native::Template::MSPCAMERAINTERFACETEMPLATE>())
    , msp_vc_interface_template(std::make_shared<Native::Template::MSPVCINTERFACETEMPLATE>())
    , printer_interface_template(std::make_shared<Native::Template::PRINTERINTERFACETEMPLATE>())
    , router_interface_template(std::make_shared<Native::Template::ROUTERINTERFACETEMPLATE>())
    , switch_interface_template(std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE>())
    , tp_interface_template(std::make_shared<Native::Template::TPINTERFACETEMPLATE>())
{
    ip_camera_interface_template->parent = this;
    lap_interface_template->parent = this;
    ap_interface_template->parent = this;
    msp_camera_interface_template->parent = this;
    msp_vc_interface_template->parent = this;
    printer_interface_template->parent = this;
    router_interface_template->parent = this;
    switch_interface_template->parent = this;
    tp_interface_template->parent = this;

    yang_name = "template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::~Template()
{
}

bool Native::Template::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<template_details.len(); index++)
    {
        if(template_details[index]->has_data())
            return true;
    }
    return (ip_camera_interface_template !=  nullptr && ip_camera_interface_template->has_data())
	|| (lap_interface_template !=  nullptr && lap_interface_template->has_data())
	|| (ap_interface_template !=  nullptr && ap_interface_template->has_data())
	|| (dmp_interface_template !=  nullptr && dmp_interface_template->has_data())
	|| (ip_phone_interface_template !=  nullptr && ip_phone_interface_template->has_data())
	|| (msp_camera_interface_template !=  nullptr && msp_camera_interface_template->has_data())
	|| (msp_vc_interface_template !=  nullptr && msp_vc_interface_template->has_data())
	|| (printer_interface_template !=  nullptr && printer_interface_template->has_data())
	|| (router_interface_template !=  nullptr && router_interface_template->has_data())
	|| (switch_interface_template !=  nullptr && switch_interface_template->has_data())
	|| (tp_interface_template !=  nullptr && tp_interface_template->has_data());
}

bool Native::Template::has_operation() const
{
    for (std::size_t index=0; index<template_details.len(); index++)
    {
        if(template_details[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip_camera_interface_template !=  nullptr && ip_camera_interface_template->has_operation())
	|| (lap_interface_template !=  nullptr && lap_interface_template->has_operation())
	|| (ap_interface_template !=  nullptr && ap_interface_template->has_operation())
	|| (dmp_interface_template !=  nullptr && dmp_interface_template->has_operation())
	|| (ip_phone_interface_template !=  nullptr && ip_phone_interface_template->has_operation())
	|| (msp_camera_interface_template !=  nullptr && msp_camera_interface_template->has_operation())
	|| (msp_vc_interface_template !=  nullptr && msp_vc_interface_template->has_operation())
	|| (printer_interface_template !=  nullptr && printer_interface_template->has_operation())
	|| (router_interface_template !=  nullptr && router_interface_template->has_operation())
	|| (switch_interface_template !=  nullptr && switch_interface_template->has_operation())
	|| (tp_interface_template !=  nullptr && tp_interface_template->has_operation());
}

std::string Native::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-template:template_details")
    {
        auto ent_ = std::make_shared<Native::Template::TemplateDetails>();
        ent_->parent = this;
        template_details.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE")
    {
        if(ip_camera_interface_template == nullptr)
        {
            ip_camera_interface_template = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE>();
        }
        return ip_camera_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE")
    {
        if(lap_interface_template == nullptr)
        {
            lap_interface_template = std::make_shared<Native::Template::LAPINTERFACETEMPLATE>();
        }
        return lap_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:AP_INTERFACE_TEMPLATE")
    {
        if(ap_interface_template == nullptr)
        {
            ap_interface_template = std::make_shared<Native::Template::APINTERFACETEMPLATE>();
        }
        return ap_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:DMP_INTERFACE_TEMPLATE")
    {
        if(dmp_interface_template == nullptr)
        {
            dmp_interface_template = std::make_shared<Native::Template::DMPINTERFACETEMPLATE>();
        }
        return dmp_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:IP_PHONE_INTERFACE_TEMPLATE")
    {
        if(ip_phone_interface_template == nullptr)
        {
            ip_phone_interface_template = std::make_shared<Native::Template::IPPHONEINTERFACETEMPLATE>();
        }
        return ip_phone_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:MSP_CAMERA_INTERFACE_TEMPLATE")
    {
        if(msp_camera_interface_template == nullptr)
        {
            msp_camera_interface_template = std::make_shared<Native::Template::MSPCAMERAINTERFACETEMPLATE>();
        }
        return msp_camera_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:MSP_VC_INTERFACE_TEMPLATE")
    {
        if(msp_vc_interface_template == nullptr)
        {
            msp_vc_interface_template = std::make_shared<Native::Template::MSPVCINTERFACETEMPLATE>();
        }
        return msp_vc_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:PRINTER_INTERFACE_TEMPLATE")
    {
        if(printer_interface_template == nullptr)
        {
            printer_interface_template = std::make_shared<Native::Template::PRINTERINTERFACETEMPLATE>();
        }
        return printer_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:ROUTER_INTERFACE_TEMPLATE")
    {
        if(router_interface_template == nullptr)
        {
            router_interface_template = std::make_shared<Native::Template::ROUTERINTERFACETEMPLATE>();
        }
        return router_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:SWITCH_INTERFACE_TEMPLATE")
    {
        if(switch_interface_template == nullptr)
        {
            switch_interface_template = std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE>();
        }
        return switch_interface_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE")
    {
        if(tp_interface_template == nullptr)
        {
            tp_interface_template = std::make_shared<Native::Template::TPINTERFACETEMPLATE>();
        }
        return tp_interface_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : template_details.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ip_camera_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE"] = ip_camera_interface_template;
    }

    if(lap_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE"] = lap_interface_template;
    }

    if(ap_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:AP_INTERFACE_TEMPLATE"] = ap_interface_template;
    }

    if(dmp_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:DMP_INTERFACE_TEMPLATE"] = dmp_interface_template;
    }

    if(ip_phone_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:IP_PHONE_INTERFACE_TEMPLATE"] = ip_phone_interface_template;
    }

    if(msp_camera_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:MSP_CAMERA_INTERFACE_TEMPLATE"] = msp_camera_interface_template;
    }

    if(msp_vc_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:MSP_VC_INTERFACE_TEMPLATE"] = msp_vc_interface_template;
    }

    if(printer_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:PRINTER_INTERFACE_TEMPLATE"] = printer_interface_template;
    }

    if(router_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:ROUTER_INTERFACE_TEMPLATE"] = router_interface_template;
    }

    if(switch_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:SWITCH_INTERFACE_TEMPLATE"] = switch_interface_template;
    }

    if(tp_interface_template != nullptr)
    {
        _children["Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE"] = tp_interface_template;
    }

    return _children;
}

void Native::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template_details" || name == "IP_CAMERA_INTERFACE_TEMPLATE" || name == "LAP_INTERFACE_TEMPLATE" || name == "AP_INTERFACE_TEMPLATE" || name == "DMP_INTERFACE_TEMPLATE" || name == "IP_PHONE_INTERFACE_TEMPLATE" || name == "MSP_CAMERA_INTERFACE_TEMPLATE" || name == "MSP_VC_INTERFACE_TEMPLATE" || name == "PRINTER_INTERFACE_TEMPLATE" || name == "ROUTER_INTERFACE_TEMPLATE" || name == "SWITCH_INTERFACE_TEMPLATE" || name == "TP_INTERFACE_TEMPLATE")
        return true;
    return false;
}

Native::Template::TemplateDetails::TemplateDetails()
    :
    template_name{YType::str, "template_name"},
    load_interval{YType::uint16, "load-interval"}
        ,
    ethernet(std::make_shared<Native::Template::TemplateDetails::Ethernet>())
    , service_policy(std::make_shared<Native::Template::TemplateDetails::ServicePolicy>())
    , switchport(std::make_shared<Native::Template::TemplateDetails::Switchport>())
    , spanning_tree(nullptr) // presence node
    , storm_control(std::make_shared<Native::Template::TemplateDetails::StormControl>())
    , ip(std::make_shared<Native::Template::TemplateDetails::Ip>())
{
    ethernet->parent = this;
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "template_details"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TemplateDetails::~TemplateDetails()
{
}

bool Native::Template::TemplateDetails::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| load_interval.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Template::TemplateDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Template::TemplateDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TemplateDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-template:template_details";
    ADD_KEY_TOKEN(template_name, "template_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Template::TemplateDetails::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template::TemplateDetails::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template::TemplateDetails::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template::TemplateDetails::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template::TemplateDetails::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template::TemplateDetails::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        _children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Template::TemplateDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template_name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template_name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "template_name" || name == "load-interval")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Ethernet()
    :
    oam(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam>())
{
    oam->parent = this;

    yang_name = "ethernet"; yang_parent_name = "template_details"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::~Ethernet()
{
}

bool Native::Template::TemplateDetails::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (oam !=  nullptr && oam->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oam != nullptr)
    {
        _children["oam"] = oam;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::Oam()
    :
    link_monitor(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor>())
    , remote_failure(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure>())
{
    link_monitor->parent = this;
    remote_failure->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::~Oam()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::has_data() const
{
    if (is_presence_container) return true;
    return (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::has_operation() const
{
    return is_set(yfilter)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_monitor != nullptr)
    {
        _children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        _children["remote-failure"] = remote_failure;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitor" || name == "remote-failure")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    window{YType::uint16, "window"}
        ,
    frame(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame>())
    , frame_period(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod>())
    , frame_seconds(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds>())
    , high_threshold(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold>())
    , receive_crc(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
    , symbol_period(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
    , transmit_crc(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc>())
{
    frame->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    high_threshold->parent = this;
    receive_crc->parent = this;
    symbol_period->parent = this;
    transmit_crc->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data())
	|| (transmit_crc !=  nullptr && transmit_crc->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation())
	|| (transmit_crc !=  nullptr && transmit_crc->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    if(child_yang_name == "transmit-crc")
    {
        if(transmit_crc == nullptr)
        {
            transmit_crc = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc>();
        }
        return transmit_crc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frame != nullptr)
    {
        _children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        _children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        _children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        _children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        _children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        _children["symbol-period"] = symbol_period;
    }

    if(transmit_crc != nullptr)
    {
        _children["transmit-crc"] = transmit_crc;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "high-threshold" || name == "receive-crc" || name == "symbol-period" || name == "transmit-crc" || name == "window")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    threshold(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return high_range.is_set
	|| none.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-range")
    {
        high_range = value;
        high_range.value_namespace = name_space;
        high_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-range")
    {
        high_range.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return high_range.is_set
	|| none.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-range")
    {
        high_range = value;
        high_range.value_namespace = name_space;
        high_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-range")
    {
        high_range.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return high_range.is_set
	|| none.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-range")
    {
        high_range = value;
        high_range.value_namespace = name_space;
        high_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-range")
    {
        high_range.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "high-threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return high_range.is_set
	|| none.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-range")
    {
        high_range = value;
        high_range.value_namespace = name_space;
        high_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-range")
    {
        high_range.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return high_range.is_set
	|| none.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-range")
    {
        high_range = value;
        high_range.value_namespace = name_space;
        high_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-range")
    {
        high_range.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::TransmitCrc()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "transmit-crc"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::~TransmitCrc()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "transmit-crc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::~Threshold()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::~High()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return high_range.is_set
	|| none.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-range")
    {
        high_range = value;
        high_range.value_namespace = name_space;
        high_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-range")
    {
        high_range.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent>())
    , dying_gasp(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp>())
    , link_fault(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;
    dying_gasp->parent = this;
    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::has_data() const
{
    if (is_presence_container) return true;
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(critical_event != nullptr)
    {
        _children["critical-event"] = critical_event;
    }

    if(dying_gasp != nullptr)
    {
        _children["dying-gasp"] = dying_gasp;
    }

    if(link_fault != nullptr)
    {
        _children["link-fault"] = link_fault;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "critical-event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{

    yang_name = "dying-gasp"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "dying-gasp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{

    yang_name = "link-fault"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "link-fault"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Template::TemplateDetails::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template::TemplateDetails::ServicePolicy::Input>())
    , output(std::make_shared<Native::Template::TemplateDetails::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "template_details"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template::TemplateDetails::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template::TemplateDetails::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template::TemplateDetails::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template::TemplateDetails::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template::TemplateDetails::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Template::TemplateDetails::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Template::TemplateDetails::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::ServicePolicy::Input::~Input()
{
}

bool Native::Template::TemplateDetails::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::TemplateDetails::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::TemplateDetails::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::TemplateDetails::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::ServicePolicy::Output::~Output()
{
}

bool Native::Template::TemplateDetails::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::TemplateDetails::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::TemplateDetails::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
        ,
    mode(std::make_shared<Native::Template::TemplateDetails::Switchport::Mode>())
    , block(std::make_shared<Native::Template::TemplateDetails::Switchport::Block>())
    , port_security(nullptr) // presence node
    , access(std::make_shared<Native::Template::TemplateDetails::Switchport::Access>())
    , voice(std::make_shared<Native::Template::TemplateDetails::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "template_details"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::~Switchport()
{
}

bool Native::Template::TemplateDetails::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template::TemplateDetails::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template::TemplateDetails::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template::TemplateDetails::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template::TemplateDetails::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template::TemplateDetails::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template::TemplateDetails::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(block != nullptr)
    {
        _children["block"] = block;
    }

    if(port_security != nullptr)
    {
        _children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(voice != nullptr)
    {
        _children["voice"] = voice;
    }

    return _children;
}

void Native::Template::TemplateDetails::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::Mode::~Mode()
{
}

bool Native::Template::TemplateDetails::Switchport::Mode::has_data() const
{
    if (is_presence_container) return true;
    return trunk.is_set
	|| access.is_set;
}

bool Native::Template::TemplateDetails::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::Block::~Block()
{
}

bool Native::Template::TemplateDetails::Switchport::Block::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Template::TemplateDetails::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Aging>())
    , maximum(std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum>())
    , violation(std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template::TemplateDetails::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aging != nullptr)
    {
        _children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        _children["violation"] = violation;
    }

    return _children;
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
        ,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::has_data() const
{
    if (is_presence_container) return true;
    return inactivity.is_set;
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Maximum()
    :
    range(this, {"range"})
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
        ,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return access.is_set;
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::Violation()
    :
    protect{YType::empty, "protect"},
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::has_data() const
{
    if (is_presence_container) return true;
    return protect.is_set
	|| restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protect.yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protect.is_set || is_set(protect.yfilter)) leaf_name_data.push_back(protect.get_name_leafdata());
    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protect")
    {
        protect = value;
        protect.value_namespace = name_space;
        protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protect")
    {
        protect.yfilter = yfilter;
    }
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect" || name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::Access::~Access()
{
}

bool Native::Template::TemplateDetails::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::TemplateDetails::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::TemplateDetails::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Switchport::Voice::~Voice()
{
}

bool Native::Template::TemplateDetails::Switchport::Voice::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::TemplateDetails::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::TemplateDetails::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::TemplateDetails::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
        ,
    bpduguard(std::make_shared<Native::Template::TemplateDetails::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
{
    bpduguard->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "template_details"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TemplateDetails::SpanningTree::~SpanningTree()
{
}

bool Native::Template::TemplateDetails::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template::TemplateDetails::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template::TemplateDetails::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template::TemplateDetails::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template::TemplateDetails::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    return _children;
}

void Native::Template::TemplateDetails::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::Template::TemplateDetails::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template::TemplateDetails::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Template::TemplateDetails::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Template::TemplateDetails::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Template::TemplateDetails::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TemplateDetails::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template::TemplateDetails::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template::TemplateDetails::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::Template::TemplateDetails::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast>())
    , multicast(std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast>())
    , action(std::make_shared<Native::Template::TemplateDetails::StormControl::Action>())
{
    broadcast->parent = this;
    multicast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "template_details"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::~StormControl()
{
}

bool Native::Template::TemplateDetails::StormControl::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::Template::TemplateDetails::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::TemplateDetails::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::TemplateDetails::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Template::TemplateDetails::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "multicast" || name == "action")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::TemplateDetails::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Template::TemplateDetails::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps>())
    , bps(std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::TemplateDetails::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    return _children;
}

void Native::Template::TemplateDetails::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Multicast::~Multicast()
{
}

bool Native::Template::TemplateDetails::StormControl::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::TemplateDetails::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::TemplateDetails::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Template::TemplateDetails::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps>())
    , bps(std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Multicast::Level::~Level()
{
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::TemplateDetails::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    return _children;
}

void Native::Template::TemplateDetails::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::TemplateDetails::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::StormControl::Action::~Action()
{
}

bool Native::Template::TemplateDetails::StormControl::Action::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template::TemplateDetails::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Template::TemplateDetails::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template::TemplateDetails::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "template_details"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ip::~Ip()
{
}

bool Native::Template::TemplateDetails::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template::TemplateDetails::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template::TemplateDetails::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template::TemplateDetails::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template::TemplateDetails::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template::TemplateDetails::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template::TemplateDetails::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template::TemplateDetails::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template::TemplateDetails::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snooping != nullptr)
    {
        _children["snooping"] = snooping;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TemplateDetails::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TemplateDetails::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template::TemplateDetails::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Template::TemplateDetails::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template::TemplateDetails::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Template::TemplateDetails::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Template::TemplateDetails::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::IPCAMERAINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
        ,
    service_policy(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy>())
    , switchport(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport>())
    , spanning_tree(nullptr) // presence node
    , storm_control(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl>())
    , ip(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "IP_CAMERA_INTERFACE_TEMPLATE"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::~IPCAMERAINTERFACETEMPLATE()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::has_data() const
{
    if (is_presence_container) return true;
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        _children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input>())
    , output(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
        ,
    mode(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode>())
    , block(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block>())
    , port_security(nullptr) // presence node
    , access(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access>())
    , voice(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(block != nullptr)
    {
        _children["block"] = block;
    }

    if(port_security != nullptr)
    {
        _children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(voice != nullptr)
    {
        _children["voice"] = voice;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    if (is_presence_container) return true;
    return trunk.is_set
	|| access.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
    , maximum(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
    , violation(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aging != nullptr)
    {
        _children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        _children["violation"] = violation;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
        ,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    if (is_presence_container) return true;
    return inactivity.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
    :
    range(this, {"range"})
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
        ,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return access.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    protect{YType::empty, "protect"},
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    if (is_presence_container) return true;
    return protect.is_set
	|| restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protect.yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protect.is_set || is_set(protect.yfilter)) leaf_name_data.push_back(protect.get_name_leafdata());
    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protect")
    {
        protect = value;
        protect.value_namespace = name_space;
        protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protect")
    {
        protect.yfilter = yfilter;
    }
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect" || name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
        ,
    bpduguard(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
{
    bpduguard->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast>())
    , multicast(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast>())
    , action(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    multicast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "multicast" || name == "action")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
    , bps(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::~Multicast()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps>())
    , bps(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::~Level()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/multicast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/multicast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snooping != nullptr)
    {
        _children["snooping"] = snooping;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:IP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Template::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::LAPINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
        ,
    service_policy(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::ServicePolicy>())
    , switchport(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport>())
    , spanning_tree(nullptr) // presence node
    , storm_control(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::StormControl>())
    , ip(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "LAP_INTERFACE_TEMPLATE"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::~LAPINTERFACETEMPLATE()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::has_data() const
{
    if (is_presence_container) return true;
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Template::LAPINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Template::LAPINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        _children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input>())
    , output(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "LAP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
        ,
    mode(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode>())
    , block(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Block>())
    , port_security(nullptr) // presence node
    , access(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Access>())
    , voice(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "LAP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(block != nullptr)
    {
        _children["block"] = block;
    }

    if(port_security != nullptr)
    {
        _children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(voice != nullptr)
    {
        _children["voice"] = voice;
    }

    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    if (is_presence_container) return true;
    return trunk.is_set
	|| access.is_set;
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
    , maximum(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
    , violation(std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aging != nullptr)
    {
        _children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        _children["violation"] = violation;
    }

    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
        ,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    if (is_presence_container) return true;
    return inactivity.is_set;
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
    :
    range(this, {"range"})
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

const Enum::YLeaf Native::Event::Manager::Applet::Authorization::bypass {0, "bypass"};

const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::any {0, "any"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::down {1, "down"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::up {2, "up"};

const Enum::YLeaf Native::Event::Manager::Applet::Event_::None::Sync::yes {0, "yes"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::None::Sync::no {1, "no"};

const Enum::YLeaf Native::Event::Manager::Applet::Event_::Oir::Event_::all {0, "all"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Oir::Event_::insert {1, "insert"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Oir::Event_::removal {2, "removal"};

const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::counter {0, "counter"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::gauge {1, "gauge"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::int_ {2, "int"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::ipv4 {3, "ipv4"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::octet {4, "octet"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::string {5, "string"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::uint {6, "uint"};


}
}

