
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_aaa.hpp"

namespace ydk {
namespace tailf_aaa {

Aaa::Aaa()
    :
    authentication_(std::make_shared<Aaa::Authentication>())
	,ios_(nullptr) // presence node
{
    authentication_->parent = this;

    yang_name = "aaa"; yang_parent_name = "tailf-aaa";
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    return (authentication_ !=  nullptr && authentication_->has_data())
	|| (ios_ !=  nullptr && ios_->has_data());
}

bool Aaa::has_operation() const
{
    return is_set(operation)
	|| (authentication_ !=  nullptr && authentication_->has_operation())
	|| (ios_ !=  nullptr && ios_->has_operation());
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:aaa";

    return path_buffer.str();

}

const EntityPath Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication_ == nullptr)
        {
            authentication_ = std::make_shared<Aaa::Authentication>();
        }
        return authentication_;
    }

    if(child_yang_name == "ios")
    {
        if(ios_ == nullptr)
        {
            ios_ = std::make_shared<Aaa::Ios>();
        }
        return ios_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_ != nullptr)
    {
        children["authentication"] = authentication_;
    }

    if(ios_ != nullptr)
    {
        children["ios"] = ios_;
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
    return ydk_cisco_ios_xe_models_path;
}

std::string Aaa::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Aaa::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Aaa::Authentication::Authentication()
    :
    users_(std::make_shared<Aaa::Authentication::Users>())
{
    users_->parent = this;

    yang_name = "authentication"; yang_parent_name = "aaa";
}

Aaa::Authentication::~Authentication()
{
}

bool Aaa::Authentication::has_data() const
{
    return (users_ !=  nullptr && users_->has_data());
}

bool Aaa::Authentication::has_operation() const
{
    return is_set(operation)
	|| (users_ !=  nullptr && users_->has_operation());
}

std::string Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Aaa::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "users")
    {
        if(users_ == nullptr)
        {
            users_ = std::make_shared<Aaa::Authentication::Users>();
        }
        return users_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(users_ != nullptr)
    {
        children["users"] = users_;
    }

    return children;
}

void Aaa::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Authentication::Users::Users()
{
    yang_name = "users"; yang_parent_name = "authentication";
}

Aaa::Authentication::Users::~Users()
{
}

bool Aaa::Authentication::Users::has_data() const
{
    for (std::size_t index=0; index<user_.size(); index++)
    {
        if(user_[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authentication::Users::has_operation() const
{
    for (std::size_t index=0; index<user_.size(); index++)
    {
        if(user_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Authentication::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";

    return path_buffer.str();

}

const EntityPath Aaa::Authentication::Users::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-aaa:aaa/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Authentication::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        for(auto const & c : user_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Aaa::Authentication::Users::User>();
        c->parent = this;
        user_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Authentication::Users::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : user_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Aaa::Authentication::Users::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Authentication::Users::User::User()
    :
    name{YType::str, "name"},
    gid{YType::int32, "gid"},
    homedir{YType::str, "homedir"},
    password{YType::str, "password"},
    ssh_keydir{YType::str, "ssh_keydir"},
    uid{YType::int32, "uid"}
{
    yang_name = "user"; yang_parent_name = "users";
}

Aaa::Authentication::Users::User::~User()
{
}

bool Aaa::Authentication::Users::User::has_data() const
{
    return name.is_set
	|| gid.is_set
	|| homedir.is_set
	|| password.is_set
	|| ssh_keydir.is_set
	|| uid.is_set;
}

bool Aaa::Authentication::Users::User::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(gid.operation)
	|| is_set(homedir.operation)
	|| is_set(password.operation)
	|| is_set(ssh_keydir.operation)
	|| is_set(uid.operation);
}

std::string Aaa::Authentication::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Aaa::Authentication::Users::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-aaa:aaa/authentication/users/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (gid.is_set || is_set(gid.operation)) leaf_name_data.push_back(gid.get_name_leafdata());
    if (homedir.is_set || is_set(homedir.operation)) leaf_name_data.push_back(homedir.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (ssh_keydir.is_set || is_set(ssh_keydir.operation)) leaf_name_data.push_back(ssh_keydir.get_name_leafdata());
    if (uid.is_set || is_set(uid.operation)) leaf_name_data.push_back(uid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Authentication::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Authentication::Users::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aaa::Authentication::Users::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "gid")
    {
        gid = value;
    }
    if(value_path == "homedir")
    {
        homedir = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "ssh_keydir")
    {
        ssh_keydir = value;
    }
    if(value_path == "uid")
    {
        uid = value;
    }
}

Aaa::Ios::Ios()
{
    yang_name = "ios"; yang_parent_name = "aaa";
}

Aaa::Ios::~Ios()
{
}

bool Aaa::Ios::has_data() const
{
    for (std::size_t index=0; index<level_.size(); index++)
    {
        if(level_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<privilege_.size(); index++)
    {
        if(privilege_[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Ios::has_operation() const
{
    for (std::size_t index=0; index<level_.size(); index++)
    {
        if(level_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<privilege_.size(); index++)
    {
        if(privilege_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Ios::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ios";

    return path_buffer.str();

}

const EntityPath Aaa::Ios::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-aaa:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Ios::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        for(auto const & c : level_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Aaa::Ios::Level>();
        c->parent = this;
        level_.push_back(c);
        return c;
    }

    if(child_yang_name == "privilege")
    {
        for(auto const & c : privilege_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Aaa::Ios::Privilege>();
        c->parent = this;
        privilege_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Ios::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : privilege_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Aaa::Ios::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Ios::Level::Level()
    :
    nr{YType::int32, "nr"},
    password{YType::str, "password"},
    prompt{YType::str, "prompt"},
    secret{YType::str, "secret"}
{
    yang_name = "level"; yang_parent_name = "ios";
}

Aaa::Ios::Level::~Level()
{
}

bool Aaa::Ios::Level::has_data() const
{
    return nr.is_set
	|| password.is_set
	|| prompt.is_set
	|| secret.is_set;
}

bool Aaa::Ios::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(nr.operation)
	|| is_set(password.operation)
	|| is_set(prompt.operation)
	|| is_set(secret.operation);
}

std::string Aaa::Ios::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level" <<"[nr='" <<nr <<"']";

    return path_buffer.str();

}

const EntityPath Aaa::Ios::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-aaa:aaa/ios/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.operation)) leaf_name_data.push_back(nr.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (prompt.is_set || is_set(prompt.operation)) leaf_name_data.push_back(prompt.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Ios::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Ios::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aaa::Ios::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nr")
    {
        nr = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "prompt")
    {
        prompt = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
}

Aaa::Ios::Privilege::Privilege()
    :
    mode{YType::str, "mode"}
{
    yang_name = "privilege"; yang_parent_name = "ios";
}

Aaa::Ios::Privilege::~Privilege()
{
}

bool Aaa::Ios::Privilege::has_data() const
{
    for (std::size_t index=0; index<level_.size(); index++)
    {
        if(level_[index]->has_data())
            return true;
    }
    return mode.is_set;
}

bool Aaa::Ios::Privilege::has_operation() const
{
    for (std::size_t index=0; index<level_.size(); index++)
    {
        if(level_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mode.operation);
}

std::string Aaa::Ios::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege" <<"[mode='" <<mode <<"']";

    return path_buffer.str();

}

const EntityPath Aaa::Ios::Privilege::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-aaa:aaa/ios/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Ios::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        for(auto const & c : level_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Aaa::Ios::Privilege::Level>();
        c->parent = this;
        level_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Ios::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Aaa::Ios::Privilege::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

Aaa::Ios::Privilege::Level::Level()
    :
    nr{YType::int32, "nr"}
{
    yang_name = "level"; yang_parent_name = "privilege";
}

Aaa::Ios::Privilege::Level::~Level()
{
}

bool Aaa::Ios::Privilege::Level::has_data() const
{
    for (std::size_t index=0; index<command_.size(); index++)
    {
        if(command_[index]->has_data())
            return true;
    }
    return nr.is_set;
}

bool Aaa::Ios::Privilege::Level::has_operation() const
{
    for (std::size_t index=0; index<command_.size(); index++)
    {
        if(command_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nr.operation);
}

std::string Aaa::Ios::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level" <<"[nr='" <<nr <<"']";

    return path_buffer.str();

}

const EntityPath Aaa::Ios::Privilege::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in tailf_aaa cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.operation)) leaf_name_data.push_back(nr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Ios::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        for(auto const & c : command_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Aaa::Ios::Privilege::Level::Command>();
        c->parent = this;
        command_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Ios::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : command_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Aaa::Ios::Privilege::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nr")
    {
        nr = value;
    }
}

Aaa::Ios::Privilege::Level::Command::Command()
    :
    name{YType::str, "name"}
{
    yang_name = "command"; yang_parent_name = "level";
}

Aaa::Ios::Privilege::Level::Command::~Command()
{
}

bool Aaa::Ios::Privilege::Level::Command::has_data() const
{
    return name.is_set;
}

bool Aaa::Ios::Privilege::Level::Command::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Aaa::Ios::Privilege::Level::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Aaa::Ios::Privilege::Level::Command::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Command' in tailf_aaa cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Aaa::Ios::Privilege::Level::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::Ios::Privilege::Level::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aaa::Ios::Privilege::Level::Command::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Alias::Alias()
    :
    name{YType::str, "name"},
    expansion{YType::str, "expansion"}
{
    yang_name = "alias"; yang_parent_name = "tailf-aaa";
}

Alias::~Alias()
{
}

bool Alias::has_data() const
{
    return name.is_set
	|| expansion.is_set;
}

bool Alias::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(expansion.operation);
}

std::string Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:alias" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Alias::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expansion.is_set || is_set(expansion.operation)) leaf_name_data.push_back(expansion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alias::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "expansion")
    {
        expansion = value;
    }
}

std::shared_ptr<Entity> Alias::clone_ptr() const
{
    return std::make_shared<Alias>();
}

std::string Alias::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Alias::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Alias::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Session::Session()
    :
    autowizard{YType::boolean, "autowizard"},
    complete_on_space{YType::boolean, "complete-on-space"},
    display_level{YType::uint64, "display-level"},
    history{YType::uint64, "history"},
    idle_timeout{YType::uint64, "idle-timeout"},
    ignore_leading_space{YType::boolean, "ignore-leading-space"},
    paginate{YType::boolean, "paginate"},
    prompt1{YType::str, "prompt1"},
    prompt2{YType::str, "prompt2"},
    show_defaults{YType::boolean, "show-defaults"}
{
    yang_name = "session"; yang_parent_name = "tailf-aaa";
}

Session::~Session()
{
}

bool Session::has_data() const
{
    return autowizard.is_set
	|| complete_on_space.is_set
	|| display_level.is_set
	|| history.is_set
	|| idle_timeout.is_set
	|| ignore_leading_space.is_set
	|| paginate.is_set
	|| prompt1.is_set
	|| prompt2.is_set
	|| show_defaults.is_set;
}

bool Session::has_operation() const
{
    return is_set(operation)
	|| is_set(autowizard.operation)
	|| is_set(complete_on_space.operation)
	|| is_set(display_level.operation)
	|| is_set(history.operation)
	|| is_set(idle_timeout.operation)
	|| is_set(ignore_leading_space.operation)
	|| is_set(paginate.operation)
	|| is_set(prompt1.operation)
	|| is_set(prompt2.operation)
	|| is_set(show_defaults.operation);
}

std::string Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:session";

    return path_buffer.str();

}

const EntityPath Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autowizard.is_set || is_set(autowizard.operation)) leaf_name_data.push_back(autowizard.get_name_leafdata());
    if (complete_on_space.is_set || is_set(complete_on_space.operation)) leaf_name_data.push_back(complete_on_space.get_name_leafdata());
    if (display_level.is_set || is_set(display_level.operation)) leaf_name_data.push_back(display_level.get_name_leafdata());
    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (ignore_leading_space.is_set || is_set(ignore_leading_space.operation)) leaf_name_data.push_back(ignore_leading_space.get_name_leafdata());
    if (paginate.is_set || is_set(paginate.operation)) leaf_name_data.push_back(paginate.get_name_leafdata());
    if (prompt1.is_set || is_set(prompt1.operation)) leaf_name_data.push_back(prompt1.get_name_leafdata());
    if (prompt2.is_set || is_set(prompt2.operation)) leaf_name_data.push_back(prompt2.get_name_leafdata());
    if (show_defaults.is_set || is_set(show_defaults.operation)) leaf_name_data.push_back(show_defaults.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autowizard")
    {
        autowizard = value;
    }
    if(value_path == "complete-on-space")
    {
        complete_on_space = value;
    }
    if(value_path == "display-level")
    {
        display_level = value;
    }
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
    if(value_path == "ignore-leading-space")
    {
        ignore_leading_space = value;
    }
    if(value_path == "paginate")
    {
        paginate = value;
    }
    if(value_path == "prompt1")
    {
        prompt1 = value;
    }
    if(value_path == "prompt2")
    {
        prompt2 = value;
    }
    if(value_path == "show-defaults")
    {
        show_defaults = value;
    }
}

std::shared_ptr<Entity> Session::clone_ptr() const
{
    return std::make_shared<Session>();
}

std::string Session::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Session::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Session::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

User::User()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    session_(std::make_shared<User::Session>())
{
    session_->parent = this;

    yang_name = "user"; yang_parent_name = "tailf-aaa";
}

User::~User()
{
}

bool User::has_data() const
{
    for (std::size_t index=0; index<alias_.size(); index++)
    {
        if(alias_[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (session_ !=  nullptr && session_->has_data());
}

bool User::has_operation() const
{
    for (std::size_t index=0; index<alias_.size(); index++)
    {
        if(alias_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (session_ !=  nullptr && session_->has_operation());
}

std::string User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-aaa:user" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alias")
    {
        for(auto const & c : alias_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<User::Alias>();
        c->parent = this;
        alias_.push_back(c);
        return c;
    }

    if(child_yang_name == "session")
    {
        if(session_ == nullptr)
        {
            session_ = std::make_shared<User::Session>();
        }
        return session_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alias_)
    {
        children[c->get_segment_path()] = c;
    }

    if(session_ != nullptr)
    {
        children["session"] = session_;
    }

    return children;
}

void User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

std::shared_ptr<Entity> User::clone_ptr() const
{
    return std::make_shared<User>();
}

std::string User::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string User::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function User::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

User::Alias::Alias()
    :
    name{YType::str, "name"},
    expansion{YType::str, "expansion"}
{
    yang_name = "alias"; yang_parent_name = "user";
}

User::Alias::~Alias()
{
}

bool User::Alias::has_data() const
{
    return name.is_set
	|| expansion.is_set;
}

bool User::Alias::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(expansion.operation);
}

std::string User::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath User::Alias::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Alias' in tailf_aaa cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expansion.is_set || is_set(expansion.operation)) leaf_name_data.push_back(expansion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> User::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> User::Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void User::Alias::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "expansion")
    {
        expansion = value;
    }
}

User::Session::Session()
    :
    autowizard{YType::boolean, "autowizard"},
    complete_on_space{YType::boolean, "complete-on-space"},
    display_level{YType::uint64, "display-level"},
    history{YType::uint64, "history"},
    idle_timeout{YType::uint64, "idle-timeout"},
    ignore_leading_space{YType::boolean, "ignore-leading-space"},
    paginate{YType::boolean, "paginate"},
    prompt1{YType::str, "prompt1"},
    prompt2{YType::str, "prompt2"},
    show_defaults{YType::boolean, "show-defaults"}
{
    yang_name = "session"; yang_parent_name = "user";
}

User::Session::~Session()
{
}

bool User::Session::has_data() const
{
    return autowizard.is_set
	|| complete_on_space.is_set
	|| display_level.is_set
	|| history.is_set
	|| idle_timeout.is_set
	|| ignore_leading_space.is_set
	|| paginate.is_set
	|| prompt1.is_set
	|| prompt2.is_set
	|| show_defaults.is_set;
}

bool User::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(autowizard.operation)
	|| is_set(complete_on_space.operation)
	|| is_set(display_level.operation)
	|| is_set(history.operation)
	|| is_set(idle_timeout.operation)
	|| is_set(ignore_leading_space.operation)
	|| is_set(paginate.operation)
	|| is_set(prompt1.operation)
	|| is_set(prompt2.operation)
	|| is_set(show_defaults.operation);
}

std::string User::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath User::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session' in tailf_aaa cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autowizard.is_set || is_set(autowizard.operation)) leaf_name_data.push_back(autowizard.get_name_leafdata());
    if (complete_on_space.is_set || is_set(complete_on_space.operation)) leaf_name_data.push_back(complete_on_space.get_name_leafdata());
    if (display_level.is_set || is_set(display_level.operation)) leaf_name_data.push_back(display_level.get_name_leafdata());
    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (ignore_leading_space.is_set || is_set(ignore_leading_space.operation)) leaf_name_data.push_back(ignore_leading_space.get_name_leafdata());
    if (paginate.is_set || is_set(paginate.operation)) leaf_name_data.push_back(paginate.get_name_leafdata());
    if (prompt1.is_set || is_set(prompt1.operation)) leaf_name_data.push_back(prompt1.get_name_leafdata());
    if (prompt2.is_set || is_set(prompt2.operation)) leaf_name_data.push_back(prompt2.get_name_leafdata());
    if (show_defaults.is_set || is_set(show_defaults.operation)) leaf_name_data.push_back(show_defaults.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> User::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> User::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void User::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autowizard")
    {
        autowizard = value;
    }
    if(value_path == "complete-on-space")
    {
        complete_on_space = value;
    }
    if(value_path == "display-level")
    {
        display_level = value;
    }
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
    if(value_path == "ignore-leading-space")
    {
        ignore_leading_space = value;
    }
    if(value_path == "paginate")
    {
        paginate = value;
    }
    if(value_path == "prompt1")
    {
        prompt1 = value;
    }
    if(value_path == "prompt2")
    {
        prompt2 = value;
    }
    if(value_path == "show-defaults")
    {
        show_defaults = value;
    }
}

const Enum::YLeaf BuiltinmodesEnum::exec {0, "exec"};
const Enum::YLeaf BuiltinmodesEnum::configure {1, "configure"};


}
}

