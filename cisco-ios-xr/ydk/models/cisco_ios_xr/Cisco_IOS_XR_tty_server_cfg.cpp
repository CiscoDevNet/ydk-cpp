
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_server_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_server_cfg {

Tty::Tty()
    :
    tty_lines(std::make_shared<Tty::TtyLines>())
{
    tty_lines->parent = this;

    yang_name = "tty"; yang_parent_name = "Cisco-IOS-XR-tty-server-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Tty::~Tty()
{
}

bool Tty::has_data() const
{
    if (is_presence_container) return true;
    return (tty_lines !=  nullptr && tty_lines->has_data());
}

bool Tty::has_operation() const
{
    return is_set(yfilter)
	|| (tty_lines !=  nullptr && tty_lines->has_operation());
}

std::string Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-cfg:tty";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tty-lines")
    {
        if(tty_lines == nullptr)
        {
            tty_lines = std::make_shared<Tty::TtyLines>();
        }
        return tty_lines;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tty_lines != nullptr)
    {
        _children["tty-lines"] = tty_lines;
    }

    return _children;
}

void Tty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Tty::clone_ptr() const
{
    return std::make_shared<Tty>();
}

std::string Tty::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Tty::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Tty::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Tty::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Tty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tty-lines")
        return true;
    return false;
}

Tty::TtyLines::TtyLines()
    :
    tty_line(this, {"name"})
{

    yang_name = "tty-lines"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false; 
}

Tty::TtyLines::~TtyLines()
{
}

bool Tty::TtyLines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tty_line.len(); index++)
    {
        if(tty_line[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::TtyLines::has_operation() const
{
    for (std::size_t index=0; index<tty_line.len(); index++)
    {
        if(tty_line[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tty::TtyLines::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-cfg:tty/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::TtyLines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty-lines";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tty-line")
    {
        auto ent_ = std::make_shared<Tty::TtyLines::TtyLine>();
        ent_->parent = this;
        tty_line.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tty_line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Tty::TtyLines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::TtyLines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::TtyLines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tty-line")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::TtyLine()
    :
    name{YType::str, "name"}
        ,
    general(std::make_shared<Tty::TtyLines::TtyLine::General>())
    , telnet(std::make_shared<Tty::TtyLines::TtyLine::Telnet>())
    , aaa(std::make_shared<Tty::TtyLines::TtyLine::Aaa>())
    , exec(std::make_shared<Tty::TtyLines::TtyLine::Exec>())
    , connection(std::make_shared<Tty::TtyLines::TtyLine::Connection>())
    , exec_mode(std::make_shared<Tty::TtyLines::TtyLine::ExecMode>())
{
    general->parent = this;
    telnet->parent = this;
    aaa->parent = this;
    exec->parent = this;
    connection->parent = this;
    exec_mode->parent = this;

    yang_name = "tty-line"; yang_parent_name = "tty-lines"; is_top_level_class = false; has_list_ancestor = false; 
}

Tty::TtyLines::TtyLine::~TtyLine()
{
}

bool Tty::TtyLines::TtyLine::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (general !=  nullptr && general->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (aaa !=  nullptr && aaa->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (exec_mode !=  nullptr && exec_mode->has_data());
}

bool Tty::TtyLines::TtyLine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (general !=  nullptr && general->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (exec_mode !=  nullptr && exec_mode->has_operation());
}

std::string Tty::TtyLines::TtyLine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-cfg:tty/tty-lines/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::TtyLines::TtyLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty-line";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "general")
    {
        if(general == nullptr)
        {
            general = std::make_shared<Tty::TtyLines::TtyLine::General>();
        }
        return general;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Tty::TtyLines::TtyLine::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Tty::TtyLines::TtyLine::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Tty::TtyLines::TtyLine::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "Cisco-IOS-XR-tty-management-cfg:connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Tty::TtyLines::TtyLine::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "Cisco-IOS-XR-tty-management-cfg:exec-mode")
    {
        if(exec_mode == nullptr)
        {
            exec_mode = std::make_shared<Tty::TtyLines::TtyLine::ExecMode>();
        }
        return exec_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(general != nullptr)
    {
        _children["general"] = general;
    }

    if(telnet != nullptr)
    {
        _children["telnet"] = telnet;
    }

    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    if(connection != nullptr)
    {
        _children["Cisco-IOS-XR-tty-management-cfg:connection"] = connection;
    }

    if(exec_mode != nullptr)
    {
        _children["Cisco-IOS-XR-tty-management-cfg:exec-mode"] = exec_mode;
    }

    return _children;
}

void Tty::TtyLines::TtyLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "general" || name == "telnet" || name == "aaa" || name == "exec" || name == "connection" || name == "exec-mode" || name == "name")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::General::General()
    :
    length{YType::uint32, "length"},
    absolute_timeout{YType::uint32, "absolute-timeout"},
    width{YType::uint32, "width"}
{

    yang_name = "general"; yang_parent_name = "tty-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::General::~General()
{
}

bool Tty::TtyLines::TtyLine::General::has_data() const
{
    if (is_presence_container) return true;
    return length.is_set
	|| absolute_timeout.is_set
	|| width.is_set;
}

bool Tty::TtyLines::TtyLine::General::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(absolute_timeout.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string Tty::TtyLines::TtyLine::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::General::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (absolute_timeout.is_set || is_set(absolute_timeout.yfilter)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::General::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::General::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
        absolute_timeout.value_namespace = name_space;
        absolute_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::General::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::General::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length" || name == "absolute-timeout" || name == "width")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "tty-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Telnet::~Telnet()
{
}

bool Tty::TtyLines::TtyLine::Telnet::has_data() const
{
    if (is_presence_container) return true;
    return transparent.is_set;
}

bool Tty::TtyLines::TtyLine::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Tty::TtyLines::TtyLine::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Aaa::Aaa()
    :
    login_timeout{YType::uint32, "login-timeout"},
    secret{YType::str, "secret"},
    password{YType::str, "password"}
        ,
    user_groups(std::make_shared<Tty::TtyLines::TtyLine::Aaa::UserGroups>())
    , authorization(std::make_shared<Tty::TtyLines::TtyLine::Aaa::Authorization>())
    , authentication(std::make_shared<Tty::TtyLines::TtyLine::Aaa::Authentication>())
    , accounting(std::make_shared<Tty::TtyLines::TtyLine::Aaa::Accounting>())
{
    user_groups->parent = this;
    authorization->parent = this;
    authentication->parent = this;
    accounting->parent = this;

    yang_name = "aaa"; yang_parent_name = "tty-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Aaa::~Aaa()
{
}

bool Tty::TtyLines::TtyLine::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return login_timeout.is_set
	|| secret.is_set
	|| password.is_set
	|| (user_groups !=  nullptr && user_groups->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (accounting !=  nullptr && accounting->has_data());
}

bool Tty::TtyLines::TtyLine::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login_timeout.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(password.yfilter)
	|| (user_groups !=  nullptr && user_groups->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string Tty::TtyLines::TtyLine::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login_timeout.is_set || is_set(login_timeout.yfilter)) leaf_name_data.push_back(login_timeout.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user-groups")
    {
        if(user_groups == nullptr)
        {
            user_groups = std::make_shared<Tty::TtyLines::TtyLine::Aaa::UserGroups>();
        }
        return user_groups;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Tty::TtyLines::TtyLine::Aaa::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Tty::TtyLines::TtyLine::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Tty::TtyLines::TtyLine::Aaa::Accounting>();
        }
        return accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(user_groups != nullptr)
    {
        _children["user-groups"] = user_groups;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    return _children;
}

void Tty::TtyLines::TtyLine::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login-timeout")
    {
        login_timeout = value;
        login_timeout.value_namespace = name_space;
        login_timeout.value_namespace_prefix = name_space_prefix;
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

void Tty::TtyLines::TtyLine::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login-timeout")
    {
        login_timeout.yfilter = yfilter;
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

bool Tty::TtyLines::TtyLine::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-groups" || name == "authorization" || name == "authentication" || name == "accounting" || name == "login-timeout" || name == "secret" || name == "password")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroups()
    :
    user_group(this, {"name"})
{

    yang_name = "user-groups"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::~UserGroups()
{
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user_group.len(); index++)
    {
        if(user_group[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::has_operation() const
{
    for (std::size_t index=0; index<user_group.len(); index++)
    {
        if(user_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tty::TtyLines::TtyLine::Aaa::UserGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Aaa::UserGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Aaa::UserGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user-group")
    {
        auto ent_ = std::make_shared<Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup>();
        ent_->parent = this;
        user_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Aaa::UserGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Tty::TtyLines::TtyLine::Aaa::UserGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::TtyLines::TtyLine::Aaa::UserGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-group")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::UserGroup()
    :
    name{YType::str, "name"},
    category{YType::str, "category"}
{

    yang_name = "user-group"; yang_parent_name = "user-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::~UserGroup()
{
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| category.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(category.yfilter);
}

std::string Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "category")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Aaa::Authorization::Authorization()
    :
    exec{YType::str, "exec"},
    event_manager{YType::str, "event-manager"},
    commands{YType::str, "commands"}
{

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Aaa::Authorization::~Authorization()
{
}

bool Tty::TtyLines::TtyLine::Aaa::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return exec.is_set
	|| event_manager.is_set
	|| commands.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter)
	|| ydk::is_set(event_manager.yfilter)
	|| ydk::is_set(commands.yfilter);
}

std::string Tty::TtyLines::TtyLine::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.yfilter)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (commands.is_set || is_set(commands.yfilter)) leaf_name_data.push_back(commands.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
        event_manager.value_namespace = name_space;
        event_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commands")
    {
        commands = value;
        commands.value_namespace = name_space;
        commands.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
    if(value_path == "event-manager")
    {
        event_manager.yfilter = yfilter;
    }
    if(value_path == "commands")
    {
        commands.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec" || name == "event-manager" || name == "commands")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Aaa::Authentication::Authentication()
    :
    login{YType::str, "login"}
{

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Aaa::Authentication::~Authentication()
{
}

bool Tty::TtyLines::TtyLine::Aaa::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return login.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Tty::TtyLines::TtyLine::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Aaa::Accounting::Accounting()
    :
    exec{YType::str, "exec"},
    commands{YType::str, "commands"}
{

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Aaa::Accounting::~Accounting()
{
}

bool Tty::TtyLines::TtyLine::Aaa::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return exec.is_set
	|| commands.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter)
	|| ydk::is_set(commands.yfilter);
}

std::string Tty::TtyLines::TtyLine::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());
    if (commands.is_set || is_set(commands.yfilter)) leaf_name_data.push_back(commands.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commands")
    {
        commands = value;
        commands.value_namespace = name_space;
        commands.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
    if(value_path == "commands")
    {
        commands.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec" || name == "commands")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Exec::Exec()
    :
    time_stamp{YType::boolean, "time-stamp"}
        ,
    timeout(nullptr) // presence node
{

    yang_name = "exec"; yang_parent_name = "tty-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Exec::~Exec()
{
}

bool Tty::TtyLines::TtyLine::Exec::has_data() const
{
    if (is_presence_container) return true;
    return time_stamp.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Tty::TtyLines::TtyLine::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Tty::TtyLines::TtyLine::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Tty::TtyLines::TtyLine::Exec::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void Tty::TtyLines::TtyLine::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "time-stamp")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Exec::Timeout::Timeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "timeout"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Tty::TtyLines::TtyLine::Exec::Timeout::~Timeout()
{
}

bool Tty::TtyLines::TtyLine::Exec::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return minutes.is_set
	|| seconds.is_set;
}

bool Tty::TtyLines::TtyLine::Exec::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Tty::TtyLines::TtyLine::Exec::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Exec::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Exec::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Exec::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Exec::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Tty::TtyLines::TtyLine::Exec::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Exec::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Connection::Connection()
    :
    disconnect_character{YType::str, "disconnect-character"},
    acl_in{YType::str, "acl-in"},
    acl_out{YType::str, "acl-out"},
    cli_white_space_completion{YType::empty, "cli-white-space-completion"},
    session_limit{YType::uint32, "session-limit"},
    escape_character{YType::str, "escape-character"},
    transport_preferred{YType::enumeration, "transport-preferred"}
        ,
    transport_input(std::make_shared<Tty::TtyLines::TtyLine::Connection::TransportInput>())
    , transport_output(nullptr) // presence node
    , session_timeout(nullptr) // presence node
{
    transport_input->parent = this;

    yang_name = "connection"; yang_parent_name = "tty-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Connection::~Connection()
{
}

bool Tty::TtyLines::TtyLine::Connection::has_data() const
{
    if (is_presence_container) return true;
    return disconnect_character.is_set
	|| acl_in.is_set
	|| acl_out.is_set
	|| cli_white_space_completion.is_set
	|| session_limit.is_set
	|| escape_character.is_set
	|| transport_preferred.is_set
	|| (transport_input !=  nullptr && transport_input->has_data())
	|| (transport_output !=  nullptr && transport_output->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data());
}

bool Tty::TtyLines::TtyLine::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disconnect_character.yfilter)
	|| ydk::is_set(acl_in.yfilter)
	|| ydk::is_set(acl_out.yfilter)
	|| ydk::is_set(cli_white_space_completion.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(escape_character.yfilter)
	|| ydk::is_set(transport_preferred.yfilter)
	|| (transport_input !=  nullptr && transport_input->has_operation())
	|| (transport_output !=  nullptr && transport_output->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation());
}

std::string Tty::TtyLines::TtyLine::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cfg:connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnect_character.is_set || is_set(disconnect_character.yfilter)) leaf_name_data.push_back(disconnect_character.get_name_leafdata());
    if (acl_in.is_set || is_set(acl_in.yfilter)) leaf_name_data.push_back(acl_in.get_name_leafdata());
    if (acl_out.is_set || is_set(acl_out.yfilter)) leaf_name_data.push_back(acl_out.get_name_leafdata());
    if (cli_white_space_completion.is_set || is_set(cli_white_space_completion.yfilter)) leaf_name_data.push_back(cli_white_space_completion.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (escape_character.is_set || is_set(escape_character.yfilter)) leaf_name_data.push_back(escape_character.get_name_leafdata());
    if (transport_preferred.is_set || is_set(transport_preferred.yfilter)) leaf_name_data.push_back(transport_preferred.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-input")
    {
        if(transport_input == nullptr)
        {
            transport_input = std::make_shared<Tty::TtyLines::TtyLine::Connection::TransportInput>();
        }
        return transport_input;
    }

    if(child_yang_name == "transport-output")
    {
        if(transport_output == nullptr)
        {
            transport_output = std::make_shared<Tty::TtyLines::TtyLine::Connection::TransportOutput>();
        }
        return transport_output;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Tty::TtyLines::TtyLine::Connection::SessionTimeout>();
        }
        return session_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport_input != nullptr)
    {
        _children["transport-input"] = transport_input;
    }

    if(transport_output != nullptr)
    {
        _children["transport-output"] = transport_output;
    }

    if(session_timeout != nullptr)
    {
        _children["session-timeout"] = session_timeout;
    }

    return _children;
}

void Tty::TtyLines::TtyLine::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disconnect-character")
    {
        disconnect_character = value;
        disconnect_character.value_namespace = name_space;
        disconnect_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-in")
    {
        acl_in = value;
        acl_in.value_namespace = name_space;
        acl_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-out")
    {
        acl_out = value;
        acl_out.value_namespace = name_space;
        acl_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cli-white-space-completion")
    {
        cli_white_space_completion = value;
        cli_white_space_completion.value_namespace = name_space;
        cli_white_space_completion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "escape-character")
    {
        escape_character = value;
        escape_character.value_namespace = name_space;
        escape_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-preferred")
    {
        transport_preferred = value;
        transport_preferred.value_namespace = name_space;
        transport_preferred.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disconnect-character")
    {
        disconnect_character.yfilter = yfilter;
    }
    if(value_path == "acl-in")
    {
        acl_in.yfilter = yfilter;
    }
    if(value_path == "acl-out")
    {
        acl_out.yfilter = yfilter;
    }
    if(value_path == "cli-white-space-completion")
    {
        cli_white_space_completion.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "escape-character")
    {
        escape_character.yfilter = yfilter;
    }
    if(value_path == "transport-preferred")
    {
        transport_preferred.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-input" || name == "transport-output" || name == "session-timeout" || name == "disconnect-character" || name == "acl-in" || name == "acl-out" || name == "cli-white-space-completion" || name == "session-limit" || name == "escape-character" || name == "transport-preferred")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Connection::TransportInput::TransportInput()
    :
    select{YType::enumeration, "select"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    none{YType::uint32, "none"}
{

    yang_name = "transport-input"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::Connection::TransportInput::~TransportInput()
{
}

bool Tty::TtyLines::TtyLine::Connection::TransportInput::has_data() const
{
    if (is_presence_container) return true;
    return select.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| none.is_set;
}

bool Tty::TtyLines::TtyLine::Connection::TransportInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(select.yfilter)
	|| ydk::is_set(protocol1.yfilter)
	|| ydk::is_set(protocol2.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Tty::TtyLines::TtyLine::Connection::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Connection::TransportInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.yfilter)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.yfilter)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Connection::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Connection::TransportInput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Connection::TransportInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
        protocol1.value_namespace = name_space;
        protocol1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
        protocol2.value_namespace = name_space;
        protocol2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Connection::TransportInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
    if(value_path == "protocol1")
    {
        protocol1.yfilter = yfilter;
    }
    if(value_path == "protocol2")
    {
        protocol2.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Connection::TransportInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "protocol1" || name == "protocol2" || name == "none")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Connection::TransportOutput::TransportOutput()
    :
    select{YType::enumeration, "select"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    none{YType::uint32, "none"}
{

    yang_name = "transport-output"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Tty::TtyLines::TtyLine::Connection::TransportOutput::~TransportOutput()
{
}

bool Tty::TtyLines::TtyLine::Connection::TransportOutput::has_data() const
{
    if (is_presence_container) return true;
    return select.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| none.is_set;
}

bool Tty::TtyLines::TtyLine::Connection::TransportOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(select.yfilter)
	|| ydk::is_set(protocol1.yfilter)
	|| ydk::is_set(protocol2.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Tty::TtyLines::TtyLine::Connection::TransportOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Connection::TransportOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.yfilter)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.yfilter)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Connection::TransportOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Connection::TransportOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Connection::TransportOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
        protocol1.value_namespace = name_space;
        protocol1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
        protocol2.value_namespace = name_space;
        protocol2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Connection::TransportOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
    if(value_path == "protocol1")
    {
        protocol1.yfilter = yfilter;
    }
    if(value_path == "protocol2")
    {
        protocol2.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Connection::TransportOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "protocol1" || name == "protocol2" || name == "none")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::Connection::SessionTimeout::SessionTimeout()
    :
    timeout{YType::uint32, "timeout"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "session-timeout"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Tty::TtyLines::TtyLine::Connection::SessionTimeout::~SessionTimeout()
{
}

bool Tty::TtyLines::TtyLine::Connection::SessionTimeout::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| direction.is_set;
}

bool Tty::TtyLines::TtyLine::Connection::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::Connection::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::Connection::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::Connection::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "direction")
        return true;
    return false;
}

Tty::TtyLines::TtyLine::ExecMode::ExecMode()
    :
    pager{YType::enumeration, "pager"}
{

    yang_name = "exec-mode"; yang_parent_name = "tty-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Tty::TtyLines::TtyLine::ExecMode::~ExecMode()
{
}

bool Tty::TtyLines::TtyLine::ExecMode::has_data() const
{
    if (is_presence_container) return true;
    return pager.is_set;
}

bool Tty::TtyLines::TtyLine::ExecMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pager.yfilter);
}

std::string Tty::TtyLines::TtyLine::ExecMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cfg:exec-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::TtyLines::TtyLine::ExecMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pager.is_set || is_set(pager.yfilter)) leaf_name_data.push_back(pager.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Tty::TtyLines::TtyLine::ExecMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Tty::TtyLines::TtyLine::ExecMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Tty::TtyLines::TtyLine::ExecMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pager")
    {
        pager = value;
        pager.value_namespace = name_space;
        pager.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::TtyLines::TtyLine::ExecMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pager")
    {
        pager.yfilter = yfilter;
    }
}

bool Tty::TtyLines::TtyLine::ExecMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pager")
        return true;
    return false;
}


}
}

