
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_tty_server_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_server_cfg {

Tty::TtyLines::TtyLine::General::General()
    :
    	absolute_timeout{YType::uint32, "absolute-timeout"},
	 length{YType::uint32, "length"},
	 width{YType::uint32, "width"}
{
    yang_name = "general"; yang_parent_name = "tty-line";
}

Tty::TtyLines::TtyLine::General::~General()
{
}

bool Tty::TtyLines::TtyLine::General::has_data() const
{
    return absolute_timeout.is_set
	|| length.is_set
	|| width.is_set;
}

bool Tty::TtyLines::TtyLine::General::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_timeout.operation)
	|| is_set(length.operation)
	|| is_set(width.operation);
}

std::string Tty::TtyLines::TtyLine::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::General::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_timeout.is_set || is_set(absolute_timeout.operation)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::General::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::General::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

Tty::TtyLines::TtyLine::Telnet::Telnet()
    :
    	transparent{YType::empty, "transparent"}
{
    yang_name = "telnet"; yang_parent_name = "tty-line";
}

Tty::TtyLines::TtyLine::Telnet::~Telnet()
{
}

bool Tty::TtyLines::TtyLine::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Tty::TtyLines::TtyLine::Telnet::has_operation() const
{
    return is_set(operation)
	|| is_set(transparent.operation);
}

std::string Tty::TtyLines::TtyLine::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Telnet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Telnet::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Telnet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::UserGroup()
    :
    	name{YType::str, "name"},
	 category{YType::str, "category"}
{
    yang_name = "user-group"; yang_parent_name = "user-groups";
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::~UserGroup()
{
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::has_data() const
{
    return name.is_set
	|| category.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(category.operation);
}

std::string Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-group" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "category")
    {
        category = value;
    }
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroups()
{
    yang_name = "user-groups"; yang_parent_name = "aaa";
}

Tty::TtyLines::TtyLine::Aaa::UserGroups::~UserGroups()
{
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::has_data() const
{
    for (std::size_t index=0; index<user_group.size(); index++)
    {
        if(user_group[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::TtyLines::TtyLine::Aaa::UserGroups::has_operation() const
{
    for (std::size_t index=0; index<user_group.size(); index++)
    {
        if(user_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Tty::TtyLines::TtyLine::Aaa::UserGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-groups";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Aaa::UserGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Aaa::UserGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "user-group")
    {
        for(auto const & c : user_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup>();
        c->parent = this;
        user_group.push_back(std::move(c));
        children[segment_path] = user_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Aaa::UserGroups::get_children()
{
    for (auto const & c : user_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Tty::TtyLines::TtyLine::Aaa::UserGroups::set_value(const std::string & value_path, std::string value)
{
}

Tty::TtyLines::TtyLine::Aaa::Authorization::Authorization()
    :
    	commands{YType::str, "commands"},
	 event_manager{YType::str, "event-manager"},
	 exec{YType::str, "exec"}
{
    yang_name = "authorization"; yang_parent_name = "aaa";
}

Tty::TtyLines::TtyLine::Aaa::Authorization::~Authorization()
{
}

bool Tty::TtyLines::TtyLine::Aaa::Authorization::has_data() const
{
    return commands.is_set
	|| event_manager.is_set
	|| exec.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::Authorization::has_operation() const
{
    return is_set(operation)
	|| is_set(commands.operation)
	|| is_set(event_manager.operation)
	|| is_set(exec.operation);
}

std::string Tty::TtyLines::TtyLine::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Aaa::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commands.is_set || is_set(commands.operation)) leaf_name_data.push_back(commands.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.operation)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (exec.is_set || is_set(exec.operation)) leaf_name_data.push_back(exec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Aaa::Authorization::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Aaa::Authorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "commands")
    {
        commands = value;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
    }
    if(value_path == "exec")
    {
        exec = value;
    }
}

Tty::TtyLines::TtyLine::Aaa::Authentication::Authentication()
    :
    	login{YType::str, "login"}
{
    yang_name = "authentication"; yang_parent_name = "aaa";
}

Tty::TtyLines::TtyLine::Aaa::Authentication::~Authentication()
{
}

bool Tty::TtyLines::TtyLine::Aaa::Authentication::has_data() const
{
    return login.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(login.operation);
}

std::string Tty::TtyLines::TtyLine::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Aaa::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.operation)) leaf_name_data.push_back(login.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Aaa::Authentication::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Aaa::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login")
    {
        login = value;
    }
}

Tty::TtyLines::TtyLine::Aaa::Accounting::Accounting()
    :
    	commands{YType::str, "commands"},
	 exec{YType::str, "exec"}
{
    yang_name = "accounting"; yang_parent_name = "aaa";
}

Tty::TtyLines::TtyLine::Aaa::Accounting::~Accounting()
{
}

bool Tty::TtyLines::TtyLine::Aaa::Accounting::has_data() const
{
    return commands.is_set
	|| exec.is_set;
}

bool Tty::TtyLines::TtyLine::Aaa::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(commands.operation)
	|| is_set(exec.operation);
}

std::string Tty::TtyLines::TtyLine::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Aaa::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commands.is_set || is_set(commands.operation)) leaf_name_data.push_back(commands.get_name_leafdata());
    if (exec.is_set || is_set(exec.operation)) leaf_name_data.push_back(exec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Aaa::Accounting::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Aaa::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "commands")
    {
        commands = value;
    }
    if(value_path == "exec")
    {
        exec = value;
    }
}

Tty::TtyLines::TtyLine::Aaa::Aaa()
    :
    	login_timeout{YType::uint32, "login-timeout"},
	 password{YType::str, "password"},
	 secret{YType::str, "secret"}
    	,
    accounting(std::make_unique<Tty::TtyLines::TtyLine::Aaa::Accounting>())
	,authentication(std::make_unique<Tty::TtyLines::TtyLine::Aaa::Authentication>())
	,authorization(std::make_unique<Tty::TtyLines::TtyLine::Aaa::Authorization>())
	,user_groups(std::make_unique<Tty::TtyLines::TtyLine::Aaa::UserGroups>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    authentication->parent = this;
    children["authentication"] = authentication.get();

    authorization->parent = this;
    children["authorization"] = authorization.get();

    user_groups->parent = this;
    children["user-groups"] = user_groups.get();

    yang_name = "aaa"; yang_parent_name = "tty-line";
}

Tty::TtyLines::TtyLine::Aaa::~Aaa()
{
}

bool Tty::TtyLines::TtyLine::Aaa::has_data() const
{
    return login_timeout.is_set
	|| password.is_set
	|| secret.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (user_groups !=  nullptr && user_groups->has_data());
}

bool Tty::TtyLines::TtyLine::Aaa::has_operation() const
{
    return is_set(operation)
	|| is_set(login_timeout.operation)
	|| is_set(password.operation)
	|| is_set(secret.operation)
	|| (accounting !=  nullptr && is_set(accounting->operation))
	|| (authentication !=  nullptr && is_set(authentication->operation))
	|| (authorization !=  nullptr && is_set(authorization->operation))
	|| (user_groups !=  nullptr && is_set(user_groups->operation));
}

std::string Tty::TtyLines::TtyLine::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login_timeout.is_set || is_set(login_timeout.operation)) leaf_name_data.push_back(login_timeout.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Tty::TtyLines::TtyLine::Aaa::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
        else
        {
            authentication = std::make_unique<Tty::TtyLines::TtyLine::Aaa::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication.get();
        }
        return children.at("authentication");
    }

    if(child_yang_name == "authorization")
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization.get();
        }
        else
        {
            authorization = std::make_unique<Tty::TtyLines::TtyLine::Aaa::Authorization>();
            authorization->parent = this;
            children["authorization"] = authorization.get();
        }
        return children.at("authorization");
    }

    if(child_yang_name == "user-groups")
    {
        if(user_groups != nullptr)
        {
            children["user-groups"] = user_groups.get();
        }
        else
        {
            user_groups = std::make_unique<Tty::TtyLines::TtyLine::Aaa::UserGroups>();
            user_groups->parent = this;
            children["user-groups"] = user_groups.get();
        }
        return children.at("user-groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Aaa::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
    }

    if(children.find("authorization") == children.end())
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization.get();
        }
    }

    if(children.find("user-groups") == children.end())
    {
        if(user_groups != nullptr)
        {
            children["user-groups"] = user_groups.get();
        }
    }

    return children;
}

void Tty::TtyLines::TtyLine::Aaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login-timeout")
    {
        login_timeout = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
}

Tty::TtyLines::TtyLine::Exec::Timeout::Timeout()
    :
    	minutes{YType::uint32, "minutes"},
	 seconds{YType::uint32, "seconds"}
{
    yang_name = "timeout"; yang_parent_name = "exec";
}

Tty::TtyLines::TtyLine::Exec::Timeout::~Timeout()
{
}

bool Tty::TtyLines::TtyLine::Exec::Timeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Tty::TtyLines::TtyLine::Exec::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Tty::TtyLines::TtyLine::Exec::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Exec::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Exec::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Exec::Timeout::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Exec::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Tty::TtyLines::TtyLine::Exec::Exec()
    :
    	time_stamp{YType::boolean, "time-stamp"}
    	,
    timeout(nullptr) // presence node
{
    yang_name = "exec"; yang_parent_name = "tty-line";
}

Tty::TtyLines::TtyLine::Exec::~Exec()
{
}

bool Tty::TtyLines::TtyLine::Exec::has_data() const
{
    return time_stamp.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Tty::TtyLines::TtyLine::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(time_stamp.operation)
	|| (timeout !=  nullptr && is_set(timeout->operation));
}

std::string Tty::TtyLines::TtyLine::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timeout")
    {
        if(timeout != nullptr)
        {
            children["timeout"] = timeout.get();
        }
        else
        {
            timeout = std::make_unique<Tty::TtyLines::TtyLine::Exec::Timeout>();
            timeout->parent = this;
            children["timeout"] = timeout.get();
        }
        return children.at("timeout");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Exec::get_children()
{
    if(children.find("timeout") == children.end())
    {
        if(timeout != nullptr)
        {
            children["timeout"] = timeout.get();
        }
    }

    return children;
}

void Tty::TtyLines::TtyLine::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

Tty::TtyLines::TtyLine::Connection::TransportInput::TransportInput()
    :
    	none{YType::int32, "none"},
	 protocol1{YType::enumeration, "protocol1"},
	 protocol2{YType::enumeration, "protocol2"},
	 select{YType::enumeration, "select"}
{
    yang_name = "transport-input"; yang_parent_name = "connection";
}

Tty::TtyLines::TtyLine::Connection::TransportInput::~TransportInput()
{
}

bool Tty::TtyLines::TtyLine::Connection::TransportInput::has_data() const
{
    return none.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| select.is_set;
}

bool Tty::TtyLines::TtyLine::Connection::TransportInput::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(protocol1.operation)
	|| is_set(protocol2.operation)
	|| is_set(select.operation);
}

std::string Tty::TtyLines::TtyLine::Connection::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Connection::TransportInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.operation)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.operation)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (select.is_set || is_set(select.operation)) leaf_name_data.push_back(select.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Connection::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Connection::TransportInput::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Connection::TransportInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
    }
    if(value_path == "select")
    {
        select = value;
    }
}

Tty::TtyLines::TtyLine::Connection::TransportOutput::TransportOutput()
    :
    	none{YType::int32, "none"},
	 protocol1{YType::enumeration, "protocol1"},
	 protocol2{YType::enumeration, "protocol2"},
	 select{YType::enumeration, "select"}
{
    yang_name = "transport-output"; yang_parent_name = "connection";
}

Tty::TtyLines::TtyLine::Connection::TransportOutput::~TransportOutput()
{
}

bool Tty::TtyLines::TtyLine::Connection::TransportOutput::has_data() const
{
    return none.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| select.is_set;
}

bool Tty::TtyLines::TtyLine::Connection::TransportOutput::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(protocol1.operation)
	|| is_set(protocol2.operation)
	|| is_set(select.operation);
}

std::string Tty::TtyLines::TtyLine::Connection::TransportOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-output";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Connection::TransportOutput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.operation)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.operation)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (select.is_set || is_set(select.operation)) leaf_name_data.push_back(select.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Connection::TransportOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Connection::TransportOutput::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Connection::TransportOutput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
    }
    if(value_path == "select")
    {
        select = value;
    }
}

Tty::TtyLines::TtyLine::Connection::SessionTimeout::SessionTimeout()
    :
    	direction{YType::enumeration, "direction"},
	 timeout{YType::uint32, "timeout"}
{
    yang_name = "session-timeout"; yang_parent_name = "connection";
}

Tty::TtyLines::TtyLine::Connection::SessionTimeout::~SessionTimeout()
{
}

bool Tty::TtyLines::TtyLine::Connection::SessionTimeout::has_data() const
{
    return direction.is_set
	|| timeout.is_set;
}

bool Tty::TtyLines::TtyLine::Connection::SessionTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(timeout.operation);
}

std::string Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Connection::SessionTimeout::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::Connection::SessionTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Tty::TtyLines::TtyLine::Connection::Connection()
    :
    	acl_in{YType::str, "acl-in"},
	 acl_out{YType::str, "acl-out"},
	 cli_white_space_completion{YType::empty, "cli-white-space-completion"},
	 disconnect_character{YType::str, "disconnect-character"},
	 escape_character{YType::str, "escape-character"},
	 session_limit{YType::uint32, "session-limit"},
	 transport_preferred{YType::enumeration, "transport-preferred"}
    	,
    session_timeout(nullptr) // presence node
	,transport_input(std::make_unique<Tty::TtyLines::TtyLine::Connection::TransportInput>())
	,transport_output(nullptr) // presence node
{
    transport_input->parent = this;
    children["transport-input"] = transport_input.get();

    yang_name = "connection"; yang_parent_name = "tty-line";
}

Tty::TtyLines::TtyLine::Connection::~Connection()
{
}

bool Tty::TtyLines::TtyLine::Connection::has_data() const
{
    return acl_in.is_set
	|| acl_out.is_set
	|| cli_white_space_completion.is_set
	|| disconnect_character.is_set
	|| escape_character.is_set
	|| session_limit.is_set
	|| transport_preferred.is_set
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (transport_input !=  nullptr && transport_input->has_data())
	|| (transport_output !=  nullptr && transport_output->has_data());
}

bool Tty::TtyLines::TtyLine::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_in.operation)
	|| is_set(acl_out.operation)
	|| is_set(cli_white_space_completion.operation)
	|| is_set(disconnect_character.operation)
	|| is_set(escape_character.operation)
	|| is_set(session_limit.operation)
	|| is_set(transport_preferred.operation)
	|| (session_timeout !=  nullptr && is_set(session_timeout->operation))
	|| (transport_input !=  nullptr && is_set(transport_input->operation))
	|| (transport_output !=  nullptr && is_set(transport_output->operation));
}

std::string Tty::TtyLines::TtyLine::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cfg:connection";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_in.is_set || is_set(acl_in.operation)) leaf_name_data.push_back(acl_in.get_name_leafdata());
    if (acl_out.is_set || is_set(acl_out.operation)) leaf_name_data.push_back(acl_out.get_name_leafdata());
    if (cli_white_space_completion.is_set || is_set(cli_white_space_completion.operation)) leaf_name_data.push_back(cli_white_space_completion.get_name_leafdata());
    if (disconnect_character.is_set || is_set(disconnect_character.operation)) leaf_name_data.push_back(disconnect_character.get_name_leafdata());
    if (escape_character.is_set || is_set(escape_character.operation)) leaf_name_data.push_back(escape_character.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (transport_preferred.is_set || is_set(transport_preferred.operation)) leaf_name_data.push_back(transport_preferred.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout != nullptr)
        {
            children["session-timeout"] = session_timeout.get();
        }
        else
        {
            session_timeout = std::make_unique<Tty::TtyLines::TtyLine::Connection::SessionTimeout>();
            session_timeout->parent = this;
            children["session-timeout"] = session_timeout.get();
        }
        return children.at("session-timeout");
    }

    if(child_yang_name == "transport-input")
    {
        if(transport_input != nullptr)
        {
            children["transport-input"] = transport_input.get();
        }
        else
        {
            transport_input = std::make_unique<Tty::TtyLines::TtyLine::Connection::TransportInput>();
            transport_input->parent = this;
            children["transport-input"] = transport_input.get();
        }
        return children.at("transport-input");
    }

    if(child_yang_name == "transport-output")
    {
        if(transport_output != nullptr)
        {
            children["transport-output"] = transport_output.get();
        }
        else
        {
            transport_output = std::make_unique<Tty::TtyLines::TtyLine::Connection::TransportOutput>();
            transport_output->parent = this;
            children["transport-output"] = transport_output.get();
        }
        return children.at("transport-output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::Connection::get_children()
{
    if(children.find("session-timeout") == children.end())
    {
        if(session_timeout != nullptr)
        {
            children["session-timeout"] = session_timeout.get();
        }
    }

    if(children.find("transport-input") == children.end())
    {
        if(transport_input != nullptr)
        {
            children["transport-input"] = transport_input.get();
        }
    }

    if(children.find("transport-output") == children.end())
    {
        if(transport_output != nullptr)
        {
            children["transport-output"] = transport_output.get();
        }
    }

    return children;
}

void Tty::TtyLines::TtyLine::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-in")
    {
        acl_in = value;
    }
    if(value_path == "acl-out")
    {
        acl_out = value;
    }
    if(value_path == "cli-white-space-completion")
    {
        cli_white_space_completion = value;
    }
    if(value_path == "disconnect-character")
    {
        disconnect_character = value;
    }
    if(value_path == "escape-character")
    {
        escape_character = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "transport-preferred")
    {
        transport_preferred = value;
    }
}

Tty::TtyLines::TtyLine::ExecMode::ExecMode()
    :
    	pager{YType::enumeration, "pager"}
{
    yang_name = "exec-mode"; yang_parent_name = "tty-line";
}

Tty::TtyLines::TtyLine::ExecMode::~ExecMode()
{
}

bool Tty::TtyLines::TtyLine::ExecMode::has_data() const
{
    return pager.is_set;
}

bool Tty::TtyLines::TtyLine::ExecMode::has_operation() const
{
    return is_set(operation)
	|| is_set(pager.operation);
}

std::string Tty::TtyLines::TtyLine::ExecMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-cfg:exec-mode";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::ExecMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pager.is_set || is_set(pager.operation)) leaf_name_data.push_back(pager.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::ExecMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::ExecMode::get_children()
{
    return children;
}

void Tty::TtyLines::TtyLine::ExecMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pager")
    {
        pager = value;
    }
}

Tty::TtyLines::TtyLine::TtyLine()
    :
    	name{YType::str, "name"}
    	,
    aaa(std::make_unique<Tty::TtyLines::TtyLine::Aaa>())
	,connection(std::make_unique<Tty::TtyLines::TtyLine::Connection>())
	,exec(std::make_unique<Tty::TtyLines::TtyLine::Exec>())
	,exec_mode(std::make_unique<Tty::TtyLines::TtyLine::ExecMode>())
	,general(std::make_unique<Tty::TtyLines::TtyLine::General>())
	,telnet(std::make_unique<Tty::TtyLines::TtyLine::Telnet>())
{
    aaa->parent = this;
    children["aaa"] = aaa.get();

    connection->parent = this;
    children["connection"] = connection.get();

    exec->parent = this;
    children["exec"] = exec.get();

    exec_mode->parent = this;
    children["exec-mode"] = exec_mode.get();

    general->parent = this;
    children["general"] = general.get();

    telnet->parent = this;
    children["telnet"] = telnet.get();

    yang_name = "tty-line"; yang_parent_name = "tty-lines";
}

Tty::TtyLines::TtyLine::~TtyLine()
{
}

bool Tty::TtyLines::TtyLine::has_data() const
{
    return name.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_mode !=  nullptr && exec_mode->has_data())
	|| (general !=  nullptr && general->has_data())
	|| (telnet !=  nullptr && telnet->has_data());
}

bool Tty::TtyLines::TtyLine::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (aaa !=  nullptr && is_set(aaa->operation))
	|| (connection !=  nullptr && is_set(connection->operation))
	|| (exec !=  nullptr && is_set(exec->operation))
	|| (exec_mode !=  nullptr && is_set(exec_mode->operation))
	|| (general !=  nullptr && is_set(general->operation))
	|| (telnet !=  nullptr && is_set(telnet->operation));
}

std::string Tty::TtyLines::TtyLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty-line" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::TtyLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-cfg:tty/tty-lines/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::TtyLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aaa")
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa.get();
        }
        else
        {
            aaa = std::make_unique<Tty::TtyLines::TtyLine::Aaa>();
            aaa->parent = this;
            children["aaa"] = aaa.get();
        }
        return children.at("aaa");
    }

    if(child_yang_name == "connection")
    {
        if(connection != nullptr)
        {
            children["connection"] = connection.get();
        }
        else
        {
            connection = std::make_unique<Tty::TtyLines::TtyLine::Connection>();
            connection->parent = this;
            children["connection"] = connection.get();
        }
        return children.at("connection");
    }

    if(child_yang_name == "exec")
    {
        if(exec != nullptr)
        {
            children["exec"] = exec.get();
        }
        else
        {
            exec = std::make_unique<Tty::TtyLines::TtyLine::Exec>();
            exec->parent = this;
            children["exec"] = exec.get();
        }
        return children.at("exec");
    }

    if(child_yang_name == "exec-mode")
    {
        if(exec_mode != nullptr)
        {
            children["exec-mode"] = exec_mode.get();
        }
        else
        {
            exec_mode = std::make_unique<Tty::TtyLines::TtyLine::ExecMode>();
            exec_mode->parent = this;
            children["exec-mode"] = exec_mode.get();
        }
        return children.at("exec-mode");
    }

    if(child_yang_name == "general")
    {
        if(general != nullptr)
        {
            children["general"] = general.get();
        }
        else
        {
            general = std::make_unique<Tty::TtyLines::TtyLine::General>();
            general->parent = this;
            children["general"] = general.get();
        }
        return children.at("general");
    }

    if(child_yang_name == "telnet")
    {
        if(telnet != nullptr)
        {
            children["telnet"] = telnet.get();
        }
        else
        {
            telnet = std::make_unique<Tty::TtyLines::TtyLine::Telnet>();
            telnet->parent = this;
            children["telnet"] = telnet.get();
        }
        return children.at("telnet");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tty::TtyLines::TtyLine::get_children()
{
    if(children.find("aaa") == children.end())
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa.get();
        }
    }

    if(children.find("connection") == children.end())
    {
        if(connection != nullptr)
        {
            children["connection"] = connection.get();
        }
    }

    if(children.find("exec") == children.end())
    {
        if(exec != nullptr)
        {
            children["exec"] = exec.get();
        }
    }

    if(children.find("exec-mode") == children.end())
    {
        if(exec_mode != nullptr)
        {
            children["exec-mode"] = exec_mode.get();
        }
    }

    if(children.find("general") == children.end())
    {
        if(general != nullptr)
        {
            children["general"] = general.get();
        }
    }

    if(children.find("telnet") == children.end())
    {
        if(telnet != nullptr)
        {
            children["telnet"] = telnet.get();
        }
    }

    return children;
}

void Tty::TtyLines::TtyLine::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Tty::TtyLines::TtyLines()
{
    yang_name = "tty-lines"; yang_parent_name = "tty";
}

Tty::TtyLines::~TtyLines()
{
}

bool Tty::TtyLines::has_data() const
{
    for (std::size_t index=0; index<tty_line.size(); index++)
    {
        if(tty_line[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::TtyLines::has_operation() const
{
    for (std::size_t index=0; index<tty_line.size(); index++)
    {
        if(tty_line[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Tty::TtyLines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty-lines";

    return path_buffer.str();

}

EntityPath Tty::TtyLines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-cfg:tty/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::TtyLines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tty-line")
    {
        for(auto const & c : tty_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Tty::TtyLines::TtyLine>();
        c->parent = this;
        tty_line.push_back(std::move(c));
        children[segment_path] = tty_line.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tty::TtyLines::get_children()
{
    for (auto const & c : tty_line)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Tty::TtyLines::set_value(const std::string & value_path, std::string value)
{
}

Tty::Tty()
    :
    tty_lines(std::make_unique<Tty::TtyLines>())
{
    tty_lines->parent = this;
    children["tty-lines"] = tty_lines.get();

    yang_name = "tty"; yang_parent_name = "Cisco-IOS-XR-tty-server-cfg";
}

Tty::~Tty()
{
}

bool Tty::has_data() const
{
    return (tty_lines !=  nullptr && tty_lines->has_data());
}

bool Tty::has_operation() const
{
    return is_set(operation)
	|| (tty_lines !=  nullptr && is_set(tty_lines->operation));
}

std::string Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-cfg:tty";

    return path_buffer.str();

}

EntityPath Tty::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tty-lines")
    {
        if(tty_lines != nullptr)
        {
            children["tty-lines"] = tty_lines.get();
        }
        else
        {
            tty_lines = std::make_unique<Tty::TtyLines>();
            tty_lines->parent = this;
            children["tty-lines"] = tty_lines.get();
        }
        return children.at("tty-lines");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tty::get_children()
{
    if(children.find("tty-lines") == children.end())
    {
        if(tty_lines != nullptr)
        {
            children["tty-lines"] = tty_lines.get();
        }
    }

    return children;
}

void Tty::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Tty::clone_ptr()
{
    return std::make_unique<Tty>();
}


}
}

