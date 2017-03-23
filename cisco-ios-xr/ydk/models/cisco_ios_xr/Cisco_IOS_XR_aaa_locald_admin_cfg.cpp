
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_locald_admin_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_locald_admin_cfg {

Aaa::Aaa()
    :
    usernames(std::make_shared<Aaa::Usernames>())
{
    usernames->parent = this;
    children["usernames"] = usernames;

    yang_name = "aaa"; yang_parent_name = "Cisco-IOS-XR-aaa-locald-admin-cfg";
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
    return is_set(operation)
	|| (usernames !=  nullptr && usernames->has_operation());
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-admin-cfg:aaa";

    return path_buffer.str();

}

EntityPath Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usernames")
    {
        if(usernames != nullptr)
        {
            children["usernames"] = usernames;
        }
        else
        {
            usernames = std::make_shared<Aaa::Usernames>();
            usernames->parent = this;
            children["usernames"] = usernames;
        }
        return children.at("usernames");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::get_children()
{
    if(children.find("usernames") == children.end())
    {
        if(usernames != nullptr)
        {
            children["usernames"] = usernames;
        }
    }

    return children;
}

void Aaa::set_value(const std::string & value_path, std::string value)
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

Aaa::Usernames::Usernames()
{
    yang_name = "usernames"; yang_parent_name = "aaa";
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
    return is_set(operation);
}

std::string Aaa::Usernames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usernames";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-admin-cfg:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usernames::Username>();
        c->parent = this;
        username.push_back(std::move(c));
        children[segment_path] = username.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::get_children()
{
    for (auto const & c : username)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usernames::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usernames::Username::Username()
    :
    name{YType::str, "name"},
    secret{YType::str, "secret"}
    	,
    usergroup_under_usernames(std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>())
{
    usergroup_under_usernames->parent = this;
    children["usergroup-under-usernames"] = usergroup_under_usernames;

    yang_name = "username"; yang_parent_name = "usernames";
}

Aaa::Usernames::Username::~Username()
{
}

bool Aaa::Usernames::Username::has_data() const
{
    return name.is_set
	|| secret.is_set
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_data());
}

bool Aaa::Usernames::Username::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(secret.operation)
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_operation());
}

std::string Aaa::Usernames::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::Username::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-admin-cfg:aaa/usernames/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usergroup-under-usernames")
    {
        if(usergroup_under_usernames != nullptr)
        {
            children["usergroup-under-usernames"] = usergroup_under_usernames;
        }
        else
        {
            usergroup_under_usernames = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>();
            usergroup_under_usernames->parent = this;
            children["usergroup-under-usernames"] = usergroup_under_usernames;
        }
        return children.at("usergroup-under-usernames");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::Username::get_children()
{
    if(children.find("usergroup-under-usernames") == children.end())
    {
        if(usergroup_under_usernames != nullptr)
        {
            children["usergroup-under-usernames"] = usergroup_under_usernames;
        }
    }

    return children;
}

void Aaa::Usernames::Username::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsernames()
{
    yang_name = "usergroup-under-usernames"; yang_parent_name = "username";
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
    return is_set(operation);
}

std::string Aaa::Usernames::Username::UsergroupUnderUsernames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-usernames";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::Username::UsergroupUnderUsernames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsergroupUnderUsernames' in Cisco_IOS_XR_aaa_locald_admin_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usergroup-under-username")
    {
        for(auto const & c : usergroup_under_username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername>();
        c->parent = this;
        usergroup_under_username.push_back(std::move(c));
        children[segment_path] = usergroup_under_username.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::Username::UsergroupUnderUsernames::get_children()
{
    for (auto const & c : usergroup_under_username)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::UsergroupUnderUsername()
    :
    name{YType::str, "name"}
{
    yang_name = "usergroup-under-username"; yang_parent_name = "usergroup-under-usernames";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-username" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsergroupUnderUsername' in Cisco_IOS_XR_aaa_locald_admin_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_children()
{
    return children;
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}


}
}

