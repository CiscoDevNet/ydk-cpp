
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_tty_management_cmd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_management_cmd_oper {

ShowUsers::Sessions::Session::Session()
    :
    	session_id{YType::int32, "session-id"},
	 conns{YType::str, "conns"},
	 idle_string{YType::str, "idle-string"},
	 line{YType::str, "line"},
	 location{YType::str, "location"},
	 service{YType::str, "service"},
	 user{YType::str, "user"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

ShowUsers::Sessions::Session::~Session()
{
}

bool ShowUsers::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| conns.is_set
	|| idle_string.is_set
	|| line.is_set
	|| location.is_set
	|| service.is_set
	|| user.is_set;
}

bool ShowUsers::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(conns.operation)
	|| is_set(idle_string.operation)
	|| is_set(line.operation)
	|| is_set(location.operation)
	|| is_set(service.operation)
	|| is_set(user.operation);
}

std::string ShowUsers::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id.get() <<"']";

    return path_buffer.str();

}

EntityPath ShowUsers::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-management-cmd-oper:show-users/sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (conns.is_set || is_set(conns.operation)) leaf_name_data.push_back(conns.get_name_leafdata());
    if (idle_string.is_set || is_set(idle_string.operation)) leaf_name_data.push_back(idle_string.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (user.is_set || is_set(user.operation)) leaf_name_data.push_back(user.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ShowUsers::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ShowUsers::Sessions::Session::get_children()
{
    return children;
}

void ShowUsers::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "conns")
    {
        conns = value;
    }
    if(value_path == "idle-string")
    {
        idle_string = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "user")
    {
        user = value;
    }
}

ShowUsers::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "show-users";
}

ShowUsers::Sessions::~Sessions()
{
}

bool ShowUsers::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool ShowUsers::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowUsers::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath ShowUsers::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-management-cmd-oper:show-users/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ShowUsers::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ShowUsers::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ShowUsers::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ShowUsers::Sessions::set_value(const std::string & value_path, std::string value)
{
}

ShowUsers::ShowUsers()
    :
    sessions(std::make_unique<ShowUsers::Sessions>())
{
    sessions->parent = this;
    children["sessions"] = sessions.get();

    yang_name = "show-users"; yang_parent_name = "Cisco-IOS-XR-tty-management-cmd-oper";
}

ShowUsers::~ShowUsers()
{
}

bool ShowUsers::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool ShowUsers::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string ShowUsers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cmd-oper:show-users";

    return path_buffer.str();

}

EntityPath ShowUsers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ShowUsers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
        else
        {
            sessions = std::make_unique<ShowUsers::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions.get();
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ShowUsers::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
    }

    return children;
}

void ShowUsers::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ShowUsers::clone_ptr()
{
    return std::make_unique<ShowUsers>();
}


}
}

