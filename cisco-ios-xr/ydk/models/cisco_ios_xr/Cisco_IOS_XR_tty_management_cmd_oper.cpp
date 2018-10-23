
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_management_cmd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_management_cmd_oper {

ShowUsers::ShowUsers()
    :
    sessions(std::make_shared<ShowUsers::Sessions>())
{
    sessions->parent = this;

    yang_name = "show-users"; yang_parent_name = "Cisco-IOS-XR-tty-management-cmd-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ShowUsers::~ShowUsers()
{
}

bool ShowUsers::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool ShowUsers::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string ShowUsers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cmd-oper:show-users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowUsers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowUsers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<ShowUsers::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowUsers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    return _children;
}

void ShowUsers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowUsers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ShowUsers::clone_ptr() const
{
    return std::make_shared<ShowUsers>();
}

std::string ShowUsers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ShowUsers::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ShowUsers::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ShowUsers::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ShowUsers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

ShowUsers::Sessions::Sessions()
    :
    session(this, {"session_id"})
{

    yang_name = "sessions"; yang_parent_name = "show-users"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowUsers::Sessions::~Sessions()
{
}

bool ShowUsers::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool ShowUsers::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowUsers::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cmd-oper:show-users/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowUsers::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowUsers::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowUsers::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<ShowUsers::Sessions::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowUsers::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowUsers::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowUsers::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowUsers::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

ShowUsers::Sessions::Session::Session()
    :
    session_id{YType::uint32, "session-id"},
    line{YType::str, "line"},
    user{YType::str, "user"},
    service{YType::str, "service"},
    conns{YType::str, "conns"},
    idle_string{YType::str, "idle-string"},
    location{YType::str, "location"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowUsers::Sessions::Session::~Session()
{
}

bool ShowUsers::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| line.is_set
	|| user.is_set
	|| service.is_set
	|| conns.is_set
	|| idle_string.is_set
	|| location.is_set;
}

bool ShowUsers::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(conns.yfilter)
	|| ydk::is_set(idle_string.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string ShowUsers::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cmd-oper:show-users/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowUsers::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowUsers::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (conns.is_set || is_set(conns.yfilter)) leaf_name_data.push_back(conns.get_name_leafdata());
    if (idle_string.is_set || is_set(idle_string.yfilter)) leaf_name_data.push_back(idle_string.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowUsers::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowUsers::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ShowUsers::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conns")
    {
        conns = value;
        conns.value_namespace = name_space;
        conns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-string")
    {
        idle_string = value;
        idle_string.value_namespace = name_space;
        idle_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void ShowUsers::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "conns")
    {
        conns.yfilter = yfilter;
    }
    if(value_path == "idle-string")
    {
        idle_string.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool ShowUsers::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "line" || name == "user" || name == "service" || name == "conns" || name == "idle-string" || name == "location")
        return true;
    return false;
}


}
}

